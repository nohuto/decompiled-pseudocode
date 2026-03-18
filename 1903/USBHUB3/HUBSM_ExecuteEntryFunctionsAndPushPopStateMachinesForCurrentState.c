/*
 * XREFs of HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0009F14
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C000A6C0 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBSM_RunStateMachine @ 0x1C000AB88 (HUBSM_RunStateMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppqqqq @ 0x1C00094E4 (McTemplateK0ppqqqq.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C000968C (WPP_RECORDER_SF_qLLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(__int64 a1)
{
  int v1; // ebp
  unsigned int *v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // rdx
  KSPIN_LOCK *v11; // rbx
  __int64 v12; // rdx
  unsigned int *v13; // rcx
  __int64 v14; // r8
  KIRQL v15; // r12
  int v16; // edi
  __int64 v17; // rbp
  unsigned int v18; // ebx
  char v19; // r9
  unsigned __int8 v20; // cl
  char v21; // al
  unsigned __int8 i; // dl
  __int64 v23; // rax
  int v24; // ebx
  int v25; // eax
  unsigned __int16 v26; // r9
  struct _MCGEN_TRACE_CONTEXT *v27; // rcx
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // rbp
  KIRQL v39; // bl
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  int v46; // eax
  int v47; // ebx
  unsigned __int16 v48; // r9
  __int64 v49; // rax
  int v51; // [rsp+20h] [rbp-78h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  int v56; // [rsp+A0h] [rbp+8h]
  int v57; // [rsp+A8h] [rbp+10h]
  int v58; // [rsp+B0h] [rbp+18h]
  unsigned int *v59; // [rsp+B8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 984);
  v3 = *(unsigned int **)(a1 + 976);
  v4 = *(unsigned int *)(a1 + 880);
  v59 = v3;
  v58 = v1;
  v5 = *(_QWORD *)&v3[2 * (*(_DWORD *)(a1 + 4 * v4 + 852) - v1)];
  v6 = (*(__int64 (**)(void))(v5 + 8))();
  v7 = *(_QWORD *)(v5 + 24);
  v57 = v6;
  if ( !v7 )
    goto LABEL_7;
  while ( 1 )
  {
    v8 = 0LL;
    if ( *(_DWORD *)(v7 + 4) == 1002 )
      break;
    v9 = 0LL;
    v10 = (_DWORD *)v7;
    while ( (*v10 & *(_DWORD *)(a1 + 952)) != *(_DWORD *)(a1 + 952) )
    {
      v8 = (unsigned int)(v8 + 1);
      v9 = (unsigned int)v8;
      v10 = (_DWORD *)(v7 + 8 * v8);
      if ( v10[1] == 1002 )
        goto LABEL_6;
    }
    v24 = *(_DWORD *)(v7 + 8 * v9 + 4);
    if ( v24 == 1002 )
      break;
    v4 = (unsigned int)(v4 + 1);
    *(_DWORD *)(a1 + 4 * v4 + 852) = v24;
    v25 = *(_DWORD *)(a1 + 984);
    *(_DWORD *)(a1 + 880) = v4;
    switch ( v25 )
    {
      case 2000:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = 16;
          goto LABEL_27;
        }
        break;
      case 3000:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = 17;
          goto LABEL_27;
        }
        break;
      case 4000:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = 15;
LABEL_27:
          v52 = *(_QWORD *)(a1 + 960);
          WPP_RECORDER_SF_qLLL(v7, (__int64)v10, v9, v26, v51);
        }
        break;
      default:
        if ( v25 != 5000 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          break;
        v26 = 18;
        goto LABEL_27;
    }
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v24;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
    *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
    *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
    if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v55) = v4;
      v27 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)(v24 - *(_DWORD *)(a1 + 984));
      LODWORD(v54) = 1000;
      LODWORD(v53) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (_QWORD)v27);
      LODWORD(v52) = *(_DWORD *)(a1 + 984);
      McTemplateK0ppqqqq(
        v27,
        &USBHUB3_ETW_EVENT_STATE_MACHINE,
        (const GUID *)(a1 + 1012),
        *(_QWORD *)(a1 + 1032),
        *(_QWORD *)(a1 + 960),
        v52,
        v53,
        v54,
        v55);
    }
    v5 = *(_QWORD *)&v3[2 * (v24 - v1)];
    if ( (*(_DWORD *)(v5 + 16) & 0x10) != 0 && KeGetCurrentIrql() )
    {
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
        *(_QWORD *)(a1 + 992),
        HUBSM_EvtSmWorkItem,
        a1,
        (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
      return 1003;
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v5 + 8))(a1, v10, v9, v8);
    v7 = *(_QWORD *)(v5 + 24);
    v57 = v28;
    if ( !v7 )
      goto LABEL_7;
  }
LABEL_6:
  v57 = 1001;
LABEL_7:
  v11 = (KSPIN_LOCK *)(a1 + 840);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v16 = v1;
  while ( 2 )
  {
    LODWORD(v17) = 0;
    v56 = 0;
    if ( *(_DWORD *)(v5 + 32) == 1000 )
      goto LABEL_73;
    v13 = (unsigned int *)(v5 + 32);
    while ( 2 )
    {
      if ( v13[1] == 1000 )
      {
        v18 = *v13;
        v19 = 0;
        v20 = *(_BYTE *)(a1 + 948);
        v21 = *(_BYTE *)(a1 + 949);
        for ( i = v20; i != v21; i = (i + 1) & 0xF )
        {
          v14 = *(unsigned int *)(a1 + 4LL * i + 884);
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
            v30 = v12 & 0xF;
            LOBYTE(v12) = (v12 + 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v30 + 884) = 1000;
          }
          while ( (_BYTE)v12 != *(_BYTE *)(a1 + 949) );
        }
        *(_BYTE *)(a1 + 949) = v20;
        if ( !v19 )
        {
          v11 = (KSPIN_LOCK *)(a1 + 840);
          goto LABEL_71;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 840), v15);
        if ( v18 > 0xFC7 )
        {
          v42 = v18 - 4043;
          if ( v42 && (v43 = v42 - 4) != 0 )
          {
            v44 = v43 - 20;
            if ( v44 )
            {
              v45 = v44 - 4;
              if ( v45 )
              {
                if ( v45 != 4 )
                  goto LABEL_54;
              }
            }
            v35 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v35 + 1636) & 0x80u) == 0 )
              goto LABEL_54;
            v37 = a1 + 1012;
            *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v35 + 2176);
          }
          else
          {
LABEL_47:
            v35 = *(_QWORD *)(a1 + 960);
            v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v35 + 456));
            if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              goto LABEL_54;
            v37 = a1 + 1012;
            if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v36, a1 + 1012) < 0 )
              goto LABEL_53;
          }
          if ( g_IoSetActivityIdIrp )
          {
            g_IoSetActivityIdIrp(*(_QWORD *)(v35 + 264), v37);
            if ( g_IoSetActivityIdIrp )
              g_IoSetActivityIdIrp(*(_QWORD *)(v35 + 424), v37);
          }
          _InterlockedOr((volatile signed __int32 *)(v35 + 1636), 0x40u);
        }
        else
        {
          if ( v18 == 4039 )
            goto LABEL_47;
          v31 = v18 - 3006;
          if ( v31 )
          {
            v32 = v31 - 1017;
            if ( !v32 )
              goto LABEL_47;
            v33 = v32 - 4;
            if ( !v33 )
              goto LABEL_47;
            v34 = v33 - 4;
            if ( !v34 || v34 == 4 )
              goto LABEL_47;
LABEL_54:
            v11 = (KSPIN_LOCK *)(a1 + 840);
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
LABEL_71:
            v17 = (unsigned int)(v17 + 1);
            v56 = v17;
            v13 = (unsigned int *)(v5 + 32 + 8 * v17);
            if ( *v13 == 1000 )
              break;
            continue;
          }
          v38 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v38 + 1336) & 2) != 0 )
          {
            v41 = *(_QWORD *)(v38 + 1328);
            if ( (*(_DWORD *)(v41 + 1636) & 0x400) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v38 + 1432),
                  4u,
                  5u,
                  0xEu,
                  (__int64)&WPP_745fc1b2e57030ba5abdbb99466ae9d9_Traceguids);
                v41 = *(_QWORD *)(v38 + 1328);
              }
              _InterlockedAnd((volatile signed __int32 *)(v41 + 1636), 0xFFFFFBFF);
            }
          }
          else
          {
            v39 = KfRaiseIrql(2u);
            v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v38 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v40);
            KeLowerIrql(v39);
            *(_QWORD *)(v38 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v38 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v38 + 1424) != 4 )
            *(_DWORD *)(v38 + 1424) = 0;
        }
LABEL_53:
        LODWORD(v17) = v56;
        goto LABEL_54;
      }
      break;
    }
    v16 = v58;
LABEL_73:
    if ( (*(_DWORD *)(v5 + 16) & 8) != 0 )
    {
      v46 = *(_DWORD *)(a1 + 984);
      v4 = (unsigned int)(v4 - 1);
      v47 = *(_DWORD *)(a1 + 4 * v4 + 852);
      switch ( v46 )
      {
        case 2000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_87;
          v48 = 16;
          break;
        case 3000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_87;
          v48 = 17;
          break;
        case 4000:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_87;
          v48 = 15;
          break;
        default:
          if ( v46 == 5000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v48 = 18;
            break;
          }
LABEL_87:
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v47;
          *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v4;
          v49 = *(unsigned __int8 *)(a1 + 832);
          *(_DWORD *)(a1 + 12 * v49) = 1000;
          *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
          if ( SBYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
          {
            LODWORD(v55) = v4;
            LODWORD(v54) = 1000;
            LODWORD(v53) = **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(v47 - *(_DWORD *)(a1 + 984)));
            LODWORD(v52) = *(_DWORD *)(a1 + 984);
            McTemplateK0ppqqqq(
              (struct _MCGEN_TRACE_CONTEXT *)(3 * v49),
              &USBHUB3_ETW_EVENT_STATE_MACHINE,
              (const GUID *)(a1 + 1012),
              *(_QWORD *)(a1 + 1032),
              *(_QWORD *)(a1 + 960),
              v52,
              v53,
              v54,
              v55);
          }
          v11 = (KSPIN_LOCK *)(a1 + 840);
          v13 = v59;
          v5 = *(_QWORD *)&v59[2 * (*(_DWORD *)(a1 + 4 * v4 + 852) - v16)];
          continue;
      }
      v52 = *(_QWORD *)(a1 + 960);
      WPP_RECORDER_SF_qLLL((__int64)v13, v12, v14, v48, v51);
      goto LABEL_87;
    }
    break;
  }
  KeReleaseSpinLock(v11, v15);
  v29 = v57;
  *(_DWORD *)(a1 + 880) = v4;
  return v29;
}
