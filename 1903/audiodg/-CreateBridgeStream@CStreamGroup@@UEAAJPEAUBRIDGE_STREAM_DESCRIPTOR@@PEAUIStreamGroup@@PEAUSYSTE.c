/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C160
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140001730 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DC4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046B4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009ECC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE44 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140010398 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x1400130B4 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002ED0C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140034A7C (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140034B30 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x14003E030 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStreamGroup::CreateBridgeStream(
        CStreamGroup *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroup *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r15
  struct _RTL_CRITICAL_SECTION *v9; // r14
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // edx
  struct _RTL_CRITICAL_SECTION *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  CStreamInstance *v18; // rcx
  int ApoEndpointInstance; // eax
  __int64 v20; // rdx
  CPipeInstance *v21; // rbx
  struct SYSTEM_AUDIO_STREAM *v22; // r9
  int v23; // eax
  void (__fastcall ***v24)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v25; // r12
  const struct CPipeInstance *v26; // rbx
  CStreamInstance *v27; // rdi
  int v28; // eax
  struct _RTL_CRITICAL_SECTION *v29; // rbx
  struct _RTL_CRITICAL_SECTION *v30; // rdi
  __int64 v31; // r8
  __int64 result; // rax
  ATL::CAtlException *v33; // rbx
  struct SYSTEM_AUDIO_STREAM *v34; // [rsp+28h] [rbp-D0h]
  CStreamInstance *v35; // [rsp+40h] [rbp-B8h] BYREF
  struct IAudioProcessingObject *v36; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h] BYREF
  struct ISubmixInternal *v38; // [rsp+58h] [rbp-A0h] BYREF
  CPipeInstance *v39; // [rsp+60h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+68h] [rbp-90h]
  char *v41; // [rsp+70h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-80h]
  char *v43; // [rsp+80h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+88h] [rbp-70h]
  __int128 v45; // [rsp+90h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+A8h] [rbp-50h]
  ATL::CAtlException *v48; // [rsp+B0h] [rbp-48h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-40h]
  char v50; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v52; // [rsp+100h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v53; // [rsp+118h] [rbp+20h]

  v53 = a4;
  v46 = -2LL;
  v39 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v41 = (char *)this + 200;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v40 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v47 = v8;
  *((_DWORD *)a4 + 238) = 0;
  if ( *((_BYTE *)this + 337) )
  {
    v10 = -2147024809;
    v11 = 135LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v10 = -2147467261;
LABEL_7:
    v11 = 138LL;
    goto LABEL_8;
  }
  if ( *(_DWORD *)a2 > 2u )
  {
    v10 = -2147024809;
    goto LABEL_7;
  }
  v14 = *((_DWORD *)this + 70);
  if ( v14 != *(_DWORD *)a2 && (v14 != 2 || *((_DWORD *)a2 + 2) != 2) )
  {
    v10 = -2147024809;
    v11 = 141LL;
    goto LABEL_8;
  }
  if ( *((_QWORD *)this + 32) != *((_QWORD *)a2 + 4) )
  {
    v10 = -2147024809;
    v11 = 142LL;
    goto LABEL_8;
  }
  v15 = *(_QWORD *)((char *)a2 + 12) - *((_QWORD *)this + 33);
  if ( !v15 )
    v15 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)this + 34);
  if ( v15 )
  {
    v16 = *(_QWORD *)((char *)a2 + 12) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v16 )
      v16 = *(_QWORD *)((char *)a2 + 20) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v16 )
    {
      v10 = -2147024809;
      v11 = 148LL;
      goto LABEL_8;
    }
  }
  v36 = 0LL;
  v37 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v37);
  if ( v37 )
  {
    v36 = 0LL;
    ApoEndpointInstance = (*(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v37 + 24LL))(
                            v37,
                            &v36);
    v10 = ApoEndpointInstance;
    if ( ApoEndpointInstance < 0 )
    {
      v20 = 156LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)ApoEndpointInstance);
