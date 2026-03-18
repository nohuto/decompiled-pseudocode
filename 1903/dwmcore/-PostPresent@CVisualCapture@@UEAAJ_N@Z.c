/*
 * XREFs of ?PostPresent@CVisualCapture@@UEAAJ_N@Z @ 0x1801FDBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FD61C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::PostPresent(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 64));
  if ( !*((_BYTE *)this + 377) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 552LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this - 6) + 552LL),
      0LL,
      1024LL);
  return 0LL;
}
