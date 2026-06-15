/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140005F90
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x140004A70 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140005DE0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140005EB0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140016B70 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _TlgCreateWsz @ 0x140019440 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  int v4; // r12d
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  CPipeInstance *v7; // r15
  int v8; // eax
  int v9; // r15d
  int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r11
  int v18; // [rsp+20h] [rbp-89h]
  __int64 v19; // [rsp+30h] [rbp-79h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-71h] BYREF
  char v21; // [rsp+40h] [rbp-69h]
  _DWORD v22[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v23; // [rsp+50h] [rbp-59h]
  _BYTE v24[8]; // [rsp+58h] [rbp-51h] BYREF
  char v25; // [rsp+60h] [rbp-49h] BYREF
  char v26; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int16 *v27; // [rsp+70h] [rbp-39h] BYREF
  int v28; // [rsp+78h] [rbp-31h]
  int v29; // [rsp+7Ch] [rbp-2Dh]
  void *v30; // [rsp+80h] [rbp-29h]
  int v31; // [rsp+88h] [rbp-21h]
  int v32; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  _BYTE *v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]
  char *v36; // [rsp+B0h] [rbp+7h]
  __int64 v37; // [rsp+B8h] [rbp+Fh]
  char *v38; // [rsp+C0h] [rbp+17h]
  __int64 v39; // [rsp+C8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v2 = 0LL;
    v19 = 0LL;
    if ( *((_QWORD *)this + 46)
      || (v3 = 0LL, (int)CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46) >= 0) )
    {
      v2 = *((_QWORD *)this + 46);
      v19 = v2;
      v3 = v2;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    }
    if ( *((_QWORD *)this + 47) && v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
      *((_QWORD *)this + 47) = 0LL;
    }
    v4 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
    v21 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v5 = (_QWORD *)*((_QWORD *)this + 21);
    v6 = WPP_GLOBAL_Control;
    while ( v5 )
    {
      v7 = (CPipeInstance *)v5[2];
      v5 = (_QWORD *)*v5;
      if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x20000) != 0 && *((_BYTE *)v6 + 25) >= 4u )
        WPP_SF_(v6[2], 33LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
      v8 = CPipeInstance::Stop(v7);
      v9 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B2,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v8,
          v18);
      v6 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
        v6 = WPP_GLOBAL_Control;
      }
      if ( v9 < 0 )
        v4 = v9;
    }
    if ( v21 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != &WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x20000) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(v6[2], 35LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids);
    }
    v11 = -2005139433;
    if ( v10 < 0 )
    {
      v4 = v10;
      if ( v10 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3C5,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v10,
          v18);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    if ( v4 != -2005139433 )
    {
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D1,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v4,
          v18);
        v11 = v4;
      }
      else
      {
        CAudioDeviceGraph::DurationTracker::Stop((__int64)this + 80, (__int64)v24);
        v13 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                v12,
                lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v13 > 4u
          && (*(_QWORD *)(v13 + 16) & 0x400000000001LL) != 0
          && (*(_QWORD *)(v13 + 24) & 0x400000000001LL) == *(_QWORD *)(v13 + 24) )
        {
          TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 49));
          v35 = 4LL;
          v36 = &v25;
          v34 = v24;
          v38 = &v26;
          v37 = 8LL;
          v39 = 8LL;
          v22[1] = 4;
          v27 = *(unsigned __int16 **)(v14 + 8);
          v22[0] = ((unsigned int)&unk_140071F45 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          v15 = *(_QWORD *)(v14 + 32);
          v23 = v16;
          v28 = *v27;
          v30 = &unk_140071F50;
          v29 = 2;
          v31 = 93;
          v32 = 1;
          EtwEventWriteTransfer(v15, v22, (char *)this + 352, 0LL, 6, &v27);
          v2 = v19;
        }
        v11 = 0;
      }
    }
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  else
  {
    v11 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v18);
  }
  if ( this != (CAudioDeviceGraph *)-264LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  return v11;
}
