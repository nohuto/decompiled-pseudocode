/*
 * XREFs of PopExecutePowerAction @ 0x1406DF390
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     NtInitiatePowerAction @ 0x1406DF170 (NtInitiatePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 *     PopCriticalShutdown @ 0x14086D250 (PopCriticalShutdown.c)
 *     PdcPoSetPowerAction @ 0x140870120 (PdcPoSetPowerAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x140878870 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400041F0 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x140143524 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDiagTraceShutdownAction @ 0x1402E1FCC (PopDiagTraceShutdownAction.c)
 *     PopCompleteAction @ 0x1406DE2A8 (PopCompleteAction.c)
 *     PopPromoteActionFlag @ 0x1406DF6F4 (PopPromoteActionFlag.c)
 *     PopCompareActions @ 0x1406DF744 (PopCompareActions.c)
 *     PopVerifyPowerActionPolicy @ 0x14071AC78 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14071C5C8 (PopVerifySystemPowerState.c)
 *     PopResetActionDefaults @ 0x14072006C (PopResetActionDefaults.c)
 */

int __fastcall PopExecutePowerAction(__int64 a1, unsigned int a2, __int64 *a3, int a4, unsigned int a5)
{
  __int64 v5; // xmm0_8
  int v7; // eax
  int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // eax
  char v13; // r13
  int v14; // r11d
  int v15; // r15d
  int v16; // r9d
  int v17; // edx
  int v18; // r14d
  int v19; // r9d
  int v20; // r9d
  char v21; // dl
  int v22; // r11d
  int v23; // r9d
  int v24; // r9d
  int v25; // edx
  int v26; // r9d
  int v27; // edx
  int v28; // r9d
  unsigned int v29; // r9d
  int v30; // r11d
  unsigned int v31; // r11d
  unsigned int v32; // r9d
  char v33; // r8
  char v34; // r8
  int v35; // ecx
  __int64 v36; // rax
  __int64 *v37; // rdx
  LONG v38; // edx
  int v39; // r8d
  char v41; // [rsp+30h] [rbp-41h] BYREF
  int v42; // [rsp+38h] [rbp-39h] BYREF
  __int64 v43; // [rsp+40h] [rbp-31h] BYREF
  int v44; // [rsp+48h] [rbp-29h]
  __int64 v45; // [rsp+50h] [rbp-21h] BYREF
  int v46; // [rsp+58h] [rbp-19h]
  int v47; // [rsp+5Ch] [rbp-15h]
  _QWORD v48[2]; // [rsp+60h] [rbp-11h] BYREF

  v5 = *a3;
  v7 = *((_DWORD *)a3 + 2);
  v42 = a4;
  v9 = 0;
  v43 = v5;
  v44 = v7;
  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v46 = v43;
    v47 = a4;
    v48[0] = &v45;
    v45 = a1;
    v48[1] = 16LL;
    EtwTraceKernelEvent((__int64)v48, 1u, 0x80008000, 0x1222u, 0x401802u);
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
LABEL_49:
    v38 = 0;
LABEL_51:
    LODWORD(v36) = PopCompleteAction(a1, v38);
    return v36;
  }
  PopVerifySystemPowerState(&v42, a5);
  if ( (unsigned __int8)PopVerifyPowerActionPolicy(&v43) )
  {
    v38 = -1073741637;
    goto LABEL_51;
  }
  v10 = v43;
  v11 = HIDWORD(v43);
  if ( (unsigned int)(v43 - 2) <= 1 )
  {
    v11 = HIDWORD(v43) | 0x80000000;
    HIDWORD(v43) |= 0x80000000;
  }
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0;
  if ( (v12 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v12 | 2;
    if ( v10 == 6 && PsWin32CalloutsEstablished )
    {
      v39 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 2 )
      {
        LODWORD(v43) = 0;
        v10 = 0;
        v9 = (v11 & 0x10) != 0 ? 16 : 32;
      }
      else if ( v39 )
      {
        if ( v39 == 15 )
        {
          v9 = 16;
          v39 = 15;
          if ( (v11 & 0x2000000) == 0 )
            v9 = 32;
        }
      }
      else
      {
        v10 = 0;
        LODWORD(v43) = 0;
        v9 = byte_1404191C4 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        v39 = *(_DWORD *)a1;
      }
      PopDiagTraceShutdownAction(6, v9, v39);
    }
    if ( v10 - 4 <= 2 )
      PopDiagTraceShutdownAction(v10, v9, *(_DWORD *)a1);
    if ( !byte_1404187A1 )
      PopResetActionDefaults();
    if ( v10 )
    {
      v14 = v42;
      v41 = 0;
      v15 = v11 | 0x10000000;
      if ( v10 != 7 )
        v15 = v11;
      if ( v10 == 3 )
        v14 = 5;
      if ( v10 == 4 )
        v14 = 6;
      v42 = v14;
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1404187A4) < 0 )
      {
        v18 = 2;
      }
      else
      {
        PopPromoteActionFlag((unsigned int)&v41, 1, v15, 0, 1);
        v18 = v17 + 1;
        PopPromoteActionFlag((unsigned int)&v41, v17, v15, v19, v17 + 1);
        PopPromoteActionFlag((unsigned int)&v41, v20 + 4, v15, v20, 0x10000000);
        if ( v10 == v18 )
        {
          if ( v22 < *((_DWORD *)PopPolicy + 17) )
            v22 = *((_DWORD *)PopPolicy + 17);
          v42 = v22;
        }
        if ( v22 > SHIDWORD(qword_1404187A4) )
        {
          v41 |= v21;
          HIDWORD(qword_1404187A4) = v22;
        }
      }
      LOBYTE(v16) = 1;
      PopPromoteActionFlag((unsigned int)&v41, 1, v15, v16, 4);
      PopPromoteActionFlag((unsigned int)&v41, 5, v15, v23, 0x80000000);
      PopPromoteActionFlag((unsigned int)&v41, 0, v15, v24, 0x40000000);
      PopPromoteActionFlag((unsigned int)&v41, v25, v15, v26, v25 + 8);
      PopPromoteActionFlag((unsigned int)&v41, v27, v15, v28, 32);
      if ( (int)PopCompareActions(v10, (unsigned int)qword_1404187A4) <= 0 )
      {
        v34 = v41;
      }
      else
      {
        PopCompareActions(v10, (unsigned int)(v30 - 5));
        if ( !(unsigned int)PopCompareActions(v32, v31) )
          v33 |= v18;
        LODWORD(qword_1404187A4) = v10;
        v34 = v33 | 5;
        v29 = v10;
        dword_1404187B4 = *(_DWORD *)a1;
        dword_1404187B8 = 0;
        v41 = v34;
        if ( !*(_DWORD *)a1 )
          dword_1404187B8 = *(_DWORD *)(a1 + 16);
      }
      if ( v29 == 3 )
        LODWORD(qword_1404187A4) = v18;
      if ( v34 )
      {
        v13 = 1;
        if ( (unsigned __int8)byte_1404187A1 < (unsigned __int8)v18 )
        {
          PopSetPowerActionState(1);
          v35 = v18;
          dword_1404187B0 = 0;
        }
        else
        {
          PopAction |= v34;
          v35 = 1;
        }
        PopGetPolicyWorker(v35);
      }
    }
  }
  LODWORD(v36) = *(_DWORD *)(a1 + 4);
  if ( (v36 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4) = v36 | 1;
    if ( v9 == 32 )
    {
      if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
        a2 |= 0x10u;
    }
    else if ( v9 == 16 && !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
    LODWORD(v36) = *(_DWORD *)(a1 + 4);
  }
  if ( (v36 & 0x20) != 0 )
  {
    if ( v13 )
    {
      v37 = (__int64 *)qword_140419088;
      v36 = *(_QWORD *)(a1 + 8) + 32LL;
      if ( *(__int64 **)qword_140419088 != &PopActionWaiters )
        __fastfail(3u);
      *(_QWORD *)v36 = &PopActionWaiters;
      *(_QWORD *)(v36 + 8) = v37;
      *v37 = v36;
      qword_140419088 = v36;
      return v36;
    }
    goto LABEL_49;
  }
  return v36;
}
