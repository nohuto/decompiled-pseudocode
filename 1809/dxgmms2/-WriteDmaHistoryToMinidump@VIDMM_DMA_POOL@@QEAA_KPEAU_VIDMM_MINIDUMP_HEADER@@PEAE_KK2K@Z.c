/*
 * XREFs of ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00B36DC
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x1C00A9EB8 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C006B6A4 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z @ 0x1C00B29AC (-CheckIfDmaInformationPresent@VIDMM_DMA_POOL@@QEAAHPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K_JKKKKKKK@Z.c)
 *     ?SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z @ 0x1C00B31B4 (-SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00B32F4 (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchQueryDmaData @ 0x1C00CB1A8 (VidSchQueryDmaData.c)
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
  unsigned __int64 v9; // r12
  BOOL v10; // r15d
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  VIDMM_DMA_POOL *v13; // r12
  int v14; // r13d
  int v15; // esi
  __int64 v16; // r9
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v21; // [rsp+28h] [rbp-E0h]
  unsigned int v22; // [rsp+30h] [rbp-D8h]
  unsigned int v23; // [rsp+38h] [rbp-D0h]
  char *v24; // [rsp+88h] [rbp-80h]
  unsigned __int8 *v25; // [rsp+90h] [rbp-78h]
  unsigned __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27[4]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp-40h]
  unsigned int v29; // [rsp+CCh] [rbp-3Ch]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  unsigned int v32; // [rsp+D8h] [rbp-30h]
  unsigned int v33; // [rsp+DCh] [rbp-2Ch]
  unsigned int v34; // [rsp+E0h] [rbp-28h]
  unsigned int v35; // [rsp+E4h] [rbp-24h]
  unsigned int v37; // [rsp+158h] [rbp+50h]
  unsigned int v41; // [rsp+180h] [rbp+78h]

  v7 = a6;
  *((_DWORD *)a2 + 305) = 0;
  v9 = (unsigned __int64)a4;
  v25 = a3;
  v24 = a4;
  VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
  if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 528LL), a5, a6, v27) >= 0
    && v27[1]
    && v27[0] )
  {
    v10 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(this, (struct _LIST_ENTRY *)v27[0]) && a7 && a7 >= v28 && a7 < v29;
    v11 = a6;
    v12 = a6;
    if ( v9 >= 0x48 )
    {
      v13 = this;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v26 = v12;
        if ( v15 && v10 )
        {
LABEL_37:
          v9 = (unsigned __int64)a4;
          goto LABEL_38;
        }
        if ( (int)VidSchQueryDmaData(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 528LL), a5, v7, v27) < 0 )
        {
          v19 = (unsigned __int64)v24;
          if ( v14 )
            v15 = 1;
          else
            v10 = 1;
        }
        else
        {
          v37 = v31 - v30;
          v41 = v29 - v28;
          if ( (unsigned int)VIDMM_DMA_POOL::CheckIfDmaInformationPresent(
                               (VIDMM_DMA_POOL *)v34,
                               a2,
                               a3,
                               v16,
                               v27[0],
                               v28,
                               v29 - v28,
                               v34,
                               v35,
                               v32,
                               v33,
                               v31 - v30)
            || (v17 = VIDMM_DMA_POOL::SearchDmaBufferInAllPool(v13, (struct _LIST_ENTRY *)v27[0])) == 0LL )
          {
            v19 = (unsigned __int64)v24;
          }
          else
          {
            v18 = VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
                    v13,
                    (struct _VIDMM_DMA_BUFFER *)v17,
                    v25,
                    v24,
                    v21,
                    v22,
                    v23,
                    v7,
                    v27[0],
                    v28,
                    v41,
                    v34,
                    v35,
                    v32,
                    v33,
                    v37);
            v25 += v18;
            v19 = (unsigned __int64)&v24[-v18];
            v24 -= v18;
            ++*((_DWORD *)a2 + 305);
          }
        }
        if ( v14 )
          break;
        if ( v15 || !v12 )
        {
          v15 = 1;
LABEL_35:
          v7 = ++v11;
          goto LABEL_36;
        }
        --v12;
        v14 = 1;
        v7 = v12;
LABEL_36:
        if ( v19 < 0x48 )
          goto LABEL_37;
      }
      if ( v10 )
      {
        if ( v12 )
          --v12;
        else
          v15 = 1;
        if ( v26 )
          v7 = v26 - 1;
        goto LABEL_36;
      }
      v14 = 0;
      goto LABEL_35;
    }
LABEL_38:
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return v9 - (_QWORD)v24;
  }
  else
  {
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    return 0LL;
  }
}
