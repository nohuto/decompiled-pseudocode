/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C001D924 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DumpPortData @ 0x1C001DD08 (RootHub_DumpPortData.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001E774 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

char __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int *v9; // rdi
  int Ulong; // ebx
  char result; // al
  unsigned int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  v4 = a1[1];
  if ( *(_BYTE *)(v4 + 473) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4298);
    v4 = a1[1];
  }
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(unsigned __int8 *)(a2 + 3);
  v12 = v6;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 72),
    4u,
    0xBu,
    0xCFu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v12);
  v7 = 16LL * (v6 - 1);
  RootHub_DumpPortData((unsigned int *)(v7 + a1[5]), a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v6) )
  {
    LODWORD(v13) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xD0u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v13);
    v8 = 10LL * (v6 - 1);
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + 80LL * (v6 - 1) + 24));
    v9 = (unsigned int *)(a1[5] + v7);
    Ulong = XilRegister_ReadUlong(v5, v9);
    LODWORD(v14) = Ulong;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xD1u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v14);
    XilRegister_WriteUlong(v5, v9, Ulong & 0xE00C200 | 0xFA0000);
    DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v8 + 24));
    LODWORD(v15) = XilRegister_ReadUlong(v5, v9);
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xD2u,
             (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
             v15);
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v6, 0);
    if ( !result )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0050650)(UcxDriverGlobals, *a1);
  }
  return result;
}
