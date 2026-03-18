/*
 * XREFs of ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00AC570
 * Callers:
 *     vSrcOpaqCopyS8D32 @ 0x1C00ABB90 (vSrcOpaqCopyS8D32.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00AC124 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vClearTypeLookupTableLoop(int a1, void **a2, struct _BLENDINFO *a3, int a4, unsigned int a5)
{
  _WORD *v5; // r11
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ebp
  int v11; // r14d
  int v12; // r15d
  int v13; // ecx
  __int64 v14; // rax
  int v15; // r12d
  int v16; // ebp
  int v17; // r13d
  int v18; // r14d
  int v19; // r10d
  unsigned int *v20; // rax
  int v21; // r15d
  int *v22; // r9
  __int64 v23; // r8
  unsigned int v24; // r10d
  int v25; // [rsp+38h] [rbp+8h]

  v5 = (_WORD *)&aulCacheCT + 1;
  uGammaCacheCT = gulGamma;
  v8 = 113LL;
  hCacheCT = *a2;
  v9 = *((_QWORD *)a3 + 6);
  v10 = *((_DWORD *)a3 + 9);
  v11 = *((_DWORD *)a3 + 10);
  v12 = *((_DWORD *)a3 + 11);
  v13 = *((_DWORD *)a3 + 2);
  v14 = (unsigned __int8)((unsigned __int64)((*((_DWORD *)a3 + 6) & a5) << *(_DWORD *)a3) >> *((_BYTE *)a3 + 4));
  uFCacheCT = a4;
  uBCacheCT = a5;
  v15 = *(unsigned __int8 *)(v14 + v9);
  v16 = v10 - v15;
  v17 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 7)) << v13) >> *((_BYTE *)a3 + 12))
                           + v9);
  v18 = v11 - v17;
  v19 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_BYTE *)a3 + 20))
                           + v9);
  v20 = (unsigned int *)&unk_1C032AA24;
  v21 = v12 - v19;
  v25 = v19;
  v22 = off_1C031C100 + 1;
  do
  {
    v23 = *((_QWORD *)a3 + 7);
    v24 = *((_DWORD *)a3 + 6) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v15
                                                                                  + ((v16
                                                                                    * alAlpha[*(unsigned __int8 *)v22]
                                                                                    + 0x80000) >> 20))
                                                                   + v23) << *((_DWORD *)a3 + 1)) >> *(_DWORD *)a3) | *((_DWORD *)a3 + 7) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v17 + ((v18 * alAlpha[*((unsigned __int8 *)v22 + 1)] + 0x80000) >> 20)) + v23) << *((_DWORD *)a3 + 3)) >> *((_DWORD *)a3 + 2)) | *((_DWORD *)a3 + 8) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v19 + ((v21 * alAlpha[*((unsigned __int8 *)v22 + 2)] + 0x80000) >> 20)) + v23) << *((_DWORD *)a3 + 5)) >> *((_DWORD *)a3 + 4));
    if ( a1 == 2 )
      *v5 = v24;
    else
      *v20 = v24;
    v19 = v25;
    ++v5;
    ++v20;
    ++v22;
    --v8;
  }
  while ( v8 );
  if ( a1 == 2 )
  {
    LOWORD(aulCacheCT) = a5;
    word_1C032AB04 = a4;
  }
  else
  {
    LODWORD(aulCacheCT) = a5;
    dword_1C032ABE8 = a4;
  }
}
