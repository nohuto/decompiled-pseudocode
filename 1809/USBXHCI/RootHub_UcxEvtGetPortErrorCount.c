/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C0020710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0023134 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // edi
  unsigned __int16 Ulong; // ax
  unsigned int v10; // r15d
  int v11; // edx
  int v12; // r9d
  int v13; // r8d
  __int64 v15; // [rsp+28h] [rbp-B0h]
  __int64 v16; // [rsp+30h] [rbp-A8h]
  _QWORD v17[5]; // [rsp+70h] [rbp-68h] BYREF

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F220);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( *(_BYTE *)(v5 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3195);
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v17);
  v7 = v17[1];
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      4u,
      0xBu,
      0xB4u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
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
    v12 = 181;
    v11 = *(unsigned __int8 *)(v7 + 134);
    v13 = BYTE1(v8);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + 80LL * (v8 - 1) + 13) != 3 )
  {
    v11 = 2;
    v12 = 184;
    v13 = BYTE1(v8);
LABEL_18:
    WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v11, v13, v12);
    v3 = -1073741823;
    *(_DWORD *)(v7 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v3);
  }
  Ulong = XilRegister_ReadUlong(v6, (unsigned int *)(16LL * (v8 - 1) + 8 + *(_QWORD *)(v4 + 40)));
  **(_WORD **)(v7 + 40) = Ulong;
  v10 = Ulong;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
    4u,
    0xBu,
    0xB6u,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v8,
    Ulong);
  if ( v10 > 0xA )
  {
    LODWORD(v16) = v10;
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      0xB7u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v15,
      v16);
  }
  *(_DWORD *)(v7 + 4) = 0;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v3);
}
