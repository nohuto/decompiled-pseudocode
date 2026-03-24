/*
 * XREFs of PopHandleWakeSources @ 0x140566540
 * Callers:
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56F0 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PopWakeInfoReference @ 0x14013BC00 (PopWakeInfoReference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x140142ED4 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x140142F08 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x14031C540 (ExCopyWakeTimerInfo.c)
 *     PopValidateRTCWake @ 0x140566700 (PopValidateRTCWake.c)
 *     PopFinalizeWakeInfo @ 0x1406E1160 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x14086B7F4 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x14086B9B8 (PopUnlinkWakeSources.c)
 */

LONG PopHandleWakeSources()
{
  int v0; // esi
  unsigned int v1; // edi
  __int64 v2; // rbx
  SIZE_T *v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  v9 = 0;
  v1 = 4;
  if ( (PopSimulate & 0x200000) == 0 && (PopFixedWakeSourceMask & 1) == 0 )
  {
    if ( (PopSimulate & 0x400000) == 0 && (PopFixedWakeSourceMask & 2) == 0 )
    {
      if ( (unsigned __int8)PopValidateRTCWake(&v9) && (PopSimulate & 0x100000) == 0 )
        v0 = 4;
    }
    else
    {
      v0 = 2;
    }
  }
  else
  {
    v0 = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v2 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo && !v0 )
    PopWakeInfoReference(PopCurrentWakeInfo);
  PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  if ( !v2 )
    return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  if ( !v0 )
  {
    KeInitializeDpc((PRKDPC)(v2 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v2 + 112), NotificationTimer);
    return KiSetTimerEx(v2 + 112, -20000000LL, 0, 0, v2 + 48);
  }
  if ( dword_140417760 < 0 || (unsigned __int64)dword_140417760 >= 3 )
    v4 = 0LL;
  else
    v4 = (SIZE_T *)qword_140417778[3 * dword_140417760];
  if ( v0 == 4 )
  {
    if ( (unsigned __int64)v4 <= 0xFFFFFFFFFFFFFFFDuLL )
      v1 = (v9 != 0) + 2;
  }
  else
  {
    v1 = 1;
  }
  v5 = PopNewWakeSource(v1);
  PopAcquireWakeSourceSpinLock(&LockHandle);
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  PopUnlinkWakeSources(v2);
  if ( v5 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 16) - 2) <= 1 )
    {
      ExCopyWakeTimerInfo(v4, (_QWORD *)(v5 + 24));
    }
    else if ( v4 == (SIZE_T *)-1LL )
    {
      *(_DWORD *)(v5 + 24) = 0;
    }
    else
    {
      if ( v4 == (SIZE_T *)-2LL )
        v0 = 1;
      *(_DWORD *)(v5 + 24) = v0;
    }
    v6 = *(__int64 **)(v2 + 32);
    if ( *v6 != v2 + 24 )
LABEL_35:
      __fastfail(3u);
    *(_QWORD *)v5 = v2 + 24;
    *(_QWORD *)(v5 + 8) = v6;
    *v6 = v5;
    *(_QWORD *)(v2 + 32) = v5;
    *(_DWORD *)(v2 + 40) = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v7 = (__int64 *)qword_140418558;
  if ( *(__int64 **)qword_140418558 != &PopWakeInfoList )
    goto LABEL_35;
  ++PopWakeInfoCount;
  *(_QWORD *)v2 = &PopWakeInfoList;
  *(_QWORD *)(v2 + 8) = v7;
  *v7 = v2;
  qword_140418558 = v2;
  PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  return PopFinalizeWakeInfo(v2);
}
