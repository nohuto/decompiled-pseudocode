/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18004C9F0
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180041C34 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x18004CDA8 (wil--details--ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___--_ScopeExitFn__lambda_2c96.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  int v7; // ecx
  bool v8; // al
  bool v9; // al
  bool v10; // cl
  bool v11; // al
  __int128 v13; // [rsp+30h] [rbp-21h]
  __int128 v14; // [rsp+40h] [rbp-11h]
  __int128 v15; // [rsp+50h] [rbp-1h]
  _OWORD v16[3]; // [rsp+60h] [rbp+Fh] BYREF
  char v17; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  char v19; // [rsp+B8h] [rbp+67h] BYREF
  char v20; // [rsp+C8h] [rbp+77h] BYREF
  bool v21; // [rsp+D0h] [rbp+7Fh] BYREF

  v21 = 0;
  v7 = *((_DWORD *)this + 15);
  v8 = v7 == 1 || (v7 & 0x1A) != 0x18;
  v19 = v8;
  v9 = v7 == 1 || (v7 & 0x1C) != 0x18;
  v20 = v9;
  *(_QWORD *)&v13 = this;
  *((_QWORD *)&v13 + 1) = a4;
  *(_QWORD *)&v14 = &v19;
  *((_QWORD *)&v14 + 1) = &v20;
  *(_QWORD *)&v15 = &v21;
  *((_QWORD *)&v15 + 1) = a3;
  v16[0] = v13;
  v16[1] = v14;
  v16[2] = v15;
  v17 = 1;
  if ( !*((_BYTE *)this + 56) || !*((_BYTE *)this + 65) )
    goto LABEL_29;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
      (const char *)a4);
    JUMPOUT(0x18004CB6ALL);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 248LL))(a2)
    || ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) == 0 )
  {
LABEL_28:
    v20 = 1;
    v19 = 0;
    goto LABEL_29;
  }
  v10 = *(_DWORD *)this < *((_DWORD *)this + 2) && *((_DWORD *)this + 1) < *((_DWORD *)this + 3);
  v11 = *((_DWORD *)a3 + 70) < *((_DWORD *)a3 + 72) && *((_DWORD *)a3 + 71) < *((_DWORD *)a3 + 73);
  v21 = v11;
  if ( !v10 )
  {
    if ( v11 )
    {
LABEL_27:
      v20 = 0;
      v19 = 1;
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( !v11 )
    goto LABEL_28;
  if ( *((_DWORD *)this + 8) != *((_DWORD *)a3 + 69) )
    goto LABEL_27;
LABEL_29:
  wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___(v16);
  return 0LL;
}
