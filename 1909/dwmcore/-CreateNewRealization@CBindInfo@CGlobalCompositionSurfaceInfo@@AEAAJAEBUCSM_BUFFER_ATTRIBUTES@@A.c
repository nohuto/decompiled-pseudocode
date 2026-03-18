/*
 * XREFs of ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180052908
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1800525E0 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x18025B424 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x180052880 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHW4CompositionBufferType@@AEBUCSM_BUFFER.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180052C68 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180061E70 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180254D20 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CGlobalCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x18025B710 (-GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CGlobalCompositionSurfaceInfo@@AEBAPEAVCDxHandleY.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1802619D8 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180262258 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180262350 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
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
  int SubResourceRealization; // eax
  unsigned int v13; // ecx
  int v15; // r9d
  CDxHandleYUVBitmapRealization *PrimaryYUVBitmapRealizationNoRef; // rax
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+20h] [rbp-79h]
  HGDIOBJ ho; // [rsp+30h] [rbp-69h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-61h] BYREF
  int *v23; // [rsp+50h] [rbp-49h] BYREF
  int v24; // [rsp+58h] [rbp-41h] BYREF

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
    v17 = NtOpenCompositionSurfaceSectionInfo(
            *(_QWORD *)(*(_QWORD *)this + 32LL),
            (char *)this + 8,
            (char *)a3 + 8,
            hObject);
    if ( v17 < 0 )
    {
      v11 = v17 | 0x10000000;
      v20 = 1541;
      goto LABEL_18;
    }
    v18 = CSectionBitmapRealization::Create(a2, a3, (const struct CSM_SYSMEM_SECTION_INFO *)hObject, a4);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802D3278, 2u, v18, 0x60Bu, 0LL);
      CloseHandle(hObject[0]);
      goto LABEL_11;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 == 2 )
    {
      v11 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
              *((_DWORD *)this + 4),
              (__int64)a2,
              (__int64)a3,
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
      v20 = 1571;
      goto LABEL_19;
    }
    v13 = *(_DWORD *)a3 - 3;
    if ( *(_DWORD *)a3 == 3 )
    {
      SubResourceRealization = CDxHandleStereoBitmapRealization::Create(a2, a3, a4);
      v11 = SubResourceRealization;
      if ( SubResourceRealization < 0 )
      {
        v20 = 1580;
        goto LABEL_19;
      }
    }
    else
    {
      if ( *(_DWORD *)a3 != 4 )
      {
        v11 = -2147024809;
        v20 = 1621;
LABEL_18:
        v15 = v11;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802D3278, 2u, v15, v20, 0LL);
        goto LABEL_11;
      }
      PrimaryYUVBitmapRealizationNoRef = CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef(this);
      if ( *((_DWORD *)a3 + 6) )
      {
        if ( !PrimaryYUVBitmapRealizationNoRef )
        {
          v11 = -2003292412;
          v20 = 1614;
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
          v20 = 1610;
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
          v20 = 1596;
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
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v23);
    }
  }
LABEL_11:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return (unsigned int)v11;
}
