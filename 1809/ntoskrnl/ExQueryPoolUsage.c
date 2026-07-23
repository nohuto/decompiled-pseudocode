/*
 * XREFs of ExQueryPoolUsage @ 0x1400F0EA4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     ExHeapQueryPoolUsage @ 0x1400EF480 (ExHeapQueryPoolUsage.c)
 */

__int64 *__fastcall ExQueryPoolUsage(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        _DWORD *a8)
{
  _DWORD *v9; // r15
  __int64 *result; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r14d
  int v15; // r12d
  int v16; // r13d
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r11
  int v21; // esi
  int v22; // ebx
  int v23; // edi
  int v24; // r8d

  v9 = a2;
  if ( ExpHeapBackedPoolEnabledState == 3 )
    return (__int64 *)ExHeapQueryPoolUsage(a1, a2, a3, a4, a5, a6, a7, a8);
  *a1 = 0;
  v11 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( ExpNumberOfPagedPools != -1 )
  {
    do
    {
      v12 = v11++;
      v13 = ExpPagedPoolDescriptor[v12];
      *a1 += *(_QWORD *)(v13 + 80) + *(_QWORD *)(v13 + 72) - *(_QWORD *)(v13 + 136) - *(_QWORD *)(v13 + 144);
      *a3 += *(_DWORD *)(v13 + 64);
      *a4 += *(_DWORD *)(v13 + 128);
    }
    while ( v11 < ExpNumberOfPagedPools + 1 );
  }
  v14 = qword_1404D97D0
      + qword_1404D97C8
      + qword_1404D8690
      + qword_1404D8688
      - qword_1404D86C8
      - qword_1404D86D0
      - qword_1404D9808
      - qword_1404D9810;
  v15 = dword_1404D8680 + dword_1404D97C0;
  v16 = dword_1404D86C0 + dword_1404D9800;
  if ( (unsigned int)ExpNumberOfNonPagedPools >= 2 )
  {
    v17 = 0;
    do
    {
      v18 = v17++;
      v19 = ExpNonPagedPoolDescriptor[v18];
      v20 = *(_QWORD *)(v19 + 80);
      v21 = *(_QWORD *)(v19 + 72) - *(_QWORD *)(v19 + 136) - *(_QWORD *)(v19 + 144);
      v22 = *(_DWORD *)(v19 + 64);
      v23 = *(_DWORD *)(v19 + 128);
      v19 += 4416LL;
      v15 += v22 + *(_DWORD *)(v19 + 64);
      v14 += *(_QWORD *)(v19 + 80) + *(_QWORD *)(v19 + 72) + v20 + v21 - *(_QWORD *)(v19 + 136) - *(_QWORD *)(v19 + 144);
      v16 += v23 + *(_DWORD *)(v19 + 128);
    }
    while ( v17 < ExpNumberOfNonPagedPools );
    v9 = a2;
  }
  *v9 = v14;
  *a6 = v15;
  *a7 = v16;
  *a5 = 0;
  *a8 = 0;
  for ( result = (__int64 *)ExPoolLookasideListHead; result != &ExPoolLookasideListHead; result = (__int64 *)*result )
  {
    v24 = *((_DWORD *)result - 10);
    if ( *((_DWORD *)result - 7) )
      *a5 += v24;
    else
      *a8 += v24;
  }
  return result;
}
