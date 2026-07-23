/*
 * XREFs of KeConfigureHeteroPolicy @ 0x140750DF8
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x140750934 (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

char __fastcall KeConfigureHeteroPolicy(_DWORD *a1)
{
  char v1; // r9
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ecx
  int *v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdx
  int v10; // ecx
  char result; // al

  v1 = 0;
  if ( *a1 >= 9u )
    *a1 = 0;
  v3 = a1 + 1;
  v4 = 4LL;
  do
  {
    v5 = 2LL;
    do
    {
      if ( *v3 >= 5 )
        *v3 = 0;
      ++v3;
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
  v6 = a1[11];
  if ( (v6 & 0xFFFFFFF0) != 0 )
  {
    a1[11] = 0;
    v6 = 0;
  }
  if ( KiDesiredHeteroCpuPolicy != *a1
    || KiDynamicHeteroCpuPolicyMask != v6
    || KiDynamicHeteroCpuPolicyImportantPriority != a1[9]
    || KiDynamicHeteroCpuPolicyExpectedRuntime != a1[10] )
  {
    KiDesiredHeteroCpuPolicy = *a1;
    v1 = 1;
    KiDynamicHeteroCpuPolicyImportantPriority = a1[9];
    KiDynamicHeteroCpuPolicyMask = a1[11];
    KiDynamicHeteroCpuPolicyExpectedRuntime = a1[10];
    KiDynamicHeteroCpuPolicyExpectedCycles = KiDynamicHeteroCpuPolicyExpectedRuntime
                                           * *(_DWORD *)(KiProcessorBlock[0] + 68);
  }
  v7 = &KiDynamicHeteroCpuPolicy;
  v8 = 4LL;
  do
  {
    v9 = 2LL;
    do
    {
      v10 = *(int *)((char *)v7 + (char *)a1 - (char *)&KiDynamicHeteroCpuPolicy + 4);
      if ( *v7 != v10 )
      {
        v1 = 1;
        *v7 = v10;
      }
      ++v7;
      --v9;
    }
    while ( v9 );
    --v8;
  }
  while ( v8 );
  result = v1;
  KiQosHysteresisTimerPeriod = a1[12];
  return result;
}
