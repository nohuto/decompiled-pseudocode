/*
 * XREFs of PfSnCheckScenario @ 0x14066BEA8
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14066BCA4 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406F09C4 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_1404676A0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140467AD0 & 1) == 0 || (dword_140467830 & 1) != 0 )
    {
      if ( dword_140467A24 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140467978 )
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
