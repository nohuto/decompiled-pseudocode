/*
 * XREFs of ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001BAEC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CDXGIEnumeration@@QEBA?AU_LUID@@I@Z @ 0x1800264A4 (-GetAdapterLuid@CDXGIEnumeration@@QEBA-AU_LUID@@I@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??9@YA_NAEBU_LUID@@0@Z @ 0x180027C74 (--9@YA_NAEBU_LUID@@0@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAJPEFBQEAVIDeviceResourceNotify@@I@Z @ 0x1800C3598 (-AddMultipleAndSet@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAJPEFBQEAVIDeviceResourceNotif.c)
 *     ??$?9VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800EBEAC (--$-9VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VCD3DDeviceLevel1@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A948 (--1-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??I?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCD3DDeviceLevel1@@XZ @ 0x18016A9F4 (--I-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCD3DDeviceLevel1@.c)
 *     ??$?8VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x180179F80 (--$-8VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VCD3DDeviceLevel1@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18017AD70 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CAX_NW4Rep.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017B188 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18017B1AC (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x18023DDA0 (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSceneResourceManager::EnsureSceneCompositor(CSceneResourceManager *this)
{
  __int64 v1; // r13
  unsigned int v3; // ebx
  HMODULE *v4; // r12
  HMODULE v5; // rcx
  HMODULE LibraryW; // rax
  CDisplayManager *v7; // rcx
  FARPROC ProcAddress; // rsi
  signed int CurrentDisplaySet; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  CDXGIEnumeration *v12; // r10
  unsigned int v13; // r8d
  _DWORD *AdapterLuid; // rax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  struct _LUID *v17; // rbx
  __int64 *v18; // rax
  signed int D3DDevice; // eax
  __int64 v20; // rcx
  __int64 *v21; // rax
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  signed int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // r15
  unsigned __int64 v33; // rsi
  __int64 v35; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-18h]
  unsigned int v37; // [rsp+3Ch] [rbp-14h]
  unsigned int v38; // [rsp+40h] [rbp-10h]
  float v39; // [rsp+44h] [rbp-Ch]
  unsigned int v40; // [rsp+48h] [rbp-8h]
  bool v41; // [rsp+4Ch] [rbp-4h]
  bool v42; // [rsp+4Dh] [rbp-3h]
  bool v43; // [rsp+4Eh] [rbp-2h]
  bool v44; // [rsp+4Fh] [rbp-1h]
  struct CD3DDeviceLevel1 *v45; // [rsp+98h] [rbp+48h] BYREF
  struct _LUID v46; // [rsp+A0h] [rbp+50h] BYREF
  CDisplaySet *v47; // [rsp+A8h] [rbp+58h] BYREF

  v1 = 0LL;
  v3 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::ReportUsageToService();
  if ( !*((_BYTE *)this + 72) )
  {
    v4 = (HMODULE *)((char *)this + 16);
    v5 = (HMODULE)*((_QWORD *)this + 2);
    if ( !v5 )
    {
      LibraryW = LoadLibraryW(L"DwmScene.dll");
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        (char *)this + 16,
        LibraryW);
      v5 = *v4;
      if ( !*v4 )
      {
        *((_BYTE *)this + 72) = 1;
        return v3;
      }
    }
    if ( *((_QWORD *)this + 3) )
      return v3;
    ProcAddress = GetProcAddress(v5, "CreateDwmSceneRenderer");
    if ( !ProcAddress )
    {
      v3 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, 0x8000FFFF, 0x58u, 0LL);
      goto LABEL_36;
    }
    v47 = 0LL;
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v7, &v47);
    v3 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CurrentDisplaySet, 0x5Cu, 0LL);
LABEL_35:
      if ( (v3 & 0x80000000) == 0 )
        return v3;
LABEL_36:
      *((_BYTE *)this + 72) = 1;
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        (char *)this + 16,
        0LL);
      return v3;
    }
    CDisplaySet::GetPrimaryAdapterLuid(v47, &v46);
    v45 = 0LL;
    if ( CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter )
    {
      v12 = *(CDXGIEnumeration **)(v11 + 16);
      v13 = 0;
      if ( *((_DWORD *)v12 + 22) )
      {
        while ( 1 )
        {
          AdapterLuid = (_DWORD *)CDXGIEnumeration::GetAdapterLuid(v12, &v47, v13);
          if ( operator!=(&v46, AdapterLuid) )
            break;
          v13 = v15 + 1;
          if ( v13 >= *((_DWORD *)v12 + 22) )
            goto LABEL_13;
        }
        v17 = (struct _LUID *)CDXGIEnumeration::GetAdapterLuid(v12, &v46, v15);
        v18 = wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::operator&((__int64 *)&v45);
        D3DDevice = CD3DDeviceManager::GetD3DDevice(
                      (CD3DDeviceManager *)&g_D3DDeviceManager,
                      *v17,
                      (struct CD3DDeviceLevel1 **)v18);
        v3 = D3DDevice;
        if ( D3DDevice < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, D3DDevice, 0x68u, 0LL);
LABEL_17:
          wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::~com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>((__int64 *)&v45);
          goto LABEL_35;
        }
      }
LABEL_13:
      if ( wil::operator==<CD3DDeviceLevel1,wil::err_returncode_policy>(&v45) )
      {
        v3 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80004005, 0x71u, 0LL);
        wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::~com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>((__int64 *)&v45);
        goto LABEL_36;
      }
    }
    else if ( operator!=(&v46, &g_luidZero) )
    {
      v21 = wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::operator&((__int64 *)&v45);
      v22 = CD3DDeviceManager::GetD3DDevice(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              v46,
              (struct CD3DDeviceLevel1 **)v21);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x76u, 0LL);
        goto LABEL_17;
      }
    }
    if ( wil::operator!=<CD3DDeviceLevel1,wil::err_returncode_policy>(&v45) )
    {
      v24 = *((_QWORD *)v45 + 79);
      v41 = CCommonRegistryData::m_fSceneEnableBloom != 0;
      v36 = CCommonRegistryData::m_dwSceneImageProcessingMinWidth;
      v42 = CCommonRegistryData::m_fSceneEnableImageProcessing != 0;
      v37 = CCommonRegistryData::m_dwSceneImageProcessingMinHeight;
      v43 = CCommonRegistryData::m_fSceneImageProcessing8bit != 0;
      v38 = CCommonRegistryData::m_dwSceneImageProcessingResizeGrowth;
      v44 = CCommonRegistryData::m_fSceneEnableShadow != 0;
      v35 = v24;
      v40 = CCommonRegistryData::m_dwSceneMsaaQualityMode;
      v39 = CCommonRegistryData::m_flSceneImageProcessingResizeThreshold;
      v46 = 0LL;
      v25 = ((__int64 (__fastcall *)(__int64 *, GUID *, struct _LUID *))ProcAddress)(
              &v35,
              &GUID_c459639d_0878_4eb7_ade9_3655c96fa73a,
              &v46);
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x89u, 0LL);
      }
      else
      {
        wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
        v27 = CExternalD3DRenderer::Create(v45, *(struct IUnknown **)&v46, (struct CExternalD3DRenderer **)this + 3);
        v3 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x8Bu, 0LL);
        }
        else
        {
          v29 = *((_QWORD *)this + 3) + 72LL;
          v47 = this;
          v30 = DynArray<IDeviceResourceNotify *,0>::AddMultipleAndSet(v29, &v47);
          v3 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x8Cu, 0LL);
          }
          else
          {
            v32 = (_QWORD *)*((_QWORD *)this + 4);
            v33 = (unsigned __int64)(*((_QWORD *)this + 5) - (_QWORD)v32 + 7LL) >> 3;
            if ( (unsigned __int64)v32 > *((_QWORD *)this + 5) )
              v33 = 0LL;
            if ( v33 )
            {
              do
              {
                (**(void (__fastcall ***)(_QWORD, struct _LUID))*v32)(*v32, v46);
                ++v1;
                ++v32;
              }
              while ( v1 != v33 );
            }
          }
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v46);
    }
    goto LABEL_17;
  }
  return v3;
}
