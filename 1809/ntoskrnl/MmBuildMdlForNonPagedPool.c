/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x140102040
 * Callers:
 *     MiCreateMdl @ 0x140101FCC (MiCreateMdl.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C604 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     HvlGetCoverageData @ 0x140270E04 (HvlGetCoverageData.c)
 *     VslpLockMdlForTransfer @ 0x14027C678 (VslpLockMdlForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     SmKmIssueVolumeIo @ 0x140307714 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1408CB074 (EtwpBuildMdlForTraceBuffer.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // r8
  PMDL v2; // rdi
  char *v3; // r9
  unsigned __int64 v5; // rdx
  int v6; // r11d
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r13
  CSHORT MdlFlags; // r9
  __int16 v10; // ax
  int v11; // r11d
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  signed __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r11d
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 i; // rcx
  __int16 v29; // ax
  __int64 v30; // rax
  bool v31; // zf
  signed __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  char v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r9
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  _QWORD v51[4]; // [rsp+18h] [rbp-90h]
  _QWORD v52[6]; // [rsp+38h] [rbp-70h]
  unsigned __int64 v53; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v54; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v55; // [rsp+C8h] [rbp+20h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v3;
  v5 = -1LL;
  v6 = 0;
  v7 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = v7 + 8 * ((((unsigned __int16)v3 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v55 = v8;
  if ( v7 < v8 )
  {
    while ( v6 )
    {
      if ( v6 >= 2 )
      {
        if ( v6 != 3 )
        {
LABEL_22:
          if ( MiPteInShadowRange(v7)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 8 * ((v21 >> 3) & 0x1FF));
              v47 = v20 | 0x20;
              if ( (v46 & 0x20) == 0 )
                v47 = v20;
              v20 = v47;
              if ( (v46 & 0x42) != 0 )
                v20 = v47 | 0x42;
            }
          }
          v54 = v20;
          if ( MiPteInShadowRange((unsigned __int64)&v54)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v22 & 1) != 0
            && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
          {
            v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v48 )
            {
              v49 = *(_QWORD *)(v48 + 8 * (((unsigned __int64)&v54 >> 3) & 0x1FF));
              v50 = v22 | 0x20;
              if ( (v49 & 0x20) == 0 )
                v50 = v22;
              v22 = v50;
              if ( (v49 & 0x42) != 0 )
                v22 = v50 | 0x42;
            }
          }
          v5 = (v22 >> 12) & 0xFFFFFFFFFLL;
          goto LABEL_4;
        }
LABEL_20:
        if ( MiPteInShadowRange(v7)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * ((v7 >> 3) & 0x1FF));
            v44 = v19 | 0x20;
            if ( (v43 & 0x20) == 0 )
              v44 = v19;
            v19 = v44;
            if ( (v43 & 0x42) != 0 )
              v19 = v44 | 0x42;
          }
        }
        if ( (v19 & 0x200) == 0 )
        {
          do
          {
            v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v19 | 0x220, v19);
            v31 = v19 == v32;
            v19 = v32;
          }
          while ( !v31 && (v32 & 0x200) == 0 );
        }
        goto LABEL_22;
      }
LABEL_4:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      v10 = MdlFlags;
      if ( (MdlFlags & 0x800) == 0 )
      {
        if ( v5 > 0xFFFFFFFFFLL
          || (v10 = MemoryDescriptorList->MdlFlags, ((*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0) )
        {
          v10 = MdlFlags | 0x800;
          MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
        }
      }
      v2 = (PMDL)((char *)v2 + 8);
      v7 += 8LL;
      if ( (v7 & 0xFFF) != 0 )
      {
        if ( v6 == 1 )
          ++v5;
      }
      else
      {
        v6 = 0;
      }
      if ( v7 >= v8 )
        goto LABEL_11;
    }
    v11 = 4;
    v12 = 4LL;
    v13 = (__int64)(v7 << 25) >> 16;
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51[1] = v14;
    v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51[2] = v15;
    v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51[3] = v16;
    v52[0] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v17 = v51[v12--];
      --v11;
      v18 = *(_QWORD *)v17;
      if ( v17 >= 0xFFFFF6FB7DBED000uLL
        && v17 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v18 & 1) == 0 )
          goto LABEL_18;
        if ( (v18 & 0x20) == 0 || (v18 & 0x42) == 0 )
        {
          v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8 * ((v17 >> 3) & 0x1FF));
            v35 = v18 | 0x20;
            if ( (v34 & 0x20) == 0 )
              v35 = v18;
            LOBYTE(v18) = v35;
            if ( (v34 & 0x42) != 0 )
              LOBYTE(v18) = v35 | 0x42;
          }
        }
      }
      if ( (v18 & 1) == 0 )
        goto LABEL_18;
      if ( (v18 & 0x80u) != 0LL )
        break;
      if ( v12 == 1 )
        goto LABEL_18;
    }
    if ( v11 )
    {
      v23 = 4LL;
      v52[1] = v14;
      v24 = 4;
      v52[2] = v15;
      v52[3] = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v52[4] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v25 = v52[v23--];
        --v24;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 8 * ((v25 >> 3) & 0x1FF));
            v38 = v26 | 0x20;
            if ( (v37 & 0x20) == 0 )
              v38 = v26;
            v26 = v38;
            if ( (v37 & 0x42) != 0 )
              v26 = v38 | 0x42;
          }
        }
        v53 = v26;
      }
      while ( v23 && (v26 & 0x80u) == 0LL );
      v8 = v55;
      if ( (unsigned __int64)&v53 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v53 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8 * (((unsigned __int64)&v53 >> 3) & 0x1FF));
          v41 = v26 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v41 = v26;
          v26 = v41;
          if ( (v40 & 0x42) != 0 )
            v26 = v41 | 0x42;
        }
      }
      v5 = (v26 >> 12) & 0xFFFFFFFFFLL;
      if ( v23 )
      {
        v27 = v13 >> 12;
        for ( i = 1LL; v24; --v24 )
        {
          v29 = v27;
          v27 >>= 9;
          v30 = i * (v29 & 0x1FF);
          i <<= 9;
          v5 += v30;
        }
      }
      v6 = 1;
      goto LABEL_4;
    }
LABEL_18:
    if ( v13 < 0xFFFF800000000000uLL || byte_14043CA10[((v13 >> 39) & 0x1FF) - 256] != 5 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v10 = MemoryDescriptorList->MdlFlags;
LABEL_11:
  MemoryDescriptorList->MdlFlags = v10 | 4;
}
