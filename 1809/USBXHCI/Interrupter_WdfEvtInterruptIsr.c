/*
 * XREFs of Interrupter_WdfEvtInterruptIsr @ 0x1C001C080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_CheckForFrameOverlowEventFromIsr @ 0x1C000B58C (Controller_CheckForFrameOverlowEventFromIsr.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C001B040 (Interrupter_DeferToDpcOrWorkItem.c)
 *     McTemplateK0q @ 0x1C001C188 (McTemplateK0q.c)
 */

char __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  int v9; // eax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F2E8);
  v7 = v4;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q(v5, &USBXHCI_ETW_EVENT_INTERRUPT_V1, v6, *(unsigned int *)(v4 + 32));
  Controller_CheckForFrameOverlowEventFromIsr(*(_QWORD *)(v7 + 8));
  if ( a2 || (*(_DWORD *)(v7 + 96) & 1) != 0 )
    goto LABEL_4;
  v9 = **(_DWORD **)(v7 + 24);
  if ( (v9 & 1) != 0 )
  {
    **(_DWORD **)(v7 + 24) = v9;
    _InterlockedOr(v10, 0);
LABEL_4:
    ++*(_DWORD *)(v7 + 40);
    Interrupter_DeferToDpcOrWorkItem(a1);
    return 1;
  }
  return 0;
}
