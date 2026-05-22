/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800565F0
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004674 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x180004930 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180056808 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18012C84C (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3)
{
  const char *v6; // r9
  int v7; // ebx
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int128 v12; // xmm0
  _OWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-71h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h] BYREF
  char v20; // [rsp+58h] [rbp-49h]
  int v21; // [rsp+5Ch] [rbp-45h]
  int v22; // [rsp+60h] [rbp-41h]
  __int64 (__fastcall *v23)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+70h] [rbp-31h]
  bool v25; // [rsp+78h] [rbp-29h]
  int v26; // [rsp+7Ch] [rbp-25h]
  int v27; // [rsp+80h] [rbp-21h]
  __int64 (__fastcall *v28)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+88h] [rbp-19h]
  __int64 v29; // [rsp+90h] [rbp-11h]
  bool v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+9Ch] [rbp-5h]
  int v32; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v33)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A8h] [rbp+7h]
  __int64 v34; // [rsp+B0h] [rbp+Fh]
  char v35; // [rsp+B8h] [rbp+17h]
  int v36; // [rsp+BCh] [rbp+1Bh]
  int v37; // [rsp+C0h] [rbp+1Fh]
  __int64 v38; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v18[1] = WGIRawInputProvider::Create;
  v19 = 131051LL;
  v20 = 1;
  v21 = 0;
  v22 = 0;
  v23 = MPCRawInputProvider::Create;
  v24 = 131051LL;
  v25 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(a1) != 0;
  v26 = 0;
  v27 = 0;
  v28 = RIMRawInputProvider::Create;
  v29 = 131051LL;
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v6);
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v11,
      (void *)0x7F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800567FFLL);
  }
  v30 = *(_BYTE *)ISMTestMode::s_instance == 0;
  v31 = 0;
  v7 = ((1LL << gdwDeviceFamily) & 0x1DDA1) != 0 ? 18624 : 18432;
  v32 = v7 | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(gdwDeviceFamily) != 0 ? 0x2400 : 0);
  v33 = LampArrayRawInputProvider::Create;
  v34 = 131051LL;
  v35 = 1;
  v36 = 0;
  v37 = 0;
  v8 = &v19;
  do
  {
    v9 = *v8;
    if ( _bittest64(&v9, gdwDeviceFamily) && *((_BYTE *)v8 + 8) && *((_DWORD *)v8 + 3) == a3 )
    {
      v18[0] = 0LL;
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *))*(v8 - 1))(a2, *((unsigned int *)v8 + 4), v18);
      v11 = retaddr;
      if ( v10 < 0 )
        goto LABEL_18;
      v12 = *(_OWORD *)v8;
      v17 = *(_OWORD *)v8;
      v13 = *(_OWORD **)(a1 + 8);
      if ( *(_OWORD **)(a1 + 16) == v13 )
      {
        std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, v13, &v17);
        v15 = v18[0];
      }
      else
      {
        *v13 = v12;
        v14 = v13 + 1;
        *v14 = 0LL;
        if ( v14 == v18 )
        {
          v15 = v18[0];
        }
        else
        {
          *v14 = v18[0];
          v15 = 0LL;
        }
        *(_QWORD *)(a1 + 8) += 24LL;
      }
      if ( v15 )
      {
        v18[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v8 += 4;
  }
  while ( v8 - 1 != &v38 );
  return 0LL;
}
