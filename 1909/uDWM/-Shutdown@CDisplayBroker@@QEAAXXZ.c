/*
 * XREFs of ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x180080330
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplayBroker::Shutdown(CDisplayBroker *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v3 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      *(_QWORD *)this = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
}
