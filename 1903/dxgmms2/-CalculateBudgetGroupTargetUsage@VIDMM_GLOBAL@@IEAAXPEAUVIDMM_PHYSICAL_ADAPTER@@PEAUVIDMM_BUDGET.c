/*
 * XREFs of ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00C3CB4
 * Callers:
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00C3EA0 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        struct VIDMM_BUDGET_STATE *a3,
        struct VIDMM_SEGMENT_GROUP_STATE *a4)
{
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned int v15; // [rsp+40h] [rbp+18h]

  v15 = (unsigned int)a3;
  if ( *((char *)a2 + 437) >= 0 )
  {
    v7 = dword_1C004E448;
    v8 = (unsigned int)dword_1C004E44C;
  }
  else
  {
    v6 = *(int *)a4;
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v7 = dword_1C004E458;
        v8 = (unsigned int)dword_1C004E45C;
      }
      else
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
        v9[7] = 0LL;
        v9[3] = 270LL;
        v9[4] = 61LL;
        v9[5] = this;
        v9[6] = v6;
        WdLogEvent5_WdCriticalError(v9);
        v7 = v15;
        v8 = v15;
      }
    }
    else
    {
      v7 = dword_1C004E450;
      v8 = (unsigned int)dword_1C004E454;
    }
  }
  v10 = *((_QWORD *)a4 + 1) * (unsigned __int64)v7 / 0x64;
  *((_QWORD *)a4 + 31) = v10;
  v11 = *((_DWORD *)a4 + 78);
  v12 = *((_QWORD *)a4 + 1) * v8 / 0x64uLL;
  *((_QWORD *)a4 + 32) = v12;
  v13 = v12;
  if ( v11 )
  {
    if ( *((_DWORD *)a4 + 75) == v11 )
    {
      v14 = *((_QWORD *)a4 + 35);
      if ( v14 < v12 )
      {
        *((_QWORD *)a4 + 32) = v14;
        v13 = v14;
      }
    }
  }
  *((_QWORD *)a4 + 33) = *((_QWORD *)a4 + 1) - v10 - v13;
}
