/*
 * XREFs of ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801BCDF0
 * Callers:
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800D51A0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x1801790F0 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x18017A0B4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x1801FCF3C (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::PinResources(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2)
{
  unsigned __int64 v2; // rbp
  CD3DDeviceLevel1 *v3; // rsi
  int v4; // edi
  CCompositionSurfaceInfo::CBindInfo *v5; // rbx
  LPVOID v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // r14
  int v10; // eax
  int D3DDevice; // eax
  __int64 v12; // rcx
  int v13; // r9d
  __int64 i; // rbp
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-28h]
  CD3DDeviceLevel1 *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 14);
  v3 = 0LL;
  v4 = 0;
  v18 = 0LL;
  v5 = this;
  if ( (_DWORD)v2 && a2 == *((_QWORD *)this + 15) )
  {
    if ( *((_BYTE *)this + 180) )
      return (unsigned int)v4;
    v6 = operator new(saturated_mul(v2, 8uLL));
    *((_QWORD *)v5 + 27) = v6;
    if ( v6 )
    {
      *((_DWORD *)v5 + 56) = 0;
      v8 = 0;
      v9 = 0LL;
      do
      {
        this = *(CCompositionSurfaceInfo::CBindInfo **)(v9 + *((_QWORD *)v5 + 4));
        if ( !*((_DWORD *)this + 74) )
        {
          v10 = (*(__int64 (__fastcall **)(CCompositionSurfaceInfo::CBindInfo *, __int64, _QWORD))(*(_QWORD *)this + 56LL))(
                  this,
                  *((_QWORD *)v5 + 27) + 8LL * *((unsigned int *)v5 + 56),
                  0LL);
          v4 = v10;
          if ( v10 < 0 )
          {
            v17 = 1315;
            goto LABEL_18;
          }
          if ( *(_QWORD *)(v9 + *((_QWORD *)v5 + 27)) )
            ++*((_DWORD *)v5 + 56);
        }
        ++v8;
        v9 += 8LL;
      }
      while ( v8 < (unsigned int)v2 );
      if ( *((_DWORD *)v5 + 56) )
      {
        D3DDevice = CD3DDeviceManager::GetD3DDevice(
                      (CD3DDeviceManager *)&g_D3DDeviceManager,
                      *(struct _LUID *)((char *)v5 + 120),
                      &v18);
        v4 = D3DDevice;
        if ( D3DDevice < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BCDD0, 2u, D3DDevice, 0x536u);
          v3 = v18;
          goto LABEL_24;
        }
        v3 = v18;
        v10 = CD3DDeviceLevel1::PinResources(v18, *((struct IDXGIResource ***)v5 + 27), *((_DWORD *)v5 + 56));
        v4 = v10;
        if ( v10 >= 0 )
        {
          *((_QWORD *)v5 + 26) = v3;
          v3 = 0LL;
          *((_BYTE *)v5 + 180) = 1;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0x(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
              (unsigned int)*(_QWORD *)(*(_QWORD *)v5 + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)v5 + 40LL)) << 32));
          goto LABEL_24;
        }
        v17 = 1338;
LABEL_18:
        v13 = v10;
        goto LABEL_23;
      }
      v4 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BCDD0, 2u, -2147467259, 0x530u);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BCDD0, 2u, -2147024882, 0x512u);
    }
  }
  else
  {
    v4 = -2003292412;
    v17 = 1350;
    v13 = -2003292412;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BCDD0, 2u, v13, v17);
LABEL_24:
    if ( v4 >= 0 )
      goto LABEL_31;
  }
  if ( *((_QWORD *)v5 + 27) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 56); i = (unsigned int)(i + 1) )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v5 + 27) + 8 * i);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)v5 + 27);
    *((_DWORD *)v5 + 56) = 0;
  }
LABEL_31:
  if ( v3 )
    CD3DSurface::Release((CD3DDeviceLevel1 *)((char *)v3 + 496));
  return (unsigned int)v4;
}
