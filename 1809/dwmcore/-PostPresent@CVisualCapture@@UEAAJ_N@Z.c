/*
 * XREFs of ?PostPresent@CVisualCapture@@UEAAJ_N@Z @ 0x18001E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18001E20C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::PostPresent(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 64));
  if ( !*((_BYTE *)this + 385) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 536LL) + 104LL))(
      *(_QWORD *)(*((_QWORD *)this - 6) + 536LL),
      0LL,
      1024LL);
  return 0LL;
}
