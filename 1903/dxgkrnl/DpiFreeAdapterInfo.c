/*
 * XREFs of DpiFreeAdapterInfo @ 0x1C029C68C
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C0167E78 (DpiGetAdapterInfo.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC2F4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x1C029D240 (DxgkFreeUnicodeString.c)
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