LABEL_29:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v37);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
LABEL_9:
      if ( v8 )
      {
        v13 = v8;
LABEL_11:
        LeaveCriticalSection(v13);
        goto LABEL_68;
      }
      goto LABEL_68;
    }
  }
  if ( !v36 )
  {
LABEL_65:
    PublishDeviceGraphWnfState((__int64)v18, v17);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v37);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
    if ( v8 )
      LeaveCriticalSection(v9);
    v10 = 0;
    goto LABEL_68;
  }
  ApoEndpointInstance = CPipeInstance::CreateBridgeStreamPipeInstance(
                          *((struct IUnknown **)this + 36),
                          a2,
                          v36,
                          *((struct CPipeInstance **)this + 6),
                          *((struct tWAVEFORMATEX **)this + 31),
                          v34,
                          &v39);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 168LL;
    goto LABEL_28;
  }
  v21 = v39;
  ApoEndpointInstance = CPipeInstance::Initialize(v39);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 170LL;
    goto LABEL_28;
  }
  ApoEndpointInstance = CPipeInstance::ConnectAPOs(v21, 0LL);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 171LL;
    goto LABEL_28;
  }
  ApoEndpointInstance = CPipeInstance::CreateApoEndpointInstance(v21, a2, v36, v22);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v20 = 172LL;
    goto LABEL_28;
  }
  v35 = 0LL;
  v23 = CStreamInstance::CreateStreamInstance(&v35, 0, *(_DWORD *)a2, (__int64)v21, (__int64)v21, 0LL);
  v10 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v23);
LABEL_41:
    if ( v35 )
      CStreamInstance::`scalar deleting destructor'(v35);
    v35 = 0LL;
    goto LABEL_29;
  }
  v39 = 0LL;
  v24 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 41);
  if ( v24 )
  {
    (**v24)(v24, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v38);
    v25 = v38;
  }
  else
  {
    v25 = 0LL;
    v38 = 0LL;
  }
  if ( v25 )
  {
    v26 = (const struct CPipeInstance *)*((_QWORD *)this + 37);
    v27 = v35;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
    v28 = CStreamInstance::ConnectToRightSubmix(v27, v25, v26);
    v10 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v28);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v38);
      goto LABEL_41;
    }
  }
  *(_QWORD *)&v45 = &v38;
  *((_QWORD *)&v45 + 1) = &v35;
  v49 = v45;
  v50 = 1;
  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v43 = (char *)this + 56;
  v44 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v30 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  try
  {
    *(_QWORD *)&v45 = (char *)this + 56;
    v52 = (char *)v35;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(
      (__int64 *)this + 12,
      (__int64 *)&v52,
      v31);
  }
  catch ( ATL::CAtlException *v48 )
  {
    v33 = v48;
    if ( *(_DWORD *)v48 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v52) = *(_DWORD *)v33;
    v10 = (unsigned int)v52;
    if ( (int)v52 >= 0 )
    {
      v29 = v44;
      v9 = v40;
      v8 = v40;
      v30 = v44;
      goto LABEL_61;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v52);
    if ( v43 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v38 )
      CStreamInstance::DisconnectFromRightSubmix(v35, v38);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v38);
    if ( v35 )
      CStreamInstance::`scalar deleting destructor'(v35);
    v35 = 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v37);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v36);
    if ( v41 )
    {
      v13 = v40;
      goto LABEL_11;
    }
LABEL_68:
    ATL::CAutoPtr<CPipeInstance>::Free(&v39, v12);
    result = v10;
  }
LABEL_61:
  if ( v29 )
    LeaveCriticalSection(v30);
  *((_QWORD *)v53 + 4) = *((_QWORD *)v35 + 1);
  v35 = 0LL;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v38);
  v18 = v35;
  if ( v35 )
    CStreamInstance::`scalar deleting destructor'(v35);
  goto LABEL_65;
}
