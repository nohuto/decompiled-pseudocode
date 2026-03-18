/*
 * XREFs of ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C006F7C0
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000B4F0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000B874 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C000DBD8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006D6C8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C006D990 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006ED8C (-EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C006F0E0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C006F5CC (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C006FF08 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C007003C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C009C0B8 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C01A4564 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C01A4B54 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1C01A4DF8 (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CEvent *__fastcall DirectComposition::CEvent::`scalar deleting destructor'(
        DirectComposition::CEvent *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool((__int64)this);
  return this;
}
