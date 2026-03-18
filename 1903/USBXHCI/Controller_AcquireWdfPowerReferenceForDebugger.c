/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C000D520
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C000F430 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0pt @ 0x1C0014364 (McTemplateK0pt.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 536) )
  {
    v2 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01023 + 3504))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           9980,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 536) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
        McTemplateK0pt(v4, v3, v5, a1, 1);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v2;
      WPP_RECORDER_SF_qd(a1[9], 2u, 4u, 0x103u, (__int64)&Context.Logger + 4, *a1, v6);
    }
  }
}
