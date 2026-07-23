/*
 * XREFs of MiCaptureImageCfgContext @ 0x1406533F0
 * Callers:
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 * Callees:
 *     MiFreeImageCfgContext @ 0x1400DA50C (MiFreeImageCfgContext.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiLogRelocationRva @ 0x14064C34C (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int *a10,
        __int64 a11)
{
  unsigned int v12; // esi
  int v13; // ebx
  unsigned __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned __int64 v16; // r14
  unsigned int v17; // r15d
  unsigned int v18; // r10d
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned int v21; // r13d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  size_t v25; // r14
  size_t v26; // rdi
  char *PoolWithTag; // rax
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdx
  int v30; // ecx
  unsigned int v32; // [rsp+20h] [rbp-78h]
  unsigned __int64 v33; // [rsp+38h] [rbp-60h]
  char *v34; // [rsp+48h] [rbp-50h]
  unsigned int v39; // [rsp+C8h] [rbp+30h]

  v12 = 0;
  v13 = 0;
  *a10 = 0;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_QWORD *)(a11 + 16) = 0LL;
  *(_QWORD *)(a11 + 24) = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( *(_WORD *)(a7 + 48) == 523 )
  {
    v16 = *(_QWORD *)(a8 + 128);
    v17 = *(_DWORD *)(a8 + 136);
    v32 = v17;
    v18 = *(_DWORD *)(a8 + 144);
    v39 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a9 >= 0xB0 )
    {
      v14 = *(_QWORD *)(a8 + 160);
      v15 = *(_DWORD *)(a8 + 168);
    }
    v20 = *(_QWORD *)(a8 + 120);
  }
  else
  {
    v16 = *(unsigned int *)(a8 + 80);
    v17 = *(_DWORD *)(a8 + 84);
    v32 = v17;
    v18 = *(_DWORD *)(a8 + 88);
    v39 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a9 >= 0x70 )
    {
      v14 = *(unsigned int *)(a8 + 104);
      v15 = *(_DWORD *)(a8 + 108);
    }
    v20 = *(unsigned int *)(a8 + 76);
  }
  v33 = v20;
  if ( (v18 & 0x400) != 0 && v16 )
  {
    v21 = (v18 >> 28) + 4;
    if ( v16 < a4 || !v17 || v17 >= 0xFFFFFFFF / v21 )
    {
      dword_140439EF0 = 4;
      goto LABEL_59;
    }
    if ( v19 && v14 )
    {
      if ( v14 < a4 || !v15 || v15 >= 0xFFFFFFFF / v21 )
      {
        dword_140439EF0 = 10;
        goto LABEL_59;
      }
      v22 = v14 - a4;
      v23 = v22 + v15 * v21;
      if ( v23 <= v22 || (v24 = a7, v23 > *(unsigned int *)(a7 + 16)) || v15 * v21 + 4 < v15 * v21 )
      {
        dword_140439EF0 = 11;
LABEL_59:
        v13 = -1073741819;
        goto LABEL_60;
      }
    }
    else
    {
      v24 = a7;
    }
    v25 = v16 - a4;
    v26 = v17 * v21;
    if ( v26 + v25 <= v25 || v26 + v25 > *(unsigned int *)(v24 + 16) || (int)v26 + 4 < (unsigned int)v26 )
    {
      dword_140439EF0 = 5;
      goto LABEL_59;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v26, 0x5443694Du);
    v34 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = -1073741670;
      dword_140439EF0 = 6;
      goto LABEL_60;
    }
    memmove(PoolWithTag, (const void *)(v25 + a3), v26);
    if ( a2 )
      MiLogRelocationRva(v25, v26, a2, a1);
    v28 = 0;
    if ( (_DWORD)v26 )
    {
      while ( 1 )
      {
        v29 = *(unsigned int *)&v34[v28];
        if ( v29 >= a5 )
          break;
        if ( v28 && (unsigned int)v29 < v12 )
        {
          dword_140439EF0 = 9;
          goto LABEL_41;
        }
        v12 = *(_DWORD *)&v34[v28];
        v28 += v21;
        if ( v28 >= (unsigned int)v26 )
          goto LABEL_42;
      }
      dword_140439EF0 = 8;
LABEL_41:
      v13 = -1073741701;
    }
LABEL_42:
    if ( v13 < 0 )
      goto LABEL_61;
    if ( v33 )
    {
      if ( v33 < a4 || v33 >= a4 + a5 )
      {
        v13 = -1073741701;
        dword_140439EF0 = 10;
        goto LABEL_60;
      }
      *(_DWORD *)(a11 + 24) = v33 - a4;
    }
    v30 = *a10 | 1;
    *a10 = v30;
    if ( (*(_WORD *)(a7 + 60) & 0x4000) != 0 )
    {
      v30 |= 2u;
      *a10 = v30;
    }
    if ( (v39 & 0x8000) != 0 )
    {
      v30 |= 0x10u;
      *a10 = v30;
    }
    if ( (v39 & 0x4000) != 0 )
    {
      v30 |= 8u;
      *a10 = v30;
    }
    if ( (v39 & 0x100000) != 0 )
      *a10 = v30 | 0x20;
    *(_DWORD *)a11 = v39;
    *(_QWORD *)(a11 + 8) = v34;
    *(_DWORD *)(a11 + 16) = v32;
    *(_DWORD *)(a11 + 20) = v21;
  }
LABEL_60:
  if ( v13 < 0 )
LABEL_61:
    MiFreeImageCfgContext(a11);
  return (unsigned int)v13;
}
