/*
 * XREFs of Controller_D0EntryRestoreState @ 0x1C000D8D8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0014008 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00141C8 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_I @ 0x1C00146DC (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int16 Ulong; // ax
  ULONGLONG v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  int v11; // ebx
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v13; // eax
  __int16 i; // ax
  ULONGLONG v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  int v18; // ebx
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  ULONGLONG v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3623LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x6Bu, (__int64)&Context.Logger + 4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = v5 + 4;
  Ulong = XilRegister_ReadUlong(v4, v5 + 4);
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_28:
      v18 = -1073741630;
      goto LABEL_29;
    }
    v10 = 108;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, v10, (__int64)&Context.Logger + 4);
    goto LABEL_28;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v10 = 109;
    goto LABEL_11;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v10 = 110;
    goto LABEL_11;
  }
  v11 = 20;
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x6Fu, (__int64)&Context.Logger + 4);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v13 | 0x200u);
  for ( i = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5 + 4); ; i = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6) )
  {
    if ( (i & 0x400) != 0 )
    {
      v15 = KeQueryUnbiasedInterruptTime();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = (v15 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v17, v16, 112, v24, (v15 - UnbiasedInterruptTime) / 0x2710);
      }
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, 1024LL);
      goto LABEL_28;
    }
    if ( (i & 0x200) == 0 )
      break;
    if ( !v11 )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      v8 = v20;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = (v20 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v9, 114, v24, (v20 - UnbiasedInterruptTime) / 0x2710);
      }
      goto LABEL_28;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    --v11;
  }
  v22 = KeQueryUnbiasedInterruptTime();
  v8 = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (v22 - UnbiasedInterruptTime) / 0xA;
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v9, 113, v24, (v22 - UnbiasedInterruptTime) / 0xA);
  }
  v18 = 0;
LABEL_29:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq(v8, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE, v9, *(_QWORD *)(a1 + 8), v18);
  if ( v18 < 0 )
  {
    ++*(_DWORD *)(a1 + 480);
    *(_BYTE *)(a1 + 472) = 1;
  }
  return (unsigned int)v18;
}
