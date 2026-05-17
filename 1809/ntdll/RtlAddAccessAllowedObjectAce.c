/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x18008B190
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x18008B1DC (RtlpAddKnownObjectAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedObjectAce(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce((_DWORD)a1, a2, a3, a4, a5, a6, a7, 5);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, a7, 0);
}
