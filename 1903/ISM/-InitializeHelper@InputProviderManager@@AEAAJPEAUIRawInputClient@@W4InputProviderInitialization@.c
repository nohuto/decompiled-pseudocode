/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180019A0C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180010164 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x18002A2A0 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180019C9C (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18002CE6C (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ @ 0x180035318 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_SupportFnKey@@@wil@@SA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3, const char *a4)
{
  wil::details::in1diag3 *v7; // rcx
  __int64 *v8; // rbx
  const char *v9; // r9
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int128 v15; // xmm0
  _OWORD *v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  bool v23; // [rsp+58h] [rbp-49h]
  __int64 v24; // [rsp+5Ch] [rbp-45h]
  __int64 (__fastcall *v25)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+68h] [rbp-39h]
  __int64 v26; // [rsp+70h] [rbp-31h]
  bool v27; // [rsp+78h] [rbp-29h]
  __int64 v28; // [rsp+7Ch] [rbp-25h]
  __int64 (__fastcall *v29)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+88h] [rbp-19h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  bool v31; // [rsp+98h] [rbp-9h]
  int v32; // [rsp+9Ch] [rbp-5h]
  int v33; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v34)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A8h] [rbp+7h]
  __int64 v35; // [rsp+B0h] [rbp+Fh]
  char v36; // [rsp+B8h] [rbp+17h]
  __int64 v37; // [rsp+BCh] [rbp+1Bh]
  __int64 v38; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v21[1] = WGIRawInputProvider::Create;
  v22 = 262123LL;
  v7 = retaddr;
  LODWORD(v8) = 33;
  if ( !ISMTestMode::s_instance )
    goto LABEL_29;
  v23 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v24 = 0LL;
  v25 = MPCRawInputProvider::Create;
  v26 = 262123LL;
  v27 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(retaddr) != 0;
  v28 = 0LL;
  v29 = RIMRawInputProvider::Create;
  v30 = 262123LL;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v9);
LABEL_28:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x7E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
      (const char *)(unsigned int)v13,
      -2);
LABEL_29:
    wil::details::in1diag3::_FailFast_Unexpected(
      v7,
      (void *)(unsigned int)v8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    JUMPOUT(0x180019C92LL);
  }
  v31 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v32 = 0;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::__private_IsEnabled(retaddr) )
  {
    v10 = 0;
    if ( IsEdition(0x3DDA1uLL) )
      v10 = 64;
    v11 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(64LL) != 0 ? 27776 : 18560;
  }
  else
  {
    v10 = 0;
    if ( IsEdition(0x3DDA1uLL) )
      v10 = 192;
    v11 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(192LL) != 0 ? 27648 : 18432;
  }
  v33 = v11 | v10;
  v34 = LampArrayRawInputProvider::Create;
  v35 = 262123LL;
  v36 = 1;
  v37 = 0LL;
  v8 = &v22;
  do
  {
    v12 = *v8;
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( _bittest64(&v12, gdwDeviceFamily) && *((_BYTE *)v8 + 8) && *((_DWORD *)v8 + 3) == a3 )
    {
      v21[0] = 0LL;
      v13 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *))*(v8 - 1))(a2, *((unsigned int *)v8 + 4), v21);
      v14 = retaddr;
      if ( v13 < 0 )
        goto LABEL_28;
      v15 = *(_OWORD *)v8;
      v20 = *(_OWORD *)v8;
      v16 = *(_OWORD **)(a1 + 8);
      if ( *(_OWORD **)(a1 + 16) == v16 )
      {
        std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, v16, &v20);
        v18 = v21[0];
      }
      else
      {
        *v16 = v15;
        v17 = v16 + 1;
        *v17 = 0LL;
        if ( v17 == v21 )
        {
          v18 = v21[0];
        }
        else
        {
          *v17 = v21[0];
          v18 = 0LL;
        }
        *(_QWORD *)(a1 + 8) += 24LL;
      }
      if ( v18 )
      {
        v21[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    v8 += 4;
  }
  while ( v8 - 1 != &v38 );
  return 0LL;
}
