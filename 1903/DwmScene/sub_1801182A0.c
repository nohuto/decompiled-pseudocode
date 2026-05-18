/*
 * XREFs of sub_1801182A0 @ 0x1801182A0
 * Callers:
 *     sub_180118428 @ 0x180118428 (sub_180118428.c)
 *     sub_1801184A0 @ 0x1801184A0 (sub_1801184A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1801182A0(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned int i; // esi
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned __int64 v12; // r10
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int8 v15; // cl

  v5 = a2 / 3;
  v6 = a2 % 3;
  v7 = (((a2 % 3 != 1) + 2LL) & -(__int64)(a2 % 3 != 0)) + 4 * (a2 / 3) + 1;
  if ( v7 <= 0x81 )
  {
    v8 = 0LL;
    for ( i = 0; i < v5; LOBYTE(v7) = i )
    {
      ++i;
      v10 = a1[2];
      v7 = *a1;
      v11 = a1[1];
      a1 += 3;
      *(_BYTE *)(v8 + a3) = aAbcdefghijklmn[v7 >> 2];
      *(_BYTE *)(v8 + a3 + 1) = aAbcdefghijklmn[((unsigned __int64)v11 >> 4) | (unsigned __int8)(16 * (v7 & 3))];
      *(_BYTE *)(v8 + a3 + 2) = aAbcdefghijklmn[((unsigned __int64)v10 >> 6) | (unsigned __int8)(4 * (v11 & 0xF))];
      *(_BYTE *)(v8 + a3 + 3) = aAbcdefghijklmn[v10 & 0x3F];
      v8 += 4LL;
    }
    v12 = v6 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
LABEL_9:
        *(_BYTE *)(v8 + a3) = 0;
        return v7;
      }
      v13 = a1[1];
      v14 = (unsigned __int8)(16 * (*a1 & 3));
      *(_BYTE *)(v8 + a3) = aAbcdefghijklmn[(unsigned __int64)*a1 >> 2];
      *(_BYTE *)(v8 + a3 + 1) = aAbcdefghijklmn[((unsigned __int64)v13 >> 4) | v14];
      LOBYTE(v7) = aAbcdefghijklmn[(unsigned __int8)(4 * (v13 & 0xF))];
      *(_BYTE *)(v8 + a3 + 2) = v7;
      *(_BYTE *)(v8 + a3 + 3) = 61;
    }
    else
    {
      v15 = 16 * (*a1 & 3);
      *(_BYTE *)(v8 + a3) = aAbcdefghijklmn[(unsigned __int64)*a1 >> 2];
      LOBYTE(v7) = aAbcdefghijklmn[v15];
      *(_BYTE *)(v8 + a3 + 1) = v7;
      *(_WORD *)(v8 + a3 + 2) = 15677;
    }
    v8 += 4LL;
    goto LABEL_9;
  }
  return v7;
}
