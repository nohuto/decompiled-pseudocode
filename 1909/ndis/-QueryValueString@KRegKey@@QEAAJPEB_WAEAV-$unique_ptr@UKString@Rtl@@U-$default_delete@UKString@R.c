/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108D28
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01464B0 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108DB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall KRegKey::QueryValueString(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r10
  _WORD *v4; // rax
  __int64 result; // rax
  __int16 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  _WORD *v8; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueString(a1, &v7, a3);
  v3 = 0x7FFFLL;
  v4 = a2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
    v6 = 0x7FFF - v3;
  else
    v6 = 0;
  if ( v3 )
  {
    v8 = a2;
    LOWORD(v7) = 2 * v6;
    WORD1(v7) = 2 * v6 + 2;
    return KRegKey::QueryValueString(a1, &v7, a3);
  }
  return result;
}
