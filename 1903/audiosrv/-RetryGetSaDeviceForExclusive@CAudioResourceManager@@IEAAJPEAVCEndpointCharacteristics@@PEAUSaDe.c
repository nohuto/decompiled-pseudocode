/*
 * XREFs of ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F90DC
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F81D4 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F92B8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800423A0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     _lambda_f3d78743e27405bb129d35bae2d06b95_::operator() @ 0x1800F5E88 (_lambda_f3d78743e27405bb129d35bae2d06b95_--operator().c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForExclusive(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct CAudioSessionManager *a7,
        struct ISaDeviceProxy **a8)
{
  char v9; // di
  int v10; // ebx
  __int64 v11; // rsi
  struct ISaDeviceProxy **v12; // r14
  struct SaDeviceResourceParams *v13; // r15
  enum _AUDCLNT_SHAREMODE v14; // r12d
  void **p_pv; // [rsp+48h] [rbp-18h] BYREF
  void *v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  struct SaDeviceParams *v22; // [rsp+B0h] [rbp+50h]
  unsigned int v23; // [rsp+B8h] [rbp+58h]

  v23 = a4;
  v22 = a3;
  pv = 0LL;
  p_pv = &pv;
  v18 = 0LL;
  v9 = 1;
  v19 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)a2 + 2) + 40LL))(*((_QWORD *)a2 + 2), &v18);
  if ( v19 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      p_pv,
      v18);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_18;
  }
  p_pv = &pv;
  LOBYTE(v18) = 1;
  v11 = 5LL;
  v12 = a8;
  v13 = a6;
  v14 = a5;
  while ( 1 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
        v11);
    }
    v10 = CAudioSessionManager::Disconnect((__int64)a7, 5u, 1);
    if ( v10 < 0 )
      goto LABEL_13;
    v10 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            v22,
            v23,
            v14,
            v13,
            v12);
    if ( v10 >= 0 )
      break;
    Sleep(0xAu);
LABEL_13:
    if ( !v11-- )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_16;
    }
  }
  v9 = 0;
  v10 = 0;
LABEL_16:
  if ( v9 )
  {
    LOBYTE(v18) = 0;
    lambda_f3d78743e27405bb129d35bae2d06b95_::operator()(&p_pv);
  }
LABEL_18:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v10;
}
