/*
 * XREFs of PopDirectedDripsNotifyDrivers @ 0x1408693B8
 * Callers:
 *     PopDirectedDripsEngageDfx @ 0x140868D94 (PopDirectedDripsEngageDfx.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140868E58 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x14086981C (PopDirectedDripsRefreshDeviceState.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140869880 (PopDirectedDripsRefreshDisengageState.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402D7AE4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PoClearBroadcast @ 0x1406E1CE8 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 *     PopAcquireTransitionLock @ 0x14071F948 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14071F9A4 (PopReleaseTransitionLock.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x14086905C (PopDirectedDripsInitializeBroadcast.c)
 *     PopQueryCurrentBroadcastProperties @ 0x1408707C4 (PopQueryCurrentBroadcastProperties.c)
 *     PopDiagTraceDirectedDripsNotifyDevices @ 0x14087337C (PopDiagTraceDirectedDripsNotifyDevices.c)
 */

void __fastcall PopDirectedDripsNotifyDrivers(signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  char v5; // r14
  __int64 v8; // r15
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int16 v11; // di
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  char v22; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v23[39]; // [rsp+21h] [rbp-27h] BYREF

  v4 = a4;
  v5 = a3;
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    v8 = MEMORY[0xFFFFF78000000008];
    _m_prefetchw(a1);
    v9 = *a1;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(a1, v9, v9);
    }
    while ( v10 != v9 );
    v11 = v9;
    if ( !(_BYTE)a3 )
    {
      if ( (v9 & 0x10) != 0 )
      {
        *(_BYTE *)(a2 + 29) = 1;
        PoBroadcastSystemState(a2 + 4, a2, a3, a4);
        _InterlockedOr(a1, 0x20u);
      }
      if ( (v11 & 0x80u) != 0 )
        PoClearBroadcast();
      if ( PopDirectedDripsEnableV2 && !v4 && (v11 & 0x200) == 0 )
        PopFxClearDirectedDripsCandidateDeviceList();
      _InterlockedAnd(a1, 0xFFFFFF6F);
      _InterlockedExchange(a1 + 51, -1);
      if ( !v4 )
      {
        _m_prefetchw(a1);
        if ( (_InterlockedAnd(a1, 0xFFFFFFBF) & 0x40) != 0 )
          PopReleaseTransitionLock(7);
      }
      v20 = 0;
LABEL_34:
      v21 = MEMORY[0xFFFFF78000000008] - v8;
      LOBYTE(v21) = v5;
      PopDiagTraceDirectedDripsNotifyDevices(v21, v20, (MEMORY[0xFFFFF78000000008] - v8) / 0x2710uLL);
      return;
    }
    if ( !a1[76] && (v9 & 0x10) == 0 )
    {
      if ( (v9 & 0xC00) == 0 || (v9 & 0x808) == 0x800 )
      {
        a1[74] = -1073741536;
        return;
      }
      _m_prefetchw(a1);
      if ( (_InterlockedOr(a1, 0x40u) & 0x40) == 0 )
        PopAcquireTransitionLock(7);
      *(_QWORD *)(a2 + 4) = 0LL;
      *(_QWORD *)(a2 + 12) = 0LL;
      *(_QWORD *)(a2 + 20) = 0LL;
      *(_DWORD *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 8) = 5;
      *(_DWORD *)(a2 + 12) = 5;
      *(_DWORD *)(a2 + 24) = *(_DWORD *)a2;
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 1;
      *(_DWORD *)(a2 + 20) = 2;
      if ( PopDirectedDripsEnableV2 )
      {
        v12 = PopDirectedDripsInitializeBroadcast((unsigned __int32 *)a1);
        if ( v12 < 0 )
          goto LABEL_13;
      }
      else
      {
        v12 = PoInitializeBroadcast();
        if ( v12 < 0 )
        {
LABEL_13:
          a1[74] = v12;
          return;
        }
        PopQueryCurrentBroadcastProperties(&v22, v23);
        if ( v22 || v23[0] )
        {
          PoClearBroadcast();
          a1[74] = -1073741436;
          return;
        }
      }
      _InterlockedOr(a1, 0x80u);
      *(_BYTE *)(a2 + 30) = 3;
      PoBroadcastSystemState(a2 + 4, v13, v14, v15);
      *(_BYTE *)(a2 + 30) = 2;
      v19 = PoBroadcastSystemState(a2 + 4, v16, v17, v18);
      a1[74] = v19;
      v20 = v19;
      if ( v19 >= 0 )
        _InterlockedOr(a1, 0x10u);
      _InterlockedAnd(a1, 0xFFFFFFDF);
      _InterlockedExchange(a1 + 51, a1[52]);
      ++a1[75];
      goto LABEL_34;
    }
  }
}
