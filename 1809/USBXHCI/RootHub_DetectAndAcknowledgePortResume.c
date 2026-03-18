/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924
 * Callers:
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C0003350 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0010730 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EB88 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C00234CC (WPP_RECORDER_SF_dDd.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdi
  char v11; // r15
  unsigned int *v12; // r14
  int Ulong; // eax
  int v14; // ebx
  char v15; // al
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  unsigned __int16 v19; // r14
  int v20; // ebx
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+70h] [rbp+8h]

  v5 = a1[1];
  if ( *(_BYTE *)(v5 + 473) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4136);
    v5 = a1[1];
  }
  v7 = *(_QWORD *)(v5 + 88);
  v8 = a2 - 1;
  v9 = a1[6];
  v10 = 10 * v8;
  v11 = 0;
  v12 = (unsigned int *)(a1[5] + 16 * v8);
  v24 = v7;
  DynamicLock_Acquire(*(_QWORD *)(v9 + 80 * v8 + 24));
  Ulong = XilRegister_ReadUlong(v7, v12);
  v14 = Ulong;
  if ( *(_BYTE *)(v9 + 8 * v10 + 13) == 3
    && (Ulong & 0x400000) != 0
    && (Ulong & 0x1E0) == 0
    && (*(_QWORD *)(a1[1] + 272LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (v14 & 0x1E0) != 0x1E0 || !a3 && (v14 & 0x400000) == 0 )
    goto LABEL_20;
  v11 = 1;
  if ( *(_BYTE *)(v9 + 8 * v10 + 18) == 1 )
    goto LABEL_20;
  v15 = *(_BYTE *)(v9 + 8 * v10 + 13);
  *(_BYTE *)(v9 + 8 * v10 + 18) = 1;
  if ( v15 != 2 )
  {
    if ( v15 == 3 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        3u,
        0xBu,
        0xCCu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        a2,
        v14);
      v20 = v14 & 0xE40C200 | 0x10000;
      LODWORD(v22) = v20;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xCDu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v22);
      XilRegister_WriteUlong(v24, v12, v20);
      LODWORD(v23) = XilRegister_ReadUlong(v24, v12);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xCEu,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v23);
    }
LABEL_20:
    DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v10 + 24));
    return v11;
  }
  DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v10 + 24));
  if ( *(int *)(v9 + 8 * v10 + 40) <= 0 )
    v19 = 50;
  else
    v19 = *(_WORD *)(v9 + 8 * v10 + 44);
  WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v16, v17, v18);
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v9 + 8 * v10 + 32),
    -10000LL * v19);
  return v11;
}
