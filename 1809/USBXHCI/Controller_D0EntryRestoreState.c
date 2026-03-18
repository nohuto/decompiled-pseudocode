/*
 * XREFs of Controller_D0EntryRestoreState @ 0x1C000B688
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0011608 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00117C8 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_I @ 0x1C0011CDC (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int16 Ulong; // ax
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  ULONGLONG UnbiasedInterruptTime; // r14
  int v13; // eax
  __int16 v14; // ax
  ULONGLONG v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // r8d
  ULONGLONG v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r8d
  int v21; // edi
  ULONGLONG v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // r8d
  int v26; // [rsp+20h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3543LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x69u, (__int64)&Context.Logger + 4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(v2, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, v3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = v5 + 4;
  Ulong = XilRegister_ReadUlong(v4, v5 + 4);
  if ( (Ulong & 1) == 0 )
  {
    v8 = 106;
LABEL_8:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, v8, (__int64)&Context.Logger + 4);
    goto LABEL_21;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    v8 = 107;
    goto LABEL_8;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    v8 = 108;
    goto LABEL_8;
  }
  v11 = 20;
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x6Du, (__int64)&Context.Logger + 4);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v13 | 0x200u);
  while ( 1 )
  {
    v14 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
    if ( (v14 & 0x400) != 0 )
      break;
    if ( (v14 & 0x200) == 0 )
    {
      v18 = KeQueryUnbiasedInterruptTime();
      v19 = (v18 - UnbiasedInterruptTime) / 0xA;
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v19, v20, 111, v26, (v18 - UnbiasedInterruptTime) / 0xA);
      v21 = 0;
      goto LABEL_22;
    }
    if ( !v11 )
    {
      v15 = KeQueryUnbiasedInterruptTime();
      v16 = (v15 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v16, v17, 112, v26, (v15 - UnbiasedInterruptTime) / 0x2710);
      goto LABEL_21;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    --v11;
  }
  v22 = KeQueryUnbiasedInterruptTime();
  v23 = (v22 - UnbiasedInterruptTime) / 0x2710;
  LOBYTE(v23) = 2;
  WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v24, 110, v26, (v22 - UnbiasedInterruptTime) / 0x2710);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, 1024LL);
LABEL_21:
  v21 = -1073741630;
LABEL_22:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq(v9, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE, v10, *(_QWORD *)(a1 + 8), v21);
  if ( v21 < 0 )
    ++*(_DWORD *)(a1 + 412);
  return (unsigned int)v21;
}
