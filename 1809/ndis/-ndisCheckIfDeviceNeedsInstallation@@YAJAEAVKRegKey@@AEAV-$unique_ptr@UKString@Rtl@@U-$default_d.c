/*
 * XREFs of ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C00D1E20
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C4B40 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsInstallation(HANDLE *a1, void **a2, _BYTE *a3)
{
  const wchar_t *v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v7.Length = 0LL;
  v7.Buffer = 0LL;
  v4 = L"NetCfgInstanceId";
  v5 = 0x7FFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
      return 3221225485LL;
  }
  v7.Buffer = L"NetCfgInstanceId";
  v7.Length = 2 * (0x7FFF - v5);
  v7.MaximumLength = v7.Length + 2;
  result = KRegKey::QueryValueString(a1, &v7, a2);
  if ( (_DWORD)result == -1073741772 )
  {
    *a3 = 1;
    return 0LL;
  }
  else if ( !(_DWORD)result )
  {
    *a3 = 0;
  }
  return result;
}
