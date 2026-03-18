/*
 * XREFs of ?EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008B910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *))(*(_QWORD *)this + 248LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 296LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 264LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 280LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 288LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 272LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CDesktopTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 304LL))(
             this,
             a2) != 0;
  }
  return v4;
}
