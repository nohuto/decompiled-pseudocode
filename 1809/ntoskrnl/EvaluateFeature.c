/*
 * XREFs of EvaluateFeature @ 0x1401B4018
 * Callers:
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     rbc_InitializeFeatureStaging @ 0x1401B6EC0 (rbc_InitializeFeatureStaging.c)
 * Callees:
 *     EvaluateCurrentStateFromRegistry @ 0x1401B3F98 (EvaluateCurrentStateFromRegistry.c)
 */

__int64 __fastcall EvaluateFeature(unsigned int **a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v2; // rdi
  int v3; // r11d
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // r8d
  char v7; // r9
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (volatile signed __int32 *)*a1;
  v2 = (volatile signed __int32 *)a1[3];
  v3 = *((_DWORD *)a1 + 2);
  v4 = *((unsigned int *)a1 + 4);
  result = **a1;
  v6 = *((_DWORD *)a1 + 3);
  v7 = *((_BYTE *)a1 + 32);
  if ( !(_DWORD)result && *v2 == 0x80000000 )
  {
    v8 = *((_BYTE *)a1 + 32);
    _InterlockedCompareExchange(v1, EvaluateCurrentStateFromRegistry(v3, v4, v6, v7, &v8) + 1, 0);
    return (unsigned int)_InterlockedCompareExchange(v2, v8, 0x80000000);
  }
  return result;
}
