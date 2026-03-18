/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000961C
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C0009D20 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBSM_RunStateMachine @ 0x1C000A1D8 (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq @ 0x1C0008C7C (McTemplateK0ppqqqq.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C0008E24 (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  unsigned int *v1; // r12
  __int64 v3; // r14
  int v4; // ebp
  __int64 v5; // r15
  int i; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // rdx
  KSPIN_LOCK *v11; // rbx
  __int64 v12; // rdx
  unsigned int *v13; // rcx
  __int64 v14; // r8
  KIRQL v15; // r12
  int j; // edi
  __int64 v17; // rbp
  unsigned int v18; // ebx
  char v19; // r9
  unsigned __int8 v20; // cl
  char v21; // al
  unsigned __int8 k; // dl
  __int64 v23; // rax
  int v24; // ebx
  int v25; // eax
  unsigned __int16 v26; // r9
  struct _MCGEN_TRACE_CONTEXT *v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // rbp
  KIRQL v38; // bl
  __int64 v39; // rax
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  int v44; // eax
  int v45; // ebx
  unsigned __int16 v46; // r9
  __int64 v47; // rax
  int v49; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+28h] [rbp-60h]
  __int64 v51; // [rsp+30h] [rbp-58h]
  __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 v53; // [rsp+40h] [rbp-48h]
  int v54; // [rsp+90h] [rbp+8h]
  int v55; // [rsp+98h] [rbp+10h]
  unsigned int *v56; // [rsp+A0h] [rbp+18h]

  v1 = *(unsigned int **)(a1 + 976);
  v3 = *(unsigned int *)(a1 + 880);
  v4 = *(_DWORD *)(a1 + 984);
  v56 = v1;
  v5 = *(_QWORD *)&v1[2 * (*(_DWORD *)(a1 + 4 * v3 + 852) - v4)];
  for ( i = (*(__int64 (**)(void))(v5 + 8))();
        ;
        i = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v5 + 8))(a1, v10, v9, v8) )
  {
    v7 = *(_QWORD *)(v5 + 24);
    v55 = i;
    if ( !v7 )
      goto LABEL_8;
    v8 = 0LL;
    if ( *(_DWORD *)(v7 + 4) == 1002 )
      goto LABEL_7;
    v9 = 0LL;
    v10 = *(_DWORD **)(v5 + 24);
    while ( (*v10 & *(_DWORD *)(a1 + 952)) != *(_DWORD *)(a1 + 952) )
    {
      v8 = (unsigned int)(v8 + 1);
      v9 = (unsigned int)v8;
      v10 = (_DWORD *)(v7 + 8 * v8);
      if ( v10[1] == 1002 )
        goto LABEL_7;
    }
    v24 = *(_DWORD *)(v7 + 8 * v9 + 4);
    if ( v24 == 1002 )
    {
LABEL_7:
      v55 = 1001;
LABEL_8:
      v11 = (KSPIN_LOCK *)(a1 + 840);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
      for ( j = v4; ; v5 = *(_QWORD *)&v56[2 * (*(_DWORD *)(a1 + 4 * v3 + 852) - j)] )
      {
        LODWORD(v17) = 0;
        v54 = 0;
        if ( *(_DWORD *)(v5 + 32) != 1000 )
        {
          v13 = (unsigned int *)(v5 + 32);
          do
          {
            if ( v13[1] != 1000 )
              break;
            v18 = *v13;
            v19 = 0;
            v20 = *(_BYTE *)(a1 + 948);
            v21 = *(_BYTE *)(a1 + 949);
            for ( k = v20; k != v21; k = (k + 1) & 0xF )
            {
              v14 = *(unsigned int *)(a1 + 4LL * k + 884);
              if ( (_DWORD)v14 == v18 )
              {
                v19 = 1;
              }
              else
              {
                v23 = v20;
                v20 = (v20 + 1) & 0xF;
                *(_DWORD *)(a1 + 4 * v23 + 884) = v14;
              }
              v21 = *(_BYTE *)(a1 + 949);
            }
            LOBYTE(v12) = v20;
            if ( v20 != v21 )
            {
              do
              {
                v29 = v12 & 0xF;
                LOBYTE(v12) = (v12 + 1) & 0xF;
                *(_DWORD *)(a1 + 4 * v29 + 884) = 1000;
              }
              while ( (_BYTE)v12 != *(_BYTE *)(a1 + 949) );
            }
            *(_BYTE *)(a1 + 949) = v20;
            if ( !v19 )
            {
              v11 = (KSPIN_LOCK *)(a1 + 840);
              goto LABEL_65;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v15);
            if ( v18 > 0xFC7 )
            {
              v40 = v18 - 4043;
              if ( v40 )
              {
                v41 = v40 - 4;
                if ( v41 )
                {
                  v42 = v41 - 20;
                  if ( v42 )
                  {
                    v43 = v42 - 4;
                    if ( v43 )
                    {
                      if ( v43 != 4 )
                        goto LABEL_50;
                    }
                  }
                  v34 = *(_QWORD *)(a1 + 960);
                  if ( (*(_DWORD *)(v34 + 1636) & 0x80u) == 0 )
                    goto LABEL_50;
                  v36 = a1 + 1012;
                  *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v34 + 2176);
LABEL_45:
                  if ( g_IoSetActivityIdIrp )
                  {
                    g_IoSetActivityIdIrp(*(_QWORD *)(v34 + 264), v36);
                    if ( g_IoSetActivityIdIrp )
                      g_IoSetActivityIdIrp(*(_QWORD *)(v34 + 424), v36);
                  }
                  _InterlockedOr((volatile signed __int32 *)(v34 + 1636), 0x40u);
LABEL_49:
                  LODWORD(v17) = v54;
                  goto LABEL_50;
                }
              }
            }
            else if ( v18 != 4039 )
            {
              v30 = v18 - 3006;
              if ( !v30 )
              {
                v37 = *(_QWORD *)(a1 + 960);
                if ( (*(_DWORD *)(v37 + 1336) & 2) != 0 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v37 + 1328) + 1636LL) & 0x400) != 0 )
                  {
                    WPP_RECORDER_SF_(
                      *(_QWORD *)(v37 + 1432),
                      4u,
                      5u,
                      0xEu,
                      (__int64)&WPP_745fc1b2e57030ba5abdbb99466ae9d9_Traceguids);
                    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v37 + 1328) + 1636LL), 0xFFFFFBFF);
                  }
                }
                else
                {
                  v38 = KfRaiseIrql(2u);
                  v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v37 + 1328));
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                    WdfDriverGlobals,
                    v39);
                  KeLowerIrql(v38);
                  *(_QWORD *)(v37 + 1328) = 0LL;
                }
                _InterlockedAnd((volatile signed __int32 *)(v37 + 1336), 0xFFFFFFFE);
                if ( *(_DWORD *)(v37 + 1424) != 4 )
                  *(_DWORD *)(v37 + 1424) = 0;
                goto LABEL_49;
              }
              v31 = v30 - 1017;
              if ( v31 )
              {
                v32 = v31 - 4;
                if ( v32 )
                {
                  v33 = v32 - 4;
                  if ( v33 )
                  {
                    if ( v33 != 4 )
                      goto LABEL_50;
                  }
                }
              }
            }
            v34 = *(_QWORD *)(a1 + 960);
            v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v34 + 456));
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
            {
              v36 = a1 + 1012;
              if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v35, a1 + 1012) >= 0 )
                goto LABEL_45;
              goto LABEL_49;
            }
