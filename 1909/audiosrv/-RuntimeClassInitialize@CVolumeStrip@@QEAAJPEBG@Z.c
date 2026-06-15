/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005C198
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180056E78 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800347E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005ACF8 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005B044 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005B094 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x18005C7BC (--0CMeterControlBase@@QEAA@XZ.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005C810 (--0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005C86C (--0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x18005CA28 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C8780 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(void **this, const unsigned __int16 *a2)
{
  void **v4; // r14
  void *v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  struct IPartsList *v12; // rcx
  int v13; // eax
  void *v14; // rcx
  CVolumeHardware *v15; // rax
  CVolumeHardware *v16; // rax
  char v17; // bl
  int v18; // eax
  LPVOID v19; // rcx
  CMuteControlBase *v20; // rax
  CMuteControlBase *v21; // rbx
  char v22; // r14
  int v23; // eax
  LPVOID v24; // rcx
  CMeterControlBase *v25; // rax
  CMeterControlBase *v26; // rbx
  char v27; // r14
  int v28; // eax
  LPVOID v29; // rcx
  void *v30; // rcx
  CMeterControlBase *v31; // rax
  struct _RTL_CRITICAL_SECTION *v32; // rbx
  int v33; // eax
  LPVOID v34; // rax
  int v35; // eax
  __int64 v37; // rdx
  void *v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  CVolumeSoftware *v41; // rax
  CVolumeSoftware *v42; // rcx
  int v43; // eax
  CMuteControlBase *v44; // rax
  CMuteControlBase *v45; // rbx
  int v46; // eax
  int v47[2]; // [rsp+48h] [rbp-59h] BYREF
  char v48; // [rsp+50h] [rbp-51h]
  __int64 v49; // [rsp+58h] [rbp-49h] BYREF
  LPVOID *p_pv; // [rsp+60h] [rbp-41h]
  void *v51; // [rsp+68h] [rbp-39h] BYREF
  char v52; // [rsp+70h] [rbp-31h]
  __int64 v53; // [rsp+78h] [rbp-29h]
  KSDATAFORMAT v54; // [rsp+88h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  struct IPartsList *v56; // [rsp+108h] [rbp+67h] BYREF
  struct IMMDevice *v57; // [rsp+118h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+120h] [rbp+7Fh] BYREF

  v53 = -2LL;
  v4 = this + 29;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 29,
    0LL);
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  *v4 = 0LL;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    goto LABEL_119;
  }
  if ( is_mul_ok(v7, 2uLL) )
  {
    v8 = CTCoAllocPolicy::Alloc(v5, (v7 * (unsigned __int128)2uLL) >> 64, 2 * v7, v4);
    if ( v8 < 0 )
    {
LABEL_119:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x133,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    StringCchCopyNExW((char *)*v4, v6 + 1, a2, v6);
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 < 0 )
    goto LABEL_119;
  v57 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *v4,
         &v57);
  v8 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_65;
  }
  v49 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v57->lpVtbl->QueryInterface)(
          v57,
          &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
          &v49);
  v8 = v10;
  if ( v10 < 0 )
  {
    v37 = 313LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_64;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v49 + 64LL))(v49, (char *)this + 240);
  v8 = v10;
  if ( v10 < 0 )
  {
    v37 = 315LL;
    goto LABEL_71;
  }
  v56 = 0LL;
  *(_QWORD *)v47 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))v57->lpVtbl->Activate)(
         v57,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL) >= 0 )
  {
    pv = 0LL;
    p_pv = &pv;
    v51 = 0LL;
    v52 = 1;
    v8 = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, _QWORD, void **))(*(_QWORD *)g_PolicyConfig + 32LL))(
           g_PolicyConfig,
           *v4,
           0LL,
           &v51);
    if ( v52 )
    {
      v11 = *p_pv;
      *p_pv = v51;
      if ( v11 )
        CoTaskMemFree(v11);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v8);
      v38 = pv;
      pv = 0LL;
      if ( v38 )
        CoTaskMemFree(v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v47);
      goto LABEL_63;
    }
    InitKsDataFormat(&v54, (struct tWAVEFORMATEX *)pv);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, this);
    }
    v12 = v56;
    v56 = 0LL;
    if ( v12 )
      ((void (__fastcall *)(struct IPartsList *))v12->lpVtbl->Release)(v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD, KSDATAFORMAT *, __int64))(**(_QWORD **)v47 + 24LL))(
            *(_QWORD *)v47,
            &v54,
            64LL);
    if ( v13 != -2147467262 && v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v13);
    v14 = pv;
    pv = 0LL;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v47);
  if ( v56 )
  {
    v15 = (CVolumeHardware *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)v47 = v15;
    if ( v15 )
      v16 = CVolumeHardware::CVolumeHardware(v15, (struct IVolumeStrip *)(this + 1));
    else
      v16 = 0LL;
    pv = v16;
    if ( !v16 )
    {
      v8 = -2147024882;
      v39 = 2147942414LL;
      v40 = 349LL;
LABEL_117:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v39);
      goto LABEL_63;
    }
    *(_QWORD *)v47 = &pv;
    v48 = 1;
    v17 = 1;
    v18 = CVolumeHardware::Initialize(v16, v57, v56);
    v19 = pv;
    if ( v18 >= 0 )
    {
      this[31] = pv;
      v17 = 0;
    }
    if ( v17 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( this[31] )
    goto LABEL_34;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, a2);
  }
  v41 = (CVolumeSoftware *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v47 = v41;
  if ( v41 )
    v42 = CVolumeSoftware::CVolumeSoftware(v41, (struct IVolumeStrip *)(this + 1));
  else
    v42 = 0LL;
  pv = v42;
  if ( !v42 )
  {
    v8 = -2147024882;
    v39 = 2147942414LL;
    v40 = 364LL;
    goto LABEL_117;
  }
  *(_QWORD *)v47 = &pv;
  v48 = 1;
  v43 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v42 + 48LL))(v42, v57);
  v8 = v43;
  if ( v43 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v43);
