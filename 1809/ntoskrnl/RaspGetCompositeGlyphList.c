/*
 * XREFs of RaspGetCompositeGlyphList @ 0x1403290E0
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x140329780 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 *     RaspMapGlyphIndexToLocation @ 0x14017B898 (RaspMapGlyphIndexToLocation.c)
 *     FioFwReadUshortAtOffset @ 0x14017B938 (FioFwReadUshortAtOffset.c)
 *     RaspAllocateMemory @ 0x14017C164 (RaspAllocateMemory.c)
 *     RaspLoadGlyphData @ 0x14017C268 (RaspLoadGlyphData.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RaspGetCompositeGlyphList(
        __int64 a1,
        int a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        __int64 *a8)
{
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r14
  _QWORD *v13; // rdi
  unsigned int v14; // ebx
  __int64 *v15; // r12
  char *Memory; // rax
  char *v17; // rsi
  _QWORD *v18; // rax
  __int16 v19; // r12
  unsigned int v20; // ebx
  char v21; // ah
  int GlyphData; // r15d
  _WORD *v23; // rcx
  _WORD *v24; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  _WORD v28[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v29[2]; // [rsp+34h] [rbp-1Ch] BYREF
  __int16 v30[2]; // [rsp+38h] [rbp-18h] BYREF
  int v31; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-10h]
  _WORD *v33; // [rsp+48h] [rbp-8h] BYREF
  __int16 v34; // [rsp+98h] [rbp+48h] BYREF
  _WORD *v35; // [rsp+A0h] [rbp+50h]
  _WORD *v36; // [rsp+A8h] [rbp+58h]

  v36 = a4;
  v35 = a3;
  v9 = a6;
  *a4 = 0;
  *a3 = 0;
  *v9 = 0;
  *a5 = 0;
  if ( a2 == -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225473LL;
  v10 = *(_DWORD *)(a1 + 60);
  if ( !v10 )
    return 3221225473LL;
  v11 = v10 + a2;
  v34 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v12, (unsigned int)(v10 + a2), &v34);
  if ( v34 >= 0 )
    return 3221225485LL;
  v13 = a7;
  v14 = v11 + 10;
  v32 = v14;
  a7[1] = a7;
  *v13 = v13;
  while ( 1 )
  {
    v15 = a8;
    Memory = (char *)RaspAllocateMemory(0x2AuLL, a8);
    v17 = Memory;
    if ( !Memory )
    {
      GlyphData = -1073741670;
      goto LABEL_27;
    }
    memset(Memory, 0, 0x2AuLL);
    v18 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v18 != v13 )
LABEL_31:
      __fastfail(3u);
    *(_QWORD *)v17 = v13;
    *((_QWORD *)v17 + 1) = v18;
    *v18 = v17;
    v13[1] = v17;
    FioFwReadUshortAtOffset(v12, v14, v30);
    v19 = v30[0];
    v20 = v14 + 2;
    *((_WORD *)v17 + 12) = v30[0];
    FioFwReadUshortAtOffset(v12, v20, v29);
    *((_WORD *)v17 + 13) = v29[0];
    FioFwReadUshortAtOffset(v12, v20 + 2, v28);
    v14 = v20 + 4;
    if ( (v19 & 1) != 0 )
    {
      *((_WORD *)v17 + 14) = v28[0];
      FioFwReadUshortAtOffset(v12, v14, v28);
      v14 += 2;
      *((_WORD *)v17 + 15) = v28[0];
    }
    else
    {
      v21 = HIBYTE(v28[0]);
      v17[29] = v28[0];
      v17[28] = v21;
    }
    if ( (v19 & 8) == 0 )
    {
      if ( (v19 & 0x40) != 0 )
      {
        FioFwReadUshortAtOffset(v12, v14, &v34);
        *((_WORD *)v17 + 16) = v34;
        FioFwReadUshortAtOffset(v12, v14 + 2, &v34);
        *((_WORD *)v17 + 17) = v34;
      }
      else
      {
        if ( (v19 & 0x80u) == 0 )
          goto LABEL_18;
        FioFwReadUshortAtOffset(v12, v14, &v34);
        *((_WORD *)v17 + 16) = v34;
        FioFwReadUshortAtOffset(v12, v14 + 2, &v34);
        v14 += 4;
        *((_WORD *)v17 + 17) = v34;
        FioFwReadUshortAtOffset(v12, v14, &v34);
        *((_WORD *)v17 + 18) = v34;
        FioFwReadUshortAtOffset(v12, v14 + 2, &v34);
        *(_DWORD *)(v17 + 38) = v34;
      }
      v14 += 4;
      goto LABEL_18;
    }
    FioFwReadUshortAtOffset(v12, v14, &v34);
    v14 += 2;
    *((_WORD *)v17 + 16) = v34;
LABEL_18:
    GlyphData = RaspMapGlyphIndexToLocation(a1, v29[0], &v31);
    if ( GlyphData < 0 )
      break;
    GlyphData = RaspLoadGlyphData(a1, v31, (int)v29, (__int64 *)&v33, a8);
    if ( GlyphData < 0 )
      break;
    v23 = v35;
    *((_QWORD *)v17 + 2) = v33;
    v24 = v33;
    *v23 += v33[12];
    *v36 += *v24;
    if ( (v19 & 0x20) == 0 )
    {
      if ( (v19 & 0x100) != 0 )
      {
        FioFwReadUshortAtOffset(v12, v14, a5);
        v14 += 2;
      }
      *a6 = v14 - v32;
      return (unsigned int)GlyphData;
    }
  }
  v15 = a8;
LABEL_27:
  while ( 1 )
  {
    v26 = (_QWORD *)*v13;
    if ( (_QWORD *)*v13 == v13 )
      return (unsigned int)GlyphData;
    if ( (_QWORD *)v26[1] != v13 )
      goto LABEL_31;
    v27 = *v26;
    if ( *(_QWORD **)(*v26 + 8LL) != v26 )
      goto LABEL_31;
    *v13 = v27;
    *(_QWORD *)(v27 + 8) = v13;
    RaspFreeMemory(v26[2], v15);
    RaspFreeMemory((__int64)v26, v15);
  }
}
