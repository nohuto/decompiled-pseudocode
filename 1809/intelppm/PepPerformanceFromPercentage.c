/*
 * XREFs of PepPerformanceFromPercentage @ 0x1C000F040
 * Callers:
 *     PepPerfControlHandler @ 0x1C000EDF0 (PepPerfControlHandler.c)
 *     PepPerfSelectionHandler @ 0x1C000EE50 (PepPerfSelectionHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepPerformanceFromPercentage(__int64 a1, int a2)
{
  unsigned int *v2; // rax

  v2 = *(unsigned int **)(a1 + 8);
  if ( a2 == v2[5] )
  {
    return *v2;
  }
  else if ( a2 == 100 )
  {
    return v2[1];
  }
  else if ( a2 == *(_DWORD *)(a1 + 32) )
  {
    return *(unsigned int *)(a1 + 28);
  }
  else if ( a2 == v2[6] )
  {
    return v2[2];
  }
  else if ( a2 == v2[7] )
  {
    return v2[3];
  }
  else
  {
    return a2 * v2[1] / 0x64;
  }
}
