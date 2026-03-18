/*
 * XREFs of DebugOutPort @ 0x1C0065E2C
 * Callers:
 *     DebugO @ 0x1C0065DD0 (DebugO.c)
 *     DebugOD @ 0x1C0065DF0 (DebugOD.c)
 *     DebugOW @ 0x1C0065E10 (DebugOW.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C00317A9 (_strtoui64_0.c)
 *     IsNumber @ 0x1C0066314 (IsNumber.c)
 *     WriteSystemIO @ 0x1C0067B4C (WriteSystemIO.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1C00833C4 == 2 )
    {
LABEL_9:
      dword_1C00833C4 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(224, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1C00833C4 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1C00833C4 == 1 )
    dword_1C0083144 = v5;
  else
    WriteSystemIO((unsigned int)dword_1C0083144, a2, v5);
  return v2;
}
