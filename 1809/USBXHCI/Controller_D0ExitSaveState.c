/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C000B9D4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0011608 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00117C8 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_I @ 0x1C0011CDC (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int16 Ulong; // ax
  __int64 v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONGLONG UnbiasedInterruptTime; // r14
  int v14; // eax
  int i; // esi
  __int16 v16; // ax
  ULONGLONG v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // r8d
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // r8d
  ULONGLONG v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // r8d
  int v27; // [rsp+20h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4011LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x79u, (__int64)&Context.Logger + 4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(v3, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, v4, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = v6 + 4;
  Ulong = XilRegister_ReadUlong(v5, v6 + 4);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (Ulong & 1) == 0 )
  {
    v10 = 122;
LABEL_8:
    WPP_RECORDER_SF_(v9, 2u, 4u, v10, (__int64)&Context.Logger + 4);
    goto LABEL_21;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    v10 = 123;
    goto LABEL_8;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    v10 = 124;
    goto LABEL_8;
  }
  WPP_RECORDER_SF_(v9, 4u, 4u, 0x7Du, (__int64)&Context.Logger + 4);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v14 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, v14 | 0x100u);
  for ( i = 20; ; --i )
  {
    v16 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    if ( (v16 & 0x400) != 0 )
      break;
    if ( (v16 & 0x100) == 0 )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      v21 = (v20 - UnbiasedInterruptTime) / 0xA;
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v22, 127, v27, (v20 - UnbiasedInterruptTime) / 0xA);
      goto LABEL_22;
    }
    if ( !i )
    {
      v17 = KeQueryUnbiasedInterruptTime();
      v18 = (v17 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v19, 128, v27, (v17 - UnbiasedInterruptTime) / 0x2710);
      goto LABEL_21;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v23 = KeQueryUnbiasedInterruptTime();
  v24 = (v23 - UnbiasedInterruptTime) / 0x2710;
  LOBYTE(v24) = 2;
  WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v24, v25, 126, v27, (v23 - UnbiasedInterruptTime) / 0x2710);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024LL);
LABEL_21:
  v1 = -1073741630;
LABEL_22:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq(v11, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE, v12, *(_QWORD *)(a1 + 8), v1);
  return v1;
}
