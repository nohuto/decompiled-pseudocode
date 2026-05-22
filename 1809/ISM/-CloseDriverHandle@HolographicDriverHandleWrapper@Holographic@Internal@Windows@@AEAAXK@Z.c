/*
 * XREFs of ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18010FBC0
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x18010F5C8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180110208 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18005EFA8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18010B2B4 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18010B8C8 (-StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18010DB68 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18010DC04 (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProvider_ea_18010DC04.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801196E8 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180119B20 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180119CA8 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011A400 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        int a2)
{
  RTL_SRWLOCK *v4; // r15
  const char *v5; // r9
  signed int v6; // edi
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  HSTRING v14; // rcx
  const WCHAR *StringRawBuffer; // rdi
  DWORD LastError; // edi
  void *v17; // rbx
  wil::details::ThreadFailureCallbackHolder *v18; // rcx
  const WCHAR *v19; // rdi
  DWORD v20; // edi
  void *v21; // rbx
  RTL_SRWLOCK *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD v26[5]; // [rsp+30h] [rbp-D8h] BYREF
  void **v27; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v28[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  int *v30; // [rsp+80h] [rbp-88h]
  int *v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-78h] BYREF
  char v33; // [rsp+94h] [rbp-74h]
  int v34; // [rsp+B8h] [rbp-50h] BYREF
  const char *v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  char v37; // [rsp+D0h] [rbp-38h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  _BYTE v39[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v40; // [rsp+170h] [rbp+68h]
  __int64 v41; // [rsp+178h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+78h]
  void *v43; // [rsp+188h] [rbp+80h]
  void **v44; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v45[3]; // [rsp+1A0h] [rbp+98h] BYREF
  int v46; // [rsp+1B8h] [rbp+B0h]
  int *v47; // [rsp+1C0h] [rbp+B8h]
  int *v48; // [rsp+1C8h] [rbp+C0h]
  int v49; // [rsp+1D0h] [rbp+C8h] BYREF
  char v50; // [rsp+1D4h] [rbp+CCh]
  int v51; // [rsp+1F8h] [rbp+F0h] BYREF
  const char *v52; // [rsp+200h] [rbp+F8h]
  __int64 v53; // [rsp+208h] [rbp+100h]
  char v54; // [rsp+210h] [rbp+108h]
  __int64 v55; // [rsp+218h] [rbp+110h]
  _BYTE v56[144]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v57; // [rsp+2B0h] [rbp+1A8h]
  __int64 v58; // [rsp+2B8h] [rbp+1B0h]
  __int64 v59; // [rsp+2C0h] [rbp+1B8h]
  void *v60; // [rsp+2C8h] [rbp+1C0h]
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v26[1] = -2LL;
  v4 = (RTL_SRWLOCK *)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  v26[2] = v4;
  v6 = (unsigned __int16)a2 | 0x80070000;
  if ( a2 <= 0 )
    v6 = a2;
  v7 = retaddr;
  if ( v6 >= 0 )
  {
LABEL_38:
    wil::details::in1diag3::_FailFast_Unexpected(
      v7,
      (void *)0x262,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v5);
    JUMPOUT(0x180110052LL);
  }
  v8 = -1LL;
  v9 = -1LL;
  v26[0] = -1LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 15);
  *((_DWORD *)this + 32) = v6;
  v10 = (__int64 *)((char *)this + 136);
  v11 = -1LL;
  v12 = -1LL;
  v13 = -1LL;
  if ( v26 != (_QWORD *)((char *)this + 136) )
  {
    v9 = *v10;
    v11 = v9;
    v26[0] = *v10;
    *v10 = -1LL;
    v12 = v9;
    v13 = v9;
    v8 = v9;
  }
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
  {
    ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
    v11 = v12;
    v13 = v8;
  }
  if ( v11 != -1 )
  {
    v14 = (HSTRING)*((_QWORD *)this + 4);
    if ( Windows::Internal::Holographic::HolographicDeviceOpenCloseTelemetryEnabled )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(v14, 0LL);
      v28[0] = 0LL;
      v28[1] = &v27;
      v28[2] = 0LL;
      LODWORD(v29) = 0;
      v30 = &v34;
      v31 = &v32;
      v32 = 0;
      v33 = 0;
      v37 = 0;
      v34 = 0;
      v35 = "TelemetryCloseHolographicDevice";
      v36 = 0LL;
      v38 = 1LL;
      v40 = 0LL;
      memset_0(v39, 0, sizeof(v39));
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v27 = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      HolographicDriverClientTrace::TelemetryCloseHolographicDevice::StartActivity(
        (__int64)&v27,
        StringRawBuffer,
        *((_DWORD *)this + 2),
        (__int64)this + 12);
      CancelIoEx((HANDLE)v9, 0LL);
      if ( v13 )
      {
        LastError = GetLastError();
        CloseHandle((HANDLE)v9);
        SetLastError(LastError);
      }
      v9 = -1LL;
      v26[0] = -1LL;
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v27);
      v27 = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v27);
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v43, 0xFFFFFFFF) == 1 )
        {
          v17 = v43;
          if ( v43 )
          {
            wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)v43 + 8);
            operator delete(v17, (const struct std::nothrow_t *)0x100);
          }
        }
        v43 = 0LL;
        v9 = v26[0];
      }
      wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)&v32);
      v18 = (wil::details::ThreadFailureCallbackHolder *)v28;
    }
    else
    {
      v19 = WindowsGetStringRawBuffer(v14, 0LL);
      v45[0] = 0LL;
      v45[1] = &v44;
      v45[2] = 0LL;
      v46 = 0;
      v47 = &v51;
      v48 = &v49;
      v49 = 0;
      v50 = 0;
      v54 = 0;
      v51 = 0;
      v52 = "CloseHolographicDevice";
      v53 = 0LL;
      v55 = 1LL;
      v57 = 0LL;
      memset_0(v56, 0, sizeof(v56));
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      v44 = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      HolographicDriverClientTrace::CloseHolographicDevice::StartActivity(
        (__int64)&v44,
        v19,
        *((_DWORD *)this + 2),
        (__int64)this + 12);
      CancelIoEx((HANDLE)v9, 0LL);
      if ( v13 )
      {
        v20 = GetLastError();
        CloseHandle((HANDLE)v9);
        SetLastError(v20);
      }
      v9 = -1LL;
      v26[0] = -1LL;
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v44);
      v44 = &HolographicDriverClientTrace::CloseHolographicDevice::`vftable';
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v44);
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v60, 0xFFFFFFFF) == 1 )
        {
          v21 = v60;
          if ( v60 )
          {
            wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)v60 + 8);
            operator delete(v21, (const struct std::nothrow_t *)0x100);
          }
        }
        v60 = 0LL;
        v9 = v26[0];
      }
      wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)&v49);
      v18 = (wil::details::ThreadFailureCallbackHolder *)v45;
    }
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(v18);
    v22 = (RTL_SRWLOCK *)((char *)this + 56);
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    v26[3] = (char *)this + 56;
    v23 = *((_QWORD *)this + 8);
    v24 = *((_QWORD *)this + 9);
    while ( v23 != v24 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)v23 + 56LL);
      if ( !v25 )
      {
        std::_Xbad_function_call();
        goto LABEL_38;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v23 += 8LL;
    }
    if ( v22 )
      ReleaseSRWLockShared(v22);
  }
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
