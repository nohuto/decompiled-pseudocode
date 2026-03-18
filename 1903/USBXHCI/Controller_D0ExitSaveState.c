/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C000DCC0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0014008 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00141C8 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_I @ 0x1C00146DC (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int16 Ulong; // ax
  ULONGLONG v9; // rcx
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  ULONGLONG UnbiasedInterruptTime; // r14
  int v13; // eax
  int i; // ebp
  __int16 v15; // ax
  ULONGLONG v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rdx
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  ULONGLONG v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4091LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x7Bu, (__int64)&Context.Logger + 4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = v6 + 4;
  Ulong = XilRegister_ReadUlong(v5, v6 + 4);
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_28:
      v3 = -1073741630;
      goto LABEL_29;
    }
    v11 = 124;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, v11, (__int64)&Context.Logger + 4);
    goto LABEL_28;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v11 = 125;
    goto LABEL_11;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v11 = 126;
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x7Fu, (__int64)&Context.Logger + 4);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, v13 | 0x100u);
  for ( i = 20; ; --i )
  {
    v15 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    if ( (v15 & 0x400) != 0 )
    {
      v16 = KeQueryUnbiasedInterruptTime();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = (v16 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v17, 128, v24, (v16 - UnbiasedInterruptTime) / 0x2710);
      }
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024LL);
      goto LABEL_28;
    }
    if ( (v15 & 0x100) == 0 )
      break;
    if ( !i )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      v9 = v20;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = (v20 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v10, 130, v24, (v20 - UnbiasedInterruptTime) / 0x2710);
      }
      goto LABEL_28;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v22 = KeQueryUnbiasedInterruptTime();
  v9 = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (v22 - UnbiasedInterruptTime) / 0xA;
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v10, 129, v24, (v22 - UnbiasedInterruptTime) / 0xA);
  }
LABEL_29:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq(v9, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE, v10, *(_QWORD *)(a1 + 8), v3);
  return v3;
}
