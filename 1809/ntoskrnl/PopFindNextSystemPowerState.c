/*
 * XREFs of PopFindNextSystemPowerState @ 0x14086718C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_1404187C0 = dword_1404187C4;
  if ( dword_1404187C4 == 1 )
  {
    if ( dword_1404187AC < 0 && *a3 )
    {
      *a3 = 0;
      dword_1404187AC &= ~0x10000000u;
      dword_1404187C0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_1404187C0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
