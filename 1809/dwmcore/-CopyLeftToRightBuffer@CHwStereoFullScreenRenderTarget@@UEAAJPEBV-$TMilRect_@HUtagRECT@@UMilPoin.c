/*
 * XREFs of ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180206DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18005B20C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180068F08 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180090558 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     McTemplateU0x @ 0x180149D54 (McTemplateU0x.c)
 *     McTemplateU0dddd @ 0x180207638 (McTemplateU0dddd.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyLeftToRightBuffer(__int64 a1, struct tagPOINT a2, int *a3)
{
  int v4; // ebx
  unsigned int v5; // r13d
  LONG v6; // r9d
  LONG v7; // esi
  LONG v8; // r8d
  LONG v9; // edi
  LONG v10; // r14d
  LONG v11; // r12d
  int v12; // ecx
  LONG v13; // eax
  bool v14; // zf
  bool v15; // sf
  LONG v16; // edx
  LONG v17; // r8d
  LONG v18; // r9d
  int v19; // edx
  LONG v20; // eax
  LONG v21; // ecx
  LONG v22; // r11d
  LONG v23; // eax
  LONG v24; // r8d
  LONG v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  FastRegion::Internal::CRgnData *v28; // rdx
  int v29; // r10d
  LONG v30; // r8d
  struct CD3DSurface *v31; // r9
  __int64 v32; // rcx
  LONG v33; // edx
  LONG v34; // eax
  CD3DDeviceLevel1 *v35; // rcx
  int v36; // edx
  FastRegion::Internal::CRgnData *v37; // rcx
  LONG bottom; // edi
  LONG right; // esi
  int v41; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v42; // [rsp+38h] [rbp-C8h] BYREF
  int *v43; // [rsp+40h] [rbp-C0h]
  struct tagRECT v44; // [rsp+48h] [rbp-B8h] BYREF
  void *v45[2]; // [rsp+60h] [rbp-A0h] BYREF
  LONG *v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+80h] [rbp-80h]
  FastRegion::Internal::CRgnData *v49[10]; // [rsp+B0h] [rbp-50h] BYREF

  v43 = a3;
  v4 = 0;
  v42 = a2;
  v5 = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)(a1 - 584)) >= 0 )
  {
    v6 = *(_DWORD *)(a1 - 576);
    v7 = 0;
    v8 = *(_DWORD *)(a1 - 572);
    v9 = 0;
    v10 = v6;
    v44.left = 0;
    v11 = v8;
    v44.top = 0;
    v44.right = v6;
    v44.bottom = v8;
    if ( v42 )
    {
      v12 = *(_DWORD *)v42.x;
      v13 = *(_DWORD *)(*(_QWORD *)&v42 + 8LL);
      if ( *(int *)v42.x > 0 )
        v7 = *(_DWORD *)v42.x;
      if ( v12 <= 0 )
        v12 = 0;
      v14 = *(_DWORD *)(*(_QWORD *)&v42 + 4LL) == 0;
      v15 = *(int *)(*(_QWORD *)&v42 + 4LL) < 0;
      v44.left = v7;
      if ( !v15 && !v14 )
        v9 = *(_DWORD *)(*(_QWORD *)&v42 + 4LL);
      v16 = *(_DWORD *)(*(_QWORD *)&v42 + 12LL);
      if ( v13 < v6 )
        v10 = v13;
      v44.top = v9;
      if ( v13 >= v6 )
        v13 = v6;
      v44.right = v10;
      if ( v16 < v8 )
        v11 = v16;
      v44.bottom = v11;
      if ( v13 <= v12 )
        goto LABEL_19;
      if ( v16 >= v8 )
        v16 = v8;
      if ( v16 <= v9 )
      {
LABEL_19:
        v11 = 0;
        *(_QWORD *)&v44.right = 0LL;
        v10 = 0;
        *(_QWORD *)&v44.left = 0LL;
        v9 = 0;
        v7 = 0;
      }
    }
    if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v44) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v49, &v44);
      v17 = *(_DWORD *)(a1 - 576);
      v18 = *(_DWORD *)(a1 - 572);
      *(_QWORD *)&v44.left = 0LL;
      v44.right = v17;
      v44.bottom = v18;
      v41 = 0;
      if ( v43 )
      {
        v19 = *v43;
        v20 = 0;
        v21 = v43[2];
        v22 = 0;
        if ( *v43 > 0 )
          v20 = *v43;
        if ( v19 <= 0 )
          v19 = 0;
        v14 = v43[1] == 0;
        v15 = v43[1] < 0;
        v44.left = v20;
        v23 = v17;
        if ( !v15 && !v14 )
          v22 = v43[1];
        v44.top = v22;
        if ( v21 >= v17 )
          v21 = v17;
        else
          v23 = v21;
        v24 = v43[3];
        v44.right = v23;
        v25 = v18;
        if ( v24 < v18 )
          v25 = v24;
        v44.bottom = v25;
        if ( v21 <= v19 )
          goto LABEL_37;
        if ( v24 >= v18 )
          v24 = v18;
        if ( v24 <= v22 )
        {
LABEL_37:
          *(_QWORD *)&v44.right = 0LL;
          *(_QWORD *)&v44.left = 0LL;
        }
      }
      if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v44) )
      {
        if ( v7 >= v10 || v9 >= v11 )
        {
          *(_DWORD *)v49[0] = 0;
        }
        else
        {
          v28 = v49[0];
          *(_DWORD *)v49[0] = 2;
          *((_DWORD *)v28 + 1) = v7;
          *((_DWORD *)v28 + 2) = v10;
          *((_DWORD *)v28 + 3) = v9;
          *((_DWORD *)v28 + 4) = 16;
          *((_DWORD *)v28 + 7) = v7;
          *((_DWORD *)v28 + 8) = v10;
          *((_DWORD *)v28 + 5) = v11;
          *((_DWORD *)v28 + 6) = 16;
        }
      }
      else
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v45, &v44);
        v26 = FastRegion::CRegion::Subtract(v49, (const struct FastRegion::Internal::CRgnData **)v45);
        v5 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xF4u);
          FastRegion::CRegion::FreeMemory(v45);
LABEL_55:
          FastRegion::CRegion::FreeMemory((void **)v49);
          return v5;
        }
        FastRegion::CRegion::FreeMemory(v45);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Start,
          *(_QWORD *)(a1 + 40));
      FastRegion::Internal::CRgnData::BeginIterator(v49[0], (struct FastRegion::CRegion::Iterator *)v45);
      v29 = 0;
      while ( v46 < v45[1] )
      {
        v30 = *v46;
        v31 = *(struct CD3DSurface **)(a1 + 24);
        v44.bottom = v46[2];
        v44.top = v30;
        v32 = 2 * v48;
        v42.y = v30;
        v33 = *(_DWORD *)(v47 + 4 * v32);
        v34 = *(_DWORD *)(v47 + 4 * v32 + 4);
        v35 = *(CD3DDeviceLevel1 **)(a1 - 368);
        v44.right = v34;
        v44.left = v33;
        v42.x = v33;
        CD3DDeviceLevel1::CopySurfaceRect(v35, *(struct CD3DSurface **)(a1 + 16), &v44, v31, &v42, 1);
        bottom = v44.bottom;
        right = v44.right;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0dddd((_DWORD)v37, v36, v44.left, v44.top, v44.right, v44.bottom);
        ++v4;
        v41 += (right - v44.left) * (bottom - v44.top);
        FastRegion::Internal::CRgnData::StepIterator(v37, (struct FastRegion::CRegion::Iterator *)v45);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_COPYLEFTTORIGHTBUFFEREVENT_Stop,
          v4,
          v29);
      goto LABEL_55;
    }
  }
  return v5;
}
