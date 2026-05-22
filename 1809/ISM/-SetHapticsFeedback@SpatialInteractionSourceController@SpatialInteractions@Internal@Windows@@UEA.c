/*
 * XREFs of ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x180127A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x180124170 (-StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z.c)
 *     ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x1801282CC (-ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Win.c)
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___ @ 0x18012865C (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--_ScopeExitFn__lambda_f890.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___ptr64___int64_unsigned_int_&___ptr64_unsigned_char_&___ptr64_bool_&___ptr64_bool_&___ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x1801293E8 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int16 a2,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  Windows::Internal::SpatialInteractions::HapticsEngine **v9; // rdi
  Windows::Internal::SpatialInteractions::HapticsEngine *v10; // rcx
  unsigned __int16 v11; // ax
  unsigned int v12; // edx
  Windows::Internal::SpatialInteractions::HapticsEngine *v13; // rcx
  int started; // eax
  bool v16; // [rsp+48h] [rbp-59h] BYREF
  bool v17; // [rsp+49h] [rbp-58h] BYREF
  int v18; // [rsp+4Ch] [rbp-55h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v19; // [rsp+50h] [rbp-51h] BYREF
  __int64 v20; // [rsp+58h] [rbp-49h] BYREF
  __int128 v21; // [rsp+60h] [rbp-41h]
  __int128 v22; // [rsp+70h] [rbp-31h]
  unsigned __int16 *v23; // [rsp+80h] [rbp-21h]
  __int64 v24; // [rsp+88h] [rbp-19h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+90h] [rbp-11h]
  _OWORD v26[2]; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int16 *v27; // [rsp+B8h] [rbp+17h]
  char v28; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  bool v30; // [rsp+108h] [rbp+67h] BYREF
  __int16 v31; // [rsp+110h] [rbp+6Fh] BYREF
  unsigned __int8 v32; // [rsp+118h] [rbp+77h] BYREF
  unsigned __int16 v33; // [rsp+120h] [rbp+7Fh] BYREF

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v24 = -2LL;
  v18 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v25 = v5;
  *(_QWORD *)&v21 = &v18;
  *((_QWORD *)&v21 + 1) = this;
  *(_QWORD *)&v22 = &v31;
  *((_QWORD *)&v22 + 1) = &v32;
  v23 = &v33;
  v26[0] = v21;
  v26[1] = v22;
  v27 = &v33;
  v28 = 1;
  if ( v31 != 4100 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 1383LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v7);
    goto LABEL_24;
  }
  if ( !*((_BYTE *)this + 106) )
  {
    v6 = -2147020579;
    v7 = 2147946717LL;
    v8 = 1384LL;
    goto LABEL_22;
  }
  if ( !*((_BYTE *)this + 748) )
  {
    v6 = -2147020579;
    v7 = 2147946717LL;
    v8 = 1385LL;
    goto LABEL_22;
  }
  if ( v33 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 203);
    _InterlockedExchangeAdd((volatile signed __int32 *)this + 204, v33);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 202);
  }
  v9 = (Windows::Internal::SpatialInteractions::HapticsEngine **)((char *)this + 792);
  v10 = (Windows::Internal::SpatialInteractions::HapticsEngine *)*((_QWORD *)this + 99);
  if ( !v10 )
  {
    v16 = 0;
    v30 = 0;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReadHapticsEngineParameters(
      this,
      &v16,
      &v30);
    v17 = *((_DWORD *)this + 200) == 0;
    v11 = *((_WORD *)this + 373);
    if ( v11 )
      v12 = 9 * v11 / 10;
    else
      v12 = 4900;
    v20 = 1000LL * v12;
    v19 = this;
    v13 = *v9;
    if ( *v9 )
    {
      *v9 = 0LL;
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsEngine *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    started = Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_____ptr64___int64_unsigned_int_____ptr64_unsigned_char_____ptr64_bool_____ptr64_bool_____ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa___(
                (int)this + 792,
                (unsigned int)&v17,
                (unsigned int)&v20,
                (int)this + 800,
                (__int64)this + 804,
                (__int64)&v16,
                (__int64)&v30,
                (__int64)&v19);
    v6 = started;
    if ( started < 0 )
    {
      v8 = 1427LL;
LABEL_21:
      v7 = (unsigned int)started;
      goto LABEL_22;
    }
    v10 = *v9;
  }
  started = Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback(v10, (double)v32 / 100.0, v33);
  v6 = started;
  if ( started < 0 )
  {
    v8 = 1430LL;
    goto LABEL_21;
  }
  v6 = 0;
LABEL_24:
  wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___(v26);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
