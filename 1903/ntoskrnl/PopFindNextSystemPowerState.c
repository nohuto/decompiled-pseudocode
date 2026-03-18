/*
 * XREFs of PopFindNextSystemPowerState @ 0x1408A2484
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140443060 = dword_140443064;
  if ( dword_140443064 == 1 )
  {
    if ( dword_14044304C < 0 && *a3 )
    {
      *a3 = 0;
      dword_14044304C &= ~0x10000000u;
      dword_140443060 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140443060 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
