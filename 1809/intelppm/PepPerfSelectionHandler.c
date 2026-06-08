/*
 * XREFs of PepPerfSelectionHandler @ 0x1C000EE50
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x1C000F040 (PepPerformanceFromPercentage.c)
 */

__int64 __fastcall PepPerfSelectionHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned int v9; // r10d
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rax

  v9 = a3;
  if ( a2 >= a3 )
  {
    v9 = a2;
    if ( a2 > a4 )
      v9 = a4;
  }
  if ( a9 )
  {
    v10 = (unsigned int)PepPerformanceFromPercentage(a1, v9);
    *v12 = v10;
    v13 = *(unsigned int *)(v11 + 28);
    if ( v10 >= v13 )
      v10 = (unsigned int)v13;
    if ( a8 )
      *a8 = v10 * *(unsigned int *)(*(_QWORD *)(v11 + 8) + 16LL) / *(unsigned int *)(*(_QWORD *)(v11 + 8) + 4LL);
  }
  return v9;
}
