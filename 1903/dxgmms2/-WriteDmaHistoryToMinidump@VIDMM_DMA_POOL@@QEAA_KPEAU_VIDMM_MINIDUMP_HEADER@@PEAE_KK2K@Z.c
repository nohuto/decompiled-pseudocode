/*
 * XREFs of ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00B6B04
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00AD640 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C005CFFC (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z @ 0x1C00B5E0C (-CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z.c)
 *     ?SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z @ 0x1C00B65DC (-SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00B671C (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchQueryDmaData @ 0x1C00CDFA8 (VidSchQueryDmaData.c)
 */

unsigned __int64 __fastcall VIDMM_DMA_POOL::WriteDmaHistoryToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v10; // r12
  BOOL v11; // r15d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  VIDMM_DMA_POOL *v14; // r12
  int v15; // r13d
  int v16; // esi
  __int64 v17; // r9
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v22; // [rsp+28h] [rbp-E0h]
  unsigned int v23; // [rsp+30h] [rbp-D8h]
  unsigned int v24; // [rsp+38h] [rbp-D0h]
  char *v25; // [rsp+88h] [rbp-80h]
  unsigned __int8 *v26; // [rsp+90h] [rbp-78h]
  __int64 v27[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v28; // [rsp+F8h] [rbp-10h]
  unsigned int v30; // [rsp+158h] [rbp+50h]
  int v34; // [rsp+180h] [rbp+78h]

  v7 = a6;
  v26 = a3;
  v25 = a4;
  v10 = (unsigned __int64)a4;
  memset(v27, 0, 0x58uLL);
  *((_DWORD *)a2 + 315) = 0;
  VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
  if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL), a5, a6, v27) >= 0
    && v27[1]
    && v27[0] )
  {
    v11 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v27[0])
       && a7
       && a7 >= LODWORD(v27[4])
       && a7 < HIDWORD(v27[4]);
    v12 = a6;
    v13 = a6;
    if ( v10 >= 0x48 )
    {
      v14 = this;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        v28 = v13;
        if ( v16 && v11 )
        {
LABEL_37:
          v10 = (unsigned __int64)a4;
          goto LABEL_38;
        }
        if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 16LL) + 528LL), a5, v7, v27) < 0 )
        {
          v20 = (unsigned __int64)v25;
          if ( v15 )
            v16 = 1;
          else
            v11 = 1;
        }
        else
        {
          v30 = HIDWORD(v27[5]) - LODWORD(v27[5]);
          v34 = HIDWORD(v27[4]) - LODWORD(v27[4]);
          if ( (unsigned int)VIDMM_DMA_POOL::CheckIfDmaInformationPresent(
                               (VIDMM_DMA_POOL *)LODWORD(v27[7]),
                               a2,
                               a3,
                               v17,
                               v27[0],
                               v27[4],
                               HIDWORD(v27[4]) - LODWORD(v27[4]),
                               v27[7],
                               HIDWORD(v27[7]),
                               v27[6],
                               HIDWORD(v27[6]),
                               HIDWORD(v27[5]) - LODWORD(v27[5]))
            || (v18 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(v14, (struct _LIST_ENTRY *)v27[0])) == 0LL )
          {
            v20 = (unsigned __int64)v25;
          }
          else
          {
            v19 = VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
                    v14,
                    (struct _VIDMM_DMA_BUFFER *)v18,
                    v26,
                    v25,
                    v22,
                    v23,
                    v24,
                    v7,
                    v27[0],
                    v27[4],
                    v34,
                    v27[7],
                    HIDWORD(v27[7]),
                    v27[6],
                    HIDWORD(v27[6]),
                    v30);
            v26 += v19;
            v20 = (unsigned __int64)&v25[-v19];
            v25 -= v19;
            ++*((_DWORD *)a2 + 315);
          }
        }
        if ( v15 )
          break;
        if ( v16 || !v13 )
        {
          v16 = 1;
LABEL_35:
          v7 = ++v12;
          goto LABEL_36;
        }
        --v13;
        v15 = 1;
        v7 = v13;
LABEL_36:
        if ( v20 < 0x48 )
          goto LABEL_37;
      }
      if ( v11 )
      {
        if ( v13 )
          --v13;
        else
          v16 = 1;
        if ( v28 )
          v7 = v28 - 1;
        goto LABEL_36;
      }
      v15 = 0;
      goto LABEL_35;
    }
LABEL_38:
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return v10 - (_QWORD)v25;
  }
  else
  {
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return 0LL;
  }
}
