/*
 * XREFs of ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x1801790F0
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801BCDF0 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsurePinnedResources(CDirectFlipInfo *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct _LUID v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
         *((_QWORD *)this + 2),
         &v8,
         0LL);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xF0u);
  }
  else if ( *((_DWORD *)this + 16) == 2 )
  {
    v5 = CCompositionSurfaceInfo::CBindInfo::PinResources(
           (CCompositionSurfaceInfo::CBindInfo *)(*((_QWORD *)this + 4) + 48LL),
           v8);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF4u);
    else
      *((_DWORD *)this + 16) = 3;
  }
  return v4;
}
