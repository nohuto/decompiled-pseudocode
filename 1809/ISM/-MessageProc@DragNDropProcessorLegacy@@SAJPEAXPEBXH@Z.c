/*
 * XREFs of ?MessageProc@DragNDropProcessorLegacy@@SAJPEAXPEBXH@Z @ 0x1800C88B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::MessageProc(_QWORD *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx

  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v6 = CoreUICallReceive(
         a1[9],
         &DragNDropMessageCall::IDragNDrop_Receive<DragNDropProcessorLegacy>::Type,
         &DragNDropMessageCall::Microsoft::CoreUI::MessageCall::DragNDrop_g_parameters_jYHm6nol5KPFMdp6PsnUiTGiODY,
         24LL,
         a1,
         a2,
         a3);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return v6;
}
