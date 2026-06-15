/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400086E0
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001866C (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 * Callees:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140004F54 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140016F38 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_S @ 0x140032878 (WPP_SF_S.c)
 *     WPP_SF_DDD @ 0x140037EB0 (WPP_SF_DDD.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct CEndpointInstance **a5)
{
  struct IUnknown *v7; // rbx
  struct HandleSendReceiveServer *v8; // r15
  BOOL v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  double v13; // xmm3_8
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // r12d
  int started; // r14d
  __int64 v18; // rdi
  GUID v19; // xmm0
  struct CEndpointInstance *v20; // rax
  struct CEndpointInstance *v21; // rdi
  void *v22; // rcx
  int v24; // [rsp+20h] [rbp-71h]
  int v25; // [rsp+28h] [rbp-69h]
  struct HandleSendReceiveServer *v26[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v27; // [rsp+80h] [rbp-11h]
  struct CEndpointInstance *v28; // [rsp+88h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp-1h]
  _OWORD v30[4]; // [rsp+A0h] [rbp+Fh] BYREF
  struct IUnknown *v31; // [rsp+F0h] [rbp+5Fh] BYREF
  __int64 v32; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v33; // [rsp+100h] [rbp+6Fh]

  v33 = a3;
  v29 = -2LL;
  v7 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v26[0] = 0LL;
  v27 = *((_QWORD *)a1 + 10);
  v9 = *(_DWORD *)a1 != 0;
  v10 = *(unsigned __int16 *)(v27 + 12);
  v11 = *(_DWORD *)(v27 + 8);
  if ( v10 == 4 )
    v12 = v11 >> 2;
  else
    v12 = v11 / v10;
  v13 = (double)v12;
  v14 = a3 + (int)((double)a2 * (double)v12 / 10000000.0 + 0.5);
  v15 = (unsigned int)(int)((double)(int)*((_QWORD *)a1 + 3) * v13 / 10000000.0 + 0.5);
  v16 = (int)((double)(int)*((_QWORD *)a1 + 3) * v13 / 10000000.0 + 0.5);
  if ( *((_DWORD *)a1 + 2) != 1 && v14 > (unsigned int)v15 )
    v16 = v14;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v25 = v16;
    v24 = (int)((double)(int)*((_QWORD *)a1 + 3) * v13 / 10000000.0 + 0.5);
    WPP_SF_DDD(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_aaa44b5172b232dd71a9829e6fd58753_Traceguids, v14);
  }
  v28 = (struct CEndpointInstance *)*((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 22) & 0x40000) != 0 )
  {
    started = CEndpointInstance::StartALPCHandleServer(a1, v26);
    if ( started < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_aaa44b5172b232dd71a9829e6fd58753_Traceguids,
          (unsigned int)started);
      }
      AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateStreamEndpointInstance", 0x146u, started);
      v8 = v26[0];
      goto LABEL_44;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_aaa44b5172b232dd71a9829e6fd58753_Traceguids,
        *((_QWORD *)a1 + 12),
        v24,
        v25);
    }
    v8 = v26[0];
  }
  if ( v9 )
  {
    *(_OWORD *)v26 = *((_OWORD *)a1 + 3);
    v30[0] = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
    started = privateCreateCrossProcessEndpoint(v30, v26, v15, &v31);
    v7 = v31;
    if ( started < 0 )
      goto LABEL_44;
    started = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v31->lpVtbl->QueryInterface)(
                v31,
                &GUID_417684e5_7a71_44f4_9364_208e73fa5a20,
                &v32);
    if ( started < 0 )
      goto LABEL_44;
    v18 = v27;
    started = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, struct CEndpointInstance *, _QWORD, struct HandleSendReceiveServer *, _DWORD, _QWORD, _QWORD, char *, char *))(*(_QWORD *)v32 + 24LL))(
                v32,
                v27,
                v16 * (unsigned int)*(unsigned __int16 *)(v27 + 12),
                v33,
                v28,
                *((_QWORD *)a1 + 12),
                v8,
                *((_DWORD *)a1 + 22),
                *((_QWORD *)a1 + 25),
                *((_QWORD *)a1 + 26),
                (char *)a4 + 24,
                (char *)a4 + 32);
    if ( started < 0 )
      goto LABEL_44;
    v19 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
  }
  else
  {
    v30[0] = *((_OWORD *)a1 + 3);
    *(GUID *)v26 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
    started = privateCreateCrossProcessEndpoint(v26, v30, v15, &v31);
    v7 = v31;
    if ( started < 0 )
      goto LABEL_44;
    started = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v31->lpVtbl->QueryInterface)(
                v31,
                &GUID_417684e5_7a71_44f4_9364_208e73fa5a20,
                &v32);
    if ( started < 0 )
      goto LABEL_44;
    v18 = v27;
    started = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, struct CEndpointInstance *, _QWORD, struct HandleSendReceiveServer *, _DWORD, _QWORD, _QWORD, char *, char *))(*(_QWORD *)v32 + 24LL))(
                v32,
                v27,
                v16 * (unsigned int)*(unsigned __int16 *)(v27 + 12),
                v33,
                v28,
                *((_QWORD *)a1 + 12),
                v8,
                *((_DWORD *)a1 + 22),
                0LL,
                0LL,
                (char *)a4 + 24,
                (char *)a4 + 32);
    if ( started < 0 )
      goto LABEL_44;
    v19 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
  }
  *(GUID *)a4 = v19;
  *((_DWORD *)a4 + 22) = 0;
  *((_DWORD *)a4 + 4) = v16 * *(unsigned __int16 *)(v18 + 12);
  v20 = (struct CEndpointInstance *)operator new(0x20uLL);
  v21 = v20;
  v28 = v20;
  if ( v20 )
  {
    *(_QWORD *)v20 = 0LL;
    *((_QWORD *)v20 + 3) = 0LL;
    if ( *(struct IUnknown **)v20 != v7 )
      ATL::AtlComPtrAssign((struct IUnknown **)v20, v7);
    *((_QWORD *)v21 + 2) = v8;
    *((_QWORD *)v21 + 1) = 0LL;
    *a5 = v21;
    goto LABEL_22;
  }
  started = -2147024882;
LABEL_44:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_aaa44b5172b232dd71a9829e6fd58753_Traceguids,
      (unsigned int)started);
  }
  AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateStreamEndpointInstance", 0x1A5u, started);
  if ( v8 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v8)(v8, 1LL);
LABEL_22:
  v22 = (void *)*((_QWORD *)a1 + 12);
  if ( v22 )
  {
    CoTaskMemFree(v22);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  return (unsigned int)started;
}
