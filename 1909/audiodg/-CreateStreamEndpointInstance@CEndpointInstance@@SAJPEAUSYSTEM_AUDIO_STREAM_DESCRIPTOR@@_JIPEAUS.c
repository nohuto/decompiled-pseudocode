/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F96C
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400104CC (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400034E0 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14000CF94 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14000F258 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ??1?$com_ptr_t@UICrossProcessEventManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000FF88 (--1-$com_ptr_t@UICrossProcessEventManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___ @ 0x140025CB8 (wil--details--lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___--_lambda_call__lambda_41ab.c)
 *     ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x140025D00 (--1-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd@@@w.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x140025D3C (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140039BD8 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  unsigned int v8; // r12d
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v9; // r11
  __int64 v10; // r15
  BOOL v11; // ebx
  double v12; // xmm3_8
  unsigned int v13; // esi
  const IID *v14; // rcx
  int started; // edi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  HRESULT v19; // eax
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  struct IAudioEndpointRT *v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int16 *v28; // rax
  CEndpointInstance *v29; // rcx
  LPVOID *ppv; // [rsp+28h] [rbp-B1h]
  const unsigned __int16 *v32; // [rsp+78h] [rbp-61h] BYREF
  struct IAudioEndpointRT *v33; // [rsp+80h] [rbp-59h] BYREF
  LPVOID v34; // [rsp+88h] [rbp-51h] BYREF
  struct HandleSendReceiveServer *v35; // [rsp+90h] [rbp-49h] BYREF
  struct HandleSendReceiveServer *v36[2]; // [rsp+98h] [rbp-41h] BYREF
  char v37; // [rsp+A8h] [rbp-31h]
  GUID v38; // [rsp+B8h] [rbp-21h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v39; // [rsp+C8h] [rbp-11h] BYREF
  char v40; // [rsp+D0h] [rbp-9h]
  __int64 v41; // [rsp+D8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+47h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v43; // [rsp+128h] [rbp+4Fh] BYREF
  LPVOID v44; // [rsp+130h] [rbp+57h] BYREF

  v43 = a1;
  v41 = -2LL;
  v8 = a3;
  v9 = a1;
  v39 = &v43;
  v40 = 1;
  v10 = *((_QWORD *)a1 + 16);
  v11 = *(_DWORD *)a1 != 0;
  v12 = (double)(int)(*(_DWORD *)(v10 + 8) / (unsigned int)*(unsigned __int16 *)(v10 + 12));
  v13 = (int)((double)(int)*((_QWORD *)a1 + 3) * v12 / 10000000.0 + 0.5);
  if ( *((_DWORD *)a1 + 2) != 1 && a3 + (int)((double)a2 * v12 / 10000000.0 + 0.5) > v13 )
    v13 = a3 + (int)((double)a2 * v12 / 10000000.0 + 0.5);
  v32 = (const unsigned __int16 *)*((_QWORD *)a1 + 2);
  v35 = 0LL;
  v34 = 0LL;
  if ( (*((_DWORD *)a1 + 34) & 0x40000) == 0 )
  {
LABEL_19:
    v44 = 0LL;
    if ( *((_QWORD *)v9 + 8) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
      && *((_QWORD *)v9 + 9) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
      v44 = 0LL;
      v20 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
              (CCrossProcessMemoryManager **)&v44,
              &v32);
      started = v20;
      if ( v20 < 0 )
      {
        v22 = 330LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v20,
          (int)ppv);
LABEL_56:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v44);
        goto LABEL_57;
      }
    }
    else
    {
      v44 = 0LL;
      v20 = CoCreateInstance((const IID *const)v9 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v44);
      started = v20;
      if ( v20 < 0 )
      {
        v22 = 324LL;
        goto LABEL_27;
      }
      v20 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v44 + 24LL))(v44, (__int64)v43 + 96);
      started = v20;
      if ( v20 < 0 )
      {
        v22 = 325LL;
        goto LABEL_27;
      }
    }
    v33 = 0LL;
    if ( v11 )
    {
      v33 = 0LL;
      v38 = (GUID)*((_OWORD *)v43 + 3);
      *(GUID *)v36 = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
      v23 = privateCreateCrossProcessEndpoint(v36, &v38, v21, &v33);
      started = v23;
      if ( v23 < 0 )
      {
        v24 = 368LL;
LABEL_42:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v23,
          (int)ppv);
        goto LABEL_55;
      }
      v32 = 0LL;
      v25 = v33;
      v26 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, const unsigned __int16 **))v33->lpVtbl->QueryInterface)(
              v33,
              &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
              &v32);
      started = v26;
      if ( v26 < 0 )
      {
        v27 = 371LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v26,
          (int)ppv);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_55:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v33);
        goto LABEL_56;
      }
      if ( *((_QWORD *)v43 + 31)
        && v8 > (int)((double)(int)*((_QWORD *)v43 + 32) * (double)*(int *)(v10 + 4) / 10000000.0 + 0.5) )
      {
        v8 = (int)((double)(int)*((_QWORD *)v43 + 32) * (double)*(int *)(v10 + 4) / 10000000.0 + 0.5);
      }
      ppv = (LPVOID *)*((_QWORD *)v43 + 18);
      v26 = (*(__int64 (__fastcall **)(const unsigned __int16 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 24LL))(
              v32,
              v10,
              v13 * *(unsigned __int16 *)(v10 + 12),
              v8);
      started = v26;
      if ( v26 < 0 )
      {
        v27 = 395LL;
        goto LABEL_38;
      }
      *(GUID *)a4 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
      *((_DWORD *)a4 + 236) = 0;
      *((_DWORD *)a4 + 4) = v13 * *(unsigned __int16 *)(v10 + 12);
    }
    else
    {
      v33 = 0LL;
      *(_OWORD *)v36 = *((_OWORD *)v43 + 3);
      v38 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
      v23 = privateCreateCrossProcessEndpoint(&v38, v36, v21, &v33);
      started = v23;
      if ( v23 < 0 )
      {
        v24 = 339LL;
        goto LABEL_42;
      }
      v32 = 0LL;
      v25 = v33;
      v26 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, const unsigned __int16 **))v33->lpVtbl->QueryInterface)(
              v33,
              &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
              &v32);
      started = v26;
      if ( v26 < 0 )
      {
        v27 = 342LL;
        goto LABEL_38;
      }
      ppv = (LPVOID *)*((_QWORD *)v43 + 18);
      v26 = (*(__int64 (__fastcall **)(const unsigned __int16 *, __int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 24LL))(
              v32,
              v10,
              v13 * *(unsigned __int16 *)(v10 + 12),
              v8);
      started = v26;
      if ( v26 < 0 )
      {
        v27 = 356LL;
        goto LABEL_38;
      }
      *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
      *((_DWORD *)a4 + 236) = 0;
      *((_DWORD *)a4 + 4) = v13 * *(unsigned __int16 *)(v10 + 12);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
    v28 = (unsigned __int16 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v32 = v28;
    if ( v28 )
      v29 = CEndpointInstance::CEndpointInstance((CEndpointInstance *)v28, (struct IUnknown *)v25, v35, 0LL);
    else
      v29 = 0LL;
    v32 = (const unsigned __int16 *)v29;
    if ( v29 )
    {
      v35 = 0LL;
      v32 = 0LL;
      *a7 = v29;
      started = 0;
    }
    else
    {
      started = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)0x8007000ELL,
        (int)ppv);
    }
    wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(&v32);
    goto LABEL_55;
  }
  v14 = (const IID *)((char *)a1 + 80);
  if ( *((_QWORD *)v9 + 10) != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || *((_QWORD *)v9 + 11) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    v34 = 0LL;
    v19 = CoCreateInstance(v14, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &v34);
    started = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v34 + 24LL))(v34, (__int64)v43 + 96);
      started = v19;
      if ( v19 >= 0 )
      {
LABEL_18:
        v9 = v43;
        goto LABEL_19;
      }
      v18 = 316LL;
    }
    else
    {
      v18 = 315LL;
    }
    v17 = (unsigned int)v19;
    goto LABEL_17;
  }
  v36[0] = (struct HandleSendReceiveServer *)&v35;
  v36[1] = 0LL;
  v37 = 1;
  started = CEndpointInstance::StartALPCHandleServer(v9, &v36[1]);
  if ( v37 )
  {
    v16 = *(void (__fastcall ****)(_QWORD, __int64))v36[0];
    *(_QWORD *)v36[0] = v36[1];
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  if ( started >= 0 )
    goto LABEL_18;
  v17 = (unsigned int)started;
  v18 = 310LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)v17,
    (int)ppv);
LABEL_57:
  wil::com_ptr_t<ICrossProcessEventManager,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessEventManager,wil::err_returncode_policy>(&v34);
  wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(&v35);
  wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___(&v39);
  return (unsigned int)started;
}
