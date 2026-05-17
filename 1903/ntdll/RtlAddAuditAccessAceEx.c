/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x180089A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

__int64 __fastcall RtlAddAuditAccessAceEx(char *a1, unsigned int a2, int a3, int a4, __int64 a5, char a6, char a7)
{
  int v7; // eax
  int v8; // r8d

  v7 = a3 | 0x40;
  if ( !a6 )
    v7 = a3;
  v8 = v7 | 0x80;
  if ( !a7 )
    v8 = v7;
  return sub_180014974(a1, a2, v8, a4, a5, 2);
}
