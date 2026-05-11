/*
 * XREFs of EvaluateCurrentState @ 0x1C0001D24
 * Callers:
 *     rbc_InitializeFeatureStaging @ 0x1C0001D58 (rbc_InitializeFeatureStaging.c)
 * Callees:
 *     EvaluateCurrentStateFromRegistry @ 0x1C0001BE0 (EvaluateCurrentStateFromRegistry.c)
 */

char __fastcall EvaluateCurrentState(int **a1)
{
  volatile signed __int32 *v1; // r8
  int v2; // r9d
  int v3; // edx
  int v4; // ecx

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 3);
  v4 = **a1;
  if ( v4 )
    return v4 != 1;
  else
    return EvaluateCurrentStateFromRegistry(v2, v3, v1);
}
