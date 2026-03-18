/*
 * XREFs of bLoadFontFile @ 0x1C0219334
 * Callers:
 *     ttfdSemLoadFontFile @ 0x1C02172A0 (ttfdSemLoadFontFile.c)
 * Callees:
 *     EngFntCacheLookUp @ 0x1C00BE6C0 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     ttfdUnloadFontFile @ 0x1C021BA18 (ttfdUnloadFontFile.c)
 *     ttfdUnloadFontFileTTC @ 0x1C021BA7C (ttfdUnloadFontFileTTC.c)
 *     vFontFileCache @ 0x1C021CF54 (vFontFileCache.c)
 *     bComputeGlyphAttrBits @ 0x1C0223E7C (bComputeGlyphAttrBits.c)
 */

__int64 __fastcall bLoadFontFile(__int64 a1, __int64 a2, unsigned int a3, __int16 a4, ULONG FastCheckSum, PVOID *a6)
{
  int v8; // r14d
  _DWORD *v9; // r13
  int v10; // eax
  _DWORD *v11; // rax
  __int64 result; // rax
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  char *v15; // rdi
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  char *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  int TTF; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  PVOID *v28; // rdi
  __int64 v29; // r14
  char *v30; // rax
  char *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r14d
  unsigned int *v35; // r12
  PVOID v36; // rax
  unsigned int v37; // r14d
  __int64 v38; // r15
  void *v39; // rcx
  void *v40; // rcx
  int v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+40h] [rbp-78h]
  unsigned int v43; // [rsp+44h] [rbp-74h]
  int v44; // [rsp+48h] [rbp-70h]
  ULONG v45; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-64h]
  unsigned int v47; // [rsp+58h] [rbp-60h]
  int v48; // [rsp+5Ch] [rbp-5Ch]
  _DWORD *v49; // [rsp+60h] [rbp-58h]
  char *v50; // [rsp+68h] [rbp-50h]
  char *v51; // [rsp+70h] [rbp-48h]

  v8 = 0;
  v44 = 0;
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v42 = 0;
  if ( FastCheckSum )
  {
    v11 = EngFntCacheLookUp(FastCheckSum, &v45);
    v9 = v11;
    if ( v11 )
    {
      if ( *v11 != 1416914532 )
        return 0LL;
      v8 = v11[1];
      v44 = v8;
      v10 = 1;
      v42 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( !v10 )
  {
    if ( !a2 || a3 < 0x1C )
      return 0LL;
    if ( _byteswap_ulong(*(_DWORD *)a2) != 1953784678 || _byteswap_ulong(*(_DWORD *)(a2 + 4)) < 0x10000 )
    {
      v13 = 0;
LABEL_45:
      v30 = (char *)EngAllocMem(1u, 0x48u, 0x64667454u);
      v15 = v30;
      *a6 = v30;
      v50 = v30;
      if ( !v30 )
        return 0LL;
      *((_DWORD *)v30 + 11) = 1;
      *((_DWORD *)v30 + 10) = 0;
      if ( v42 )
        v31 = (char *)v9 + (unsigned int)v9[4];
      else
        v31 = 0LL;
      if ( (unsigned int)bLoadTTF(a1, a2, a3, 0LL, a4, v15 + 48, v31, FastCheckSum) )
      {
        v32 = *((_QWORD *)v15 + 6);
        *(_QWORD *)v32 = v15;
        *((_DWORD *)v15 + 2) = 1;
        *((_DWORD *)v15 + 3) = (*(_DWORD *)(v32 + 284) == 2) + 1;
        *(_QWORD *)v15 = 0LL;
        *((_QWORD *)v15 + 4) = 0LL;
        if ( *(_DWORD *)(v32 + 284) == 2 )
        {
          *((_QWORD *)v15 + 8) = v32;
          *((_DWORD *)v15 + 15) = 2;
          *((_DWORD *)v15 + 14) = 0;
        }
        goto LABEL_52;
      }
LABEL_41:
      EngFreeMem(*a6);
      *a6 = 0LL;
      return 0LL;
    }
    v8 = 1;
    v44 = 1;
    v10 = v42;
  }
  if ( !v8 )
  {
    v13 = v44;
    goto LABEL_45;
  }
  if ( v10 )
    v14 = v9[2];
  else
    v14 = *(unsigned __int8 *)(a2 + 11) | ((*(unsigned __int8 *)(a2 + 10) | ((*(unsigned __int8 *)(a2 + 9) | (*(unsigned __int8 *)(a2 + 8) << 8)) << 8)) << 8);
  if ( !v14 || a2 && (v14 >= 0x7FFFFFE || v14 > (a3 - 12) >> 2) )
    return 0LL;
  v15 = (char *)EngAllocMem(1u, 32 * v14 + 40, 0x64667454u);
  *a6 = v15;
  v50 = v15;
  if ( !v15 )
    return 0LL;
  v16 = 0;
  v43 = 0;
  v17 = 0;
  v47 = 0;
  v18 = v9 + 4;
  v49 = v9 + 4;
  while ( 1 )
  {
    if ( v42 )
    {
      v19 = (char *)v9 + *v18;
      v20 = *((_DWORD *)v19 + 41);
    }
    else
    {
      v19 = 0LL;
      v21 = 4 * v17 + 12;
      v20 = *(unsigned __int8 *)((unsigned int)v21 + a2 + 3) | ((*(unsigned __int8 *)((unsigned int)v21 + a2 + 2) | ((*(unsigned __int8 *)(v21 + a2 + 1) | (*(unsigned __int8 *)(v21 + a2) << 8)) << 8)) << 8);
    }
    v46 = v20;
    v22 = 16LL * v16;
    *(_DWORD *)&v15[v22 + 44] = 1;
    *(_DWORD *)&v15[v22 + 40] = v20;
    v51 = &v15[v22 + 48];
    LOWORD(v41) = a4;
    TTF = bLoadTTF(a1, a2, a3, v20, v41, v51, v19, FastCheckSum);
    v16 = v43;
    if ( !TTF )
      break;
    v24 = *(_QWORD *)v51;
    *(_QWORD *)v24 = v15;
    v25 = v43 + 1;
    if ( *(_DWORD *)(v24 + 284) == 2 )
    {
      *(_QWORD *)&v15[16 * v25 + 48] = v24;
      v26 = 2LL * (unsigned int)v25;
      *(_DWORD *)&v15[8 * v26 + 44] = 2;
      *(_DWORD *)&v15[8 * v26 + 40] = v46;
      v16 = v43 + 2;
    }
    else
    {
      v16 = v43 + 1;
    }
    v43 = v16;
    v17 = v47 + 1;
    v47 = v17;
    v18 = ++v49;
    if ( v17 >= v14 )
    {
      v27 = 1;
      goto LABEL_33;
    }
  }
  v27 = 0;
LABEL_33:
  if ( !v27 )
  {
    if ( v16 )
    {
      v28 = (PVOID *)(v15 + 48);
      v29 = v16;
      do
      {
        if ( *((_DWORD *)v28 - 1) == 1 )
          ttfdUnloadFontFile(*v28);
        v28 += 2;
        --v29;
      }
      while ( v29 );
    }
    goto LABEL_41;
  }
  *((_DWORD *)v15 + 2) = v14;
  *((_DWORD *)v15 + 3) = v16;
  *(_QWORD *)v15 = 0LL;
  *((_QWORD *)v15 + 4) = 0LL;
  v13 = v44;
LABEL_52:
  if ( v42 )
  {
    v33 = (unsigned int)v9[3];
    if ( (_DWORD)v33 )
    {
      v34 = 1;
      v35 = (_DWORD *)((char *)v9 + v33);
      v36 = EngAllocMem(0, *(_DWORD *)((char *)v9 + v33), 0x64667454u);
      *((_QWORD *)v15 + 4) = v36;
      if ( v36 )
      {
        memmove(v36, v35, *v35);
      }
      else
      {
        v34 = 0;
        v48 = 0;
      }
      if ( !v34 )
        goto LABEL_55;
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 300LL) & 0x100) != 0 && !(unsigned int)bComputeGlyphAttrBits(v15) )
    {
LABEL_55:
      ttfdUnloadFontFileTTC(*a6);
      *a6 = 0LL;
      return 0LL;
    }
    if ( FastCheckSum )
      vFontFileCache(v15, FastCheckSum, v13);
  }
  v37 = 0;
  result = 1LL;
  if ( *((_DWORD *)v15 + 3) )
  {
    do
    {
      v38 = *(_QWORD *)&v15[16 * v37 + 48];
      if ( *(_DWORD *)&v15[16 * v37 + 44] == 1 )
      {
        v39 = *(void **)(v38 + 88);
        if ( v39 )
        {
          EngFreeMem(v39);
          *(_QWORD *)(v38 + 88) = 0LL;
        }
        v40 = *(void **)(v38 + 96);
        if ( v40 )
        {
          EngFreeMem(v40);
          *(_QWORD *)(v38 + 96) = 0LL;
        }
      }
      ++v37;
    }
    while ( v37 < *((_DWORD *)v15 + 3) );
    return 1LL;
  }
  return result;
}