LABEL_50:
            v11 = (KSPIN_LOCK *)(a1 + 840);
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_65:
            v17 = (unsigned int)(v17 + 1);
            v54 = v17;
            v13 = (unsigned int *)(v5 + 32 + 8 * v17);
          }
          while ( *v13 != 1000 );
        }
        if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
        {
          KeReleaseSpinLock(v11, v15);
          v28 = v55;
          *(_DWORD *)(a1 + 880) = v3;
          return v28;
        }
        v44 = *(_DWORD *)(a1 + 984);
        v3 = (unsigned int)(v3 - 1);
        v45 = *(_DWORD *)(a1 + 4 * v3 + 852);
        switch ( v44 )
        {
          case 2000:
            v46 = 16;
            break;
          case 3000:
            v46 = 17;
            break;
          case 4000:
            v46 = 15;
            break;
          case 5000:
            v46 = 18;
            break;
          default:
            goto LABEL_76;
        }
        v50 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLLL((__int64)v13, v12, v14, v46, v49);
LABEL_76:
        *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v45;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
        v47 = *(unsigned __int8 *)(a1 + 832);
        *(_DWORD *)(a1 + 12 * v47) = 1000;
        *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
        if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
        {
          LODWORD(v53) = v3;
          LODWORD(v52) = 1000;
          LODWORD(v51) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v45 - *(_DWORD *)(a1 + 984)));
          LODWORD(v50) = *(_DWORD *)(a1 + 984);
          McTemplateK0ppqqqq(
            (struct _MCGEN_TRACE_CONTEXT *)(3 * v47),
            &USBHUB3_ETW_EVENT_STATE_MACHINE,
            (const GUID *)(a1 + 1012),
            *(_QWORD *)(a1 + 1032),
            *(_QWORD *)(a1 + 960),
            v50,
            v51,
            v52,
            v53);
        }
        v11 = (KSPIN_LOCK *)(a1 + 840);
        v13 = v56;
      }
    }
    v3 = (unsigned int)(v3 + 1);
    *(_DWORD *)(a1 + 4 * v3 + 852) = v24;
    v25 = *(_DWORD *)(a1 + 984);
    *(_DWORD *)(a1 + 880) = v3;
    switch ( v25 )
    {
      case 2000:
        v26 = 16;
        break;
      case 3000:
        v26 = 17;
        break;
      case 4000:
        v26 = 15;
        break;
      case 5000:
        v26 = 18;
        break;
      default:
        goto LABEL_25;
    }
    v50 = *(_QWORD *)(a1 + 960);
    WPP_RECORDER_SF_qLLL(v7, (__int64)v10, v9, v26, v49);
LABEL_25:
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v24;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v53) = v3;
      v27 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)(v24 - *(_DWORD *)(a1 + 984));
      LODWORD(v52) = 1000;
      LODWORD(v51) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (_QWORD)v27);
      LODWORD(v50) = *(_DWORD *)(a1 + 984);
      McTemplateK0ppqqqq(
        v27,
        &USBHUB3_ETW_EVENT_STATE_MACHINE,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v50,
        v51,
        v52,
        v53);
    }
    v5 = *(_QWORD *)&v1[2 * (v24 - v4)];
    if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 )
    {
      if ( KeGetCurrentIrql() )
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
  return 1003;
}
