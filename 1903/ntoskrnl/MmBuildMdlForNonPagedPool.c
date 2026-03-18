/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1400FA170
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1401498BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     HvlGetCoverageData @ 0x140284914 (HvlGetCoverageData.c)
 *     VslpLockMdlForTransfer @ 0x140290D00 (VslpLockMdlForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     SmKmIssueVolumeIo @ 0x140324F9C (SmKmIssueVolumeIo.c)
 *     MiCreateMdl @ 0x14068BA40 (MiCreateMdl.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140907288 (EtwpBuildMdlForTraceBuffer.c)
 *     VslpIumPhase0Initialize @ 0x140A39B20 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x1402CF658 (MiSetNonPagedPoolNoSteal.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r10
  PMDL v2; // r12
  ULONG_PTR v3; // r9
  char *v4; // rdx
  unsigned __int64 v6; // r8
  int v7; // r11d
  ULONG_PTR v8; // r10
  ULONG_PTR v9; // r13
  unsigned __int64 v10; // rdx
  CSHORT MdlFlags; // di
  int v12; // r11d
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v21; // r10
  int v22; // r11d
  __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // r11d
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  __int64 i; // rcx
  __int16 v31; // ax
  __int64 v32; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v34; // rax
  char v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  _QWORD v39[4]; // [rsp+28h] [rbp-80h]
  _QWORD v40[12]; // [rsp+48h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp+8h] BYREF
  ULONG_PTR v42; // [rsp+B8h] [rbp+10h] BYREF
  ULONG_PTR v43; // [rsp+C0h] [rbp+18h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = 0LL;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v42 = 0LL;
  v6 = -1LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 + 8 * ((((unsigned __int16)v4 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v43 = v9;
  while ( v8 < v9 )
  {
    v10 = 0xFFFFF6FB7DBED000uLL;
    if ( v7 )
    {
      if ( v7 >= 2 )
      {
LABEL_19:
        if ( (v3 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v8, v3);
        if ( v7 == 3 )
          MiSetNonPagedPoolNoSteal(v8, v10, v6);
        BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v8);
        v42 = BugCheckParameter4;
        if ( (BugCheckParameter4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v21, BugCheckParameter4);
        v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFLL;
      }
    }
    else
    {
      v12 = 4;
      v13 = 4LL;
      v14 = (__int64)(v8 << 25) >> 16;
      v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39[1] = v15;
      v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39[2] = v16;
      v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39[3] = v17;
      v40[0] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v18 = v39[v13--];
        --v12;
        v19 = *(_QWORD *)v18;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL
          && v18 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v34 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v18 >> 3) & 0x1FF));
            v35 = v19 | 0x20;
            if ( (v34 & 0x20) == 0 )
              v35 = v19;
            LOBYTE(v19) = v35;
            if ( (v34 & 0x42) != 0 )
              LOBYTE(v19) = v35 | 0x42;
          }
        }
        if ( (v19 & 1) == 0 )
          goto LABEL_17;
        if ( (v19 & 0x80u) != 0LL )
          break;
        if ( v13 == 1 )
          goto LABEL_17;
      }
      if ( !v12 )
      {
LABEL_17:
        MI_READ_PTE_LOCK_FREE(v8);
        if ( (unsigned int)MiGetSystemRegionType(v14) == 5 )
          v7 = 3;
        else
          v7 = 2;
        goto LABEL_19;
      }
      v22 = 4;
      v40[1] = v15;
      v23 = 4LL;
      v40[2] = v16;
      v40[3] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v40[4] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v24 = v40[v23--];
        --v22;
        v25 = *(_QWORD *)v24;
        if ( v24 >= 0xFFFFF6FB7DBED000uLL
          && v24 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v25 & 1) != 0
          && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 8 * ((v24 >> 3) & 0x1FF));
            v38 = v25 | 0x20;
            if ( (v37 & 0x20) == 0 )
              v38 = v25;
            v25 = v38;
            if ( (v37 & 0x42) != 0 )
              v25 = v38 | 0x42;
          }
        }
        v41 = v25;
      }
      while ( v23 && (v25 & 0x80u) == 0LL );
      v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41);
      v9 = v43;
      v6 = (v26 >> 12) & 0xFFFFFFFFFLL;
      if ( v28 )
      {
        v29 = v14 >> 12;
        for ( i = 1LL; v27; --v27 )
        {
          v31 = v29;
          v29 >>= 9;
          v32 = i * (v31 & 0x1FF);
          i <<= 9;
          v6 += v32;
        }
      }
      v3 = v42;
      v7 = 1;
    }
    v2->Next = (struct _MDL *)v6;
    MdlFlags = MemoryDescriptorList->MdlFlags;
    if ( (MdlFlags & 0x800) == 0 && (v6 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0) )
      MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
    v2 = (PMDL)((char *)v2 + 8);
    v8 += 8LL;
    if ( (v8 & 0xFFF) != 0 )
    {
      if ( v7 == 1 )
        ++v6;
    }
    else
    {
      v7 = 0;
    }
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
