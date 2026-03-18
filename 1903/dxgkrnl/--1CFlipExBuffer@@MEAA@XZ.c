/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000FC24
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C000FBE0 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 *     ??_GCCompositionSwapchainBuffer@@MEAAPEAXI@Z @ 0x1C005D350 (--_GCCompositionSwapchainBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C0012730 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C00127C8 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C00127F0 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001CEF4 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C012EFA8 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  v1 = *((_DWORD *)this + 88) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  v3 = *((_QWORD *)this + 40);
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 39);
    if ( v6 )
      DxgkImmediateSignalSynchronizationObjectByReference(v6, v3);
  }
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this);
  v4 = (void *)*((_QWORD *)this + 37);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = (void *)*((_QWORD *)this + 39);
  if ( v5 )
    ObfDereferenceObject(v5);
  CCompositionBuffer::~CCompositionBuffer(this);
}
