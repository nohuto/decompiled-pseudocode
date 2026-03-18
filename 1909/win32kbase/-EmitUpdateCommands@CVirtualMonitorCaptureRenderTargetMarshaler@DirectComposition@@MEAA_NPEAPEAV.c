/*
 * XREFs of ?EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BD180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BCA00 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(this, a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 248LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 264LL))(
             this,
             a2) != 0;
  }
  return v4;
}
