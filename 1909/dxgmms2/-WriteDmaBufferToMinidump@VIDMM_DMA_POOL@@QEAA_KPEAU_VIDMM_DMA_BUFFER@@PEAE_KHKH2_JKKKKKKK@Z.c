/*
 * XREFs of ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00B63BC
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00B67A4 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     memmove @ 0x1C0018640 (memmove.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C007FD5C (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        unsigned __int8 *a3,
        char *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16)
{
  char *v16; // rdi
  unsigned __int8 *v17; // rbx
  struct _VIDMM_DMA_BUFFER *v18; // r13
  unsigned int v20; // edx
  char *v21; // rcx
  unsigned __int64 v22; // r11
  unsigned int v23; // r9d
  size_t v24; // r15
  unsigned int v25; // r10d
  size_t v26; // r14
  unsigned int v27; // r12d
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r8
  unsigned int v30; // ebx
  unsigned int v31; // edi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r9d
  unsigned int v37; // edx
  unsigned int *v38; // r10
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // r9d
  unsigned __int64 v42; // rdx
  unsigned int v43; // ecx
  unsigned __int64 v44; // r8
  unsigned int v45; // ebx
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // r14
  unsigned int v54; // [rsp+28h] [rbp-71h]
  unsigned int v55; // [rsp+2Ch] [rbp-6Dh]
  size_t v56; // [rsp+30h] [rbp-69h]
  __int128 v57; // [rsp+48h] [rbp-51h]
  __int128 v58; // [rsp+58h] [rbp-41h]
  __int128 v59; // [rsp+68h] [rbp-31h]
  char *v60; // [rsp+88h] [rbp-11h]
  void *Src; // [rsp+100h] [rbp+67h] BYREF

  Src = a4;
  v16 = a4;
  v17 = a3;
  v18 = a2;
  if ( (unsigned __int64)a4 < 0x48 )
    return 0LL;
  v20 = a16;
  v21 = a4 - 72;
  v22 = *((_QWORD *)v18 + 5);
  v23 = 0;
  a6 = 0;
  v24 = 0LL;
  a7 = 0;
  v25 = 0;
  a5 = 0;
  v26 = 0LL;
  v27 = -1;
  v56 = 0LL;
  v54 = 0;
  v28 = a16;
  v55 = 0;
  v29 = (unsigned __int64)(v16 - 72);
  v60 = v16 - 72;
  if ( v16 != (char *)72 )
  {
    v30 = a6;
    v31 = a5;
    do
    {
      if ( v28 )
      {
        v32 = 64LL;
        if ( v29 < 0x40 )
          v32 = v29;
        if ( v32 >= v28 )
        {
          v33 = v28;
        }
        else
        {
          v33 = 64LL;
          if ( v29 < 0x40 )
            v33 = v29;
        }
        v24 += v33;
        v28 -= v33;
        v56 = v24;
        v29 -= v33;
      }
      else if ( !v22 )
      {
        break;
      }
      if ( v22 )
      {
        v34 = 1024LL;
        if ( v29 < 0x400 )
          v34 = v29;
        if ( v34 >= v22 )
        {
          v35 = v22;
        }
        else
        {
          v35 = 1024LL;
          if ( v29 < 0x400 )
            v35 = v29;
        }
        v26 += v35;
        v22 -= v35;
        v29 -= v35;
        if ( a13 )
        {
          v36 = 0;
          v37 = a12;
          if ( a12 < a13 )
          {
            v38 = (unsigned int *)(*((_QWORD *)v18 + 15) + 8 * (a12 + 2 * (a12 + 1LL)));
            do
            {
              v39 = v36;
              if ( *v38 < v26 )
              {
                a7 = v37;
                v40 = v37;
                if ( !v36 )
                  v36 = 1;
                if ( v39 )
                  v40 = v30;
                v30 = v40;
              }
              ++v37;
              v38 += 6;
            }
            while ( v37 < a13 );
            v24 = v56;
            v18 = a2;
            v25 = v54;
            a6 = v30;
          }
          v41 = v30;
          v42 = v29 / 0x18;
          v43 = a7 - v30 - v25 + 1;
          if ( (unsigned int)(v29 / 0x18) >= v43 )
            v42 = v43;
          v25 += v42;
          v54 = v25;
          v44 = v29 - 24 * v42;
          if ( v30 <= a7 )
          {
            v45 = a5;
            do
            {
              v46 = *(_DWORD *)(*((_QWORD *)v18 + 15) + 24LL * v41);
              v47 = v46;
              if ( v27 < v46 )
                v47 = v27;
              v27 = v47;
              if ( v45 > v46 )
                v46 = v45;
              ++v41;
              v45 = v46;
            }
            while ( v41 <= a7 );
            v24 = v56;
            v31 = v46;
            v18 = a2;
            v30 = a6;
          }
          v48 = *((_DWORD *)v18 + 13) - 1;
          if ( v31 < v48 )
            v48 = v31;
          a5 = v48;
          v31 = v48;
          v49 = v48 - v27 - v55 + 1;
          v50 = v44 / 0x18;
          if ( (unsigned int)(v44 / 0x18) >= v49 )
            v50 = v49;
          v23 = v50 + v55;
          v55 += v50;
          v29 = v44 - 24 * v50;
        }
      }
    }
    while ( v29 );
    v17 = a3;
    v16 = (char *)Src;
    v21 = v60;
    v20 = a16;
  }
  v51 = 0LL;
  LODWORD(v59) = 0;
  *((_QWORD *)&v57 + 1) = __PAIR64__(a12, a11);
  *(_QWORD *)&v58 = __PAIR64__(a14, a13);
  *((_QWORD *)&v58 + 1) = __PAIR64__(v24, a15);
  *((_QWORD *)&v59 + 1) = __PAIR64__(v25, a6);
  *(_QWORD *)&v57 = __PAIR64__(a10, v20);
  DWORD1(v59) = v26;
  if ( (unsigned __int64)v16 >= 0x48 )
  {
    v51 = 72LL;
    v16 = v21;
    *(_OWORD *)v17 = __PAIR128__(a9, a8);
    *((_OWORD *)v17 + 1) = v57;
    *((_OWORD *)v17 + 2) = v58;
    *((_OWORD *)v17 + 3) = v59;
    *((_QWORD *)v17 + 8) = __PAIR64__(v23, v27);
    v17 += 72;
  }
  if ( v24 && v24 <= (unsigned __int64)v16 )
  {
    memmove(v17, *((const void **)v18 + 16), v24);
    v17 += v24;
    v51 += v24;
    v16 -= v24;
  }
  if ( v26 && v26 <= (unsigned __int64)v16 )
  {
    Src = 0LL;
    VIDMM_DMA_POOL::BeginCPUAccess(this, v18, &Src);
    memmove(v17, Src, v26);
    v17 += v26;
    v51 += v26;
    v16 -= v26;
  }
  v52 = 24LL * v54;
  if ( v54 && v52 <= (unsigned __int64)v16 )
  {
    memmove(v17, (const void *)(*((_QWORD *)v18 + 15) + 24LL * a6), 24LL * v54);
    v17 += v52;
    v51 += v52;
    v16 -= v52;
  }
  v53 = 24LL * v55;
  if ( v55 )
  {
    if ( v53 <= (unsigned __int64)v16 )
    {
      memmove(v17, (const void *)(*((_QWORD *)v18 + 14) + 24LL * v27), 24LL * v55);
      v51 += v53;
    }
  }
  return v51;
}
