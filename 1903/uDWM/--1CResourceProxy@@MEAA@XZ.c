/*
 * XREFs of ??1CResourceProxy@@MEAA@XZ @ 0x180016A78
 * Callers:
 *     ??_ECRectangleGeometryProxy@@MEAAPEAXI@Z @ 0x180038090 (--_ECRectangleGeometryProxy@@MEAAPEAXI@Z.c)
 *     ??_ECTranslateTransformProxy@@MEAAPEAXI@Z @ 0x180038C70 (--_ECTranslateTransformProxy@@MEAAPEAXI@Z.c)
 *     ??_GCWindowNodeProxy@@MEAAPEAXI@Z @ 0x180039930 (--_GCWindowNodeProxy@@MEAAPEAXI@Z.c)
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18003DB84 (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ??_GCResourceProxy@@MEAAPEAXI@Z @ 0x18008B120 (--_GCResourceProxy@@MEAAPEAXI@Z.c)
 *     ??_GCRemotingRenderTargetProxy@@MEAAPEAXI@Z @ 0x1800B6520 (--_GCRemotingRenderTargetProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResourceProxy::~CResourceProxy(CResourceProxy *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CResourceProxy::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
