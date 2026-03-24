/*
 * XREFs of PfSnCheckScenario @ 0x140666DF0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140666BF4 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406CF864 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_14043BEE0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_14043C310 & 1) == 0 || (dword_14043C070 & 1) != 0 )
    {
      if ( dword_14043C264 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_14043C1B8 )
      {
        *a2 = v2;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
