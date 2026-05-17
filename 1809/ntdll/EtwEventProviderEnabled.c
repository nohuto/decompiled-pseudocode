/*
 * XREFs of EtwEventProviderEnabled @ 0x180076CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall EtwEventProviderEnabled(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  char v5; // dl
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  unsigned __int8 v9; // al

  v3 = HIWORD(a1);
  if ( !HIWORD(a1) )
    return 0;
  v5 = 1;
  v6 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (v6 & 1) != 0 || (_WORD)v3 != *(_WORD *)(v6 + 96) )
    return 0;
  if ( !*(_BYTE *)(v6 + 124)
    || (v7 = *(_BYTE *)(v6 + 125), a2 > v7) && v7
    || ((*(_BYTE *)(v6 + 120) & 0x40) == 0 || a3)
    && ((a3 & *(_QWORD *)(v6 + 112)) == 0 || (a3 & *(_QWORD *)(v6 + 104)) != *(_QWORD *)(v6 + 104)) )
  {
    if ( !*(_BYTE *)(v6 + 244) )
      return 0;
    v9 = *(_BYTE *)(v6 + 245);
    if ( a2 > v9 )
    {
      if ( v9 )
        return 0;
    }
    if ( ((*(_BYTE *)(v6 + 240) & 0x40) == 0 || a3)
      && ((a3 & *(_QWORD *)(v6 + 232)) == 0 || (a3 & *(_QWORD *)(v6 + 224)) != *(_QWORD *)(v6 + 224)) )
    {
      return 0;
    }
  }
  return v5;
}
