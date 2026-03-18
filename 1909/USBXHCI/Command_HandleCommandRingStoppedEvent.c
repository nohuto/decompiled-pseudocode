/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C0009F60
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0009AB8 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0002320 (WPP_RECORDER_SF_ii.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C000A23C (Command_InternalSendCommand.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C000BCDC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000C1D0 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     XilCommand_WriteDoorbell @ 0x1C000CA70 (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C003E2C4 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 CommandRingBufferLogicalAddress; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  __int64 *v15; // rax
  __int64 **v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-30h]
  _QWORD *i; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 112);
  i = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  DynamicLock_Acquire(v3);
  *(_BYTE *)(a1 + 121) = 0;
  CommandRingBufferLogicalAddress = XilCommand_GetCommandRingBufferLogicalAddress(a1, v6);
  v11 = *a2;
  v12 = CommandRingBufferLogicalAddress + 16LL * *(unsigned int *)(a1 + 44);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v8, v9, v10, v23);
  if ( v11 == v12 || v11 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 44) )
  {
    v13 = *(_QWORD *)(a1 + 80);
    if ( v13 != a1 + 80 )
    {
      v5 = *(__int64 **)(a1 + 80);
      v14 = *(_DWORD *)(v13 + 56);
      if ( v14 )
      {
        if ( v14 == 5 || v14 == 10 )
          v5 = 0LL;
      }
      else
      {
        v15 = (__int64 *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5 || (v16 = (__int64 **)v5[1], *v16 != v5) )
LABEL_31:
          __fastfail(3u);
        *v16 = v15;
        v15[1] = (__int64)v16;
        v17 = (unsigned int)++*(_DWORD *)(a1 + 44);
        if ( (_DWORD)v17 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v17 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v17);
      }
    }
    if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x2Au, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
      XilCommand_WriteDoorbell(a1);
    }
    v18 = *(_QWORD **)(a1 + 96);
    if ( v18 != (_QWORD *)(a1 + 96) )
    {
      v25 = *(_QWORD **)(a1 + 104);
      i = v18;
      v18[1] = &i;
      *v25 = &i;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_26;
    }
    v19 = &i;
    v25 = &i;
    for ( i = &i; v19 != &i; v19 = i )
    {
      if ( (_QWORD **)v19[1] != &i )
        goto LABEL_31;
      v20 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 )
        goto LABEL_31;
      i = (_QWORD *)*v19;
      *(_QWORD *)(v20 + 8) = &i;
      Command_InternalSendCommand(a1);
LABEL_26:
      ;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  if ( v5 )
  {
    *((_BYTE *)v5 + 60) = 25;
    Etw_CommandCompleteError(v22, a1, v5, 2LL);
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))v5[5])(v5, 2LL, 0LL);
  }
  return result;
}
