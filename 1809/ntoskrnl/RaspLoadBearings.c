/*
 * XREFs of RaspLoadBearings @ 0x14017B748
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14017AC78 (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x14017B938 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall RaspLoadBearings(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  int v7; // edx
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int16 v13; // ax
  int v14; // esi
  __int16 v15; // bx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r14d
  __int16 v23; // [rsp+60h] [rbp+8h] BYREF
  __int16 v24; // [rsp+62h] [rbp+Ah]
  __int16 v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 68);
  v25 = 0;
  v11 = *(_QWORD *)(v5 + 16);
  if ( a2 >= v4 )
  {
    v22 = v7 + 4 * v4;
    result = FioFwReadBytesAtOffset(v11, (unsigned int)(v22 - 4), 4LL, &v23);
    if ( (int)result < 0 )
      return result;
    v14 = (unsigned __int16)__ROR2__(v23, 8);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v22 + 2 * (a2 - v4), &v25);
    if ( (int)result < 0 )
      return result;
    v15 = v25;
  }
  else
  {
    result = FioFwReadBytesAtOffset(v11, v7 + 4 * a2, 4LL, &v23);
    if ( (int)result < 0 )
      return result;
    v13 = __ROR2__(v23, 8);
    v14 = v13;
    v15 = __ROR2__(v24, 8);
    if ( !v13 )
    {
      result = FioFwReadBytesAtOffset(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 *(_DWORD *)(a1 + 68) - 4 + 4 * v4,
                 4LL,
                 &v23);
      if ( (int)result < 0 )
        return result;
      v14 = (unsigned __int16)__ROR2__(v23, 8);
    }
  }
  if ( v15 < 0 )
    v15 = 0;
  v16 = *(_DWORD *)(a3 + 18);
  v17 = *(unsigned __int16 *)(a3 + 24);
  v18 = *(_QWORD *)(a3 + 50);
  v19 = v15 + *(_DWORD *)(a3 + 10) - v16;
  if ( v14 >= v19 )
    v19 = v14;
  *(_DWORD *)(v18 + 4 * v17) = v16 - v15;
  *a4 = v19;
  *(_DWORD *)(v18 + 4 * v17 + 4) = *(_DWORD *)(a3 + 18) + v19 - v15;
  v20 = *(unsigned __int16 *)(a3 + 24);
  v21 = *(_QWORD *)(a3 + 58);
  *(_DWORD *)(v21 + 4 * v20) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  result = 0LL;
  *(_DWORD *)(v21 + 4 * v20 + 4) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  *(_WORD *)(a3 + 24) += 2;
  return result;
}
