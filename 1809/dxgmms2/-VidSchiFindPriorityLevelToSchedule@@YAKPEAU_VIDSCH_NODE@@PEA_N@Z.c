/*
 * XREFs of ?VidSchiFindPriorityLevelToSchedule@@YAKPEAU_VIDSCH_NODE@@PEA_N@Z @ 0x1C002A014
 * Callers:
 *     VidSchiSelectContext @ 0x1C002FDD8 (VidSchiSelectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiFindPriorityLevelToSchedule(struct _VIDSCH_NODE *a1, bool *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8
  CCHAR MostSignificantBit; // al
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v5 = *((unsigned int *)a1 + 438);
  if ( *((_BYTE *)a1 + 2008) && (v5 & 0xC0000000) == 0 && (v5 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v2 + 184)))) != 0 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v5 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v2 + 184))));
    *a2 = 1;
  }
  else
  {
    MostSignificantBit = RtlFindMostSignificantBit(*((unsigned int *)a1 + 438));
    *a2 = 0;
  }
  return (unsigned int)MostSignificantBit;
}
