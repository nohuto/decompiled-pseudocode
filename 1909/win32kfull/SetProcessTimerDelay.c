/*
 * XREFs of SetProcessTimerDelay @ 0x1C01EBDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FAE6C (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01DAF74 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetProcessTimerDelay(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edx
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 > 0x1B7740 )
    return 3221225712LL;
  if ( a3 > 0x927C0 )
    return 3221225713LL;
  if ( *(_QWORD *)a1 == gpepCSRSS )
    return 3221225659LL;
  v4 = a2 - *(_DWORD *)(a1 + 1028);
  v5 = *(_DWORD *)(a1 + 1036);
  *(_DWORD *)(a1 + 1036) = v4;
  *(_DWORD *)(a1 + 1032) = a3;
  if ( v5 )
  {
    if ( v4 )
      goto LABEL_11;
    v13 = (_QWORD *)(a1 + 1048);
    v14 = *(_QWORD *)(a1 + 1048);
    if ( *(_QWORD **)(*v13 + 8LL) == v13 )
    {
      v15 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v15 == v13 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        goto LABEL_11;
      }
    }
    goto LABEL_18;
  }
  if ( v4 )
  {
    v6 = (_QWORD *)(a1 + 1048);
    v7 = (_QWORD *)gtmrAdjustmentListHead[1];
    if ( *v7 == gtmrAdjustmentListHead[0] )
    {
      *v6 = gtmrAdjustmentListHead[0];
      v6[1] = v7;
      *v7 = v6;
      gtmrAdjustmentListHead[1] = v6;
      goto LABEL_11;
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_11:
  if ( !gbTimersProcActive )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)&v17,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v17, v10, v11, v12);
      gbRITAlerted = 1;
    }
    else
    {
      ExReleasePushLockSharedEx(v17, 0LL, v8, v9);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    }
  }
  return 0LL;
}
