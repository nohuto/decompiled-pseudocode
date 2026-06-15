/*
 * XREFs of ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18000E490
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x180051BC4 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x180051C1C (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x180051E00 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x180052FA0 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800590E0 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     McTemplateU0z @ 0x180061334 (McTemplateU0z.c)
 *     McTemplateU0zd @ 0x1800613BC (McTemplateU0zd.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180062C00 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x180119BE0 (-IsStale@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?RemoveNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18011A480 (-RemoveNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
        CEndpointCharacteristicsCache *this,
        unsigned __int16 *a2,
        int a3,
        int a4,
        struct CEndpointCharacteristics **a5)
{
  CEndpointCharacteristicsCache *v6; // rsi
  int v7; // r15d
  struct CEndpointCharacteristics *v8; // rdi
  int v9; // ebx
  _QWORD *v10; // r12
  unsigned int v11; // ecx
  const unsigned __int16 *v12; // rdx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  unsigned __int16 *v16; // r11
  unsigned __int16 *v17; // rax
  int v18; // edx
  int v19; // r9d
  unsigned int v20; // r9d
  const unsigned __int16 *v21; // rcx
  unsigned int v22; // r10d
  __int64 Node; // rbx
  unsigned __int16 *v24; // rax
  int v25; // ecx
  int v26; // edx
  struct CEndpointCharacteristics *v27; // rbx
  __int64 v28; // rsi
  CEndpointCharacteristics *v29; // rbx
  struct CEndpointCharacteristics **v30; // r12
  char v31; // r13
  struct CEndpointCharacteristics *v32; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  ATL::CAtlException *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  const GUID *v44; // r8
  const GUID *v45; // r9
  int v46; // [rsp+30h] [rbp-118h] BYREF
  CEndpointCharacteristics *v47; // [rsp+38h] [rbp-110h] BYREF
  struct CEndpointCharacteristics *v48; // [rsp+40h] [rbp-108h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-100h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-F8h] BYREF
  CEndpointCharacteristicsCache *v51; // [rsp+58h] [rbp-F0h] BYREF
  struct CEndpointCharacteristics **v52; // [rsp+60h] [rbp-E8h]
  PROPVARIANT pvar; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-D8h]
  __int64 v55; // [rsp+78h] [rbp-D0h]
  CEndpointCharacteristicsCache *v56; // [rsp+80h] [rbp-C8h] BYREF
  char v57; // [rsp+88h] [rbp-C0h]
  CEndpointCharacteristicsCache *v58; // [rsp+90h] [rbp-B8h]
  struct CEndpointCharacteristics **v59; // [rsp+98h] [rbp-B0h]
  __int64 v60; // [rsp+A0h] [rbp-A8h]
  ATL::CAtlException *v61; // [rsp+A8h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-98h] BYREF
  const char *v63; // [rsp+D0h] [rbp-78h]
  __int64 v64; // [rsp+D8h] [rbp-70h]
  int *v65; // [rsp+E0h] [rbp-68h]
  __int64 v66; // [rsp+E8h] [rbp-60h]
  LPVOID *p_ppv; // [rsp+F0h] [rbp-58h]
  __int64 v68; // [rsp+F8h] [rbp-50h]

  v60 = -2LL;
  v46 = a3;
  v6 = this;
  v51 = this;
  v58 = this;
  v52 = a5;
  v59 = a5;
  v7 = 0;
  v8 = 0LL;
  v48 = 0LL;
  *a5 = 0LL;
  v9 = -2147023728;
  ppv = 0LL;
  v56 = 0LL;
  v47 = 0LL;
  pvar = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  pv = 0LL;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv) >= 0
    && (*(int (__fastcall **)(LPVOID, unsigned __int16 *, CEndpointCharacteristicsCache **))(*(_QWORD *)ppv + 40LL))(
         ppv,
         a2,
         &v56) >= 0
    && (*(int (__fastcall **)(CEndpointCharacteristicsCache *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)v56 + 32LL))(
         v56,
         0LL,
         &v47) >= 0
    && (*(int (__fastcall **)(CEndpointCharacteristics *, void *, PROPVARIANT *))(*(_QWORD *)v47 + 40LL))(
         v47,
         &PKEY_Aliased_EndpointId,
         &pvar) >= 0
    && (_WORD)pvar == 31
    && PropVariantToStringAlloc(&pvar, (PWSTR *)&pv) >= 0 )
  {
    v9 = 0;
  }
  PropVariantClear(&pvar);
  if ( v47 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v56 )
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v56 + 16LL))(v56);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v9 >= 0 )
    a2 = (unsigned __int16 *)pv;
  AcquireSRWLockShared((PSRWLOCK)v6 + 2);
  v56 = v6;
  v57 = 1;
  if ( *((_BYTE *)v6 + 104) )
  {
    ReleaseSRWLockShared((PSRWLOCK)v6 + 2);
    goto LABEL_78;
  }
  v10 = (_QWORD *)((char *)v6 + 24);
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v11 = 0;
  v12 = a2;
  v13 = *a2;
  if ( *a2 )
  {
    v14 = *a2;
    do
    {
      v11 = v14 + 33 * v11;
      v14 = *++v12;
    }
    while ( *v12 );
  }
  if ( *((_DWORD *)v6 + 10) == 17 )
    v15 = v11 % 0x11;
  else
    v15 = v11 % *((_DWORD *)v6 + 10);
  if ( *v10 )
  {
    v16 = *(unsigned __int16 **)(*v10 + 8 * v15);
    if ( v16 )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v16 + 6) == v11 )
        {
          v17 = *(unsigned __int16 **)v16;
          do
          {
            v18 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v17 - *(_QWORD *)v16);
            v19 = *v17 - v18;
            if ( v19 )
              break;
            ++v17;
          }
          while ( v18 );
          if ( !v19 )
            break;
        }
        v16 = (unsigned __int16 *)*((_QWORD *)v16 + 2);
        if ( !v16 )
          goto LABEL_47;
      }
      v20 = 0;
      v21 = a2;
      if ( v13 )
      {
        do
        {
          v20 = v13 + 33 * v20;
          v13 = *++v21;
        }
        while ( *v21 );
      }
      if ( *((_DWORD *)v6 + 10) == 17 )
        v22 = v20 % 0x11;
      else
        v22 = v20 % *((_DWORD *)v6 + 10);
      if ( *v10 && (Node = *(_QWORD *)(*v10 + 8LL * v22)) != 0 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(Node + 24) == v20 )
          {
            v24 = *(unsigned __int16 **)Node;
            do
            {
              v25 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v24 - *(_QWORD *)Node);
              v26 = *v24 - v25;
              if ( v26 )
                break;
              ++v24;
            }
            while ( v25 );
            if ( !v26 )
              break;
          }
          Node = *(_QWORD *)(Node + 16);
          if ( !Node )
            goto LABEL_83;
        }
      }
      else
      {
LABEL_83:
        Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CreateNode(
                 (char *)v6 + 24,
                 a2,
                 v22);
      }
      v27 = *(struct CEndpointCharacteristics **)(Node + 8);
      v47 = v27;
      if ( v27 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v27 + 8LL))(v27);
      v28 = 0LL;
      pvar = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v27 + 5) + 40LL))(
             *((_QWORD *)v27 + 5),
             &PKEY_MMDEVAPI_ActiveTime,
             &pvar) >= 0
        && (_WORD)pvar == 21 )
      {
        v28 = v54;
      }
      PropVariantClear(&pvar);
      if ( *((_QWORD *)v27 + 20) == v28 )
      {
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v27 + 8LL))(v27);
        v8 = v27;
        v48 = v27;
      }
      (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL))(v27);
      v6 = v51;
    }
  }
LABEL_47:
  ReleaseSRWLockShared((PSRWLOCK)v6 + 2);
  v29 = 0LL;
  v47 = 0LL;
  if ( !v8 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v6 + 2);
    pvar = v6;
    LOBYTE(v54) = 1;
    if ( !*((_BYTE *)v6 + 104) )
    {
      if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
             (_DWORD)v10,
             (_DWORD)a2,
             (unsigned int)&v56,
             (unsigned int)&ppv,
             (__int64)&v51) )
      {
        v41 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                v10,
                a2);
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v47, v41);
        v29 = v47;
        if ( (unsigned int)CEndpointCharacteristics::IsStale(v47) )
        {
          v51 = 0LL;
          v42 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
                  (_DWORD)v10,
                  (_DWORD)a2,
                  (unsigned int)&ppv,
                  (unsigned int)&v56,
                  (__int64)&v51);
          if ( v42 )
            ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveNode(
              v10,
              v42,
              v51);
        }
        else
        {
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v48, &v47);
          v8 = v48;
          if ( v48 )
            goto LABEL_88;
        }
      }
      if ( !v46 )
      {
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McTemplateU0z(v35, v34, a2);
        v46 = 1;
        v51 = (CEndpointCharacteristicsCache *)a2;
        v36 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
                &v48,
                &v51,
                &v46);
        v7 = v36;
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McTemplateU0zd(v38, v37, a2, v36);
        v8 = v48;
        if ( v48 )
        {
          try
          {
            v7 = 0;
            v39 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                    v10,
                    a2);
            Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(v39, &v48);
            v30 = v52;
          }
          catch ( ATL::CAtlException *v61 )
          {
            v40 = v61;
            if ( *(_DWORD *)v61 == -1073741571 )
              _o__resetstkoflw();
            v46 = *(_DWORD *)v40;
            v7 = v46;
            v8 = v48;
            v29 = v47;
            v6 = v58;
            v30 = v59;
          }
          if ( !a4 )
          {
            v31 = 1;
            goto LABEL_70;
          }
LABEL_69:
          v31 = 0;
LABEL_70:
          ReleaseSRWLockExclusive((PSRWLOCK)v6 + 2);
          goto LABEL_49;
        }
      }
LABEL_88:
      v30 = v52;
      goto LABEL_69;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)v6 + 2);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
LABEL_78:
    CoTaskMemFree(pv);
    pv = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v48);
    return 2147943568LL;
  }
  v30 = v52;
  v31 = 0;
LABEL_49:
  if ( v29 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  if ( v7 >= 0 )
  {
    if ( v8 )
    {
      if ( v31 )
      {
        if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 56LL))(v8) )
          CSpatialProperties::EnsureSpatialSettingsAreInitialized(
            (LPCRITICAL_SECTION)((char *)v8 + 1624),
            *((LPCWSTR *)v8 + 3));
        if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 56LL))(v8) )
          CSpatialProperties::EnsureSpatialSettingsAreInitialized(
            (LPCRITICAL_SECTION)((char *)v8 + 1624),
            *((LPCWSTR *)v8 + 3));
      }
      v32 = v8;
      v8 = 0LL;
      v48 = 0LL;
      *v30 = v32;
    }
    else
    {
      v7 = -2147023728;
    }
  }
  LODWORD(ppv) = v7;
  v46 = 5030;
  if ( v7 < 0 && (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    v63 = "CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics";
    v64 = 65LL;
    v65 = &v46;
    v66 = v43;
    p_ppv = &ppv;
    v68 = v43;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017A3E3, v44, v45, 5u, &pData);
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v7;
}
