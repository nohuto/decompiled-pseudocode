/*
 * XREFs of ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x180168160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___int64_unsigned_int_&_unsigned_char_&_bool_&_bool_&__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x180161F40 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator() @ 0x1801638F4 (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--operator().c)
 *     ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x1801678E4 (-ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Win.c)
 *     ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x1801686E4 (-StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int16 a2,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  Windows::Internal::SpatialInteractions::HapticsEngine *v9; // rcx
  unsigned __int16 v10; // ax
  unsigned int v11; // edx
  int started; // eax
  bool v14; // [rsp+48h] [rbp-49h] BYREF
  bool v15[3]; // [rsp+49h] [rbp-48h] BYREF
  int v16; // [rsp+4Ch] [rbp-45h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v17; // [rsp+50h] [rbp-41h] BYREF
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp-31h] BYREF
  __int128 v20; // [rsp+68h] [rbp-29h]
  __int128 v21; // [rsp+78h] [rbp-19h]
  unsigned __int16 *v22; // [rsp+88h] [rbp-9h]
  __int64 v23; // [rsp+90h] [rbp-1h]
  _OWORD v24[2]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int16 *v25; // [rsp+B8h] [rbp+27h]
  char v26; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  bool v28; // [rsp+F8h] [rbp+67h] BYREF
  __int16 v29; // [rsp+100h] [rbp+6Fh] BYREF
  unsigned __int8 v30; // [rsp+108h] [rbp+77h] BYREF
  unsigned __int16 v31; // [rsp+110h] [rbp+7Fh] BYREF

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v23 = -2LL;
  v16 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v19 = v5;
  *(_QWORD *)&v20 = &v16;
  *((_QWORD *)&v20 + 1) = this;
  *(_QWORD *)&v21 = &v29;
  *((_QWORD *)&v21 + 1) = &v30;
  v22 = &v31;
  v24[0] = v20;
  v24[1] = v21;
  v25 = &v31;
  v26 = 1;
  if ( v29 == 4100 )
  {
    if ( !*((_BYTE *)this + 106) )
    {
      v6 = -2147020579;
      v7 = 2147946717LL;
      v8 = 1420LL;
      goto LABEL_20;
    }
    if ( !*((_BYTE *)this + 748) )
    {
      v6 = -2147020579;
      v7 = 2147946717LL;
      v8 = 1421LL;
      goto LABEL_20;
    }
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 203);
      _InterlockedExchangeAdd((volatile signed __int32 *)this + 204, v31);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 202);
    }
    v9 = (Windows::Internal::SpatialInteractions::HapticsEngine *)*((_QWORD *)this + 99);
    if ( !v9 )
    {
      v14 = 0;
      v28 = 0;
      Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReadHapticsEngineParameters(
        this,
        &v14,
        &v28);
      v15[0] = *((_DWORD *)this + 200) == 0;
      v10 = *((_WORD *)this + 373);
      if ( v10 )
        v11 = 9 * v10 / 10;
      else
        v11 = 4900;
      v18 = 1000LL * v11;
      v17 = this;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 99);
      started = Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_____int64_unsigned_int___unsigned_char___bool___bool____lambda_a8bf174a58f89e727d2f8f2640ee39aa___(
                  (__int64 *)this + 99,
                  v15,
                  &v18,
                  (unsigned int *)this + 200,
                  (_BYTE *)this + 804,
                  &v14,
                  &v28,
                  (__int64 *)&v17);
      v6 = started;
      if ( started < 0 )
      {
        v8 = 1463LL;
LABEL_19:
        v7 = (unsigned int)started;
        goto LABEL_20;
      }
      v9 = (Windows::Internal::SpatialInteractions::HapticsEngine *)*((_QWORD *)this + 99);
    }
    started = Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback(v9, (double)v30 / 100.0, v31);
    v6 = started;
    if ( started >= 0 )
    {
      v6 = 0;
      goto LABEL_22;
    }
    v8 = 1466LL;
    goto LABEL_19;
  }
  v6 = -2147024809;
  v7 = 2147942487LL;
  v8 = 1419LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)v7);
LABEL_22:
  wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator()((__int64)v24);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v19);
  return v6;
}
