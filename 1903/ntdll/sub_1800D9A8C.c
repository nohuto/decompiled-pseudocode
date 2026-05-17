/*
 * XREFs of sub_1800D9A8C @ 0x1800D9A8C
 * Callers:
 *     sub_180083400 @ 0x180083400 (sub_180083400.c)
 *     sub_1800DA5A8 @ 0x1800DA5A8 (sub_1800DA5A8.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 *     sub_1800D99A4 @ 0x1800D99A4 (sub_1800D99A4.c)
 *     sub_1800DA634 @ 0x1800DA634 (sub_1800DA634.c)
 */

__int64 __fastcall sub_1800D9A8C(__int64 a1)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rbp
  int v5; // r14d
  __int64 v6; // rbx

  if ( !byte_18017A299 )
    return 0LL;
  v3 = (__int64 *)qword_180164610;
  while ( v3 != &qword_180164610 )
  {
    v4 = (_QWORD *)v3[5];
    v5 = 0;
    v3 = (__int64 *)*v3;
    if ( *v4 )
    {
      v6 = (__int64)v4;
      do
      {
        if ( (*(_BYTE *)(v6 + 8) & 1) == 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), *(const wchar_t **)v6) )
        {
          if ( (dword_1801665D4 & 4) != 0 )
            DbgPrint(
              "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
              LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
              *(_QWORD *)(a1 + 96));
          if ( sub_1800D99A4(v6, a1) )
            *(_DWORD *)(v6 + 8) |= 1u;
        }
        v6 = (__int64)&v4[4 * (unsigned int)++v5];
      }
      while ( *(_QWORD *)v6 );
    }
  }
  return sub_1800DA634(a1);
}
