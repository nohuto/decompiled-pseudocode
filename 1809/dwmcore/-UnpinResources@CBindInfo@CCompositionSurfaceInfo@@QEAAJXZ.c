/*
 * XREFs of ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801BD35C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180069400 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x1800A139C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D51A0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800D7DB8 (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007EE40 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x18017A0B4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x1801FD46C (-UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::UnpinResources(CCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // esi
  void **v3; // r14
  __int64 *v4; // r15
  int v5; // eax
  __int64 v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 180) )
  {
    v3 = (void **)((char *)this + 216);
    v4 = (__int64 *)((char *)this + 208);
    v5 = CD3DDeviceLevel1::UnpinResources(
           *((CD3DDeviceLevel1 **)this + 26),
           *((struct IDXGIResource ***)this + 27),
           *((_DWORD *)this + 56));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802BC238, 1u, v5, 0x56Cu);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 56); i = (unsigned int)(i + 1) )
    {
      v8 = *((_QWORD *)*v3 + i);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(v3);
    *((_DWORD *)this + 56) = 0;
    *((_BYTE *)this + 180) = 0;
    ReleaseInterface<CD3DDeviceLevel1>(v4);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_UNPINEVENT,
        (unsigned int)*(_QWORD *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
  return v1;
}
