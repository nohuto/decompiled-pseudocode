/*
 * XREFs of sub_18004C7F8 @ 0x18004C7F8
 * Callers:
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 * Callees:
 *     sub_180036698 @ 0x180036698 (sub_180036698.c)
 *     sub_18004DD00 @ 0x18004DD00 (sub_18004DD00.c)
 *     sub_18004DD48 @ 0x18004DD48 (sub_18004DD48.c)
 *     sub_18004E4EC @ 0x18004E4EC (sub_18004E4EC.c)
 */

__int64 __fastcall sub_18004C7F8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r15

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v3;
      if ( v3 > v7 )
        v9 = v7;
      v3 = (v3 - v7) & -(__int64)(v7 < v3);
      v10 = sub_18004E4EC(a1, v9, 0LL);
      v11 = v10;
      if ( !v10 )
        break;
      sub_18004DD48(a1, v10, v9);
      sub_180036698(a1, v11 + 32LL * *(unsigned __int8 *)(a1 + 10), 1);
      sub_18004DD00(a1, v11);
      if ( !--v6 )
        return v5;
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
