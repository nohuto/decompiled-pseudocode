/*
 * XREFs of ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C604
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MmBuildMdlForNonPagedPool @ 0x140102040 (MmBuildMdlForNonPagedPool.c)
 *     IoBuildPartialMdl @ 0x140109CA0 (IoBuildPartialMdl.c)
 *     RtlCompressBuffer @ 0x14012BF60 (RtlCompressBuffer.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153680 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(
        __int64 a1,
        __int64 a2,
        void *a3,
        void *a4,
        __int64 FinalCompressedSize)
{
  __int64 v5; // rsi
  __int64 v8; // r12
  struct _MDL *v9; // rbp
  PVOID MappedSystemVa; // r13
  const unsigned __int8 *v11; // r15
  __int16 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int8 v17[72]; // [rsp+40h] [rbp-48h] BYREF

  v5 = FinalCompressedSize;
  v8 = *(_QWORD *)(FinalCompressedSize + 80);
  v9 = *(struct _MDL **)(v8 + 16);
  MappedSystemVa = v9->MappedSystemVa;
  memmove(a4, MappedSystemVa, 0x1000uLL);
  v11 = (const unsigned __int8 *)(v5 + 72);
  v12 = v5 + 72;
  if ( RtlCompressBuffer(
         *(_WORD *)(*(_QWORD *)(v5 + 64) + 4032LL),
         (PUCHAR)a4,
         0x1000u,
         (PUCHAR)(v5 + 72),
         v8 - (v5 + 72) + 4096,
         0x1000u,
         (PULONG)&FinalCompressedSize,
         a3) < 0 )
  {
    LODWORD(FinalCompressedSize) = 4096;
    v11 = (const unsigned __int8 *)MappedSystemVa;
    IoBuildPartialMdl(v9, (PMDL)v5, (char *)v9->StartVa + v9->ByteOffset, 0);
  }
  else
  {
    v13 = (unsigned int)FinalCompressedSize;
    *(_QWORD *)v5 = 0LL;
    *(_WORD *)(v5 + 10) = 0;
    *(_DWORD *)(v5 + 40) = v13;
    *(_DWORD *)(v5 + 44) = v12 & 0xFFF;
    *(_QWORD *)(v5 + 32) = (unsigned __int64)v11 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v5 + 8) = 8 * ((((unsigned __int64)(v12 & 0xFFF) + v13 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool((PMDL)v5);
  }
  MetroHash64::Hash(v11, (unsigned int)FinalCompressedSize, v17, v14);
  *(_QWORD *)(v5 + 56) = *(_QWORD *)v17;
  *(_QWORD *)v5 = v9;
  *(_DWORD *)(v8 + 8) |= 0x80000000;
  *(_QWORD *)(v8 + 16) = v5;
  LOBYTE(v15) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  *(_QWORD *)v8 = *(_DWORD *)v8 & 7 | ((**(_QWORD **)(a1 + 104) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 104) = v8 | **(_DWORD **)(a1 + 104) & 7;
  *(_QWORD *)(a1 + 104) = v8;
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(a1, a2, v15, 0LL);
}
