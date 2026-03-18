/*
 * XREFs of CmpUnlockHashEntry @ 0x14064EB24
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x14064E890 (CmpDelayCloseWorker.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407131F4 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntry(PVOID P, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)P + 205)
     + 24
     * ((unsigned int)(*((_DWORD *)P + 412) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)));
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 1068, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(P);
  return result;
}
