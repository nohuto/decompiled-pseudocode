/*
 * XREFs of ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18015E360
 * Callers:
 *     ??_ECHwStereoFullScreenRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800F0400 (--_ECHwStereoFullScreenRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800DA43C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801654A8 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

CHwStereoFullScreenRenderTarget *__fastcall CHwStereoFullScreenRenderTarget::`scalar deleting destructor'(
        CHwStereoFullScreenRenderTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 12) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 18) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *((_QWORD *)this + 65) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState(this);
  v5 = *(_QWORD *)(v4 + 544);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
