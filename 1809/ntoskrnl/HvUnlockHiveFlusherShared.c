/*
 * XREFs of HvUnlockHiveFlusherShared @ 0x1405B05D0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall HvUnlockHiveFlusherShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 72);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
