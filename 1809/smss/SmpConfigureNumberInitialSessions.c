/*
 * XREFs of SmpConfigureNumberInitialSessions @ 0x14000D180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureNumberInitialSessions(__int64 a1, int a2, unsigned int *a3, int a4)
{
  unsigned int v4; // eax
  int v5; // ecx

  if ( SmpManufacturingMode == 1 || !SmpHostSmss )
  {
    SmpNumberInitialSessions = 1;
  }
  else
  {
    if ( a4 == 4 && a2 == 4 )
      v4 = *a3;
    else
      v4 = 1;
    v5 = v4;
    if ( v4 > 2 )
    {
      v4 = 2;
      v5 = 2;
    }
    if ( !v5 )
      v4 = 1;
    SmpNumberInitialSessions = v4;
  }
  return 0LL;
}
