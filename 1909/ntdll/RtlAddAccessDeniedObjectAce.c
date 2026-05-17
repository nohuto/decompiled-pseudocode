/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x180088720
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x18008881C (RtlpAddKnownObjectAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedObjectAce(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce((_DWORD)a1, a2, a3, a4, a5, a6, a7, 6);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, a7, 1);
}
