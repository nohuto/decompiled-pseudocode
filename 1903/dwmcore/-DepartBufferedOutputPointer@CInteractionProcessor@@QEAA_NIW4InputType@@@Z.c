/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x180231888
 * Callers:
 *     ?DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z @ 0x1801D6EC0 (-DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z @ 0x18023C530 (-DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1802319B0 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::DepartBufferedOutputPointer(__int64 a1, unsigned int a2)
{
  char v3; // si
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  CInteractionProcessor::GetInteractionContext(a1);
  if ( v6 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 128LL))(v6, a2);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  return v3;
}
