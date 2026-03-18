/*
 * XREFs of RootHub_UcxEvtClearHubFeature @ 0x1C0022890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027744 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtClearHubFeature(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rbp
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  unsigned __int16 v9; // r9
  _QWORD v11[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 537LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      941);
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v11);
  v5 = v11[1];
  if ( *(_BYTE *)(v11[1] + 128LL) != 32
    || *(_BYTE *)(v11[1] + 129LL) != 1
    || *(_WORD *)(v11[1] + 132LL)
    || *(_WORD *)(v11[1] + 134LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 34;
      v7 = *(unsigned __int8 *)(v11[1] + 134LL);
      v8 = *(unsigned __int8 *)(v11[1] + 133LL);
      goto LABEL_20;
    }
LABEL_21:
    v3 = -1073741823;
    *(_DWORD *)(v5 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  if ( *(_WORD *)(v11[1] + 130LL) )
  {
    if ( *(_WORD *)(v11[1] + 130LL) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 37;
        v7 = *(unsigned __int8 *)(v11[1] + 134LL);
        v8 = *(unsigned __int8 *)(v11[1] + 133LL);
LABEL_20:
        WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v7, v8, v6);
        goto LABEL_21;
      }
      goto LABEL_21;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 36;
LABEL_16:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        v9,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 35;
    goto LABEL_16;
  }
  *(_DWORD *)(v5 + 4) = 0;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v3);
}
