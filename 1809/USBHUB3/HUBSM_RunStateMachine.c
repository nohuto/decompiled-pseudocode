/*
 * XREFs of HUBSM_RunStateMachine @ 0x1C000A1D8
 * Callers:
 *     HUBSM_EvtSmWorkItem @ 0x1C0009D20 (HUBSM_EvtSmWorkItem.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C0008F8C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000961C (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBMISC_DbgBreak @ 0x1C002C530 (HUBMISC_DbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall HUBSM_RunStateMachine(__int64 a1, int a2, KIRQL *a3, char a4)
{
  __int64 v4; // r14
  KSPIN_LOCK *v5; // r15
  unsigned int v6; // r13d
  char v7; // si
  __int64 i; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // r8
  unsigned int v14; // ebx
  char v15; // r9
  unsigned __int8 v16; // dl
  int v17; // r10d
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r14
  KIRQL v23; // al
  __int64 v24; // r14
  KIRQL v25; // si
  __int64 v26; // rax
  int v27; // r8d
  volatile signed __int32 *v28; // rdi
  __int64 j; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  KIRQL result; // al
  KIRQL v34; // cl
  char v35; // r9
  char v36; // r8
  KIRQL v37; // r10
  KIRQL v38; // dl
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  int v44; // [rsp+90h] [rbp+8h]
  char v45; // [rsp+98h] [rbp+10h] BYREF
  char v46; // [rsp+A8h] [rbp+20h]

  v46 = a4;
  v4 = *(_QWORD *)(a1 + 976);
  v5 = (KSPIN_LOCK *)(a1 + 840);
  v6 = 0;
  v43 = v4;
  v45 = 0;
  v7 = a4;
  v44 = *(_DWORD *)(a1 + 984);
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      for ( i = *(unsigned int *)(a1 + 880); ; i = (unsigned int)(i - 1) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 976)
                        + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * i + 852) - *(_DWORD *)(a1 + 984)));
        if ( !(_DWORD)i || (*(_DWORD *)(v12 + 16) & 4) == 0 )
          break;
      }
      v13 = *(_BYTE *)(a1 + 948);
      v14 = 1000;
      v15 = *(_BYTE *)(a1 + 949);
      v16 = v13;
      v17 = *(_DWORD *)(v12 + 16);
      if ( v13 != v15 )
      {
        do
        {
          v18 = *(_DWORD *)(a1 + 4LL * v16 + 884) & 3;
          if ( !v18 || v18 == 2 && (v17 & 1) == 0 )
            break;
          if ( v18 == 3 && (v17 & 2) != 0 )
            break;
          v16 = (v16 + 1) & 0xF;
        }
        while ( v16 != v15 );
        if ( v16 != v15 )
        {
          v14 = *(_DWORD *)(a1 + 4LL * v16 + 884);
          while ( v16 != v13 )
          {
            v19 = v16;
            v16 = (v16 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v19 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v19 - 1) & 0xF) + 884);
            v13 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v13 + 884) = 1000;
          *(_BYTE *)(a1 + 948) = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
        }
      }
      if ( v14 == 1000 )
      {
        v40 = *(_QWORD *)(a1 + 960);
        *(_BYTE *)(a1 + 848) = 0;
        v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v40);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v41,
                 "State Machine Tag",
                 1432LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      }
      if ( ++v6 == -1 )
        HUBMISC_DbgBreak("State machine running for too long");
      KeReleaseSpinLock(v5, *a3);
      if ( v14 > 0xFC7 )
      {
        if ( v14 != 4043 && v14 != 4047 )
        {
          if ( v14 != 4067 && v14 != 4071 && v14 != 4075 )
            goto LABEL_36;
          v20 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v20 + 1636) & 0x80u) == 0 )
            goto LABEL_36;
          v22 = a1 + 1012;
          *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v20 + 2176);
          goto LABEL_31;
        }
      }
      else if ( v14 != 4039 )
      {
        if ( v14 == 3006 )
        {
          v24 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v24 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v24 + 1328) + 1636LL) & 0x400) != 0 )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(v24 + 1432),
                4u,
                5u,
                0xEu,
                (__int64)&WPP_745fc1b2e57030ba5abdbb99466ae9d9_Traceguids);
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v24 + 1328) + 1636LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v25 = KfRaiseIrql(2u);
            v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v24 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v26);
            KeLowerIrql(v25);
            *(_QWORD *)(v24 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v24 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v24 + 1424) != 4 )
            *(_DWORD *)(v24 + 1424) = 0;
          goto LABEL_35;
        }
        if ( v14 != 4023 && v14 != 4027 && v14 != 4031 && v14 != 4035 )
          goto LABEL_36;
      }
      v20 = *(_QWORD *)(a1 + 960);
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v20 + 456));
      if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
LABEL_36:
        v23 = KeAcquireSpinLockRaiseToDpc(v5);
        v7 = v46;
        *a3 = v23;
        goto LABEL_51;
      }
      v22 = a1 + 1012;
      if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v21, a1 + 1012) < 0 )
      {
LABEL_35:
        v4 = v43;
        goto LABEL_36;
      }
LABEL_31:
      if ( g_IoSetActivityIdIrp )
      {
        g_IoSetActivityIdIrp(*(_QWORD *)(v20 + 264), v22);
        if ( g_IoSetActivityIdIrp )
          g_IoSetActivityIdIrp(*(_QWORD *)(v20 + 424), v22);
      }
      _InterlockedOr((volatile signed __int32 *)(v20 + 1636), 0x40u);
      goto LABEL_35;
    }
    v14 = a2;
    a2 = 1000;
LABEL_51:
    KeReleaseSpinLock(v5, *a3);
    if ( !HUBSM_FindAndSetTargetState(a1, v14, &v45) )
      goto LABEL_85;
    v27 = *(_DWORD *)(a1 + 984);
    if ( v27 == 3000 || v27 == 5000 )
    {
      v28 = *(volatile signed __int32 **)(a1 + 960);
      for ( j = *(unsigned int *)(a1 + 880); ; j = (unsigned int)(j - 1) )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4 * j + 852) - v27));
        if ( !(_DWORD)j || (*(_DWORD *)(v30 + 16) & 4) == 0 )
          break;
      }
      if ( (*(_BYTE *)(v30 + 16) & 0x20) != 0 )
      {
        if ( (v28[66] & 0x20) != 0 )
        {
          v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                  WdfDriverGlobals,
                  *(_QWORD *)v28);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            v31,
            0LL,
            1500LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
          _InterlockedAnd(v28 + 66, 0xFFFFFFDF);
        }
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v28 + 40LL) & 0x20000) != 0 && (v28[66] & 0x20) == 0 )
      {
        v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
        LODWORD(v42) = 1515;
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               v32,
               0LL,
               0LL,
               v42,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c") >= 0 )
          _InterlockedOr(v28 + 66, 0x20u);
      }
    }
    if ( v45 )
    {
      v45 = 0;
      if ( v14 != 1002 && !(unsigned __int8)ExCancelTimer(*(_QWORD *)(a1 + 1040), 0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v5);
        v34 = *(_BYTE *)(a1 + 948);
        v35 = 0;
        v36 = *(_BYTE *)(a1 + 949);
        v37 = result;
        *a3 = result;
        v38 = v34;
        if ( v34 == v36 )
          goto LABEL_87;
        while ( 1 )
        {
          result = v38;
          if ( *(_DWORD *)(a1 + 4LL * v38 + 884) == 1002 )
            break;
          v38 = (v38 + 1) & 0xF;
          if ( v38 == v36 )
            goto LABEL_73;
        }
        v35 = 1;
LABEL_73:
        if ( v38 != v36 )
        {
          while ( v38 != v34 )
          {
            v39 = v38;
            v38 = (v38 - 1) & 0xF;
            *(_DWORD *)(a1 + 4 * v39 + 884) = *(_DWORD *)(a1 + 4LL * (((_BYTE)v39 - 1) & 0xF) + 884);
            v34 = *(_BYTE *)(a1 + 948);
          }
          *(_DWORD *)(a1 + 4LL * v34 + 884) = 1000;
          result = (*(_BYTE *)(a1 + 948) + 1) & 0xF;
          *(_BYTE *)(a1 + 948) = result;
        }
        if ( !v35 )
        {
LABEL_87:
          *(_BYTE *)(a1 + 1048) = 1;
          return result;
        }
        KeReleaseSpinLock(v5, v37);
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4
                                + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 880) + 852) - v44))
                    + 16LL) & 0x10) != 0
      && KeGetCurrentIrql()
      || !v7 && v6 > 0x64 )
    {
      break;
    }
    a2 = HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
    if ( a2 == 1003 )
      goto LABEL_89;
LABEL_85:
    *a3 = KeAcquireSpinLockRaiseToDpc(v5);
  }
  (*(void (__fastcall **)(_QWORD, void (__fastcall *)(__int64, __int64), __int64, _QWORD))(*(_QWORD *)(a1 + 1000) + 512LL))(
    *(_QWORD *)(a1 + 992),
    HUBSM_EvtSmWorkItem,
    a1,
    (unsigned int)(-(*(_BYTE *)(a1 + 1008) != 0) - 892338175));
LABEL_89:
  result = KeAcquireSpinLockRaiseToDpc(v5);
  *a3 = result;
  return result;
}
