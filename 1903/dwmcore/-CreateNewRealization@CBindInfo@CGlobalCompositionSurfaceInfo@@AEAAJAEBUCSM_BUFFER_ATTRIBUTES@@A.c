/*
 * XREFs of ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18003D8C4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x18003D624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x18025CCE4 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18003CFD0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x18003DA00 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18003DDE4 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180256490 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CGlobalCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x18025CFD0 (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CGlobalCompositionSurfaceInfo@@AEBAPEAVCDxHandleY.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180263298 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180263B18 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180263C10 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CBitmapRealization **a4)
{
  __int64 v6; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int *v12; // r8
  int SubResourceRealization; // eax
  unsigned int v14; // ecx
  int v16; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+20h] [rbp-79h]
  HGDIOBJ ho; // [rsp+30h] [rbp-69h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-61h] BYREF
  int *v24; // [rsp+50h] [rbp-49h] BYREF
  int v25; // [rsp+58h] [rbp-41h] BYREF

  hObject[0] = 0LL;
  *a4 = 0LL;
  v6 = *(_QWORD *)this;
  ho = 0LL;
  hObject[1] = 0LL;
  hObject[2] = 0LL;
  v9 = NtOpenCompositionSurfaceDirtyRegion(*(_QWORD *)(v6 + 32), (char *)this + 8, a3, &ho);
  v10 = (__int64)ho;
  if ( v9 < 0 )
    v10 = 1LL;
  ho = (HGDIOBJ)v10;
  if ( *(_DWORD *)a3 == 1 )
  {
    v18 = NtOpenCompositionSurfaceSectionInfo(
            *(_QWORD *)(*(_QWORD *)this + 32LL),
            (char *)this + 8,
            (char *)a3 + 8,
            hObject);
    if ( v18 < 0 )
    {
      v11 = v18 | 0x10000000;
      v21 = 1541;
      goto LABEL_18;
    }
    v19 = CSectionBitmapRealization::Create(a2, a3, (const struct CSM_SYSMEM_SECTION_INFO *)hObject, a4);
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802D5138, 2u, v19, 0x60Bu, 0LL);
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
      v21 = 1571;
      goto LABEL_19;
    }
    v14 = *(_DWORD *)a3 - 3;
    if ( *(_DWORD *)a3 == 3 )
    {
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create(a2, a3, a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v21 = 1580;
        goto LABEL_19;
      }
    }
    else
    {
      if ( *(_DWORD *)a3 != 4 )
      {
        v11 = -2147024809;
        v21 = 1621;
LABEL_18:
        v16 = v11;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802D5138, 2u, v16, v21, 0LL);
        goto LABEL_11;
      }
      PrimaryYUVBitmapRealizationNoRef = CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef(this);
      if ( *((_DWORD *)a3 + 6) )
      {
        if ( !PrimaryYUVBitmapRealizationNoRef )
        {
          v11 = -2003292412;
          v21 = 1614;
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
          v21 = 1610;
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
          v21 = 1596;
LABEL_19:
          v16 = SubResourceRealization;
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
      v25 = 0;
      v24 = &v25;
      CRegion::SetHRGN((CRegion *)&v24, (HRGN)ho, v12);
      (*(void (__fastcall **)(char *, int **))(*((_QWORD *)*a4 + 18) + 120LL))((char *)*a4 + 144, &v24);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v24);
    }
  }
LABEL_11:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v11;
}
