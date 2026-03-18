/*
 * XREFs of ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00A9EB8
 * Callers:
 *     VidMmLogInformationToMinidump @ 0x1C0025360 (VidMmLogInformationToMinidump.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00AFC3C (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00B36DC (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 *     ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00B7540 (-WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::LogInformationToMinidump(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _VIDMM_MINIDUMP_HEADER *a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v11; // rdi
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int128 v17; // xmm1
  char *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax

  if ( a6 < 0x4C8 )
    return 0LL;
  v11 = (unsigned __int8 *)a5 + 1224;
  memset(a5, 0, 0x4C8uLL);
  v12 = 6LL;
  *(_DWORD *)a5 = 1;
  v13 = &VIDMM_GLOBAL::_Config;
  *((_DWORD *)a5 + 1) = *((_DWORD *)this + 926);
  v14 = (_OWORD *)((char *)a5 + 8);
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    v15 = v13[7];
    v13 += 8;
    *(v14 - 1) = v15;
    --v12;
  }
  while ( v12 );
  v16 = 2LL;
  *v14 = *v13;
  v14[1] = v13[1];
  v14[2] = v13[2];
  v17 = v13[3];
  v18 = (char *)a5 + 840;
  v14[3] = v17;
  v19 = &gVidMmLowResourceAccumulated;
  do
  {
    *(_OWORD *)v18 = *v19;
    *((_OWORD *)v18 + 1) = v19[1];
    *((_OWORD *)v18 + 2) = v19[2];
    *((_OWORD *)v18 + 3) = v19[3];
    *((_OWORD *)v18 + 4) = v19[4];
    *((_OWORD *)v18 + 5) = v19[5];
    *((_OWORD *)v18 + 6) = v19[6];
    v18 += 128;
    v20 = v19[7];
    v19 += 8;
    *((_OWORD *)v18 - 1) = v20;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)v18 = *v19;
  *((_OWORD *)v18 + 1) = v19[1];
  *((_OWORD *)v18 + 2) = v19[2];
  *((_OWORD *)v18 + 3) = v19[3];
  *((_OWORD *)v18 + 4) = v19[4];
  *((_OWORD *)v18 + 5) = v19[5];
  *((_OWORD *)v18 + 6) = v19[6];
  *((_DWORD *)v18 + 28) = *((_DWORD *)v19 + 28);
  v21 = VIDMM_GLOBAL::WriteSegmentInformationToMinidump(this, a5, v11, a6 - 1224);
  v22 = &v11[v21];
  v23 = a6 - 1224 - v21;
  v24 = 10240LL;
  if ( v23 < 0x2800 )
    v24 = a6 - 1224 - v21;
  v25 = VIDMM_GLOBAL::WritePagingHistoryToMinidump(this, a5, v22, v24);
  return a6
       - (v23
        - v25)
       + VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
           *((VIDMM_DMA_POOL **)this + 79),
           a5,
           &v22[v25],
           v23 - v25,
           a2,
           a3,
           a4);
}
