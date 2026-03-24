/*
 * XREFs of MiQueryEPTAccessedState @ 0x1402B3700
 * Callers:
 *     MiAgeWorkingSetTail @ 0x140075A50 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x14011C6B0 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14016F9B0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402B3B20 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402B4130 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140122798 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x1402A7E68 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14030D3F8 (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r9
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1, (__int64)a2, a3, a4);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15]);
  result = MiReacquireWalkLocks(a1, v4, 0, v7);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
