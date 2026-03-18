/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180062740
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180167B90 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18002BF70 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18002C140 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18002CB1C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180053C24 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180053C50 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BAD5C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800DDD58 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     McTemplateU0pp @ 0x180164430 (McTemplateU0pp.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        char a3,
        const struct RenderTargetPresentParameters *a4)
{
  char *v4; // rdi
  char v7; // bl
  int v8; // r13d
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  char v16; // r15
  int v17; // eax
  const struct CRegion *v18; // rdi
  __int64 v19; // r14
  _DWORD *v20; // r12
  char v21; // di
  __int64 v22; // rcx
  int v23; // r12d
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  void (__fastcall ***v28)(_QWORD); // rcx
  int v29; // ebx
  __int64 v30; // rax
  __int64 result; // rax
  void (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v33)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v34; // ecx
  int AdapterHwProtectedEntityCount; // eax
  int v36; // eax
  int v37; // edx
  char IsHardwareProtectionDisabled; // al
  unsigned int v39; // edx
  __int64 v40; // rcx
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // [rsp+20h] [rbp-30h]
  _BYTE v46[4]; // [rsp+30h] [rbp-20h] BYREF
  int v47; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v48; // [rsp+38h] [rbp-18h]
  _BYTE v49[4]; // [rsp+3Ch] [rbp-14h] BYREF
  int v50; // [rsp+40h] [rbp-10h] BYREF
  __int64 v51; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v53; // [rsp+90h] [rbp+40h] BYREF
  const struct RenderTargetPresentParameters *v54; // [rsp+A8h] [rbp+58h]

  v54 = a4;
  v4 = (char *)this - 144;
  v7 = a2;
  v8 = 0;
  if ( (*(int (__fastcall **)(char *, __int64, _BYTE *, _BYTE *))(*((_QWORD *)this - 18) + 272LL))(
         (char *)this - 144,
         a2,
         v46,
         v49) >= 0 )
  {
    if ( v46[0] )
    {
      if ( (v49[0] & 2) == 0 && !*((_BYTE *)this + 355) )
      {
        v10 = (*(__int64 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 248LL))(this);
        v8 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA4u, 0LL);
      }
    }
  }
  v12 = *(_QWORD *)v4;
  v53 = 0;
  LOBYTE(v9) = v7;
  v47 = 0;
  v13 = (*(__int64 (__fastcall **)(char *, __int64, char *, int *))(v12 + 272))(v4, v9, &v53, &v47);
  v15 = v13;
  v16 = 1;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x184u, 0LL);
