/*
 * XREFs of LdrpIsModuleUnderSystem32 @ 0x18007FBB4
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x180041A48 (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 */

char __fastcall LdrpIsModuleUnderSystem32(__int64 a1)
{
  char v1; // bl
  unsigned __int64 v3; // rdx

  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)LdrpSystem32
                                                                                      + 2 )
    return 0;
  v3 = (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * v3) != 92 )
    return 0;
  v1 = 1;
  if ( (unsigned int)RtlCompareUnicodeStrings(
                       *(unsigned __int16 **)(a1 + 80),
                       v3,
                       *((__int64 *)&LdrpSystem32 + 1),
                       v3,
                       1) )
    return 0;
  return v1;
}
