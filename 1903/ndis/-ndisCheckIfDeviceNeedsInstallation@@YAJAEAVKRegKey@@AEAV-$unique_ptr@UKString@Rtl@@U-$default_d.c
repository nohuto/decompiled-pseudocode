/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108B88
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108DB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // r9
  const wchar_t *v5; // rax
  __int64 result; // rax
  __int16 v7; // r10
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  v4 = 0x7FFFLL;
  v5 = L"NetCfgInstanceId";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 0x7FFF - v4;
  else
    v7 = 0;
  if ( v4 )
  {
    v9 = L"NetCfgInstanceId";
    LOWORD(v8) = 2 * v7;
    WORD1(v8) = 2 * v7 + 2;
    result = KRegKey::QueryValueString(a1, &v8, a2);
  }
  if ( (_DWORD)result == -1073741772 )
  {
    *a3 = 1;
  }
  else
  {
    if ( (_DWORD)result )
      return result;
    *a3 = 0;
  }
  return 0LL;
}