LABEL_30:
    if ( v53 && (v47 & 2) == 0 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 296LL))(v4);
    goto LABEL_33;
  }
  v17 = v47;
  if ( a3 )
  {
    v17 = v47 | 0x80;
    v47 |= 0x80u;
  }
  v48 = v17;
  if ( v53 )
  {
    v18 = (CHwFullScreenRenderTarget *)((char *)this + 128);
    v19 = *((_QWORD *)this + 1);
    v20 = (_DWORD *)*((_QWORD *)this + 4);
    v50 = *((_DWORD *)this + 30);
    v15 = *(_DWORD *)(v19 + 880);
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0xC24u, 0LL);
    }
    else
    {
      if ( g_fForceDeviceLost && rand() >= 32390 )
      {
        v32 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v19 + 592);
        v51 = 0LL;
        v33 = **v32;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v51);
        v33(v32, &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8, &v51);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 264LL))(v51, 2289696800LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v51);
        v18 = (CHwFullScreenRenderTarget *)((char *)this + 128);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 80LL))(v20) )
      {
        FastRegion::CRegion::Copy((FastRegion::CRegion *)(v20 + 68), v18);
        if ( CSwapChainBase::TryToOrderMetaData((CSwapChainBase *)v20) )
          FastRegion::CRegion::Subtract((FastRegion::CRegion *)(v20 + 50), v18);
      }
      v21 = v48;
      v45 = (int)v54;
      v15 = (*(__int64 (__fastcall **)(_DWORD *, char *, _QWORD, _QWORD))(*(_QWORD *)v20 + 328LL))(
              v20,
              (char *)this + 128,
              (unsigned int)v50,
              v48);
      **((_DWORD **)v20 + 25) = 0;
      **((_DWORD **)v20 + 34) = 0;
      v20[92] = 0;
      DynArrayImpl<0>::ShrinkToSize(v20 + 86, 48LL);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 80LL))(v20)
        && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0pp(v22, &EVTDESC_REMOTEAPP_METADATA_STATS, v20 + 86, (unsigned int)v20[92]);
      }
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8F,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
          (const char *)(unsigned int)v15,
          v45);
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v15, 0xC32u, 0LL);
      }
      else if ( (v21 & 1) == 0 )
      {
        *(_QWORD *)(v19 + 1152) = *((_QWORD *)g_pComposition + 48);
        *(_BYTE *)(v19 + 1164) = 0;
      }
    }
    v14 = 0;
    v23 = *(_DWORD *)(v19 + 880);
    v24 = v23;
    if ( !v23 )
    {
      if ( v15 == -2005532292 || v15 == -2147024882 || (v23 = 0, v15 == -2005270523) )
      {
        v24 = 0;
        v23 = 0;
        AdapterHwProtectedEntityCount = CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                                          (CD3DDeviceManager *)&g_D3DDeviceManager,
                                          *(struct _LUID *)(v19 + 712));
        v14 = 0;
        if ( AdapterHwProtectedEntityCount )
        {
          if ( v15 == -2005270523 )
          {
            v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 632) + 312LL))(*(_QWORD *)(v19 + 632));
            *(_DWORD *)(v19 + 880) = -2003304307;
            v37 = -2003304307;
            v14 = v36 == -2005270480;
            v24 = -2003304307;
          }
          else
          {
            LOBYTE(v14) = 1;
            v37 = 0;
          }
          v23 = v37;
          if ( (_BYTE)v14 )
          {
            CD3DDeviceManager::IsHardwareProtectionDisabled();
            CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
            IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
            if ( (_BYTE)v14 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              McTemplateU0d(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
                1LL);
              v23 = *(_DWORD *)(v19 + 880);
              v24 = v23;
            }
          }
        }
      }
    }
    if ( v15 >= 0 || v23 >= 0 )
    {
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v15, 1LL, &v50) )
      {
        v15 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v50, 0xD4Au, 0LL);
          v24 = *(_DWORD *)(v19 + 880);
        }
      }
      if ( v15 == -2003304307 )
      {
        *(_DWORD *)(v19 + 880) = -2003304307;
        v24 = -2003304307;
      }
    }
    else
    {
      v15 = v23;
    }
    if ( v24 == -2003304307
      && !*(_BYTE *)(v19 + 1160)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 104LL))(*((_QWORD *)g_pComposition
                                                                                                  + 69)) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v19 + 504), 1u);
      CD3DDeviceLevel1::ReleaseResourcesForDisplayChange((CD3DDeviceLevel1 *)v19);
      v40 = *(_QWORD *)(v19 + 512);
      *(_BYTE *)(v19 + 1160) = 1;
      if ( v40 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 8LL))(v40, v19 + 496);
      CD2DContext::DestroyDeviceResources((CD2DTarget **)v19, v39);
      CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)(v19 + 896));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 640) + 888LL))(*(_QWORD *)(v19 + 640));
      CMILPoolResource::Release((CMILPoolResource *)(v19 + 496));
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x330u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v15, 0x19Eu, 0LL);
    }
    v4 = (char *)this - 144;
    goto LABEL_30;
  }
LABEL_33:
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0xB8u, 0LL);
  if ( !v8 || v8 >= 0 && v15 < 0 )
    v8 = v15;
  v25 = *((_QWORD *)this + 4);
  if ( v25 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25) )
  {
    v26 = *((_QWORD *)this - 1);
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      *((_QWORD *)this - 1) = 0LL;
    }
    v27 = (_QWORD *)*((_QWORD *)this + 4);
    v28 = *(void (__fastcall ****)(_QWORD))(v27[48]
                                          + 8LL
                                          * (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*v27 + 368LL))(v27, 0LL));
    *((_QWORD *)this - 1) = v28;
    (**v28)(v28);
  }
  if ( !CCommonRegistryData::m_fEnableFrontBufferRenderChecks || *((_BYTE *)this + 356) )
  {
    v29 = 0;
    goto LABEL_48;
  }
  if ( *((_BYTE *)this + 357) == *((_BYTE *)this + 358) )
    goto LABEL_45;
  v42 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 296LL))(*((_QWORD *)this + 4));
  v29 = v42;
  if ( v42 >= 0 )
  {
    *((_BYTE *)g_pComposition + 1279) = 1;
    *((_BYTE *)this + 357) = *((_BYTE *)this + 358);
LABEL_45:
    v29 = 0;
    goto LABEL_46;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x459,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
    (const char *)(unsigned int)v42,
    v45);
LABEL_46:
  if ( v29 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v29, 0xBCu, 0LL);
LABEL_48:
  if ( !v8 || v8 >= 0 && v29 < 0 )
    v8 = v29;
  v30 = *((_QWORD *)this + 43);
  if ( v30 && (v43 = *(_DWORD *)(v30 + 16), v44 = 0, v43) )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 8LL * v44) + 208LL) )
    {
      if ( ++v44 >= v43 )
        goto LABEL_51;
    }
  }
  else
  {
LABEL_51:
    v16 = 0;
  }
  result = (unsigned int)v8;
  *((_BYTE *)this + 358) = v16;
  return result;
}
