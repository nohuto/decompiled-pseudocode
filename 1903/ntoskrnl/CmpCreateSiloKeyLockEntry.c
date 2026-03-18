/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x14073A3B4
 * Callers:
 *     CmLockKeyForWrite @ 0x14073A04C (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140631AC4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140656728 (CmpReferenceKeyControlBlockUnsafe.c)
 */

_QWORD *__fastcall CmpCreateSiloKeyLockEntry(volatile signed __int64 *a1)
{
  PLOOKASIDE_LIST_EX v2; // r9
  _QWORD *TransientPoolWithTag; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x20uLL, 0x34374D43u, v2);
  if ( TransientPoolWithTag )
  {
    *TransientPoolWithTag = 0LL;
    TransientPoolWithTag[1] = 0LL;
    TransientPoolWithTag[3] = 0LL;
    TransientPoolWithTag[2] = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return TransientPoolWithTag;
}
