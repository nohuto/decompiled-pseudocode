/*
 * XREFs of ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x180199D30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CKernelTransport *__fastcall CKernelTransport::`vector deleting destructor'(CKernelTransport *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CKernelTransport::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    NtDCompositionDestroyConnection();
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
