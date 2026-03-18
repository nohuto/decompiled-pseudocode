/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C0008088
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000214C (WPP_RECORDER_SF_ii.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0008334 (Command_InternalSendCommand.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C0009C54 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000A0CC (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     XilCommand_WriteDoorbell @ 0x1C000A85C (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0038F74 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 CommandRingBufferLogicalAddress; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-30h]
  _QWORD *i; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-8h]

  v4 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  CommandRingBufferLogicalAddress = XilCommand_GetCommandRingBufferLogicalAddress(a1, v5);
  v7 = *a2;
  v8 = CommandRingBufferLogicalAddress + 16LL * *(unsigned int *)(a1 + 44);
  WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v9, v10, v11, v24);
  if ( v7 == v8 || v7 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 44) )
  {
    v14 = (__int64 *)(a1 + 80);
    v15 = *(__int64 **)(a1 + 80);
    v16 = v15;
    if ( v15 != (__int64 *)(a1 + 80) )
    {
      v17 = *((_DWORD *)v15 + 14);
      v4 = *(_QWORD *)(a1 + 80);
      if ( v17 )
      {
        if ( v17 == 5 || v17 == 10 )
          v4 = 0LL;
      }
      else
      {
        v18 = *v15;
        if ( *(_QWORD *)(v18 + 8) != v4 || (v19 = *(_QWORD **)(v4 + 8), *v19 != v4) )
LABEL_28:
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = (unsigned int)++*(_DWORD *)(a1 + 44);
        if ( (_DWORD)v20 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v20 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v20);
        v16 = (__int64 *)*v14;
      }
    }
    if ( v16 != v14 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x2Au, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
      XilCommand_WriteDoorbell(a1);
    }
    v21 = *(_QWORD **)(a1 + 96);
    if ( v21 != (_QWORD *)(a1 + 96) )
    {
      v26 = *(_QWORD **)(a1 + 104);
      i = v21;
      v21[1] = &i;
      *v26 = &i;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_23;
    }
    v22 = &i;
    v26 = &i;
    for ( i = &i; v22 != &i; v22 = i )
    {
      if ( (_QWORD **)v22[1] != &i )
        goto LABEL_28;
      v23 = *v22;
      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
        goto LABEL_28;
      i = (_QWORD *)*v22;
      *(_QWORD *)(v23 + 8) = &i;
      Command_InternalSendCommand(a1);
LABEL_23:
      ;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x2Bu, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000,
      (__int64)"After command abort completion, software and hardware dequeue pointers do not match",
      *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
      (__int64)a2);
    Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v4 )
  {
    *(_BYTE *)(v4 + 60) = 25;
    Etw_CommandCompleteError(v13, a1, v4, 2LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 40))(v4, 2LL);
  }
  return result;
}
