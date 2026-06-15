/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140014E50
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140009560 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F2B0 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x140030E1C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003B14C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x14003C320 (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2, bool a3)
{
  int v4; // r12d
  __int64 v5; // r15
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // ebx
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  bool v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  int v27; // ebx
  CAudioDeviceGraph *v28; // rcx
  int v29; // ebx
  CAudioDeviceGraph *v30; // rcx
  __int64 v31; // rax
  char *v32; // [rsp+28h] [rbp-61h]
  _QWORD *v33; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp-1h] BYREF
  _QWORD *v35; // [rsp+90h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+98h] [rbp+Fh]
  __int64 v37; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  struct IAdaptiveSpatialAudioRenderer *v39; // [rsp+F0h] [rbp+67h] BYREF
  bool v40; // [rsp+100h] [rbp+77h]
  struct ISpatialAudioProcessBlockRT *v41; // [rsp+108h] [rbp+7Fh] BYREF

  v40 = a3;
  v37 = -2LL;
  v4 = 0;
  v5 = *((_QWORD *)this + 20);
  v6 = 0LL;
  v34 = 0LL;
  v39 = 0LL;
  v7 = *(_QWORD *)(v5 + 24);
  v8 = *(_QWORD *)(v5 + 72);
  if ( !v7 )
    goto LABEL_74;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v10 = *(_QWORD **)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    if ( !*v10 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v9 + 40) != 2 )
      goto LABEL_10;
    v11 = *(_QWORD **)(*(_QWORD *)(v9 + 32) + 40LL);
    v35 = v11;
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
    v41 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v11)(
           v11,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           &v41) >= 0 )
      break;
    if ( v41 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
LABEL_10:
    if ( !v7 )
      goto LABEL_74;
  }
  v35 = 0LL;
  v6 = v11;
  v34 = v11;
  if ( v41 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( !v11 )
  {
LABEL_74:
    if ( *(_DWORD *)(v5 + 112) == 1 )
    {
      LODWORD(v32) = *(_DWORD *)(v5 + 152);
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x129A,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)0x80070490LL,
        (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v32,
        *(unsigned __int16 *)(v5 + 156),
        *(unsigned __int16 *)(v5 + 158),
        *(unsigned __int8 *)(v5 + 160),
        *(unsigned __int8 *)(v5 + 161),
        *(unsigned __int8 *)(v5 + 162),
        *(unsigned __int8 *)(v5 + 163),
        *(unsigned __int8 *)(v5 + 164),
        *(unsigned __int8 *)(v5 + 165),
        *(unsigned __int8 *)(v5 + 166),
        *(unsigned __int8 *)(v5 + 167));
      ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v34);
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    }
    goto LABEL_46;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IAdaptiveSpatialAudioRenderer **))*v11)(
          v11,
          &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
          &v39);
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v34);
  if ( v12 < 0 )
    goto LABEL_46;
  v13 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v14 = *((_QWORD *)a2 + 3);
  v15 = *((_QWORD *)a2 + 9);
  if ( !v14 )
    goto LABEL_26;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v14 + 16);
    v14 = *(_QWORD *)(v14 + 8);
    v17 = *(_QWORD **)(v15 + 16);
    v15 = *(_QWORD *)(v15 + 8);
    if ( !*v17 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v16 + 40) != 2 )
      goto LABEL_25;
    v18 = *(_QWORD **)(*(_QWORD *)(v16 + 32) + 40LL);
    v35 = v18;
    if ( v18 )
      (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
    v41 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v18)(
           v18,
           &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
           &v41) >= 0 )
      break;
    if ( v41 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
LABEL_25:
    if ( !v14 )
      goto LABEL_26;
  }
  v35 = 0LL;
  v13 = v18;
  v33 = v18;
  if ( v41 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( !v18 )
  {
LABEL_26:
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    goto LABEL_28;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD **))*v18)(
          v18,
          &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
          &v34);
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v33);
  if ( v27 < 0 )
  {
LABEL_28:
    v19 = v40;
    goto LABEL_29;
  }
  v41 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD *, struct ISpatialAudioProcessBlockRT **))(*v34 + 24LL))(v34, &v41);
  v19 = v40;
  if ( v4 >= 0 )
    v4 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v28, v41, v39, v40);
  if ( v41 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v4 < 0 )
    goto LABEL_42;
LABEL_29:
  v20 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v21 = *((_QWORD *)a2 + 3);
  v22 = *((_QWORD *)a2 + 9);
  if ( !v21 )
    goto LABEL_39;
  while ( 2 )
  {
    v23 = *(_QWORD *)(v21 + 16);
    v21 = *(_QWORD *)(v21 + 8);
    v24 = *(_QWORD **)(v22 + 16);
    v22 = *(_QWORD *)(v22 + 8);
    if ( !*v24 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v23 + 40) != 2 )
    {
LABEL_38:
      if ( !v21 )
        goto LABEL_39;
      continue;
    }
    break;
  }
  v25 = *(_QWORD **)(*(_QWORD *)(v23 + 32) + 40LL);
  v36 = v25;
  if ( v25 )
    (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
  v41 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v25)(
         v25,
         &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
         &v41) < 0 )
  {
    if ( v41 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
    goto LABEL_38;
  }
  v36 = 0LL;
  v20 = v25;
  v35 = v25;
  if ( v41 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v25 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD **))*v25)(
            v25,
            &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
            &v33);
    ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v35);
    if ( v29 >= 0 )
    {
      v41 = 0LL;
      v4 = (*(__int64 (__fastcall **)(_QWORD *, struct ISpatialAudioProcessBlockRT **))(*v33 + 24LL))(v33, &v41);
      if ( v4 >= 0 )
        v4 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v30, v41, v39, v19);
      if ( v41 )
      {
        v31 = *(_QWORD *)v41;
        goto LABEL_72;
      }
    }
    goto LABEL_40;
  }
LABEL_39:
  if ( v20 )
  {
    v31 = *v20;
LABEL_72:
    (*(void (**)(void))(v31 + 16))();
  }
LABEL_40:
  if ( v33 )
    (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
LABEL_42:
  if ( v34 )
    (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
  if ( v4 < 0 )
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x71Bu, v4);
LABEL_46:
  if ( v39 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v39 + 16LL))(v39);
  return (unsigned int)v4;
}
