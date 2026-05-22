/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18003FD94
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180042A70 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AD20 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x18004C80C (--0MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18004CB74 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  wil::details::in1diag3 *v1; // rsi
  MPCCursorManager *v3; // rax
  const char *v4; // r9
  __int64 v5; // rbx
  const char *v6; // r9
  HMODULE v7; // rcx
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  MPCCursorManager **v13; // rsi
  MPCCursorManager **v14; // rbp
  MPCCursorManager *v15; // rbx
  __int64 v16; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  MPCCursorManager *v18; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 1872) )
    return;
  v18 = (MPCCursorManager *)operator new(0x48uLL);
  v3 = MPCCursorManager::MPCCursorManager(v18);
  v5 = *((_QWORD *)this + 237);
  *((_QWORD *)this + 237) = v3;
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 66) )
    {
      v1 = retaddr;
      if ( !(unsigned int)MITDisableMouseIntercept() )
      {
LABEL_23:
        wil::details::in1diag3::FailFast_GetLastError(
          v1,
          (void *)0x41,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v6);
LABEL_24:
        wil::details::in1diag3::_FailFast_NullAlloc(
          v8,
          (void *)0x59,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v4);
        __debugbreak();
      }
      *(_BYTE *)(v5 + 66) = 0;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v5, 1, 1, 1);
    }
    v7 = *(HMODULE *)(v5 + 40);
    if ( v7 )
      FreeLibrary(v7);
    operator delete((void *)v5, (const struct std::nothrow_t *)0x48);
  }
  v8 = retaddr;
  if ( !*((_QWORD *)this + 237) )
    goto LABEL_24;
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    LODWORD(v18) = 0;
    v9 = RtlQueryWnfStateData(
           &v18,
           WNF_HOLO_USER_DISPLAY_CONTEXT,
           MPCHolographicInputManager::DisplayContextChangeCallback,
           this,
           0LL);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x65,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 2120,
            WNF_HOLO_USER_DISPLAY_CONTEXT,
            (unsigned int)v18,
            MPCHolographicInputManager::DisplayContextChangeCallback,
            this,
            0LL,
            0,
            1,
            -2LL);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x70,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    LODWORD(v18) = 0;
    v11 = RtlQueryWnfStateData(
            &v18,
            WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
            MPCHolographicInputManager::Input3DSwitchDisableCallback,
            this,
            0LL);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x79,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v11);
      JUMPOUT(0x180040039LL);
    }
    v12 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 2128,
            WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
            (unsigned int)v18,
            MPCHolographicInputManager::Input3DSwitchDisableCallback,
            this,
            0LL,
            0,
            1,
            v16);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x84,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_23;
    }
  }
  v13 = (MPCCursorManager **)*((_QWORD *)this + 229);
  v14 = (MPCCursorManager **)*((_QWORD *)this + 230);
  while ( v13 != v14 )
  {
    v15 = *v13;
    v18 = v15;
    if ( v15 )
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v15 + 8LL))(v15);
    (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v15 + 288LL))(v15);
    (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v15 + 16LL))(v15);
    ++v13;
  }
  *((_BYTE *)this + 1872) = 1;
}
