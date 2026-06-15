/*
 * XREFs of ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800D8BAC
 * Callers:
 *     s_CapabilityAccessManagerNotification @ 0x1800D96D0 (s_CapabilityAccessManagerNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180064208 (-InternalRelease@-$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC238 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D8EFC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HandleAccessChangeNotification(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HLOCAL v6; // rdi
  DWORD LastError; // ebx
  const char *v8; // r9
  HLOCAL v9; // r8
  int AudioSessionManagerProvider; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HLOCAL hMem; // [rsp+78h] [rbp+38h] BYREF
  struct CAudioSessionManagerProvider *v15; // [rsp+80h] [rbp+40h] BYREF
  PSID Sid; // [rsp+88h] [rbp+48h] BYREF

  Sid = 0LL;
  hMem = 0LL;
  if ( !a2 )
    goto LABEL_9;
  Sid = 0LL;
  v4 = AppContainerDeriveSidFromMoniker(a2, &Sid);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  v6 = hMem;
  if ( hMem )
  {
    LastError = GetLastError();
    LocalFree(v6);
    SetLastError(LastError);
  }
  hMem = 0LL;
  if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)&hMem) )
  {
    v5 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x2C,
           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
           v8);
    goto LABEL_17;
  }
  v9 = hMem;
  if ( !hMem )
LABEL_9:
    v9 = 0LL;
  (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, HLOCAL, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 56LL))(
    g_PolicyManager,
    a2,
    v9,
    a1);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease((__int64 *)&v15);
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v15);
  v5 = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider >= 0 )
  {
    AudioSessionManagerProvider = CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
                                    v15,
                                    (const unsigned __int16 *)hMem,
                                    a1);
    v5 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v5 = 0;
      goto LABEL_16;
    }
    v11 = 59LL;
  }
  else
  {
    v11 = 55LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    (const char *)(unsigned int)AudioSessionManagerProvider);
LABEL_16:
  Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease((__int64 *)&v15);
LABEL_17:
  if ( hMem )
    LocalFree(hMem);
  if ( Sid )
    RtlFreeSid(Sid);
  return v5;
}
