/*
 * XREFs of CcFreeVacbArray @ 0x140823474
 * Callers:
 *     CcDereferenceVacbArray @ 0x14027E0AC (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CcFreeVacbArray(_DWORD *a1)
{
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x25EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExFreePoolWithTag(a1, 0x61566356u);
}
