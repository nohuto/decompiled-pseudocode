/*
 * XREFs of ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EC234
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18003DE6C (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?UnpinResources@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x1800EC310 (-UnpinResources@CGlobalCompositionSurfaceInfo@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800A8B9C (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z @ 0x1800EA354 (-UnpinResources@CD3DDeviceLevel1@@QEAAXPEAPEAUIDXGIResource@@I@Z.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     ??$ReleaseInterfaceNoNULL@VIAdvancedDirectFlipBitmapRealization@@@@YAXPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x18015F804 (--$ReleaseInterfaceNoNULL@VIAdvancedDirectFlipBitmapRealization@@@@YAXPEAVIAdvancedDirectFlipBit.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x18016AE80 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _QWORD *v2; // rsi
  __int64 *v3; // r14
  __int64 i; // rdi

  if ( *((_BYTE *)this + 180) )
  {
    v2 = (_QWORD *)((char *)this + 216);
    v3 = (__int64 *)((char *)this + 208);
    CD3DDeviceLevel1::UnpinResources(
      *((CD3DDeviceLevel1 **)this + 26),
      *((struct IDXGIResource ***)this + 27),
      *((_DWORD *)this + 56));
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 56); i = (unsigned int)(i + 1) )
      ReleaseInterfaceNoNULL<IAdvancedDirectFlipBitmapRealization>(*(_QWORD *)(*v2 + 8 * i));
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(v2);
    *((_DWORD *)this + 56) = 0;
    *((_BYTE *)this + 180) = 0;
    ReleaseInterface<CD3DDeviceLevel1>(v3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_UNPINEVENT,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
}
