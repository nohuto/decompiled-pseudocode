/*
 * XREFs of MiQueryEPTAccessedState @ 0x1402C8B60
 * Callers:
 *     MiTrimWorkingSetTail @ 0x140088A80 (MiTrimWorkingSetTail.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x1401791A0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402C8F80 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402C95D0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140119A60 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x1402BF6D8 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14032AFDC (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 40);
  MiReleaseWalkLocks(a1, (__int64)a2, a3, a4);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19]);
  result = MiReacquireWalkLocks(a1, v4, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
