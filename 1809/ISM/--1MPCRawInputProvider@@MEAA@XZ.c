/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005746C
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800576A0 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x18003B0F4 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x180057D48 (--1-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??_GMPCHeadMovementDetector@@QEAAPEAXI@Z @ 0x180057E70 (--_GMPCHeadMovementDetector@@QEAAPEAXI@Z.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180057F5C (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *Instance; // rax
  unsigned int v3; // edx
  volatile signed __int32 *v4; // rcx
  SpeechRuntimeListener *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  void *v12; // rcx
  const char *v13; // r9
  __int64 v14; // rcx
  MPCHeadMovementDetector *v15; // rcx
  SpeechRuntimeListener *v16; // rcx
  volatile signed __int32 *v17; // rcx
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 526));
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 249);
  if ( v4 )
  {
    *((_QWORD *)this + 249) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v4);
  }
  v5 = (SpeechRuntimeListener *)*((_QWORD *)this + 250);
  *((_QWORD *)this + 250) = 0LL;
  if ( v5 )
    SpeechRuntimeListener::`scalar deleting destructor'(v5, v3);
  if ( *((_QWORD *)this + 253) )
  {
    v6 = *((_QWORD *)this + 252);
    if ( v6 )
    {
      if ( *((_BYTE *)this + 2032) && (*(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6) >= 0 )
        *((_BYTE *)this + 2032) = 0;
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 252) + 232LL))(*((_QWORD *)this + 252));
  if ( v7 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180057699LL);
  }
  v8 = *((_QWORD *)this + 252);
  if ( v8 )
  {
    *((_QWORD *)this + 252) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 && *((_BYTE *)this + 2033) )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 56LL))(v9, (char *)this + 24);
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      (char *)this + 1008);
  }
  v10 = *((_QWORD *)this + 2);
  if ( v10 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2064));
  std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>((char *)this + 2040);
  v12 = (void *)*((_QWORD *)this + 253);
  if ( v12 && !CloseHandle(v12) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v13);
    goto LABEL_32;
  }
  v14 = *((_QWORD *)this + 252);
  if ( v14 )
  {
    *((_QWORD *)this + 252) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (MPCHeadMovementDetector *)*((_QWORD *)this + 251);
  if ( v15 )
    MPCHeadMovementDetector::`scalar deleting destructor'(v15, v11);
  v16 = (SpeechRuntimeListener *)*((_QWORD *)this + 250);
  if ( v16 )
    SpeechRuntimeListener::`scalar deleting destructor'(v16, v11);
  v17 = (volatile signed __int32 *)*((_QWORD *)this + 249);
  if ( v17 )
  {
    *((_QWORD *)this + 249) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v17);
  }
  v18 = *((_QWORD *)this + 2);
  if ( v18 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
