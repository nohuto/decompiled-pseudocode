/*
 * XREFs of sub_1800DA5A8 @ 0x1800DA5A8
 * Callers:
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1800D9A8C @ 0x1800D9A8C (sub_1800D9A8C.c)
 *     sub_1800D9F98 @ 0x1800D9F98 (sub_1800D9F98.c)
 */

void sub_1800DA5A8()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_1801653D0;
  while ( v0 != &qword_1801653D0 )
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    if ( sub_1800D9F98(*(_QWORD *)(v1 + 48)) )
    {
      if ( (dword_1801665D4 & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", *(_QWORD *)(v1 + 96));
    }
    else
    {
      if ( (dword_1801665D4 & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", *(_QWORD *)(v1 + 96));
      sub_1800D9A8C(v1);
    }
  }
}
