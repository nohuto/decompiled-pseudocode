/*
 * XREFs of sub_1800449D0 @ 0x1800449D0
 * Callers:
 *     sub_180044B94 @ 0x180044B94 (sub_180044B94.c)
 *     sub_180046C60 @ 0x180046C60 (sub_180046C60.c)
 *     sub_18010BA18 @ 0x18010BA18 (sub_18010BA18.c)
 * Callees:
 *     sub_180048890 @ 0x180048890 (sub_180048890.c)
 */

unsigned __int64 __fastcall sub_1800449D0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v5; // rdi
  int v6; // r11d
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int64 v11; // r9
  int v12; // edx
  __int64 v13; // r9
  unsigned __int16 v14; // r10
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int16 v17; // ax
  int v18; // r9d
  BOOL v19; // edx
  int v22; // eax
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v5 )
  {
    if ( a5 )
    {
      v22 = *(_WORD *)(a2 + 8) & 1;
      if ( v22 )
        _InterlockedOr(v23, 0);
      *a5 = v22;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
  {
    v6 = (unsigned __int16)(*(_WORD *)(v5 + 40) ^ qword_180163548 ^ ((unsigned int)v5 >> 12));
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * byte_180120E60[(unsigned __int64)(unsigned int)(v6 + 15) >> 4] + 128);
    v8 = a3 - ((*(_DWORD *)(v5 + 40) ^ (unsigned int)qword_180163548 ^ ((unsigned int)v5 >> 12)) >> 16) - v5;
    v9 = *(_DWORD *)(v7 + 72);
    v10 = *(_BYTE *)(v7 + 76);
    if ( v9 )
    {
      v11 = (v8 * (unsigned __int64)v9) >> v10;
      v12 = v8 - v11 * v6;
    }
    else
    {
      LODWORD(v11) = v8 >> v10;
      v12 = ((1 << v10) - 1) & v8;
    }
    if ( v12 )
      return -1LL;
    v13 = *(_QWORD *)(v5 + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6) + 48) >> ((2 * v11) & 0x3F);
    if ( (v13 & 1) == 0 )
    {
      return -1LL;
    }
    else
    {
      v14 = *(_WORD *)(v5 + 40) ^ ((unsigned int)v5 >> 12);
      v15 = (unsigned __int16)qword_180163548 ^ v14;
      if ( (v13 & 2) != 0 )
      {
        v16 = (unsigned __int16)qword_180163548 ^ (unsigned __int64)v14;
        v17 = *(_WORD *)(v16 + a3 - 2);
        v18 = v17 & 0x4000;
        if ( (v17 & 0x4000) != 0 )
        {
          _InterlockedOr(v23, 0);
          v17 = *(_WORD *)(v16 + a3 - 2);
        }
        v19 = v18 != 0;
        if ( v17 < 0 )
          --v15;
        else
          v15 -= v17 & 0x3FFF;
      }
      else
      {
        v19 = 0;
      }
      if ( a5 )
        *a5 = v19;
      return v15;
    }
  }
  else
  {
    return sub_180048890(*(_QWORD *)(a1 + 32), a3, a3, a5);
  }
}
