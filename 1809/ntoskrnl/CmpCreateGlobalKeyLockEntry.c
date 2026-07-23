/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x14068F880
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x14068F764 (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateGlobalKeyLockEntry(volatile signed __int32 *a1)
{
  _QWORD *v2; // rbx
  char v3; // si
  _QWORD *TransientPoolWithTag; // rax

  v2 = 0LL;
  v3 = CmpReferenceKeyControlBlockUnsafe(a1);
  if ( v3 )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x33374D43u);
    v2 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, 0x20uLL);
      v3 = 0;
      v2[2] = 1LL;
      v2[3] = a1;
    }
    if ( v3 )
      CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v2;
}
