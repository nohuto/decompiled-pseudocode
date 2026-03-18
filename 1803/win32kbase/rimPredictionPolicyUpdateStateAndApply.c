/*
 * XREFs of rimPredictionPolicyUpdateStateAndApply @ 0x1C0102C84
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetDoPrediction @ 0x1C013D44C (ApiSetDoPrediction.c)
 */

__int64 __fastcall rimPredictionPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // edx
  _DWORD *v6; // rdi
  __int64 result; // rax
  int v8; // ecx
  int v9; // edx

  if ( a4 || (*(_DWORD *)(a1 + 276) & 0x20) != 0 || (v5 = 1, (unsigned int)(*(_DWORD *)(a1 + 24) - 1) > 3) )
    v5 = 0;
  v6 = (_DWORD *)(a2 + 2424);
  if ( v5 )
  {
    result = ApiSetDoPrediction(a1, *(_QWORD *)(a2 + 2448), *(_QWORD *)(a2 + 2440), a3, a2 + 80, a2 + 2432, a2 + 2424);
    if ( *(_DWORD *)(a2 + 2348) )
    {
      v8 = *v6 - *(_DWORD *)(a2 + 2440);
      v9 = *(_DWORD *)(a2 + 2428) - *(_DWORD *)(a2 + 2444);
      *(_DWORD *)(a2 + 2496) += v8;
      *(_DWORD *)(a2 + 2504) += v8;
      *(_DWORD *)(a2 + 2500) += v9;
      *(_DWORD *)(a2 + 2508) += v9;
    }
  }
  else
  {
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 2440);
    result = *(_QWORD *)(a2 + 2448);
    *(_QWORD *)(a2 + 2432) = result;
  }
  return result;
}
