/*
 * XREFs of Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0008334 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C00097A4 (WPP_RECORDER_SF_qLd.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C0009C54 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000A238 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000A66C (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_WriteDoorbell @ 0x1C000A85C (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     Etw_CommandCompleteError @ 0x1C0038F74 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C00419CC (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C0041C6C (XilCoreCommand_QueryIsRingRunning.c)
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
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  int v33; // edx
  __int64 ****v34; // rcx
  __int64 ***v35; // rax
  __int64 **v36; // rdx
  _QWORD *v37; // rdx
  __int64 **result; // rax
  __int64 v39; // rdx
  __int64 *v40; // rdi
  __int64 *v41; // rax
  __int64 v42; // rcx
  int v43; // [rsp+20h] [rbp-40h]
  __int64 *v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v45; // [rsp+48h] [rbp-18h]
  _QWORD *i; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v47; // [rsp+58h] [rbp-8h]
  char v48; // [rsp+B0h] [rbp+50h] BYREF
  char v49; // [rsp+B8h] [rbp+58h] BYREF

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2568))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v1,
         off_1C004F1D0);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 8) + 473LL) && KeGetCurrentIrql() )
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
  v45 = &v44;
  v5 = 0;
  v44 = (__int64 *)&v44;
  DynamicLock_Acquire(*(_QWORD *)(v2 + 112));
  if ( !IsControllerAccessible )
    goto LABEL_16;
  if ( *(_DWORD *)(v2 + 36) != 1 )
    goto LABEL_70;
  v6 = *(__int64 **)(v2 + 80);
  if ( v6 == (__int64 *)(v2 + 80) )
    goto LABEL_70;
  if ( *(_BYTE *)(v2 + 136) )
    XilCommand_SendQueryIsRingRunningRequest(v2 + 136, &v48, &v49);
  else
    XilCoreCommand_QueryIsRingRunning(v2 + 168, &v48, &v49);
  v10 = *((_DWORD *)v6 + 14);
  if ( v10 > 0 )
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
  if ( v49 )
  {
    IsControllerAccessible = 0;
    v4 = 1;
LABEL_16:
    if ( *(_BYTE *)(v2 + 128) )
    {
      v11 = (__int64 ****)(v2 + 80);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == (__int64 ***)v11 )
          break;
        if ( v12[1] != (__int64 **)v11 )
          goto LABEL_78;
        v13 = *v12;
        if ( (*v12)[1] != (__int64 *)v12 )
          goto LABEL_78;
        *v11 = (__int64 ***)v13;
        v13[1] = (__int64 *)v11;
        v14 = v45;
        if ( *v45 != (__int64 *)&v44 )
          goto LABEL_78;
        v12[1] = v45;
        *v12 = &v44;
        *v14 = v12;
        v45 = (__int64 **)v12;
      }
      v34 = (__int64 ****)(v2 + 96);
      while ( 1 )
      {
        v35 = *v34;
        if ( *v34 == (__int64 ***)v34 )
          break;
        if ( v35[1] != (__int64 **)v34 )
          goto LABEL_78;
        v36 = *v35;
        if ( (*v35)[1] != (__int64 *)v35 )
          goto LABEL_78;
        *v34 = (__int64 ***)v36;
        v36[1] = (__int64 *)v34;
        v37 = v45;
        if ( *v45 != (__int64 *)&v44 )
          goto LABEL_78;
        v35[1] = v45;
        *v35 = &v44;
        *v37 = v35;
        v45 = (__int64 **)v35;
      }
    }
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v2 + 24),
      0LL);
    goto LABEL_70;
  }
  if ( !*(_BYTE *)(v2 + 121) )
  {
    v32 = --*((_DWORD *)v6 + 14);
    if ( v32 == 5 || !v32 )
    {
      if ( v48 != 1 )
      {
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
        goto LABEL_71;
      }
      WPP_RECORDER_SF_qLd(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v32,
        v8,
        v9,
        v43,
        (char)v6,
        (unsigned __int16)*((_DWORD *)v6 + 9) >> 10,
        v32);
      v33 = (unsigned __int8)HIBYTE(*((_WORD *)v6 + 18)) >> 2;
      if ( v33 != 11 || (*((_DWORD *)v6 + 9) & 0x200) != 0 )
      {
        LOBYTE(v33) = 2;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
          v33,
          7,
          38,
          (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
          5,
          (*((_DWORD *)v6 + 9) & 0x200) != 0,
          (unsigned __int8)HIBYTE(*((_WORD *)v6 + 18)) >> 2);
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
LABEL_70:
    v16 = 0;
    goto LABEL_71;
  }
  if ( (*(_DWORD *)(v2 + 124))-- != 1 )
    goto LABEL_70;
  v16 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL);
  if ( v48 )
  {
    WPP_RECORDER_SF_(v17, 2u, 7u, 0x1Eu, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v2 + 8),
      0,
      0,
      4096,
      (__int64)"Command abort timed out, command ring still running, resetting the controller",
      *(_QWORD *)(v2 + 72) + 16LL * *(unsigned int *)(v2 + 44),
      0LL);
    v18 = *(_QWORD *)(v2 + 24);
    *(_BYTE *)(v2 + 121) = 0;
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2560))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v18,
      0LL);
    *(_DWORD *)(v2 + 36) = 2;
    v16 = 1;
    v5 = *((_BYTE *)v6 + 62) & 1;
    goto LABEL_71;
  }
  WPP_RECORDER_SF_(v17, 2u, 7u, 0x1Fu, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v2 + 8),
    0,
    0,
    0x2000,
    (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
    *(_QWORD *)(v2 + 72) + 16LL * *(unsigned int *)(v2 + 44),
    0LL);
  v20 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 121) = 0;
  v21 = *((_DWORD *)v6 + 14);
  v22 = *(_QWORD *)(v20 + 72);
  switch ( v21 )
  {
    case 0:
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_d(v22, v19, 7, 34, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, 0);
      v25 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 || (v26 = (__int64 **)v6[1], *v26 != v6) )
LABEL_78:
        __fastfail(3u);
      *v26 = v25;
      v25[1] = (__int64)v26;
      v27 = (unsigned int)(*(_DWORD *)(v2 + 44) + 1);
      *(_DWORD *)(v2 + 44) = v27;
      if ( (_DWORD)v27 == *(_DWORD *)(v2 + 48) )
      {
        *(_DWORD *)(v2 + 44) = 0;
        v27 = 0LL;
      }
      XilCommand_AdvanceCommandRingControlDequeuePointer(v2, v27);
      goto LABEL_39;
    case 5:
      v24 = 33;
      LOBYTE(v19) = 2;
      break;
    case 10:
      v24 = 32;
      LOBYTE(v19) = 4;
      break;
    default:
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_d(v22, v19, 7, 35, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v21);
      goto LABEL_39;
  }
  WPP_RECORDER_SF_d(v22, v19, 7, v24, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v21);
  v6 = 0LL;
LABEL_39:
  if ( *(_QWORD *)(v2 + 80) != v2 + 80 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 16), 4u, 7u, 0x24u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    XilCommand_WriteDoorbell(v2);
  }
  v28 = *(_QWORD *)(v2 + 96);
  if ( v28 != v2 + 96 )
  {
    i = *(_QWORD **)(v2 + 96);
    v47 = *(_QWORD **)(v2 + 104);
    *(_QWORD *)(v28 + 8) = &i;
    *v47 = &i;
    *(_QWORD *)(v2 + 104) = v2 + 96;
    *(_QWORD *)(v2 + 96) = v2 + 96;
    goto LABEL_44;
  }
  v29 = &i;
  v47 = &i;
  for ( i = &i; v29 != &i; v29 = i )
  {
    if ( (_QWORD **)v29[1] != &i )
      goto LABEL_78;
    v30 = *v29;
    if ( *(_QWORD **)(*v29 + 8LL) != v29 )
      goto LABEL_78;
    i = (_QWORD *)*v29;
    *(_QWORD *)(v30 + 8) = &i;
    Command_InternalSendCommand(v2, (__int64)v29, v23);
LABEL_44:
    ;
  }
  if ( v6 )
  {
    DynamicLock_Release(*(_QWORD *)(v2 + 112));
    *((_BYTE *)v6 + 60) = 25;
    Etw_CommandCompleteError(v31, v2, v6, 2LL);
    ((void (__fastcall *)(__int64 *, __int64))v6[5])(v6, 2LL);
    DynamicLock_Acquire(*(_QWORD *)(v2 + 112));
  }
LABEL_71:
  result = (__int64 **)DynamicLock_Release(*(_QWORD *)(v2 + 112));
  if ( !IsControllerAccessible )
  {
    if ( v4 == 1 )
    {
      LOBYTE(v39) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v39);
    }
    while ( 1 )
    {
      v40 = v44;
      result = &v44;
      if ( v44 == (__int64 *)&v44 )
        break;
      if ( (__int64 **)v44[1] != &v44 )
        goto LABEL_78;
      v41 = (__int64 *)*v44;
      if ( *(__int64 **)(*v44 + 8) != v44 )
        goto LABEL_78;
      v44 = (__int64 *)*v44;
      v41[1] = (__int64)&v44;
      LOBYTE(v39) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v39,
        7,
        40,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        (char)v40,
        (unsigned __int8)HIBYTE(*((_WORD *)v40 + 18)) >> 2);
      Etw_CommandCompleteError(v42, v2, v40, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v40[5])(v40, 3LL);
    }
  }
  if ( v16 == 1 )
    return (__int64 **)Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (v5 ^ 1u) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