LABEL_91:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_63;
  }
  this[31] = pv;
LABEL_34:
  if ( !v56 )
    goto LABEL_42;
  v20 = (CMuteControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  *(_QWORD *)v47 = v20;
  if ( v20 )
  {
    CMuteControlBase::CMuteControlBase(v20, (struct IVolumeStrip *)(this + 1));
    *(_QWORD *)v21 = &CMuteHardware::`vftable';
    *((_QWORD *)v21 + 6) = 0LL;
    *((_QWORD *)v21 + 7) = 0LL;
    *((_DWORD *)v21 + 16) = 0;
    *(GUID *)((char *)v21 + 68) = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v21 = 0LL;
  }
  pv = v21;
  if ( !v21 )
  {
    v8 = -2147024882;
    v39 = 2147942414LL;
    v40 = 388LL;
    goto LABEL_117;
  }
  *(_QWORD *)v47 = &pv;
  v48 = 1;
  v22 = 1;
  v23 = CMuteHardware::Initialize(v21, v57, v56);
  v24 = pv;
  if ( v23 >= 0 )
  {
    this[32] = pv;
    v22 = 0;
  }
  if ( v22 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_42:
  if ( this[32] )
    goto LABEL_43;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, a2);
  }
  v44 = (CMuteControlBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v45 = v44;
  *(_QWORD *)v47 = v44;
  if ( v44 )
  {
    CMuteControlBase::CMuteControlBase(v44, (struct IVolumeStrip *)(this + 1));
    *(_QWORD *)v45 = &CMuteSoftware::`vftable';
    *((_QWORD *)v45 + 6) = 0LL;
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v45 + 56));
    *((_QWORD *)v45 + 12) = 0LL;
    *((_BYTE *)v45 + 104) = 0;
  }
  else
  {
    v45 = 0LL;
  }
  pv = v45;
  if ( !v45 )
  {
    v8 = -2147024882;
    v39 = 2147942414LL;
    v40 = 403LL;
    goto LABEL_117;
  }
  *(_QWORD *)v47 = &pv;
  v48 = 1;
  v46 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v45 + 48LL))(v45, v57);
  v8 = v46;
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v46);
    goto LABEL_91;
  }
  this[32] = pv;
LABEL_43:
  if ( !v56 )
    goto LABEL_51;
  v25 = (CMeterControlBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v26 = v25;
  *(_QWORD *)v47 = v25;
  if ( v25 )
  {
    CMeterControlBase::CMeterControlBase(v25);
    *(_QWORD *)v26 = &CMeterHardware::`vftable';
    *((_QWORD *)v26 + 4) = 0LL;
    *((_QWORD *)v26 + 5) = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  pv = v26;
  if ( !v26 )
  {
    v8 = -2147024882;
    v39 = 2147942414LL;
    v40 = 422LL;
    goto LABEL_117;
  }
  *(_QWORD *)v47 = &pv;
  v48 = 1;
  v27 = 1;
  v28 = CMeterHardware::Initialize(v26, v57, v56);
  v29 = pv;
  if ( v28 >= 0 )
  {
    this[33] = pv;
    v27 = 0;
  }
  if ( v27 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
LABEL_51:
  v30 = this[33];
  if ( v30 )
    goto LABEL_59;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, a2);
  }
  v31 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v32 = (struct _RTL_CRITICAL_SECTION *)v31;
  *(_QWORD *)v47 = v31;
  if ( v31 )
  {
    CMeterControlBase::CMeterControlBase(v31);
    v32->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMeterSoftware::`vftable';
    v32->SpinCount = 0LL;
    ATL::CCriticalSection::CCriticalSection(v32 + 1);
  }
  else
  {
    v32 = 0LL;
  }
  pv = v32;
  if ( !v32 )
  {
    v8 = -2147024882;
    v39 = 2147942414LL;
    v40 = 437LL;
    goto LABEL_117;
  }
  *(_QWORD *)v47 = &pv;
  v48 = 1;
  v33 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, struct IMMDevice *))&v32->DebugInfo[1].Type)(
          v32,
          v57);
  v8 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v33);
    goto LABEL_91;
  }
  v34 = pv;
  this[33] = pv;
  v30 = v34;
LABEL_59:
  v35 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v30 + 96LL))(v30);
  v8 = v35;
  if ( v35 < 0 )
  {
    v40 = 456LL;
LABEL_116:
    v39 = (unsigned int)v35;
    goto LABEL_117;
  }
  v35 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[32] + 96LL))(this[32]);
  v8 = v35;
  if ( v35 < 0 )
  {
    v40 = 457LL;
    goto LABEL_116;
  }
  v35 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[31] + 192LL))(this[31]);
  v8 = v35;
  if ( v35 < 0 )
  {
    v40 = 458LL;
    goto LABEL_116;
  }
  v8 = 0;
LABEL_63:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v56);
LABEL_64:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
LABEL_65:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v57);
  return (unsigned int)v8;
}
