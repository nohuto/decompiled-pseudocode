/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18004CB74
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18003FD94 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180040040 (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800412A4 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x1800433FC (--1-$unique_ptr@VMPCCursorManager@@U-$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18004CC74 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x18004CDA8 (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x18004CF58 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(
        MPCCursorManager *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4)
{
  int v6; // r8d
  unsigned int (__fastcall *v7)(bool); // rax
  char v8; // r8
  signed int LastError; // eax
  unsigned __int64 v10; // r9
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v14; // [rsp+38h] [rbp+10h] BYREF

  v6 = (4 * a3) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0 ? 0x10 : 0) | ((a2 | *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1874)) != 0
                                                                                                  ? 2
                                                                                                  : 0);
  if ( *((_DWORD *)this + 15) != v6 || a4 )
  {
    v7 = (unsigned int (__fastcall *)(bool))*((_QWORD *)this + 6);
    *((_DWORD *)this + 15) = v6;
    v8 = v6 & 0x1A;
    v14 = v8 != 24;
    if ( v7 )
    {
      if ( !v7(v8 != 24) )
      {
        LastError = GetLastError();
        v10 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v10 = (unsigned int)LastError;
        if ( (v10 & 0x80000000) != 0LL )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x105,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            (const char *)v10);
          JUMPOUT(0x18004CC6CLL);
        }
      }
      v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v11 )
      {
        if ( *v11 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCCursorManager_Update2DCursor_(v12, &v14);
        }
      }
    }
  }
}
