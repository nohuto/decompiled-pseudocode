/*
 * XREFs of PfSnCheckScenario @ 0x140658E88
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140658C84 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406E6B68 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_1404679A0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140467DD0 & 1) == 0 || (dword_140467B30 & 1) != 0 )
    {
      if ( dword_140467D24 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140467C78 )
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
