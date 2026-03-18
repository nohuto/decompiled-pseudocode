/*
 * XREFs of ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180166500
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800B1EC0 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800B85F0 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     McTemplateU0dddd @ 0x180166D18 (McTemplateU0dddd.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyLeftToRightBuffer(__int64 a1, struct tagPOINT a2, _DWORD *a3)
{
  int v4; // ebx
  unsigned int v5; // r13d
  LONG left; // esi
  LONG right; // r14d
  LONG top; // r15d
  LONG bottom; // r12d
  signed int v10; // eax
  __int64 v11; // rcx
  FastRegion::Internal::CRgnData *v12; // rdx
  int v13; // r10d
  LONG v14; // r8d
  struct CD3DSurface *v15; // r9
  __int64 v16; // rcx
  LONG v17; // edx
  LONG v18; // eax
  CD3DDeviceLevel1 *v19; // rcx
  int v20; // edx
  FastRegion::Internal::CRgnData *v21; // rcx
  LONG v22; // esi
  LONG v23; // r14d
  int v25; // [rsp+38h] [rbp-D0h]
  struct tagPOINT v26; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-C0h]
  struct tagRECT v28; // [rsp+50h] [rbp-B8h] BYREF
  void *v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  LONG *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+88h] [rbp-80h]
  FastRegion::Internal::CRgnData *v33[10]; // [rsp+B8h] [rbp-50h] BYREF

  v27 = a3;
  v4 = 0;
  v26 = a2;
  v5 = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)(a1 - 520)) >= 0 )
  {
    left = 0;
    right = *(_DWORD *)(a1 - 512);
    top = 0;
    bottom = *(_DWORD *)(a1 - 508);
    *(_QWORD *)&v28.left = 0LL;
    v28.right = right;
    v28.bottom = bottom;
    if ( v26 )
    {
      TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v28, *(_DWORD **)&v26);
      bottom = v28.bottom;
      right = v28.right;
      top = v28.top;
      left = v28.left;
    }
    if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v28) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v33, &v28);
      v28.right = *(_DWORD *)(a1 - 512);
      v28.bottom = *(_DWORD *)(a1 - 508);
      *(_QWORD *)&v28.left = 0LL;
      v25 = 0;
      if ( v27 )
        TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v28, v27);
      if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v28) )
      {
        if ( left >= right || top >= bottom )
        {
          *(_DWORD *)v33[0] = 0;
        }
        else
        {
          v12 = v33[0];
          *(_DWORD *)v33[0] = 2;
          *((_DWORD *)v12 + 1) = left;
          *((_DWORD *)v12 + 2) = right;
          *((_DWORD *)v12 + 3) = top;
          *((_DWORD *)v12 + 4) = 16;
          *((_DWORD *)v12 + 7) = left;
          *((_DWORD *)v12 + 8) = right;
          *((_DWORD *)v12 + 5) = bottom;
          *((_DWORD *)v12 + 6) = 16;
        }
      }
      else
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v29, &v28);
        v10 = FastRegion::CRegion::Subtract(v33, (const struct FastRegion::Internal::CRgnData **)v29);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF2u, 0LL);
          FastRegion::CRegion::FreeMemory(v29);
LABEL_24:
          FastRegion::CRegion::FreeMemory((void **)v33);
          return v5;
        }
        FastRegion::CRegion::FreeMemory(v29);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Start,
          *(_QWORD *)(a1 + 40));
      FastRegion::Internal::CRgnData::BeginIterator(v33[0], (struct FastRegion::CRegion::Iterator *)v29);
      v13 = 0;
      while ( v30 < v29[1] )
      {
        v14 = *v30;
        v15 = *(struct CD3DSurface **)(a1 + 24);
        v28.bottom = v30[2];
        v28.top = v14;
        v16 = 2 * v32;
        v26.y = v14;
        v17 = *(_DWORD *)(v31 + 4 * v16);
        v18 = *(_DWORD *)(v31 + 4 * v16 + 4);
        v19 = *(CD3DDeviceLevel1 **)(a1 - 368);
        v28.right = v18;
        v28.left = v17;
        v26.x = v17;
        CD3DDeviceLevel1::CopySurfaceRect(v19, *(struct CD3DSurface **)(a1 + 16), &v28, v15, &v26, 1);
        v22 = v28.bottom;
        v23 = v28.right;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0dddd((_DWORD)v21, v20, v28.left, v28.top, v28.right, v28.bottom);
        ++v4;
        v25 += (v23 - v28.left) * (v22 - v28.top);
        FastRegion::Internal::CRgnData::StepIterator(v21, (struct FastRegion::CRegion::Iterator *)v29);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Stop,
          v4,
          v13);
      goto LABEL_24;
    }
  }
  return v5;
}
