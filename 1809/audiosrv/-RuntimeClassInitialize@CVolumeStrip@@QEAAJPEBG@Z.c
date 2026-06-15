/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005A56C
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18005A484 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004FCC8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x18005AB5C (--0CMeterControlBase@@QEAA@XZ.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005ABB0 (--0CMuteControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005AC0C (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005AF54 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005AFA4 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005B5D8 (--0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x18005B794 (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800BA410 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(void **this, const unsigned __int16 *a2)
{
  void **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  void *v12; // r14
  LPVOID *v13; // r15
  void *v14; // rcx
  __int64 v15; // rbx
  struct IPartsList *v16; // rcx
  int v17; // eax
  CVolumeHardware *v18; // rax
  CVolumeHardware *v19; // rax
  char v20; // bl
  int v21; // eax
  LPVOID v22; // rcx
  CMuteControlBase *v23; // rax
  CMuteControlBase *v24; // rbx
  char v25; // r14
  int v26; // eax
  LPVOID v27; // rcx
  CMeterControlBase *v28; // rax
  CMeterControlBase *v29; // rbx
  char v30; // r14
  int v31; // eax
  LPVOID v32; // rcx
  void *v33; // rcx
  CMeterControlBase *v34; // rax
  struct _RTL_CRITICAL_SECTION *v35; // rbx
  int v36; // eax
  LPVOID v37; // rax
  int v38; // eax
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rdx
  CVolumeSoftware *v43; // rax
  CVolumeSoftware *v44; // rcx
  int v45; // eax
  CMuteControlBase *v46; // rax
  CMuteControlBase *v47; // rbx
  int v48; // eax
  __int64 v49; // [rsp+28h] [rbp-69h]
  int v50; // [rsp+28h] [rbp-69h]
  void *v51; // [rsp+28h] [rbp-69h]
  int v52[2]; // [rsp+38h] [rbp-59h] BYREF
  char v53; // [rsp+40h] [rbp-51h]
  __int64 v54; // [rsp+48h] [rbp-49h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-41h]
  LPVOID v56; // [rsp+58h] [rbp-39h] BYREF
  char v57; // [rsp+60h] [rbp-31h]
  __int64 v58; // [rsp+68h] [rbp-29h]
  KSDATAFORMAT v59; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  struct IPartsList *v61; // [rsp+F8h] [rbp+67h] BYREF
  struct IMMDevice *v62; // [rsp+108h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+110h] [rbp+7Fh] BYREF

  v58 = -2LL;
  v4 = this + 29;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    this + 29,
    0LL);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = _AllocStringWorker<CTCoAllocPolicy>(v6, v5, a2, v7, v49, v4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v8,
      v50);
    return v9;
  }
  v62 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, void *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          *v4,
          &v62);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v10,
      v50);
    goto LABEL_63;
  }
  v54 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v62->lpVtbl->QueryInterface)(
          v62,
          &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c,
          &v54);
  v9 = v11;
  if ( v11 < 0 )
  {
    v40 = 313LL;
LABEL_69:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v11,
      v50);
    goto LABEL_62;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v54 + 64LL))(v54, (char *)this + 240);
  v9 = v11;
  if ( v11 < 0 )
  {
    v40 = 315LL;
    goto LABEL_69;
  }
  v61 = 0LL;
  *(_QWORD *)v52 = 0LL;
  v51 = v52;
  if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))v62->lpVtbl->Activate)(
         v62,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL) >= 0 )
  {
    pv = 0LL;
    p_pv = &pv;
    v56 = 0LL;
    v57 = 1;
    v9 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, void *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyConfig + 32LL))(
           g_PolicyConfig,
           *v4,
           0LL,
           &v56);
    if ( v57 )
    {
      v12 = v56;
      v13 = p_pv;
      v14 = *p_pv;
      if ( v56 != *p_pv )
      {
        if ( v14 )
          CoTaskMemFree(v14);
        *v13 = v12;
      }
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v9,
        (int)v52);
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v52);
      goto LABEL_61;
    }
    InitKsDataFormat(&v59, (struct tWAVEFORMATEX *)pv);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, this);
    }
    v15 = *(_QWORD *)v52;
    v16 = v61;
    v61 = 0LL;
    if ( v16 )
      ((void (__fastcall *)(struct IPartsList *))v16->lpVtbl->Release)(v16);
    v51 = &v61;
    v17 = (*(__int64 (__fastcall **)(__int64, KSDATAFORMAT *, __int64))(*(_QWORD *)v15 + 24LL))(v15, &v59, 64LL);
    if ( v17 != -2147467262 && v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v17);
    if ( pv )
      CoTaskMemFree(pv);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v52);
  if ( v61 )
  {
    v18 = (CVolumeHardware *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)v52 = v18;
    if ( v18 )
      v19 = CVolumeHardware::CVolumeHardware(v18, (struct IVolumeStrip *)(this + 1));
    else
      v19 = 0LL;
    pv = v19;
    if ( !v19 )
    {
      v9 = -2147024882;
      v41 = 2147942414LL;
      v42 = 349LL;
LABEL_115:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v42,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v41,
        (int)v51);
      goto LABEL_61;
    }
    *(_QWORD *)v52 = &pv;
    v53 = 1;
    v20 = 1;
    v21 = CVolumeHardware::Initialize(v19, v62, v61);
    v22 = pv;
    if ( v21 >= 0 )
    {
      this[31] = pv;
      v20 = 0;
    }
    if ( v20 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( this[31] )
    goto LABEL_32;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, a2);
  }
  v43 = (CVolumeSoftware *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v52 = v43;
  if ( v43 )
    v44 = CVolumeSoftware::CVolumeSoftware(v43, (struct IVolumeStrip *)(this + 1));
  else
    v44 = 0LL;
  pv = v44;
  if ( !v44 )
  {
    v9 = -2147024882;
    v41 = 2147942414LL;
    v42 = 364LL;
    goto LABEL_115;
  }
  *(_QWORD *)v52 = &pv;
  v53 = 1;
  v45 = (*(__int64 (__fastcall **)(CVolumeSoftware *, struct IMMDevice *))(*(_QWORD *)v44 + 48LL))(v44, v62);
  v9 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v45,
      (int)v51);
