/*
 * XREFs of ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C0026150
 * Callers:
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0026378 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x1C00260D0 (-EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z.c)
 */

void __fastcall EvaluateFeature(const struct reg_FeatureDescriptor *a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v2; // rdi
  int v3; // r11d
  int v4; // edx
  int v5; // r8d
  char v6; // r9
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(volatile signed __int32 **)a1;
  v2 = (volatile signed __int32 *)*((_QWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 3);
  v6 = *((_BYTE *)a1 + 32);
  if ( !**(_DWORD **)a1 && *v2 == 0x80000000 )
  {
    v7 = *((_BYTE *)a1 + 32);
    _InterlockedCompareExchange(v1, EvaluateCurrentStateFromRegistry(v3, v4, v5, v6, &v7) + 1, 0);
    _InterlockedCompareExchange(v2, v7, 0x80000000);
  }
}
