/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C000A23C (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C000B82C (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C000BCDC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000C360 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000C828 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_WriteDoorbell @ 0x1C000CA70 (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     Etw_CommandCompleteError @ 0x1C003E2C4 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C0047224 (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C00474E0 (XilCoreCommand_QueryIsRingRunning.c)
 */

__int64 **__fastcall Command_WdfEvtWatchdogTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char IsControllerAccessible; // r15
  char v4; // r13
  unsigned __int8 v5; // r12
  __int64 *v6; // rdi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  __int64 ****v11; // rcx
  __int64 ***v12; // rax
  __int64 **v13; // rdx
  _QWORD *v14; // rdx
  char v16; // si
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  int v22; // r9d
  __int64 *v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // edx
  int v31; // edx
  __int64 ****v32; // rcx
  __int64 ***v33; // rax
  __int64 **v34; // rdx
  _QWORD *v35; // rdx
  __int64 **result; // rax
  __int64 v37; // rdx
  __int64 *v38; // rdi
  __int64 *v39; // rax
  __int64 **v40; // rcx
  int v41; // [rsp+20h] [rbp-40h]
  __int64 *v42; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v43; // [rsp+48h] [rbp-18h]
  _QWORD *i; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v45; // [rsp+58h] [rbp-8h]
  char v46; // [rsp+B0h] [rbp+50h] BYREF
  char v47; // [rsp+B8h] [rbp+58h] BYREF

  v42 = 0LL;
  v43 = 0LL;
  i = 0LL;
  v45 = 0LL;
  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2568))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C00561F8);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 8) + 537LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      1045LL);
  if ( !KeGetCurrentIrql() )
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v2 + 24),
      -10000000LL);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v2 + 8));
  v4 = 0;
  v43 = &v42;
  v5 = 0;
  v42 = (__int64 *)&v42;
  DynamicLock_Acquire(*(_QWORD *)(v2 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_17;
  if ( *(_DWORD *)(v2 + 36) != 1 )
    goto LABEL_89;
  v6 = *(__int64 **)(v2 + 80);
  if ( v6 == (__int64 *)(v2 + 80) )
    goto LABEL_89;
  if ( *(_BYTE *)(v2 + 136) )
    XilCommand_SendQueryIsRingRunningRequest(v2 + 136, &v46, &v47);
  else
    XilCoreCommand_QueryIsRingRunning(v2 + 168, &v46, &v47);
  v10 = *((_DWORD *)v6 + 14);
  if ( v10 > 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v7,
      7,
      29,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      (char)v6,
      v10);
  }
  if ( v47 )
  {
    IsControllerAccessible = 0;
    v4 = 1;
LABEL_17:
    if ( *(_BYTE *)(v2 + 128) )
    {
      v11 = (__int64 ****)(v2 + 80);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == (__int64 ***)v11 )
          break;
        if ( v12[1] != (__int64 **)v11 )
          goto LABEL_99;
        v13 = *v12;
        if ( (*v12)[1] != (__int64 *)v12 )
          goto LABEL_99;
        *v11 = (__int64 ***)v13;
        v13[1] = (__int64 *)v11;
        v14 = v43;
        if ( *v43 != (__int64 *)&v42 )
          goto LABEL_99;
        v12[1] = v43;
        *v12 = &v42;
        *v14 = v12;
        v43 = (__int64 **)v12;
      }
      v32 = (__int64 ****)(v2 + 96);
      while ( 1 )
      {
        v33 = *v32;
        if ( *v32 == (__int64 ***)v32 )
          break;
        if ( v33[1] != (__int64 **)v32 )
          goto LABEL_99;
        v34 = *v33;
        if ( (*v33)[1] != (__int64 *)v33 )
          goto LABEL_99;
        *v32 = (__int64 ***)v34;
        v34[1] = (__int64 *)v32;
        v35 = v43;
        if ( *v43 != (__int64 *)&v42 )
          goto LABEL_99;
        v33[1] = v43;
        *v33 = &v42;
        *v35 = v33;
        v43 = (__int64 **)v33;
      }
    }
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v2 + 24),
      0LL);
    goto LABEL_89;
  }
  if ( !*(_BYTE *)(v2 + 121) )
  {
    v30 = --*((_DWORD *)v6 + 14);
    if ( v30 == 5 || !v30 )
    {
      if ( v46 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
            2u,
            7u,
            0x27u,
            (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
        (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *(_QWORD *)(v2 + 24),
          0LL);
        v16 = 1;
        *(_DWORD *)(v2 + 36) = 2;
        if ( (*((_BYTE *)v6 + 62) & 1) != 0 )
          v5 = 1;
        goto LABEL_90;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLd(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
          v30,
          v8,
          v9,
          v41,
          (char)v6,
          (unsigned __int16)*((_DWORD *)v6 + 9) >> 10,
          *((_DWORD *)v6 + 14));
      v31 = (unsigned __int8)HIBYTE(*((_WORD *)v6 + 18)) >> 2;
      if ( v31 != 11 || (*((_DWORD *)v6 + 9) & 0x200) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 2;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
            v31,
            7,
            38,
            (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
            5,
            (*((_DWORD *)v6 + 9) & 0x200) != 0,
            (unsigned __int8)HIBYTE(*((_WORD *)v6 + 18)) >> 2);
        }
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v2 + 8),
          0,
          0,
          0x4000,
          (__int64)"A command timed out, aborting command next",
          (__int64)(v6 + 3),
          0LL);
      }
      *(_BYTE *)(v2 + 121) = 1;
      *(_DWORD *)(v2 + 124) = 5;
      if ( *(_BYTE *)(v2 + 136) )
        XilCommand_SendAbortRingCommandRequest(v2 + 136);
      else
        XilCoreCommand_AbortCommandRing(v2 + 168);
    }
