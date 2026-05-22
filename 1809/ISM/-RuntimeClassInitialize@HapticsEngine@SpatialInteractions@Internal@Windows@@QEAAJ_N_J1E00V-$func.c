/*
 * XREFs of ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x180123ED8
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___ptr64___int64_unsigned_int_&___ptr64_unsigned_char_&___ptr64_bool_&___ptr64_bool_&___ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x1801293E8 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002A610 (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z @ 0x180122C8C (-InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x1801296D8 (--$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIH.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::RuntimeClassInitialize(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        bool a6,
        bool a7,
        __int64 a8)
{
  int v12; // eax
  _OWORD *v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // bl
  bool v25; // di
  char v26; // bp
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  char v29; // al
  SpatialInteractionDevices::SpatialInteractionTrace *v30; // rcx
  __int64 v31; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v33; // [rsp+80h] [rbp+8h]

  std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=(a1 + 128, a8);
  *(_QWORD *)(a1 + 200) = a4;
  *(_QWORD *)(a1 + 208) = a3;
  v12 = a5;
  if ( a2 )
    v12 = 100;
  *(_DWORD *)(a1 + 224) = v12;
  *(_BYTE *)(a1 + 229) = a2;
  *(_BYTE *)(a1 + 230) = a6;
  if ( !a2 )
  {
    v33 = operator new(0x80uLL);
    v33[1] = a4;
    v33[2] = 0LL;
    v33[3] = 0LL;
    *((_BYTE *)v33 + 32) = a7;
    *((_DWORD *)v33 + 9) = 2;
    *((_BYTE *)v33 + 40) = 0;
    *v33 = &Windows::Internal::SpatialInteractions::AverageHapticsFilter::`vftable';
    *((_BYTE *)v33 + 48) = 0;
    v33[7] = 0LL;
    v33[8] = 0LL;
    v33[10] = 0LL;
    v33[11] = 0LL;
    v33[12] = 0LL;
    v33[13] = 0LL;
    v33[14] = 0LL;
    v13 = operator new(0x10uLL);
    v33[10] = v13;
    *v13 = 0LL;
    *(_QWORD *)v33[10] = v33 + 10;
    *((_BYTE *)v33 + 120) = 0;
    v14 = *(void **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v33;
    if ( v14 )
      operator delete(v14, (const struct std::nothrow_t *)0x30);
    if ( !*(_QWORD *)(a1 + 112) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)0x8007000ELL);
      v16 = *(_QWORD *)(a8 + 56);
      if ( v16 )
      {
        LOBYTE(v15) = v16 != a8;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
        *(_QWORD *)(a8 + 56) = 0LL;
      }
      return 2147942414LL;
    }
  }
  v18 = (_QWORD *)(a1 + 120);
  v19 = *(_QWORD *)(a1 + 120);
  if ( v19 )
  {
    *v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,>(a1 + 120);
  if ( v20 < 0 )
  {
    v21 = 515LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v20);
    v23 = *(_QWORD *)(a8 + 56);
    if ( v23 )
    {
      LOBYTE(v22) = v23 != a8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v22);
      *(_QWORD *)(a8 + 56) = 0LL;
    }
    return (unsigned int)v20;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 56LL))(*v18, a1 + 8);
  if ( v20 < 0 )
  {
    v21 = 517LL;
    goto LABEL_14;
  }
  v24 = a7;
  if ( a2 )
    v24 = 0;
  v25 = a6;
  if ( a2 )
    v25 = 0;
  v26 = a5;
  if ( a2 )
  {
    v26 = 0;
    a4 = 0LL;
  }
  v28 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( !v28 || (v29 = 1, !*v28) )
    v29 = 0;
  if ( v29 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine_(v30, a2, a4, v26, v25, v24);
  }
  v31 = *(_QWORD *)(a8 + 56);
  if ( v31 )
  {
    LOBYTE(v27) = v31 != a8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, v27);
    *(_QWORD *)(a8 + 56) = 0LL;
  }
  return 0LL;
}