LABEL_89:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_61;
  }
  this[31] = pv;
LABEL_32:
  if ( !v61 )
    goto LABEL_40;
  v23 = (CMuteControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v23;
  *(_QWORD *)v52 = v23;
  if ( v23 )
  {
    CMuteControlBase::CMuteControlBase(v23, (struct IVolumeStrip *)(this + 1));
    *(_QWORD *)v24 = &CMuteHardware::`vftable';
    *((_QWORD *)v24 + 6) = 0LL;
    *((_QWORD *)v24 + 7) = 0LL;
    *((_DWORD *)v24 + 16) = 0;
    *(GUID *)((char *)v24 + 68) = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    v24 = 0LL;
  }
  pv = v24;
  if ( !v24 )
  {
    v9 = -2147024882;
    v41 = 2147942414LL;
    v42 = 388LL;
    goto LABEL_115;
  }
  *(_QWORD *)v52 = &pv;
  v53 = 1;
  v25 = 1;
  v26 = CMuteHardware::Initialize(v24, v62, v61);
  v27 = pv;
  if ( v26 >= 0 )
  {
    this[32] = pv;
    v25 = 0;
  }
  if ( v25 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
LABEL_40:
  if ( this[32] )
    goto LABEL_41;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, a2);
  }
  v46 = (CMuteControlBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v47 = v46;
  *(_QWORD *)v52 = v46;
  if ( v46 )
  {
    CMuteControlBase::CMuteControlBase(v46, (struct IVolumeStrip *)(this + 1));
    *(_QWORD *)v47 = &CMuteSoftware::`vftable';
    *((_QWORD *)v47 + 6) = 0LL;
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)v47 + 56));
    *((_QWORD *)v47 + 12) = 0LL;
    *((_BYTE *)v47 + 104) = 0;
  }
  else
  {
    v47 = 0LL;
  }
  pv = v47;
  if ( !v47 )
  {
    v9 = -2147024882;
    v41 = 2147942414LL;
    v42 = 403LL;
    goto LABEL_115;
  }
  *(_QWORD *)v52 = &pv;
  v53 = 1;
  v48 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v47 + 48LL))(v47, v62);
  v9 = v48;
  if ( v48 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v48,
      (int)v51);
    goto LABEL_89;
  }
  this[32] = pv;
LABEL_41:
  if ( !v61 )
    goto LABEL_49;
  v28 = (CMeterControlBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v28;
  *(_QWORD *)v52 = v28;
  if ( v28 )
  {
    CMeterControlBase::CMeterControlBase(v28);
    *(_QWORD *)v29 = &CMeterHardware::`vftable';
    *((_QWORD *)v29 + 4) = 0LL;
    *((_QWORD *)v29 + 5) = 0LL;
  }
  else
  {
    v29 = 0LL;
  }
  pv = v29;
  if ( !v29 )
  {
    v9 = -2147024882;
    v41 = 2147942414LL;
    v42 = 422LL;
    goto LABEL_115;
  }
  *(_QWORD *)v52 = &pv;
  v53 = 1;
  v30 = 1;
  v31 = CMeterHardware::Initialize(v29, v62, v61);
  v32 = pv;
  if ( v31 >= 0 )
  {
    this[33] = pv;
    v30 = 0;
  }
  if ( v30 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v32 + 16LL))(v32);
LABEL_49:
  v33 = this[33];
  if ( v33 )
    goto LABEL_57;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_1af60ca396c231183a59f5c311004dee_Traceguids, a2);
  }
  v34 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v35 = (struct _RTL_CRITICAL_SECTION *)v34;
  *(_QWORD *)v52 = v34;
  if ( v34 )
  {
    CMeterControlBase::CMeterControlBase(v34);
    v35->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMeterSoftware::`vftable';
    v35->SpinCount = 0LL;
    ATL::CCriticalSection::CCriticalSection(v35 + 1);
  }
  else
  {
    v35 = 0LL;
  }
  pv = v35;
  if ( !v35 )
  {
    v9 = -2147024882;
    v41 = 2147942414LL;
    v42 = 437LL;
    goto LABEL_115;
  }
  *(_QWORD *)v52 = &pv;
  v53 = 1;
  v36 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, struct IMMDevice *))&v35->DebugInfo[1].Type)(
          v35,
          v62);
  v9 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v36,
      (int)v51);
    goto LABEL_89;
  }
  v37 = pv;
  this[33] = pv;
  v33 = v37;
LABEL_57:
  v38 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v33 + 96LL))(v33);
  v9 = v38;
  if ( v38 < 0 )
  {
    v42 = 456LL;
LABEL_114:
    v41 = (unsigned int)v38;
    goto LABEL_115;
  }
  v38 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[32] + 96LL))(this[32]);
  v9 = v38;
  if ( v38 < 0 )
  {
    v42 = 457LL;
    goto LABEL_114;
  }
  v38 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[31] + 192LL))(this[31]);
  v9 = v38;
  if ( v38 < 0 )
  {
    v42 = 458LL;
    goto LABEL_114;
  }
  v9 = 0;
LABEL_61:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v61);
LABEL_62:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v54);
LABEL_63:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
  return v9;
}
