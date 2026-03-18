/*
 * XREFs of ?PostPresent@COverlayRenderTargetEngine@@UEAAJ_N@Z @ 0x1801A4CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::PostPresent(COverlayRenderTargetEngine *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return 0LL;
}
