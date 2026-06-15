/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140033EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046A4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010700 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002ECEC (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317A0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x140060008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int128 v5; // xmm0
  char v8; // si
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  void *v21; // rdx
  unsigned int v22; // ecx
  unsigned __int8 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-58h]
  unsigned __int64 v28; // [rsp+28h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v31; // [rsp+40h] [rbp-38h]
  __int128 v32; // [rsp+48h] [rbp-30h]
  __int128 v33; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v5 = *(_OWORD *)((char *)a2 + 152);
  v8 = 1;
  *(_OWORD *)((char *)this + 248) = v5;
  v32 = v5;
  v33 = v5;
  EtwEventActivityIdControl(4LL, &v33);
  v31 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v9 = a2;
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_93f76506177b37e92d7cbf41d5171680_Traceguids);
    v9 = a2;
  }
  v10 = CSystemAudioDeviceBase::ActivateEndpoint(this, v9);
  v11 = v10;
  if ( v10 == -2005139389 || v10 > -2005139365 && v10 <= -2005139360 )
  {
    v11 = -2005139370;
    v13 = 71LL;
    v12 = 2289827926LL;
    goto LABEL_24;
  }
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 72LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)v12);
    goto LABEL_25;
  }
  v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
          (char *)this + 448);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = (unsigned int)v14;
    v13 = 76LL;
    goto LABEL_24;
  }
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
          (char *)this + 456);
  v11 = v15;
  if ( v15 < 0 )
  {
    v12 = (unsigned int)v15;
    v13 = 78LL;
    goto LABEL_24;
  }
  v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
          (char *)this + 464);
  v11 = v16;
  if ( v16 < 0 )
  {
    v12 = (unsigned int)v16;
    v13 = 80LL;
    goto LABEL_24;
  }
  v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
          (char *)this + 472);
  v11 = v17;
  if ( v17 < 0 )
  {
    v12 = (unsigned int)v17;
    v13 = 82LL;
    goto LABEL_24;
  }
  v18 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)a2 + 8) = v18;
  v19 = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
  v11 = v19;
  if ( v19 >= 0 )
  {
    v8 = 0;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v19);
  }
  v20 = *((_QWORD *)a2 + 8);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_25:
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v33);
  if ( v8 )
    CSystemAudioDeviceSharedBase::Cleanup(this);
  AEWMILOG_PERFORMANCE(v22, v21, v23, 0xAu, v27, v28);
  PublishDeviceGraphWnfState(v25, v24);
  return v11;
}
