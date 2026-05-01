/*
 * XREFs of ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x1800732C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetPresentationLayer(CImmersiveApp *this, struct IApplicationPresentationLayer **a2)
{
  struct IApplicationPresentationLayer *v2; // rbx

  v2 = (struct IApplicationPresentationLayer *)*((_QWORD *)this + 38);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 38));
  *a2 = v2;
  return 0LL;
}
