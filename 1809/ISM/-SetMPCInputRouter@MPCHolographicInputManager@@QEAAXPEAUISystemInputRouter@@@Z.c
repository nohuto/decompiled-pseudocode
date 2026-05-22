/*
 * XREFs of ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180042F48
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180006C80 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x1800423B8 (-InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::SetMPCInputRouter(
        MPCHolographicInputManager *this,
        struct ISystemInputRouter *a2,
        __int64 a3,
        const char *a4)
{
  struct ISystemInputRouter *v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct ISystemInputRouter *)*((_QWORD *)this + 226);
  if ( v4 )
  {
    if ( v4 != a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x54A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        a4);
      JUMPOUT(0x180043028LL);
    }
  }
  else
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = *((_QWORD *)this + 226);
      *((_QWORD *)this + 226) = a2;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *((_QWORD *)this + 227);
    if ( v8 )
    {
      *((_QWORD *)this + 227) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 226))(
           *((_QWORD *)this + 226),
           &GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e,
           (char *)this + 1816);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    MPCHolographicInputManager::InitializeCursor3D(this);
  }
}
