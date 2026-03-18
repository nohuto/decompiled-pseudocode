/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C0024740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027744 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  __int64 v9; // r8
  unsigned __int16 Ulong; // bx
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  __int64 v15; // [rsp+28h] [rbp-B0h]
  int v16; // [rsp+28h] [rbp-B0h]
  __int64 v17; // [rsp+30h] [rbp-A8h]
  int v18; // [rsp+30h] [rbp-A8h]
  _QWORD v19[5]; // [rsp+70h] [rbp-68h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( *(_BYTE *)(v5 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3201);
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v19);
  v7 = v19[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0xB4u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
    *(_DWORD *)(v7 + 4) = -1073713152;
    v3 = -1073741810;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  v8 = *(unsigned __int16 *)(v7 + 132);
  if ( *(_BYTE *)(v7 + 128) != 0xA3
    || *(_BYTE *)(v7 + 129) != 13
    || *(_WORD *)(v7 + 130)
    || !*(_WORD *)(v7 + 132)
    || v8 > *(_DWORD *)(v4 + 16)
    || *(_WORD *)(v7 + 134) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(unsigned __int8 *)(v7 + 134);
      v13 = *(unsigned __int8 *)(v7 + 133);
      v11 = 181;
      goto LABEL_25;
    }
LABEL_26:
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  v9 = v8 - 1;
  if ( *(_BYTE *)(88 * v9 + *(_QWORD *)(v4 + 48) + 13) != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 184;
      v12 = *(unsigned __int8 *)(v7 + 134);
      v13 = *(unsigned __int8 *)(v7 + 133);
LABEL_25:
      WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v12, v13, v11);
      goto LABEL_26;
    }
    goto LABEL_26;
  }
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(16 * v9 + 8 + *(_QWORD *)(v4 + 40)));
  **(_WORD **)(v7 + 40) = Ulong;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = Ulong;
    v16 = v8;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0xB6u,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v16,
      v18);
  }
  if ( Ulong > 0xAu && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = Ulong;
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0xB7u,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v15,
      v17);
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v3);
}
