/*
 * XREFs of ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x180167C7C
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___int64_unsigned_int_&_unsigned_char_&_bool_&_bool_&__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x180161F40 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Swap@?$_Func_class@XE@std@@IEAAXAEAV12@@Z @ 0x1800E6AD8 (-_Swap@-$_Func_class@XE@std@@IEAAXAEAV12@@Z.c)
 *     ??$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEA_N$$QEA_J$$QEAE$$QEA_N3@Z @ 0x180161ECC (--$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAE.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x180162150 (--$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIH.c)
 *     ??0AverageHapticsFilter@SpatialInteractions@Internal@Windows@@QEAA@_JH_N1@Z @ 0x180162958 (--0AverageHapticsFilter@SpatialInteractions@Internal@Windows@@QEAA@_JH_N1@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::RuntimeClassInitialize(
        __int64 a1,
        bool a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        bool a6,
        char a7,
        __int64 a8)
{
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  Windows::Internal::SpatialInteractions::AverageHapticsFilter *v16; // rax
  void *v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  bool v23; // al
  bool v24; // al
  unsigned __int8 v25; // al
  bool v27; // [rsp+38h] [rbp-79h] BYREF
  bool v28; // [rsp+39h] [rbp-78h] BYREF
  unsigned __int8 v29[6]; // [rsp+3Ah] [rbp-77h] BYREF
  bool v30; // [rsp+40h] [rbp-71h] BYREF
  __int64 v31[2]; // [rsp+48h] [rbp-69h] BYREF
  Windows::Internal::SpatialInteractions::AverageHapticsFilter *v32; // [rsp+58h] [rbp-59h]
  _BYTE v33[56]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+3Fh]

  v31[1] = -2LL;
  v30 = a2;
  v31[0] = a8;
  v34 = 0LL;
  v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a8 + 56);
  if ( v12 )
    v34 = (**v12)(v12, v33);
  std::_Func_class<void,unsigned char>::_Swap((__int64)v33, a1 + 128);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v33, v13);
  *(_QWORD *)(a1 + 200) = a4;
  *(_QWORD *)(a1 + 208) = a3;
  v14 = 100;
  if ( !a2 )
    v14 = a5;
  *(_DWORD *)(a1 + 224) = v14;
  *(_BYTE *)(a1 + 229) = a2;
  *(_BYTE *)(a1 + 230) = a6;
  if ( !a2 )
  {
    v32 = (Windows::Internal::SpatialInteractions::AverageHapticsFilter *)operator new(0x80uLL);
    v16 = Windows::Internal::SpatialInteractions::AverageHapticsFilter::AverageHapticsFilter(v32, a4, v15, a7);
    v17 = *(void **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v16;
    if ( v17 )
    {
      operator delete(v17, (const struct std::nothrow_t *)0x30);
      v16 = *(Windows::Internal::SpatialInteractions::AverageHapticsFilter **)(a1 + 112);
    }
    if ( !v16 )
    {
      v18 = -2147024882;
      v19 = 2147942414LL;
      v20 = 506LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)v19);
      goto LABEL_25;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)(a1 + 120));
  v21 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,>((_QWORD *)(a1 + 120));
  v18 = v21;
  if ( v21 < 0 )
  {
    v20 = 515LL;
LABEL_12:
    v19 = (unsigned int)v21;
    goto LABEL_13;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 56LL))(*(_QWORD *)(a1 + 120), a1 + 8);
  v18 = v21;
  if ( v21 < 0 )
  {
    v20 = 517LL;
    goto LABEL_12;
  }
  v23 = a7;
  if ( a2 )
    v23 = 0;
  v27 = v23;
  v24 = a6;
  if ( a2 )
    v24 = 0;
  v28 = v24;
  v25 = a5;
  if ( a2 )
    v25 = 0;
  v29[0] = v25;
  if ( a2 )
    a4 = 0LL;
  v31[0] = a4;
  SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine<bool &,__int64,unsigned char,bool,bool>(
    &v30,
    v31,
    v29,
    &v28,
    &v27);
  v18 = 0;
LABEL_25:
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a8, v22);
  return v18;
}
