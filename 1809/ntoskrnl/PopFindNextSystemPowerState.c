/*
 * XREFs of PopFindNextSystemPowerState @ 0x140865F2C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140417720 = dword_140417724;
  if ( dword_140417724 == 1 )
  {
    if ( dword_14041770C < 0 && *a3 )
    {
      *a3 = 0;
      dword_14041770C &= ~0x10000000u;
      dword_140417720 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140417720 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
