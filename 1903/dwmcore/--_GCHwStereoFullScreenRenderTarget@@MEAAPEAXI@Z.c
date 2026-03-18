/*
 * XREFs of ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18015FA50
 * Callers:
 *     ??_ECHwStereoFullScreenRenderTarget@@OGA@EAAPEAXI@Z @ 0x1800EC740 (--_ECHwStereoFullScreenRenderTarget@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800B5930 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x180166B98 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
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
