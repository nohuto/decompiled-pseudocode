/*
 * XREFs of PopHandleWakeSources @ 0x140596234
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     PopWakeInfoReference @ 0x14013DD44 (PopWakeInfoReference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14015E934 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14015E968 (PopAcquireWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x14033AF40 (ExCopyWakeTimerInfo.c)
 *     PopValidateRTCWake @ 0x14059641C (PopValidateRTCWake.c)
 *     PopFinalizeWakeInfo @ 0x140729B14 (PopFinalizeWakeInfo.c)
 *     PopNewWakeSource @ 0x1408A7354 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x1408A7518 (PopUnlinkWakeSources.c)
 */

LONG PopHandleWakeSources()
{
  int v0; // esi
  unsigned int v1; // edi
  __int64 v2; // rbx
  SIZE_T *v4; // r14
  __int64 v5; // rdi
  __int64 *v6; // rcx
  __int64 *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  char v9; // [rsp+80h] [rbp+30h] BYREF

  v0 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
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
  PopReleaseWakeSourceSpinLock(&LockHandle);
  if ( !v2 )
    return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  if ( !v0 )
  {
    KeInitializeDpc((PRKDPC)(v2 + 48), (PKDEFERRED_ROUTINE)PopWakeSourceTimeoutDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)(v2 + 112), NotificationTimer);
    return KiSetTimerEx(v2 + 112, -20000000LL, 0, 0, v2 + 48);
  }
  if ( dword_140443020 < 0 || (unsigned __int64)dword_140443020 >= 3 )
    v4 = 0LL;
  else
    v4 = (SIZE_T *)qword_140443038[3 * dword_140443020];
  if ( v0 == 4 )
  {
    if ( (unsigned __int64)v4 <= 0xFFFFFFFFFFFFFFFCuLL )
      v1 = (v9 != 0) + 2;
  }
  else
  {
    v1 = 1;
  }
  v5 = PopNewWakeSource(v1);
  PopAcquireWakeSourceSpinLock(&LockHandle);
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
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
    else if ( v4 == (SIZE_T *)-2LL )
    {
      *(_DWORD *)(v5 + 24) = 1;
    }
    else
    {
      if ( v4 == (SIZE_T *)-3LL )
        v0 = 2;
      *(_DWORD *)(v5 + 24) = v0;
    }
    v6 = *(__int64 **)(v2 + 32);
    if ( *v6 != v2 + 24 )
LABEL_37:
      __fastfail(3u);
    *(_QWORD *)v5 = v2 + 24;
    *(_QWORD *)(v5 + 8) = v6;
    *v6 = v5;
    *(_QWORD *)(v2 + 32) = v5;
    *(_DWORD *)(v2 + 40) = 1;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v7 = (__int64 *)qword_140443E88;
  if ( *(__int64 **)qword_140443E88 != &PopWakeInfoList )
    goto LABEL_37;
  ++PopWakeInfoCount;
  *(_QWORD *)v2 = &PopWakeInfoList;
  *(_QWORD *)(v2 + 8) = v7;
  *v7 = v2;
  qword_140443E88 = v2;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  return PopFinalizeWakeInfo(v2);
}
