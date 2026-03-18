/*
 * XREFs of MiCaptureImageCfgContext @ 0x14065ABB0
 * Callers:
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiFreeImageCfgContext @ 0x140097570 (MiFreeImageCfgContext.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiLogRelocationRva @ 0x140657E30 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int *a10,
        void *a11)
{
  int v13; // ebx
  unsigned __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned __int64 v16; // r15
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rdi
  unsigned int v26; // r12d
  char *PoolWithTag; // rax
  char *v28; // r14
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdx
  int v32; // ecx
  unsigned int v34; // [rsp+20h] [rbp-78h]
  unsigned int v35; // [rsp+24h] [rbp-74h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h]

  v13 = 0;
  *a10 = 0;
  memset(a11, 0, 0x20uLL);
  v14 = 0LL;
  v15 = 0;
  if ( *(_WORD *)(a7 + 48) == 523 )
  {
    v16 = *(_QWORD *)(a8 + 128);
    v17 = *(_DWORD *)(a8 + 136);
    v34 = v17;
    v18 = *(_DWORD *)(a8 + 144);
    v35 = v18;
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
    v34 = v17;
    v18 = *(_DWORD *)(a8 + 88);
    v35 = v18;
    v19 = v18 & 0x4000;
    if ( (v18 & 0x4000) != 0 && a9 >= 0x70 )
    {
      v14 = *(unsigned int *)(a8 + 104);
      v15 = *(_DWORD *)(a8 + 108);
    }
    v20 = *(unsigned int *)(a8 + 76);
  }
  v36 = v20;
  if ( (v18 & 0x400) == 0 || !v16 )
    goto LABEL_53;
  v21 = (v18 >> 28) + 4;
  if ( v16 < a4 || !v17 || v17 >= 0xFFFFFFFF / v21 )
  {
    dword_140464848 = 4;
    v13 = -1073741819;
    goto LABEL_53;
  }
  if ( v19 && v14 )
  {
    if ( v14 >= a4 && v15 && v15 < 0xFFFFFFFF / v21 )
    {
      v22 = v14 - a4;
      v23 = v22 + v15 * v21;
      if ( v23 > v22 && v23 <= *(unsigned int *)(a7 + 16) && v15 * v21 + 4 >= v15 * v21 )
        goto LABEL_19;
      v13 = -1073741819;
      dword_140464848 = 11;
    }
    else
    {
      dword_140464848 = 10;
      v13 = -1073741819;
    }
LABEL_53:
    v31 = a11;
    goto LABEL_45;
  }
LABEL_19:
  v24 = v16 - a4;
  v25 = v17 * v21;
  v26 = v17 * v21;
  if ( v25 + v24 <= v24 || v25 + v24 > *(unsigned int *)(a7 + 16) || (int)v25 + 4 < (unsigned int)v25 )
  {
    dword_140464848 = 5;
    v13 = -1073741819;
    goto LABEL_53;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v26, 0x5443694Du);
  v28 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = -1073741670;
    dword_140464848 = 6;
    goto LABEL_53;
  }
  memmove(PoolWithTag, (const void *)(v24 + a3), v26);
  if ( a2 )
    MiLogRelocationRva(v24, v25, a2, a1);
  v29 = 0;
  if ( (_DWORD)v25 )
  {
    while ( 1 )
    {
      v30 = *(unsigned int *)&v28[v29];
      if ( v30 >= a5 )
        break;
      if ( v29 && (unsigned int)v30 < v13 )
      {
        dword_140464848 = 9;
        goto LABEL_59;
      }
      v13 = *(_DWORD *)&v28[v29];
      v29 += v21;
      if ( v29 >= (unsigned int)v25 )
        goto LABEL_30;
    }
    dword_140464848 = 8;
LABEL_59:
    v13 = -1073741701;
  }
  else
  {
LABEL_30:
    v13 = 0;
  }
  if ( v13 < 0 )
    goto LABEL_53;
  if ( !v36 )
  {
    v31 = a11;
    goto LABEL_36;
  }
  if ( v36 < a4 || v36 >= a4 + a5 )
  {
    dword_140464848 = 10;
    v13 = -1073741701;
    goto LABEL_53;
  }
  v31 = a11;
  *((_DWORD *)a11 + 6) = v36 - a4;
LABEL_36:
  v32 = *a10 | 1;
  *a10 = v32;
  if ( (*(_WORD *)(a7 + 60) & 0x4000) != 0 )
  {
    v32 |= 2u;
    *a10 = v32;
  }
  if ( (v35 & 0x8000) != 0 )
  {
    v32 |= 0x10u;
    *a10 = v32;
  }
  if ( (v35 & 0x4000) != 0 )
  {
    v32 |= 8u;
    *a10 = v32;
  }
  if ( (v35 & 0x100000) != 0 )
    *a10 = v32 | 0x20;
  *(_DWORD *)v31 = v35;
  v31[1] = v28;
  *((_DWORD *)v31 + 4) = v34;
  *((_DWORD *)v31 + 5) = v21;
LABEL_45:
  if ( v13 < 0 )
    MiFreeImageCfgContext((__int64)v31);
  return (unsigned int)v13;
}
