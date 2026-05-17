/*
 * XREFs of sub_1800D9F98 @ 0x1800D9F98
 * Callers:
 *     sub_180083400 @ 0x180083400 (sub_180083400.c)
 *     sub_1800D8AB4 @ 0x1800D8AB4 (sub_1800D8AB4.c)
 *     sub_1800DA5A8 @ 0x1800DA5A8 (sub_1800DA5A8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D9F98(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // r8

  v1 = (__int64 *)qword_180164610;
  do
  {
    if ( v1 == &qword_180164610 )
      return 0;
    v2 = v1;
    v1 = (__int64 *)*v1;
    v3 = v2[4];
  }
  while ( !v3 || *(_QWORD *)(v3 + 48) != a1 );
  return 1;
}
