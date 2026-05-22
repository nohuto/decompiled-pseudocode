/*
 * XREFs of ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180040040
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180042A70 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18004CB74 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::UnInitialize3DComponents(MPCHolographicInputManager *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  DWORD LastError; // ebx
  wil::details::in1diag3 *v7; // rsi
  DWORD v8; // ebx
  __int64 v9; // rbx
  const char *v10; // r9
  HMODULE v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 1872) )
    return;
  v2 = (__int64 *)*((_QWORD *)this + 229);
  v3 = (__int64 *)*((_QWORD *)this + 230);
  while ( v2 != v3 )
  {
    v4 = *v2;
    if ( *v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 296LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    ++v2;
  }
  v5 = *((_QWORD *)this + 265);
  if ( v5 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 265) = 0LL;
  v7 = (wil::details::in1diag3 *)*((_QWORD *)this + 266);
  if ( v7 )
  {
    v8 = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v7);
    SetLastError(v8);
  }
  *((_QWORD *)this + 266) = 0LL;
  v9 = *((_QWORD *)this + 237);
  *((_QWORD *)this + 237) = 0LL;
  if ( v9 )
  {
    if ( *(_BYTE *)(v9 + 66) )
    {
      v7 = retaddr;
      if ( !(unsigned int)MITDisableMouseIntercept(this) )
      {
LABEL_24:
        wil::details::in1diag3::FailFast_GetLastError(
          v7,
          (void *)0x41,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
        JUMPOUT(0x180040203LL);
      }
      *(_BYTE *)(v9 + 66) = 0;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v9, 1, 1, 1);
    }
    v11 = *(HMODULE *)(v9 + 40);
    if ( v11 )
      FreeLibrary(v11);
    operator delete((void *)v9, (const struct std::nothrow_t *)0x48);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 236) + 112LL))(*((_QWORD *)this + 236));
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_24;
  }
  v13 = *((_QWORD *)this + 233);
  if ( v13 )
  {
    *((_QWORD *)this + 233) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_BYTE *)this + 1872) = 0;
}