LABEL_89:
    v16 = 0;
    goto LABEL_90;
  }
  if ( (*(_DWORD *)(v2 + 124))-- != 1 )
    goto LABEL_89;
  v16 = 0;
  if ( v46 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        2u,
        7u,
        0x1Eu,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v2 + 8),
      0,
      0,
      4096,
      (__int64)"Command abort timed out, command ring still running, resetting the controller",
      *(_QWORD *)(v2 + 72) + 16LL * *(unsigned int *)(v2 + 44),
      0LL);
    v17 = *(_QWORD *)(v2 + 24);
    *(_BYTE *)(v2 + 121) = 0;
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2560))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v17,
      0LL);
    *(_DWORD *)(v2 + 36) = 2;
    v16 = 1;
    v5 = *((_BYTE *)v6 + 62) & 1;
    goto LABEL_90;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      2u,
      7u,
      0x1Fu,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v2 + 8),
    0,
    0,
    0x2000,
    (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
    *(_QWORD *)(v2 + 72) + 16LL * *(unsigned int *)(v2 + 44),
    0LL);
  *(_BYTE *)(v2 + 121) = 0;
  v21 = *((_DWORD *)v6 + 14);
  switch ( v21 )
  {
    case 0:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
          v18,
          7,
          34,
          (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
          0);
      }
      v23 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 || (v24 = (__int64 **)v6[1], *v24 != v6) )
LABEL_99:
        __fastfail(3u);
      *v24 = v23;
      v23[1] = (__int64)v24;
      v25 = (unsigned int)(*(_DWORD *)(v2 + 44) + 1);
      *(_DWORD *)(v2 + 44) = v25;
      if ( (_DWORD)v25 == *(_DWORD *)(v2 + 48) )
      {
        *(_DWORD *)(v2 + 44) = 0;
        v25 = 0LL;
      }
      XilCommand_AdvanceCommandRingControlDequeuePointer(v2, v25);
      goto LABEL_50;
    case 5:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v22 = 33;
      LOBYTE(v18) = 2;
      goto LABEL_39;
    case 10:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_40:
        v6 = 0LL;
        goto LABEL_50;
      }
      v22 = 32;
      LOBYTE(v18) = 4;
LABEL_39:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v18,
        7,
        v22,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        v21);
      goto LABEL_40;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v18,
      7,
      35,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      v21);
  }
LABEL_50:
  if ( *(_QWORD *)(v2 + 80) != v2 + 80 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v2 + 16), 4u, 7u, 0x24u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    XilCommand_WriteDoorbell(v2);
  }
  v26 = *(_QWORD *)(v2 + 96);
  if ( v26 != v2 + 96 )
  {
    i = *(_QWORD **)(v2 + 96);
    v45 = *(_QWORD **)(v2 + 104);
    *(_QWORD *)(v26 + 8) = &i;
    *v45 = &i;
    *(_QWORD *)(v2 + 104) = v2 + 96;
    *(_QWORD *)(v2 + 96) = v2 + 96;
    goto LABEL_57;
  }
  v27 = &i;
  v45 = &i;
  for ( i = &i; v27 != &i; v27 = i )
  {
    if ( (_QWORD **)v27[1] != &i )
      goto LABEL_99;
    v28 = *v27;
    if ( *(_QWORD **)(*v27 + 8LL) != v27 )
      goto LABEL_99;
    i = (_QWORD *)*v27;
    *(_QWORD *)(v28 + 8) = &i;
    Command_InternalSendCommand(v2, (__int64)v27, v19, v20);
LABEL_57:
    ;
  }
  if ( v6 )
  {
    DynamicLock_Release(*(_QWORD *)(v2 + 112));
    *((_BYTE *)v6 + 60) = 25;
    Etw_CommandCompleteError(v29, v2, v6, 2LL);
    ((void (__fastcall *)(__int64 *, __int64))v6[5])(v6, 2LL);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 112));
  }
LABEL_90:
  result = (__int64 **)DynamicLock_Release(*(_QWORD *)(v2 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v4 == 1 )
    {
      LOBYTE(v37) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v37);
    }
    while ( 1 )
    {
      v38 = v42;
      result = &v42;
      if ( v42 == (__int64 *)&v42 )
        break;
      if ( (__int64 **)v42[1] != &v42 )
        goto LABEL_99;
      v39 = (__int64 *)*v42;
      if ( *(__int64 **)(*v42 + 8) != v42 )
        goto LABEL_99;
      v40 = &v42;
      v42 = (__int64 *)*v42;
      v39[1] = (__int64)&v42;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 4;
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
          v37,
          7,
          40,
          (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
          (char)v38,
          (unsigned __int8)HIBYTE(*((_WORD *)v38 + 18)) >> 2);
      }
      Etw_CommandCompleteError(v40, v2, v38, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v38[5])(v38, 3LL);
    }
  }
  if ( v16 == 1 )
    return (__int64 **)Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (v5 ^ 1u) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
