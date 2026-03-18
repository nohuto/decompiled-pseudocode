/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x14073C5E8
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x14073C4CC (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateGlobalKeyLockEntry(volatile signed __int64 *a1)
{
  PLOOKASIDE_LIST_EX v2; // r9
  _QWORD *TransientPoolWithTag; // rax
  _QWORD *v4; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x33374D43u, v2);
  v4 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *TransientPoolWithTag = 0LL;
    TransientPoolWithTag[1] = 0LL;
    TransientPoolWithTag[2] = 1LL;
    TransientPoolWithTag[3] = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v4;
}
