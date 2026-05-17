/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008B0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(char *a1, unsigned int a2, int a3, __int64 a4, char a5, char a6)
{
  int v7; // r8d

  v7 = (a5 != 0 ? 0x40 : 0) | 0x80;
  if ( !a6 )
    v7 = a5 != 0 ? 0x40 : 0;
  return sub_180014974(a1, a2, v7, a3, a4, 2);
}
