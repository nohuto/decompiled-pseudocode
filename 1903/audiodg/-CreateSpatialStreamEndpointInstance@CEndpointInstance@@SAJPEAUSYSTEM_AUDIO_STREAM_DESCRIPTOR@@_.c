/*
 * XREFs of ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140039504
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400104DC (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x1400034F0 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14000CFA4 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_DDD @ 0x140032A44 (WPP_SF_DDD.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140039C38 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     CreateSpatialCrossProcessEndpointRT @ 0x14005917C (CreateSpatialCrossProcessEndpointRT.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v8; // r11
  __int64 v9; // r13
  int v10; // r12d
  double v11; // xmm3_8
  unsigned int v12; // r8d
  int v13; // esi
  __int64 v14; // rax
  int started; // edi
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  HRESULT v17; // eax
  __int64 v18; // rdx
  LPVOID v19; // rbx
  struct ICrossProcessEvent *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // eax
  struct IAudioEndpointRT *v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  CEndpointInstance *v30; // rax
  CEndpointInstance *v31; // rax
  struct ICrossProcessEvent *v32; // rcx
  struct HandleSendReceiveServer *v33; // rcx
  void *v34; // rcx
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v37; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v38; // [rsp+40h] [rbp-C0h] BYREF
  struct ICrossProcessEvent *v39; // [rsp+48h] [rbp-B8h] BYREF
  struct HandleSendReceiveServer *v40; // [rsp+50h] [rbp-B0h] BYREF
  struct IAudioEndpointRT *v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+60h] [rbp-A0h]
  struct ICrossProcessMemory **v43; // [rsp+68h] [rbp-98h]
  struct HandleSendReceiveServer *v44[2]; // [rsp+70h] [rbp-90h] BYREF
  char v45; // [rsp+80h] [rbp-80h]
  struct CEndpointInstance **v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v48; // [rsp+A0h] [rbp-60h]
  char v49; // [rsp+A8h] [rbp-58h]
  __int128 v50; // [rsp+B0h] [rbp-50h] BYREF
  int v51; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+C8h] [rbp-38h]
  __int128 v53; // [rsp+D8h] [rbp-28h]
  __int128 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+114h] [rbp+14h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  struct HandleSendReceiveServer *v61; // [rsp+120h] [rbp+20h]
  struct ICrossProcessEvent *v62; // [rsp+128h] [rbp+28h]
  LPVOID v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v47 = -2LL;
  v42 = a3;
  v8 = a1;
  v37 = a1;
  v43 = a5;
  v46 = a7;
  v48 = &v37;
  v49 = 1;
  v9 = *((_QWORD *)a1 + 16);
  v10 = *(_DWORD *)a1;
  v11 = (double)(int)(*(_DWORD *)(v9 + 8) / (unsigned int)*(unsigned __int16 *)(v9 + 12));
  v12 = a3 + (int)((double)a2 * v11 / 10000000.0 + 0.5);
  v13 = (int)((double)(int)*((_QWORD *)a1 + 3) * v11 / 10000000.0 + 0.5);
  if ( *((_DWORD *)a1 + 2) != 1 && v12 > (int)((double)(int)*((_QWORD *)a1 + 3) * v11 / 10000000.0 + 0.5) )
    v13 = v12;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_0ba2ce53590232a88bdc3af682a35f09_Traceguids,
      v12);
    v8 = v37;
  }
  v41 = (struct IAudioEndpointRT *)*((_QWORD *)v8 + 2);
  v40 = 0LL;
  v39 = 0LL;
  v14 = *((_QWORD *)v8 + 10) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v14 )
    v14 = *((_QWORD *)v8 + 11) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v14 )
  {
    v44[0] = (struct HandleSendReceiveServer *)&v40;
    v44[1] = 0LL;
    v45 = 1;
    started = CEndpointInstance::StartALPCHandleServer(v8, &v44[1]);
    if ( v45 )
    {
      v16 = *(void (__fastcall ****)(_QWORD, __int64))v44[0];
      *(_QWORD *)v44[0] = v44[1];
      if ( v16 )
        (**v16)(v16, 1LL);
    }
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)started);
      goto LABEL_59;
    }
LABEL_28:
    v38 = 0LL;
    v21 = *((_QWORD *)v37 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v21 )
      v21 = *((_QWORD *)v37 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    v38 = 0LL;
    if ( v21 )
    {
      v22 = CoCreateInstance((const IID *const)v37 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v38);
      started = v22;
      if ( v22 < 0 )
      {
        v23 = 513LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v22);
LABEL_58:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v38);
        goto LABEL_59;
      }
      v22 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v38 + 24LL))(v38, (__int64)v37 + 96);
      started = v22;
      if ( v22 < 0 )
      {
        v23 = 514LL;
        goto LABEL_37;
      }
    }
    else
    {
      v22 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
              (CCrossProcessMemoryManager **)&v38,
              (const unsigned __int16 **)&v41);
      started = v22;
      if ( v22 < 0 )
      {
        v23 = 519LL;
        goto LABEL_37;
      }
    }
    v41 = 0LL;
    if ( v10 )
    {
      started = -2147418113;
      v24 = 2147549183LL;
      v25 = 560LL;
    }
    else
    {
      v50 = *((_OWORD *)v37 + 3);
      *(GUID *)v44 = GUID_6b78656b_c0e1_4190_83ee_ef91c2908926;
      v41 = 0LL;
      v26 = CreateSpatialCrossProcessEndpointRT(v44, &v50, &v41);
      started = v26;
      if ( v26 >= 0 )
      {
        ppv = 0LL;
        v27 = v41;
        v28 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, LPVOID *))v41->lpVtbl->QueryInterface)(
                v41,
                &GUID_50a63589_dc31_42b1_8e82_dbb0ab53dda5,
                &ppv);
        started = v28;
        if ( v28 >= 0 )
        {
          v51 = 144;
          v52 = *((_OWORD *)v37 + 12);
          v53 = *((_OWORD *)v37 + 13);
          v54 = *((_OWORD *)v37 + 14);
          v55 = *((_QWORD *)v37 + 30);
          v56 = 0;
          v57 = *((_QWORD *)v37 + 4);
          v58 = v13 * *(unsigned __int16 *)(v9 + 12);
          v59 = v42;
          v60 = *((_QWORD *)v37 + 18);
          v61 = v40;
          v62 = v39;
          v64 = 0LL;
          v65 = *((_QWORD *)v37 + 16);
          v66 = *((_QWORD *)v37 + 14);
          v63 = v38;
          v28 = (*(__int64 (__fastcall **)(LPVOID, int *, struct ICrossProcessMemory **))(*(_QWORD *)ppv + 24LL))(
                  ppv,
                  &v51,
                  v43);
          started = v28;
          if ( v28 >= 0 )
          {
            *(GUID *)a4 = GUID_9371e7ff_df2d_4962_9585_40424d054550;
            *((_DWORD *)a4 + 236) = 0;
            *((_DWORD *)a4 + 4) = v13 * *(unsigned __int16 *)(v9 + 12);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
            v30 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
            v43 = (struct ICrossProcessMemory **)v30;
            if ( v30 )
              v31 = CEndpointInstance::CEndpointInstance(v30, (struct IUnknown *)v27, v40, 0LL);
            else
              v31 = 0LL;
            if ( v31 )
            {
              v40 = 0LL;
              v43 = 0LL;
              *v46 = v31;
              v32 = v39;
              if ( v39 )
              {
                *a6 = v39;
                (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v32 + 8LL))(v32);
              }
              else
              {
                *a6 = 0LL;
              }
              started = 0;
            }
            else
            {
              started = -2147024882;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x239,
                (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                (const char *)0x8007000ELL);
            }
            goto LABEL_57;
          }
          v29 = 548LL;
        }
        else
        {
          v29 = 531LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v28);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_57:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v41);
        goto LABEL_58;
      }
      v24 = (unsigned int)v26;
      v25 = 528LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v24);
    goto LABEL_57;
  }
  ppv = 0LL;
  v17 = CoCreateInstance((const IID *const)v8 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &ppv);
  started = v17;
  if ( v17 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 24LL))(ppv, (__int64)v37 + 96);
    started = v17;
    if ( v17 >= 0 )
    {
      v19 = ppv;
      v20 = v39;
      v39 = 0LL;
      if ( v20 )
        (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v20 + 16LL))(v20);
      v17 = (*(__int64 (__fastcall **)(LPVOID, struct ICrossProcessEvent **))(*(_QWORD *)v19 + 32LL))(v19, &v39);
      started = v17;
      if ( v17 >= 0 )
      {
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
        goto LABEL_28;
      }
      v18 = 506LL;
    }
    else
    {
      v18 = 505LL;
    }
  }
  else
  {
    v18 = 504LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)(unsigned int)v17);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
LABEL_59:
  if ( v39 )
    (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v39 + 16LL))(v39);
  v33 = v40;
  v40 = 0LL;
  if ( v33 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v33)(v33, 1LL);
  v34 = (void *)*((_QWORD *)v37 + 18);
  if ( v34 )
  {
    CoTaskMemFree(v34);
    *((_QWORD *)v37 + 18) = 0LL;
  }
  return (unsigned int)started;
}
