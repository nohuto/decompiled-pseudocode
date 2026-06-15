/*
 * XREFs of ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140012698 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140013028 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x1400177D4 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031C94 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140034BB0 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400350CC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140039E98 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140039F4C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
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
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  int ApoEndpointInstance; // eax
  __int64 v17; // rdx
  CPipeInstance *v18; // rbx
  struct SYSTEM_AUDIO_STREAM *v19; // r9
  int v20; // eax
  void (__fastcall ***v21)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v22; // r12
  const struct CPipeInstance *v23; // rbx
  CStreamInstance *v24; // rdi
  int v25; // eax
  struct _RTL_CRITICAL_SECTION *v26; // rbx
  struct _RTL_CRITICAL_SECTION *v27; // rdi
  __int64 v28; // r8
  __int64 result; // rax
  ATL::CAtlException *v30; // rbx
  LPVOID *v31; // [rsp+28h] [rbp-D0h]
  CStreamInstance *v32; // [rsp+40h] [rbp-B8h] BYREF
  struct IAudioProcessingObject *v33; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-A8h] BYREF
  struct ISubmixInternal *v35; // [rsp+58h] [rbp-A0h] BYREF
  CPipeInstance *v36; // [rsp+60h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+68h] [rbp-90h]
  char *v38; // [rsp+70h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-80h]
  char *v40; // [rsp+80h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+88h] [rbp-70h]
  __int128 v42; // [rsp+90h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+A8h] [rbp-50h]
  ATL::CAtlException *v45; // [rsp+B0h] [rbp-48h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-40h]
  char v47; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char *v49; // [rsp+100h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v50; // [rsp+118h] [rbp+20h]

  v50 = a4;
  v43 = -2LL;
  v36 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v38 = (char *)this + 200;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v37 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v44 = v8;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
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
  v13 = *((_DWORD *)this + 70);
  if ( v13 != *(_DWORD *)a2 && (v13 != 2 || *((_DWORD *)a2 + 2) != 2) )
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
  v14 = *(_QWORD *)((char *)a2 + 12) - *((_QWORD *)this + 33);
  if ( !v14 )
    v14 = *(_QWORD *)((char *)a2 + 20) - *((_QWORD *)this + 34);
  if ( v14 )
  {
    v15 = *(_QWORD *)((char *)a2 + 12) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v15 )
      v15 = *(_QWORD *)((char *)a2 + 20) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v15 )
    {
      v10 = -2147024809;
      v11 = 148LL;
      goto LABEL_8;
    }
  }
  v33 = 0LL;
  v34 = 0LL;
  (**(void (__fastcall ***)(struct IStreamGroup *, GUID *, __int64 *))a3)(
    a3,
    &GUID_78c8e80a_c79b_465b_be08_cd0c3ec0edda,
    &v34);
  if ( v34 )
  {
    v33 = 0LL;
    ApoEndpointInstance = (*(__int64 (__fastcall **)(__int64, struct IAudioProcessingObject **))(*(_QWORD *)v34 + 24LL))(
                            v34,
                            &v33);
    v10 = ApoEndpointInstance;
    if ( ApoEndpointInstance < 0 )
    {
      v17 = 156LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)ApoEndpointInstance);
LABEL_29:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v34);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_9:
      if ( v8 )
      {
        v12 = v8;
LABEL_11:
        LeaveCriticalSection(v12);
        goto LABEL_68;
      }
      goto LABEL_68;
    }
  }
  if ( !v33 )
  {
LABEL_65:
    PublishDeviceGraphWnfState();
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v33);
    if ( v8 )
      LeaveCriticalSection(v9);
    v10 = 0;
    goto LABEL_68;
  }
  ApoEndpointInstance = CPipeInstance::CreateBridgeStreamPipeInstance(
                          *((struct IUnknown **)this + 36),
                          a2,
                          v33,
                          *((struct CPipeInstance **)this + 6),
                          *((struct tWAVEFORMATEX **)this + 31),
                          v31,
                          &v36);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v17 = 168LL;
    goto LABEL_28;
  }
  v18 = v36;
  ApoEndpointInstance = CPipeInstance::Initialize(v36);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v17 = 170LL;
    goto LABEL_28;
  }
  ApoEndpointInstance = CPipeInstance::ConnectAPOs(v18, 0LL);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v17 = 171LL;
    goto LABEL_28;
  }
  ApoEndpointInstance = CPipeInstance::CreateApoEndpointInstance(v18, a2, v33, v19);
  v10 = ApoEndpointInstance;
  if ( ApoEndpointInstance < 0 )
  {
    v17 = 172LL;
    goto LABEL_28;
  }
  v32 = 0LL;
  v20 = CStreamInstance::CreateStreamInstance(&v32, 0, *(_DWORD *)a2, (__int64)v18, (__int64)v18, 0LL);
  v10 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v20);
LABEL_41:
    if ( v32 )
      CStreamInstance::`scalar deleting destructor'(v32);
    v32 = 0LL;
    goto LABEL_29;
  }
  v36 = 0LL;
  v21 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 41);
  if ( v21 )
  {
    (**v21)(v21, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v35);
    v22 = v35;
  }
  else
  {
    v22 = 0LL;
    v35 = 0LL;
  }
  if ( v22 )
  {
    v23 = (const struct CPipeInstance *)*((_QWORD *)this + 37);
    v24 = v32;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 64LL))((char *)this + 24);
    v25 = CStreamInstance::ConnectToRightSubmix(v24, v22, v23);
    v10 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v25);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
      goto LABEL_41;
    }
  }
  *(_QWORD *)&v42 = &v35;
  *((_QWORD *)&v42 + 1) = &v32;
  v46 = v42;
  v47 = 1;
  v26 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v40 = (char *)this + 56;
  v41 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v27 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  try
  {
    *(_QWORD *)&v42 = (char *)this + 56;
    v49 = (char *)v32;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
      (__int64 *)this + 12,
      (__int64)&v49,
      v28);
  }
  catch ( ATL::CAtlException *v45 )
  {
    v30 = v45;
    if ( *(_DWORD *)v45 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v49) = *(_DWORD *)v30;
    v10 = (unsigned int)v49;
    if ( (int)v49 >= 0 )
    {
      v26 = v41;
      v9 = v37;
      v8 = v37;
      v27 = v41;
      goto LABEL_61;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v49);
    if ( v40 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v35 )
      CStreamInstance::DisconnectFromRightSubmix(v32, v35);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
    if ( v32 )
      CStreamInstance::`scalar deleting destructor'(v32);
    v32 = 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v33);
    if ( v38 )
    {
      v12 = v37;
      goto LABEL_11;
    }
LABEL_68:
    ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)&v36);
    result = v10;
  }
LABEL_61:
  if ( v26 )
    LeaveCriticalSection(v27);
  *((_QWORD *)v50 + 6) = *((_QWORD *)v32 + 1);
  v32 = 0LL;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v35);
  if ( v32 )
    CStreamInstance::`scalar deleting destructor'(v32);
  goto LABEL_65;
}
