/*
 * XREFs of ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180023844
 * Callers:
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180023580 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ @ 0x180022850 (-Optimize@-$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@QEAAXXZ @ 0x180022940 (-Optimize@-$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@QEAAXXZ.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ @ 0x180022A50 (-Optimize@-$ShrinkableReferenceArray@PEAVCDrawListEntryBatch@@@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 */

__int64 __fastcall CD2DContext::EndDraw(CD2DContext *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // edi
  int v5; // eax

  if ( *((_BYTE *)this + 492) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 29) + 392LL))(
           *((_QWORD *)this + 29),
           0LL,
           0LL);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x8B3u);
    *((_WORD *)this + 246) = 0;
    v5 = *((_DWORD *)this + 49);
    if ( !v5 )
    {
      *((_DWORD *)this + 49) = 512;
      ShrinkableReferenceArray<CBaseDrawListEntry *>::Optimize((__int64)this + 8);
      ShrinkableReferenceArray<CGroupDrawListEntry *>::Optimize((__int64)this + 48);
      ShrinkableReferenceArray<CGroupDrawListEntry *>::Optimize((__int64)this + 88);
      ShrinkableReferenceArray<CDrawListEntryBatch *>::Optimize((__int64)this + 128);
      v5 = *((_DWORD *)this + 49);
    }
    *((_DWORD *)this + 49) = v5 - 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
  }
  else
  {
    v4 = *((_DWORD *)this + 212);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v4, 0x8C0u);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v4, 0LL);
}
