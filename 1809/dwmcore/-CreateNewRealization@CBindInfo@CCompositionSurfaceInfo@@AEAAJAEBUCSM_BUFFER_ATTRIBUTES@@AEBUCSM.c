/*
 * XREFs of ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180097B18
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180097870 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x1801BC3A8 (-CreateAndAddSingleBuffer@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180097C4C (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18009B1EC (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A5348 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x1801BC610 (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitm.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180226178 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180228090 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228918 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228A00 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        CCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  __int64 v5; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  int SubResourceRealization; // eax
  unsigned int v13; // ecx
  int v15; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+20h] [rbp-69h]
  HGDIOBJ ho; // [rsp+30h] [rbp-59h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-51h] BYREF
  int *v23; // [rsp+50h] [rbp-39h] BYREF
  int v24; // [rsp+58h] [rbp-31h] BYREF

  ho = 0LL;
  *a4 = 0LL;
  v5 = *(_QWORD *)this;
  memset(hObject, 0, sizeof(hObject));
  v9 = NtOpenCompositionSurfaceDirtyRegion(*(_QWORD *)(v5 + 32), (char *)this + 8, a3, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  if ( *(_DWORD *)a3 == 1 )
  {
    v17 = NtOpenCompositionSurfaceSectionInfo(
            *(_QWORD *)(*(_QWORD *)this + 32LL),
            (char *)this + 8,
            (char *)a3 + 8,
            hObject);
    if ( v17 < 0 )
    {
      v11 = v17 | 0x10000000;
      v20 = 1614;
      goto LABEL_18;
    }
    v18 = CSectionBitmapRealization::Create(a2, a3, (const struct CSM_SYSMEM_SECTION_INFO *)hObject, a4);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_18029B800, 2u, v18, 0x654u);
      CloseHandle(hObject[0]);
      goto LABEL_11;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 == 2 )
    {
      v11 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
              *((unsigned int *)this + 4),
              a2,
              a3,
              *(_QWORD *)(*(_QWORD *)this + 40LL),
              a4);
      if ( v11 >= 0 )
        goto LABEL_7;
      SubResourceRealization = CDxHandleBitmapRealization::Create(
                                 *((unsigned int *)this + 4),
                                 a2,
                                 a3,
                                 *((_QWORD *)this + 20),
                                 a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization >= 0 )
        goto LABEL_7;
      v20 = 1644;
      goto LABEL_19;
    }
    v13 = *(_DWORD *)a3 - 3;
    if ( *(_DWORD *)a3 == 3 )
    {
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create(a2, a3, a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v20 = 1653;
        goto LABEL_19;
      }
    }
    else
    {
      if ( *(_DWORD *)a3 != 4 )
      {
        v11 = -2147024809;
        v20 = 1694;
LABEL_18:
        v15 = v11;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18029B800, 2u, v15, v20);
        goto LABEL_11;
      }
      PrimaryYUVBitmapRealizationNoRef = CCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef(this);
      if ( *((_DWORD *)a3 + 6) )
      {
        if ( !PrimaryYUVBitmapRealizationNoRef )
        {
          v11 = -2003292412;
          v20 = 1687;
          goto LABEL_18;
        }
        SubResourceRealization = CDxHandleYUVBitmapRealization::CreateSubResourceRealization(
                                   PrimaryYUVBitmapRealizationNoRef,
                                   a2,
                                   a3,
                                   *((struct CDecodeBitmap **)this + 20),
                                   a4);
        v11 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v20 = 1683;
          goto LABEL_19;
        }
      }
      else
      {
        SubResourceRealization = CDxHandleYUVBitmapRealization::Create(
                                   a2,
                                   a3,
                                   *((struct CDecodeBitmap **)this + 20),
                                   a4);
        v11 = SubResourceRealization;
        if ( SubResourceRealization < 0 )
        {
          v20 = 1669;
LABEL_19:
          v15 = SubResourceRealization;
          goto LABEL_20;
        }
      }
    }
  }
LABEL_7:
  if ( !ho )
    return (unsigned int)v11;
  if ( *a4 )
  {
    if ( ho == (HGDIOBJ)1 )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)*a4 + 18) + 128LL))((char *)*a4 + 144);
    }
    else
    {
      v24 = 0;
      v23 = &v24;
      CRegion::SetHRGN((CRegion *)&v23, (HRGN)ho);
      (*(void (__fastcall **)(char *, int **))(*((_QWORD *)*a4 + 18) + 120LL))((char *)*a4 + 144, &v23);
      FastRegion::CRegion::FreeMemory((void **)&v23);
    }
  }
LABEL_11:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v11;
}
