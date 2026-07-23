/*
 * XREFs of PfSnCheckScenario @ 0x140667FB0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406D0B04 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_14043CFA0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_14043D3D0 & 1) == 0 || (dword_14043D130 & 1) != 0 )
    {
      if ( dword_14043D324 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_14043D278 )
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
