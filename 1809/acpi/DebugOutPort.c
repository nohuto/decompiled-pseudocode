/*
 * XREFs of DebugOutPort @ 0x1C0063DEC
 * Callers:
 *     DebugO @ 0x1C0063D90 (DebugO.c)
 *     DebugOD @ 0x1C0063DB0 (DebugOD.c)
 *     DebugOW @ 0x1C0063DD0 (DebugOW.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C0030B29 (_strtoui64_0.c)
 *     IsNumber @ 0x1C00642DC (IsNumber.c)
 *     WriteSystemIO @ 0x1C0065AE8 (WriteSystemIO.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C00813C4 == 2 )
    {
LABEL_9:
      dword_1C00813C4 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C00813C4 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C00813C4 == 1 )
    dword_1C0081144 = v5;
  else
    WriteSystemIO((unsigned int)dword_1C0081144, a2, v5);
  return v2;
}
