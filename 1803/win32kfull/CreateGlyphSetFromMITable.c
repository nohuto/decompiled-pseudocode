/*
 * XREFs of CreateGlyphSetFromMITable @ 0x1C021794C
 * Callers:
 *     cjComputeGLYPHSET_HIGH_BYTE @ 0x1C021AEC4 (cjComputeGLYPHSET_HIGH_BYTE.c)
 *     cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C021B110 (cjComputeGLYPHSET_MSFT_GENERAL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GetCodePageFromSpecId @ 0x1C0217CAC (GetCodePageFromSpecId.c)
 */

__int64 __fastcall CreateGlyphSetFromMITable(__int64 a1, __int64 a2, unsigned __int16 a3, ULONG **a4)
{
  int v8; // r14d
  int *v9; // rax
  int *v10; // rdi
  unsigned int CodePageFromSpecId; // r13d
  unsigned __int16 v13; // si
  int *v14; // rdx
  unsigned int v15; // ecx
  ULONG v16; // r15d
  __int64 v17; // r8
  bool v18; // zf
  unsigned int v19; // eax
  unsigned int v20; // ebp
  ULONG v21; // esi
  ULONG *v22; // rax
  ULONG *v23; // r14
  _DWORD *v24; // rdx
  ULONG *v25; // r9
  int *v26; // rcx
  unsigned __int16 v27; // r10
  int v28; // r8d
  int v29[4]; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0;
  v9 = (int *)EngAllocMem(0, 0xC0000u, 0x64667454u);
  v10 = v9;
  if ( !v9 )
  {
    if ( a4 )
      *a4 = 0LL;
    return 0LL;
  }
  memset(v9, 0, 0xC0000uLL);
  CodePageFromSpecId = GetCodePageFromSpecId(*(unsigned __int16 *)(a1 + 8));
  v13 = 0;
  if ( a3 )
  {
    while ( (unsigned int)ConvertToAndFromWideChar(
                            CodePageFromSpecId,
                            (WCHAR *)v29,
                            4u,
                            (CHAR *)(a2 + 8LL * v13),
                            2u,
                            1) != -1 )
    {
      if ( !v10[3 * LOWORD(v29[0])] )
      {
        v10[3 * LOWORD(v29[0])] = 1;
        LOWORD(v10[3 * LOWORD(v29[0]) + 1]) = v29[0];
        v10[3 * LOWORD(v29[0]) + 2] = *(_DWORD *)(a2 + 8LL * v13 + 4);
      }
      if ( ++v13 >= a3 )
        goto LABEL_10;
    }
    EngFreeMem(v10);
    if ( a4 )
      *a4 = 0LL;
    return 0LL;
  }
LABEL_10:
  v14 = v10;
  v15 = 0;
  v16 = 0;
  v17 = 0xFFFFLL;
  do
  {
    if ( *v14 )
    {
      v8 = 1;
      ++v16;
    }
    else
    {
      v18 = v8 == 0;
      v19 = v15 + 1;
      v8 = 0;
      if ( v18 )
        v19 = v15;
      v15 = v19;
    }
    v14 += 3;
    --v17;
  }
  while ( v17 );
  v20 = v15 + 1;
  if ( !v8 )
    v20 = v15;
  if ( !v20 )
  {
    EngFreeMem(v10);
    if ( !a4 )
      return 0LL;
LABEL_23:
    *a4 = 0LL;
    return 0LL;
  }
  v21 = 4 * (v16 + 4 * (v20 + 1));
  if ( a4 )
  {
    v22 = (ULONG *)EngAllocMem(0, v21, 0x64667454u);
    v23 = v22;
    if ( !v22 )
    {
      EngFreeMem(v10);
      goto LABEL_23;
    }
    memset(v22, 0, v21);
    *v23 = v21;
    v23[1] = 0;
    v24 = v23 + 4;
    v25 = &v23[4 * v20 + 4];
    v23[3] = v20;
    v23[2] = v16;
    v26 = v10;
    v27 = 0;
    v28 = *v10;
    do
    {
      if ( !v28 )
      {
        do
          v26 += 3;
        while ( !*v26 );
      }
      *v24 = *((unsigned __int16 *)v26 + 2);
      *((_QWORD *)v24 + 1) = v25;
      while ( 1 )
      {
        v28 = *v26;
        if ( !*v26 )
          break;
        ++*((_WORD *)v24 + 1);
        *v25++ = v26[2];
        v26 += 3;
      }
      ++v27;
      v24 += 4;
    }
    while ( v27 < v20 );
    EngFreeMem(v10);
    *a4 = v23;
  }
  return v21;
}
