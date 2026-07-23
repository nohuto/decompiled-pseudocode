/*
 * XREFs of PoQueryStopWatch @ 0x140001DC4
 * Callers:
 *     PopIsDataAccruedByPowerRequestStats @ 0x1405897D8 (PopIsDataAccruedByPowerRequestStats.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14087C07C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoQueryStopWatch(_QWORD *a1, __int64 *a2, bool *a3)
{
  unsigned int v3; // r9d
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  v3 = 0;
  if ( *a1 )
  {
    if ( a2 )
    {
      *a2 = a1[4];
      if ( a1[3] )
      {
        v8 = -1LL;
        v9 = MEMORY[0xFFFFF78000000008] - a1[3];
        v10 = *a2;
        v11 = *a2 + v9;
        if ( v11 >= v10 )
          v8 = v11;
        *a2 = v8;
      }
    }
    if ( a3 )
      *a3 = a1[3] != 0LL;
  }
  else
  {
    return (unsigned int)-1073741641;
  }
  return v3;
}
