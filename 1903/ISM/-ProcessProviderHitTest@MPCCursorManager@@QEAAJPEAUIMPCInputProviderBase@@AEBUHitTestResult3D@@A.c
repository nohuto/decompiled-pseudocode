/*
 * XREFs of ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18008C254
 * Callers:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180083240 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x18008BEB0 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18008BF64 (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18008BF84 (-Is3DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCCursorManager::ProcessProviderHitTest(
        MPCCursorManager *this,
        struct IMPCInputProviderBase *a2,
        const struct HitTestResult3D *a3,
        bool *a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  char v9; // cl
  char v10; // al
  char v12; // [rsp+28h] [rbp-39h] BYREF
  char v13; // [rsp+29h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-31h]
  __int128 v15; // [rsp+40h] [rbp-21h]
  __int128 v16; // [rsp+50h] [rbp-11h]
  __int64 v17; // [rsp+60h] [rbp-1h]
  _OWORD v18[3]; // [rsp+68h] [rbp+7h] BYREF
  char v19; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  char v21; // [rsp+C8h] [rbp+67h] BYREF

  v17 = -2LL;
  if ( *((_BYTE *)this + 64) )
  {
    v13 = 0;
    v21 = MPCCursorManager::Is2DCursorVisible(this);
    v12 = MPCCursorManager::Is3DCursorVisible(this);
    *(_QWORD *)&v14 = this;
    *((_QWORD *)&v14 + 1) = v8;
    *(_QWORD *)&v15 = &v21;
    *((_QWORD *)&v15 + 1) = &v12;
    *(_QWORD *)&v16 = &v13;
    *((_QWORD *)&v16 + 1) = a3;
    v18[0] = v14;
    v18[1] = v15;
    v18[2] = v16;
    v19 = 1;
    if ( !*((_BYTE *)this + 56) || !*((_BYTE *)this + 65) )
      goto LABEL_23;
    if ( !a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        121LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v8);
      __debugbreak();
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 240LL))(a2)
      && ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
    {
      if ( *(_DWORD *)this >= *((_DWORD *)this + 2) || (v9 = 1, *((_DWORD *)this + 1) >= *((_DWORD *)this + 3)) )
        v9 = 0;
      if ( *((_DWORD *)a3 + 72) >= *((_DWORD *)a3 + 74) || *((_DWORD *)a3 + 73) >= *((_DWORD *)a3 + 75) )
      {
        v13 = 0;
        v10 = 0;
      }
      else
      {
        v13 = 1;
        v10 = 1;
      }
      if ( v9 )
      {
        if ( v10 )
        {
          if ( *((_DWORD *)this + 8) == *((_DWORD *)a3 + 71) )
          {
LABEL_23:
            v19 = 0;
            lambda_2c96748461f4900de3746577f815c647_::operator()((__int64)v18);
            return 0LL;
          }
LABEL_21:
          v12 = 0;
          v21 = 1;
          goto LABEL_23;
        }
      }
      else if ( v10 )
      {
        goto LABEL_21;
      }
    }
    v12 = 1;
    v21 = 0;
    goto LABEL_23;
  }
  *a4 = 0;
  return 0LL;
}
