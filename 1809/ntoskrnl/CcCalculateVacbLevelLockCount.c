/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x14015FC6C
 * Callers:
 *     CcExtendVacbArray @ 0x14012CA94 (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x140022BAC (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  int v4; // r9d
  _QWORD *v5; // r10
  __int64 v6; // rcx
  int v7; // eax
  _DWORD *result; // rax
  int v9; // r9d
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // r8
  int v13; // eax

  v2 = 0;
  v4 = 0;
  v5 = (_QWORD *)a2;
  v6 = 128LL;
  do
  {
    v7 = v4 + 1;
    v11 = *v5++ == 0LL;
    if ( v11 )
      v7 = v4;
    v4 = v7;
    --v6;
  }
  while ( v6 );
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v10 = v5[1] - 16LL;
    do
    {
      v11 = *(_WORD *)v10 == 765;
      v12 = *(_QWORD *)(v10 + 24);
      if ( !v11 )
        ++v2;
      v13 = v4 + 1;
      if ( !v11 )
        v13 = v4;
      v10 = v12 - 16;
      v4 = v13;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0);
  *result = v9;
  return result;
}
