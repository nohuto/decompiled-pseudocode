/*
 * XREFs of RaidSrbIsPowerRequired @ 0x1C0039650
 * Callers:
 *     RaUnitStartIo @ 0x1C00035B0 (RaUnitStartIo.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidSrbIsPowerRequired(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  bool v9; // zf
  __int64 v10; // rax

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_DWORD *)(a2 + 20);
  else
    v4 = v2;
  if ( v4 > 0x10 )
    return v4 >= 0x12 && (v4 <= 0x13 || v4 == 23 || v4 == 32 || v4 - 36 <= 1);
  if ( v4 == 16 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
      LOBYTE(v10) = *(_BYTE *)(v10 + 524) & 0x10;
    v9 = (_BYTE)v10 == 0;
    return !v9;
  }
  if ( !v4 )
    return 1;
  v5 = v4 - 2;
  if ( !v5 )
    return 1;
  v6 = v5 - 5;
  if ( !v6 )
    return 1;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) == 0;
    return !v9;
  }
  return v7 == 1;
}
