/*
 * XREFs of pvSetMemoryBases @ 0x1C0220298
 * Callers:
 *     lGGOBitmap @ 0x1C021F1E4 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall pvSetMemoryBases(_DWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v5; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  ULONG v13; // edx
  char *v14; // rbx
  signed int v15; // r15d
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  char *v18; // rax
  char *v19; // rax
  unsigned __int64 result; // rax
  signed int v21; // [rsp+50h] [rbp+8h]

  v5 = a1[5];
  if ( v5 > 0x7FFFFFF8 )
    goto LABEL_26;
  v7 = a1[6];
  if ( v7 > 0x7FFFFFF8 )
    goto LABEL_26;
  v8 = a1[7];
  if ( v8 > 0x7FFFFFF8 )
    goto LABEL_26;
  v9 = (v5 + 7) & 0xFFFFFFF8;
  v10 = v9 + ((v7 + 7) & 0xFFFFFFF8);
  if ( v10 < v9 )
    goto LABEL_26;
  if ( v10 > 0x7FFFFFFF )
    goto LABEL_26;
  v11 = v9 + ((v7 + 7) & 0xFFFFFFF8);
  v12 = v10 + ((v8 + 7) & 0xFFFFFFF8);
  if ( v12 < v11 || v12 > 0x7FFFFFFF )
    goto LABEL_26;
  v13 = v12;
  v14 = 0LL;
  if ( a3 )
  {
    v15 = v12;
    v16 = v12 + ((a1[8] + 7) & 0xFFFFFFF8);
    if ( v16 >= v13 && v16 <= 0x7FFFFFFF )
    {
      v13 = v16;
      goto LABEL_13;
    }
LABEL_26:
    a2[8] = 0LL;
    result = 0LL;
    a2[7] = 0LL;
    a2[6] = 0LL;
    return result;
  }
  v15 = v21;
LABEL_13:
  if ( !v13 )
    v13 = 4;
  v17 = (unsigned __int64)EngAllocMem(0, v13, 0x64667454u);
  if ( !v17 )
    goto LABEL_26;
  a2[6] = v17 & -(__int64)(a1[5] != 0);
  if ( a1[6] )
    v18 = (char *)(v17 + (int)v9);
  else
    v18 = 0LL;
  a2[7] = v18;
  if ( a1[7] )
    v19 = (char *)(v17 + (int)v11);
  else
    v19 = 0LL;
  a2[8] = v19;
  if ( a3 )
  {
    if ( a1[8] )
      v14 = (char *)(v17 + v15);
  }
  a2[9] = v14;
  return v17;
}
