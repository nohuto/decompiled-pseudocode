/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8E18
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180043994 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7D24 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7EE8 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003E2E8 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180044D64 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800D66DC (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8C3C (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct CAudioSessionManager *a7,
        struct ISaDeviceProxy **a8)
{
  struct CAudioSessionManager *v11; // rdi
  int ExclusiveModeAudioSession; // eax
  CAudioResourceManager *v13; // rcx
  struct CAudioSession *v14; // rbx
  _QWORD *v15; // rdi
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rdx
  int SaDeviceForExclusive; // eax
  __int128 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CAudioSession *v25; // [rsp+80h] [rbp+8h] BYREF

  v25 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids);
  }
  v25 = 0LL;
  v11 = a7;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a7, &v25);
  v14 = v25;
  if ( ExclusiveModeAudioSession >= 0 )
  {
    v22 = 0LL;
    v23 = 0LL;
    CAudioSession::GetOwningProcesses((__int64)v25, (__int64)&v22);
    v15 = (_QWORD *)v22;
    if ( (__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3 != 1
      || !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 96LL))(*(_QWORD *)v22)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 104LL))(*v15) )
    {
      v17 = -2005139364;
      v18 = 2289827932LL;
      v19 = 2217LL;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 168LL))(*v15);
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 2) + 40LL))((__int64)v14 + 16, 0xFFFFFFFFLL);
    v16 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a3,
            a4,
            a5,
            a6,
            a8);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = (unsigned int)v16;
      v19 = 2212LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v18);
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy((__int64)&v22);
      goto LABEL_13;
    }
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy((__int64)&v22);
LABEL_12:
    v17 = 0;
    goto LABEL_13;
  }
  SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(v13, a2, a3, a4, a5, a6, v11, a8);
  v17 = SaDeviceForExclusive;
  if ( SaDeviceForExclusive >= 0 )
    goto LABEL_12;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)SaDeviceForExclusive);
LABEL_13:
  if ( v14 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v14 + 16LL))(v14);
  return v17;
}
