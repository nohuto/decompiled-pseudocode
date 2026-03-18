/*
 * XREFs of DpiFreeAdapterInfo @ 0x1C0262BA0
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C014D78C (DpiGetAdapterInfo.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x1C02634C8 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DpiFreeAdapterInfo(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    DxgkFreeUnicodeString(a1 + 8);
    DxgkFreeUnicodeString(a1 + 24);
    DxgkFreeUnicodeString(a1 + 112);
    DxgkFreeUnicodeString(a1 + 128);
    DxgkFreeUnicodeString(a1 + 48);
    DxgkFreeUnicodeString(a1 + 72);
    DxgkFreeUnicodeString(a1 + 144);
    DxgkFreeUnicodeString(a1 + 160);
    DxgkFreeUnicodeString(a1 + 200);
    return DxgkFreeUnicodeString(a1 + 216);
  }
  return result;
}
