/*
 * XREFs of MiQueryEPTAccessedState @ 0x1402C88C0
 * Callers:
 *     MiTrimWorkingSetTail @ 0x140089D80 (MiTrimWorkingSetTail.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x140179890 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402C8CE0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402C9330 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140117AF0 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x1402BF438 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14032AA2C (VmpQueryAccessedState.c)
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
