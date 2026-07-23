/*
 * XREFs of CmpGetNextName @ 0x14073E95C
 * Callers:
 *     CmpWalkUnicodeStringPath @ 0x14073E8BC (CmpWalkUnicodeStringPath.c)
 *     CmpFindHiveSubKey @ 0x1409CDDF4 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x1409F4CE4 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  _WORD *v3; // r9
  __int16 v5; // dx
  _WORD *v6; // rax
  __int16 v7; // r9
  __int16 v8; // dx
  unsigned __int16 v9; // r9
  bool result; // al
  __int16 v11; // ax

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v3 || !*a1 || !*v3 )
  {
LABEL_13:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
    return result;
  }
  v5 = *a1;
  while ( *v3 == 92 )
  {
    v11 = *a1;
    ++v3;
    a1[1] -= 2;
    *((_QWORD *)a1 + 1) = v3;
    v5 = v11 - 2;
    *a1 = v11 - 2;
    if ( v11 == 2 )
      goto LABEL_13;
  }
  *(_QWORD *)(a2 + 8) = v3;
  v6 = v3;
  do
  {
    v7 = (__int16)v6;
    if ( *v6 == 92 )
      break;
    v8 = *a1;
    ++v6;
    a1[1] -= 2;
    v5 = v8 - 2;
    *((_QWORD *)a1 + 1) = v6;
    v7 = (__int16)v6;
    *a1 = v5;
  }
  while ( v5 );
  v9 = v7 - *(_WORD *)(a2 + 8);
  *(_WORD *)a2 = v9;
  *(_WORD *)(a2 + 2) = v9;
  *a3 = v5 == 0;
  return v9 <= 0x200u;
}
