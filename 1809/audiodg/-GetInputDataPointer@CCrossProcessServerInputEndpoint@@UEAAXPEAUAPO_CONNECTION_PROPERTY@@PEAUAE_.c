/*
 * XREFs of ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014210
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140014750 (-CheckSampleForSilence@@YAHPEAEIII@Z.c)
 *     ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x1400147F8 (-ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z.c)
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x1400149FC (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140055FD0 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     McTemplateU0pqqqq @ 0x140057BA0 (McTemplateU0pqqqq.c)
 *     WPP_SF_DDDD @ 0x140057CE0 (WPP_SF_DDDD.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400621FC (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140062274 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::GetInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v3; // r14
  unsigned int v6; // esi
  unsigned int v7; // r13d
  void *v8; // rcx
  unsigned __int8 v9; // r8
  signed __int32 v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // edi
  char *v14; // r15
  __int64 v15; // rcx
  signed __int64 v16; // r9
  signed __int64 v17; // rdi
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // r15d
  int v23; // ecx
  const GUID *v24; // r9
  unsigned int v25; // esi
  bool v26; // cf
  unsigned int v27; // r15d
  APO_BUFFER_FLAGS v28; // eax
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  int v31; // edi
  char v32; // al
  void *v33; // rcx
  const void *v34; // rdx
  unsigned int v35; // eax
  size_t v36; // r8
  int v37; // edx
  int v38; // edi
  UINT_PTR v39; // rax
  unsigned __int8 *pBuffer; // r12
  unsigned int v41; // r15d
  unsigned int v42; // edx
  unsigned int v43; // r11d
  unsigned int v44; // r9d
  __int64 v45; // rdi
  char *v46; // r15
  _QWORD *v47; // rcx
  unsigned int v48; // ecx
  unsigned __int8 v49; // r8
  unsigned int v50; // ecx
  UINT32 v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh]
  unsigned __int32 v53; // [rsp+48h] [rbp-B8h]
  unsigned int v54; // [rsp+48h] [rbp-B8h]
  unsigned int v55; // [rsp+4Ch] [rbp-B4h]
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h]
  size_t Size; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v60; // [rsp+68h] [rbp-98h]
  struct AE_CURRENT_POSITION *v61; // [rsp+70h] [rbp-90h]
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+80h] [rbp-80h] BYREF
  char *v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B8h] [rbp-48h]
  __int64 u32ValidFrameCount; // [rsp+C0h] [rbp-40h]
  __int64 u32BufferFlags; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h]
  struct _EVENT_TRACE_HEADER v68; // [rsp+E0h] [rbp-20h] BYREF
  char *v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  struct _EVENT_TRACE_HEADER v74; // [rsp+140h] [rbp+40h] BYREF
  char *v75; // [rsp+170h] [rbp+70h]
  int v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  struct _EVENT_TRACE_HEADER v80; // [rsp+1A0h] [rbp+A0h] BYREF
  char *v81; // [rsp+1D0h] [rbp+D0h]
  int v82; // [rsp+1D8h] [rbp+D8h]
  __int64 v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  __int64 v85; // [rsp+1F0h] [rbp+F0h]
  size_t v86; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp+100h] BYREF
  char *v88; // [rsp+220h] [rbp+120h]
  __int64 v89; // [rsp+228h] [rbp+128h]
  int *v90; // [rsp+230h] [rbp+130h]
  __int64 v91; // [rsp+238h] [rbp+138h]
  const char *v92; // [rsp+240h] [rbp+140h]
  __int64 v93; // [rsp+248h] [rbp+148h]
  int *v94; // [rsp+250h] [rbp+150h]
  __int64 v95; // [rsp+258h] [rbp+158h]

  v61 = a3;
  v3 = (char *)this - 456;
  v6 = 0;
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    u32ValidFrameCount = a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    EventTrace.Size = 88;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(EventTrace.Version) = 1285;
    v63 = v3;
    v64 = 0;
    v67 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  v7 = 0;
  v8 = (void *)*((_QWORD *)this - 39);
  v51 = a2->u32ValidFrameCount;
  *((_DWORD *)this + 5) = v51;
  *((_DWORD *)this + 4) = 2;
  ResetEvent(v8);
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL), 0, 0);
  v11 = v10;
  v53 = v10;
  v12 = *((_DWORD *)this + 21);
  v52 = v11 & 1;
  v13 = v52;
  v58 = v12;
  if ( (v11 & 1) == 0 && (v14 = v3, (*((_BYTE *)this - 280) & 1) == 0) || (v14 = v3, !v51) )
  {
    if ( g_u32AEWMILogLevel >= 5 )
    {
      memset_0(&v68, 0, 0x40uLL);
      v69 = v14;
      v27 = v51;
      v68.Size = 88;
      v70 = 0;
      v71 = v53;
      v68.UserTime = 0x20000;
      v68.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
      LOWORD(v68.Version) = 1303;
      v72 = v51;
      v73 = 101LL;
      TraceEvent(g_hAEWMITraceHandle, &v68);
      v12 = v58;
    }
    else
    {
      v27 = v51;
    }
    if ( v12 != v52 && !v52 )
    {
      CCrossProcessServerInputEndpoint::FillRampBuffer((CCrossProcessServerInputEndpoint *)((char *)this - 456));
      if ( v27 )
      {
        v44 = *((_DWORD *)this - 93);
        if ( v44 )
          ApplyVolumeRamp(
            (CCrossProcessServerInputEndpoint *)((char *)this + 88),
            *((unsigned __int8 **)this - 44),
            v27,
            v44,
            *((_DWORD *)this - 91),
            *((_DWORD *)this - 90),
            *((_DWORD *)this - 89),
            0);
      }
      v28 = BUFFER_VALID;
      goto LABEL_28;
    }
LABEL_27:
    v28 = BUFFER_SILENT;
LABEL_28:
    a2->u32BufferFlags = v28;
    a2->pBuffer = *((_QWORD *)this - 44);
    v29 = *(_DWORD *)(*((_QWORD *)this - 49) + 164LL);
    do
    {
      v30 = v29;
      v29 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL),
              v29 & 0xFFFFFFFD,
              v29);
    }
    while ( v30 != v29 );
    goto LABEL_18;
  }
  v15 = *((_QWORD *)this - 49);
  v16 = *(_QWORD *)(v15 + 16);
  v17 = *(_QWORD *)(v15 + 24);
  v60 = v16;
  if ( v16 < 0 )
  {
    AEWMILOG_SECURITY(v15, (char *)this - 456, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v46 = (char *)this - 456;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL), 0xFFFFFFFE);
    v47 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_75;
    }
LABEL_74:
    WPP_SF_D(v47[2], 35LL, &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids, 0LL);
LABEL_75:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6EBu, -2147467259);
    AEWMILOG_DATA(v48, v46, v49, 0x17u, v60, v17, 0x66uLL);
    goto LABEL_43;
  }
  if ( v17 < 0 )
  {
    AEWMILOG_SECURITY(v15, (char *)this - 456, v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        "Security failure - memory overwrite detected - Invalid offset.");
    }
    v46 = (char *)this - 456;
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 49) + 164LL), 0xFFFFFFFE);
    v47 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      goto LABEL_75;
    }
    goto LABEL_74;
  }
  v18 = *((unsigned int *)this - 76);
  v19 = *(_DWORD *)(*((_QWORD *)this - 48) + 152LL);
  if ( v18 == 70560 )
    v20 = v16 % 70560;
  else
    v20 = v16 % v18;
  v55 = v20 + v19;
  if ( v18 == 70560 )
    v21 = v17 % 70560;
  else
    v21 = v17 % v18;
  v22 = v21 + v19;
  v6 = v16 - v17;
  v54 = v16 - v17;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 176), 0, 0) )
  {
    v50 = a2->u32ValidFrameCount;
    if ( v50 >= v6 / *((_DWORD *)this - 94) )
      v50 = v6 / *((_DWORD *)this - 94);
    a2->u32ValidFrameCount = v50;
    *((_DWORD *)this + 5) = v50;
    v51 = v50;
  }
  (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, signed __int64))(*((_QWORD *)this - 57) + 80LL))(
    (char *)this - 456,
    v61,
    v17);
  v7 = v51 * *((_DWORD *)this - 94);
  *((_DWORD *)this + 20) = 0;
  if ( v7 <= v6 )
  {
    v25 = *(_DWORD *)(*((_QWORD *)this - 48) + 156LL) - v22;
    if ( v7 > v25 )
    {
      memcpy_0(*((void **)this - 44), (const void *)(*((_QWORD *)this - 49) + v22), v25);
      memcpy_0(
        (void *)(v25 + *((_QWORD *)this - 44)),
        (const void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 152LL)),
        v7 - v25);
      a2->pBuffer = *((_QWORD *)this - 44);
      *((_DWORD *)this + 4) = 1;
    }
    else
    {
      a2->pBuffer = *((_QWORD *)this - 49) + v22;
      *((_DWORD *)this + 4) = 0;
    }
    v6 = v54;
    goto LABEL_16;
  }
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&v80, 0, 0x40uLL);
    v80.UserTime = 0x20000;
    LOWORD(v80.Version) = 1282;
    Size = v7 - v6;
    v80.Size = 96;
    v31 = (_DWORD)this - 456;
    v86 = Size;
    v82 = 0;
    v83 = v55;
    v84 = v22;
    v85 = *((unsigned int *)this - 76);
    v80.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_GLITCH;
    v81 = (char *)this - 456;
    TraceEvent(g_hAEWMITraceHandle, &v80);
    v32 = v7 - v6;
  }
  else
  {
    v31 = (_DWORD)this - 456;
    v32 = v7 - v6;
    Size = v7 - v6;
  }
  if ( (byte_140089301 & 1) != 0 )
    McTemplateU0pqqqq(
      v23,
      (unsigned int)&EVT_GLITCH_CP_SERVER_INPUT_STARVATION,
      v31,
      v55,
      v22,
      *((_DWORD *)this - 76),
      v32);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_DDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_9d35e93d75e43a33e1712a8cbe09dec0_Traceguids,
      v55,
      v22,
      v7,
      v6);
  }
  if ( (__int64)v60 > 0 )
  {
    v56 = 1;
    if ( (unsigned int)dword_140088010 > 5 && (byte_140088020 & 2) != 0 && (qword_140088028 & 2) == qword_140088028 )
    {
      v89 = 16LL;
      v88 = (char *)this - 248;
      v90 = &v57;
      v92 = "CpGlitchEvent::SERVER_INPUT_STARVATION";
      v94 = &v56;
      v57 = 5;
      v91 = 4LL;
      v93 = 39LL;
      v95 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_140088010, &unk_1400723E9, 0LL, v24, 6u, &pData);
    }
    (**((void (__fastcall ***)(char *, _QWORD, int *))this - 19))((char *)this - 152, 0LL, &v56);
    (**((void (__fastcall ***)(char *, __int64, int *))this - 19))((char *)this - 152, 5LL, &v56);
  }
  if ( !v6 )
  {
    *((_DWORD *)this + 20) = v7;
LABEL_43:
    v13 = v52;
    goto LABEL_27;
  }
  v33 = (void *)*((_QWORD *)this - 44);
  v34 = (const void *)(*((_QWORD *)this - 49) + v22);
  v35 = *(_DWORD *)(*((_QWORD *)this - 48) + 156LL) - v22;
  v57 = v35;
  if ( v6 > v35 )
  {
    v45 = v35;
    memcpy_0(v33, v34, v35);
    v36 = v6 - v57;
    v34 = (const void *)(*((_QWORD *)this - 49) + *(unsigned int *)(*((_QWORD *)this - 48) + 152LL));
    v33 = (void *)(v45 + *((_QWORD *)this - 44));
  }
  else
  {
    v36 = v6;
  }
  memcpy_0(v33, v34, v36);
  if ( *((_DWORD *)this - 90) == 8 )
    v37 = 128;
  else
    v37 = 0;
  v38 = Size;
  memset_0((void *)(*((_QWORD *)this - 44) + v6), v37, (unsigned int)Size);
  v39 = *((_QWORD *)this - 44);
  *((_DWORD *)this + 20) = v38;
  a2->pBuffer = v39;
  *((_DWORD *)this + 4) = 1;
LABEL_16:
  v13 = v52;
  a2->u32BufferFlags = BUFFER_VALID;
  if ( (*((_BYTE *)this - 280) & 1) == 0 && v58 != v52 && v52 == 1 )
  {
    pBuffer = (unsigned __int8 *)a2->pBuffer;
    v41 = *((_DWORD *)this - 89);
    if ( !(unsigned int)CheckSampleForSilence(pBuffer, *((_DWORD *)this - 93), *((_DWORD *)this - 90), v41) )
      ApplyVolumeRamp(
        (CCrossProcessServerInputEndpoint *)((char *)this + 88),
        pBuffer,
        v43,
        v42,
        *((_DWORD *)this - 91),
        *((_DWORD *)this - 90),
        v41,
        1);
  }
LABEL_18:
  v26 = g_u32AEWMILogLevel < 5;
  *((_DWORD *)this + 21) = v13;
  if ( !v26 )
  {
    memset_0(&v74, 0, 0x40uLL);
    v74.UserTime = 0x20000;
    v74.Size = 88;
    v76 = 0;
    v77 = v7;
    v78 = v6;
    v79 = *((int *)this + 4);
    v74.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    LOWORD(v74.Version) = 1286;
    v75 = v3;
    TraceEvent(g_hAEWMITraceHandle, &v74);
  }
}
