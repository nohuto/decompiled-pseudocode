/*
 * XREFs of ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18025BE80
 * Callers:
 *     ?PinResources@CGlobalCompositionSurfaceInfo@@UEAAJU_LUID@@@Z @ 0x18025C140 (-PinResources@CGlobalCompositionSurfaceInfo@@UEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015C780 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 *     McTemplateU0x @ 0x18015D5EC (McTemplateU0x.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x180169790 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2)
{
  unsigned __int64 v2; // rbp
  CGlobalCompositionSurfaceInfo::CBindInfo *v3; // rbx
  int v4; // edi
  CD3DDeviceLevel1 *v5; // rsi
  LPVOID v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // r14
  int v10; // eax
  signed int D3DDevice; // eax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  unsigned int i; // ebp
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CD3DDeviceLevel1 *v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 14);
  v18 = 0LL;
  v3 = this;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)v2 && a2 == *((_QWORD *)this + 15) )
  {
    if ( *((_BYTE *)this + 180) )
      return (unsigned int)v4;
    v6 = operator new(saturated_mul(v2, 8uLL));
    *((_QWORD *)v3 + 27) = v6;
    if ( v6 )
    {
      *((_DWORD *)v3 + 56) = 0;
      v8 = 0;
      v9 = 0LL;
      do
      {
        this = *(CGlobalCompositionSurfaceInfo::CBindInfo **)(v9 + *((_QWORD *)v3 + 4));
        if ( !*((_DWORD *)this + 74) )
        {
          v10 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo::CBindInfo *, __int64, _QWORD))(*(_QWORD *)this + 56LL))(
                  this,
                  *((_QWORD *)v3 + 27) + 8LL * *((unsigned int *)v3 + 56),
                  0LL);
          v4 = v10;
          if ( v10 < 0 )
          {
            v17 = 1246;
            goto LABEL_18;
          }
          if ( *(_QWORD *)(v9 + *((_QWORD *)v3 + 27)) )
            ++*((_DWORD *)v3 + 56);
        }
        ++v8;
        v9 += 8LL;
      }
      while ( v8 < (unsigned int)v2 );
      if ( *((_DWORD *)v3 + 56) )
      {
        D3DDevice = CD3DDeviceManager::GetD3DDevice(
                      (CD3DDeviceManager *)&g_D3DDeviceManager,
                      *(struct _LUID *)((char *)v3 + 120),
                      &v18);
        v4 = D3DDevice;
        if ( D3DDevice < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180312648, 2u, D3DDevice, 0x4F1u, 0LL);
          v5 = v18;
          goto LABEL_24;
        }
        v5 = v18;
        v10 = CD3DDeviceLevel1::PinResources(v18, *((struct IDXGIResource ***)v3 + 27), *((_DWORD *)v3 + 56));
        v4 = v10;
        if ( v10 >= 0 )
        {
          *((_QWORD *)v3 + 26) = v5;
          v5 = 0LL;
          *((_BYTE *)v3 + 180) = 1;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0x(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
              *(unsigned int *)(*(_QWORD *)v3 + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)v3 + 40LL)) << 32));
          goto LABEL_24;
        }
        v17 = 1269;
LABEL_18:
        v13 = v10;
        goto LABEL_23;
      }
      v4 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180312648, 2u, 0x80004005, 0x4EBu, 0LL);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180312648, 2u, 0x8007000E, 0x4CDu, 0LL);
    }
  }
  else
  {
    v4 = -2003292412;
    v13 = -2003292412;
    v17 = 1281;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180312648, 2u, v13, v17, 0LL);
LABEL_24:
    if ( v4 >= 0 )
      goto LABEL_31;
  }
  if ( *((_QWORD *)v3 + 27) )
  {
    for ( i = 0; i < *((_DWORD *)v3 + 56); ++i )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v3 + 27) + 8LL * i);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)v3 + 27);
    *((_DWORD *)v3 + 56) = 0;
  }
LABEL_31:
  if ( v5 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v5 + 496));
  return (unsigned int)v4;
}
