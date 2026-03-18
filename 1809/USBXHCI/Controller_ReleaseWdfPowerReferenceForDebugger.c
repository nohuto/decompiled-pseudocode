/*
 * XREFs of Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C000D880
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C000CF80 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005C760 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt @ 0x1C0011964 (McTemplateK0pt.c)
 */

__int64 __fastcall Controller_ReleaseWdfPowerReferenceForDebugger(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *(_BYTE *)(a1 + 472) )
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void (__fastcall *)(_QWORD *), __int64, const char *))(WdfFunctions_01023 + 3512))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)a1,
               Controller_AcquireWdfPowerReferenceForDebugger,
               9832LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    *(_BYTE *)(a1 + 472) = 0;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
      return McTemplateK0pt(v4, v3, v5, a1, 0);
  }
  return result;
}
