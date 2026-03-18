/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1C0021F30
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DumpPortData @ 0x1C00216E4 (RootHub_DumpPortData.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C0022270 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

char __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned int *v9; // rsi
  int Ulong; // eax
  int v11; // ebx
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+28h] [rbp-20h]

  v2 = a1[1];
  if ( *(_BYTE *)(v2 + 537) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4304);
    v2 = a1[1];
  }
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(unsigned __int8 *)(a2 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      4u,
      0xBu,
      0xCFu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v15);
    v2 = a1[1];
  }
  v7 = 16LL * (v6 - 1);
  RootHub_DumpPortData((unsigned int *)(v7 + a1[5]), v2);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD0u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v14);
    }
    v8 = 88LL * (v6 - 1);
    DynamicLock_Acquire(*(_QWORD *)(v8 + a1[6] + 24));
    v9 = (unsigned int *)(a1[5] + v7);
    Ulong = XilRegister_ReadUlong(v5, v9);
    v11 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = Ulong;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xD1u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v14);
    }
    XilRegister_WriteUlong(v5, v9, v11 & 0xE00C200 | 0xFA0000);
    DynamicLock_Release(*(_QWORD *)(v8 + a1[6] + 24));
    v12 = XilRegister_ReadUlong(v5, v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v12;
      LOBYTE(v12) = WPP_RECORDER_SF_d(
                      *(_QWORD *)(a1[1] + 72LL),
                      4u,
                      0xBu,
                      0xD2u,
                      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                      v14);
    }
  }
  else
  {
    LOBYTE(v12) = RootHub_DetectAndAcknowledgePortResume(a1, v6, 0);
    if ( !(_BYTE)v12 )
      LOBYTE(v12) = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0057690)(UcxDriverGlobals, *a1);
  }
  return v12;
}
