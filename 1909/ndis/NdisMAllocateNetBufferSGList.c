/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C000EC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     PplpLazyInitializeLookasideList @ 0x1C003DD48 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // rbp
  PVOID v7; // r14
  bool v10; // r13
  __int16 DatapathEventsMask; // cx
  _MDL *MdlChain; // rdi
  unsigned int DataOffset; // ecx
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r12d
  char *v17; // rsi
  int v18; // r14d
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // eax
  __int64 v23; // rax
  _SLIST_ENTRY *v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // r8d
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  size_t v31; // r14
  struct _MDL *v32; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  unsigned __int64 v34; // rdx
  struct _MDL *Mdl; // rax
  PSLIST_ENTRY v36; // rcx
  unsigned __int64 ByteCount; // rax
  __int64 v38; // rsi
  char *MappedSystemVa; // rax
  size_t v40; // rsi
  char *v41; // rdx
  int v42; // [rsp+38h] [rbp-90h]
  int v43; // [rsp+38h] [rbp-90h]
  PSLIST_ENTRY v44; // [rsp+60h] [rbp-68h]
  struct _MDL *v45; // [rsp+68h] [rbp-60h]
  struct NDIS_PCW_CONTEXT v46; // [rsp+70h] [rbp-58h] BYREF
  _SLIST_ENTRY *ListEntry; // [rsp+D0h] [rbp+8h]
  PSLIST_ENTRY ListEntrya; // [rsp+D0h] [rbp+8h]
  __int64 v49; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v50; // [rsp+D8h] [rbp+10h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  v46.CurrentCpu = -1;
  v46.PcwBlock = 0LL;
  DatapathEventsMask = 0;
  *(_QWORD *)&v46.DatapathEventsMask = 0LL;
  if ( *(_DWORD *)(v6 + 48) || *(_DWORD *)(v6 + 80) )
  {
    DatapathEventsMask = *(_DWORD *)(v6 + 48);
    v46.DatapathEventsMask = *(_DWORD *)(v6 + 48);
    v46.DatapathCyclesMask = *(_DWORD *)(v6 + 80);
    v46.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
    if ( !v46.PcwBlock )
    {
      DatapathEventsMask = v46.DatapathEventsMask;
      v46.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
    }
  }
  if ( (DatapathEventsMask & 0x400) != 0 )
  {
    v46.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v46.PcwBlock->DatapathEventReferences[20]
                + ndisPcwPerCpuDataStride * v46.CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v46.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwStartCycleCounter(&v46, 0xAu);
  MdlChain = NetBuffer->MdlChain;
  DataOffset = NetBuffer->DataOffset;
  if ( !MdlChain )
    return -1073741823;
  for ( i = MdlChain->ByteCount; DataOffset >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    DataOffset -= i;
  }
  DataLength = NetBuffer->DataLength;
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
  v16 = DataLength + DataOffset;
  if ( DataLength + DataOffset < DataLength )
    return -1073676268;
  v17 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
  if ( v10 )
    NetBuffer->Reserved |= 4u;
  if ( ScatterGatherListBuffer )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, bool, PVOID, ULONG))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v10,
            ScatterGatherListBuffer,
            ScatterGatherListBufferSize);
    if ( v18 >= 0 )
      goto LABEL_14;
    v7 = Context;
  }
  v20 = *((_QWORD *)NdisMiniportDmaHandle + 8);
  v21 = KeGetPcr()->Prcb.Number + 1;
  v22 = *(_DWORD *)v20 - 1;
  if ( v21 < *(_DWORD *)v20 )
    v22 = v21;
  v23 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8LL * v22);
  v49 = v23;
  if ( !*(_BYTE *)(v23 + 112) )
  {
    PplpLazyInitializeLookasideList(v20, v23);
    v23 = v49;
  }
  ++*(_DWORD *)(v23 + 20);
  ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)v23);
  v24 = ListEntry;
  if ( ListEntry
    || (++*(_DWORD *)(v49 + 24),
        ListEntry = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v49 + 48))(
                                      *(unsigned int *)(v49 + 36),
                                      *(unsigned int *)(v49 + 44),
                                      *(unsigned int *)(v49 + 40),
                                      v49),
        (v24 = ListEntry) != 0LL) )
  {
    NetBuffer->Reserved |= 1u;
    NetBuffer->NdisReserved[0] = v24;
    LOBYTE(v42) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v42,
            v24,
            *((_DWORD *)NdisMiniportDmaHandle + 14));
    if ( v18 >= 0 )
      goto LABEL_14;
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~1u;
    v25 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v26 = KeGetPcr()->Prcb.Number + 1;
    v27 = *(_DWORD *)v25 - 1;
    if ( v26 < *(_DWORD *)v25 )
      v27 = v26;
    v28 = v27;
    v29 = *(_QWORD *)(v25 + 32);
    v30 = *(_QWORD *)(v29 + 8 * v28);
    if ( !*(_BYTE *)(v30 + 112) )
      PplpLazyInitializeLookasideList(v25, *(_QWORD *)(v29 + 8 * v28));
    ++*(_DWORD *)(v30 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v30) < *(_WORD *)(v30 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v30, ListEntry);
    }
    else
    {
      ++*(_DWORD *)(v30 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v30 + 56))(ListEntry, v30);
    }
    v7 = Context;
  }
  LOBYTE(v42) = v10;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL)
                                                                                             + 88LL))(
          *((_QWORD *)NdisMiniportDmaHandle + 3),
          *(_QWORD *)(v6 + 3824),
          MdlChain,
          v17,
          v16,
          *((_QWORD *)NdisMiniportDmaHandle + 4),
          v7,
          v42);
  if ( v18 < 0 )
  {
    v31 = v16;
    v32 = 0LL;
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6773444Eu);
    ListEntrya = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_61;
    Mdl = IoAllocateMdl(PoolWithTag, v16, 0, 0, 0LL);
    v45 = Mdl;
    v32 = Mdl;
    if ( !Mdl )
      goto LABEL_60;
    MmBuildMdlForNonPagedPool(Mdl);
    v32->Next = 0LL;
    if ( v10 )
    {
      v36 = ListEntrya;
      v34 = 0LL;
      v44 = ListEntrya;
      do
      {
        ByteCount = MdlChain->ByteCount;
        if ( v34 < ByteCount )
          break;
        MdlChain = MdlChain->Next;
        v34 -= ByteCount;
      }
      while ( MdlChain );
      v50 = v34;
      if ( MdlChain )
      {
        while ( 1 )
        {
          if ( !v31 )
          {
LABEL_48:
            v32 = v45;
            break;
          }
          v38 = MdlChain->ByteCount;
          if ( MdlChain->ByteCount )
          {
            if ( (MdlChain->MdlFlags & 5) != 0 )
            {
              MappedSystemVa = (char *)MdlChain->MappedSystemVa;
            }
            else
            {
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MdlChain, 0, MmCached, 0LL, 0, 0x40000000u);
              v36 = v44;
              v34 = v50;
            }
            if ( !MappedSystemVa )
            {
              v32 = v45;
LABEL_60:
              PoolWithTag = ListEntrya;
LABEL_61:
              v18 = -1073741670;
LABEL_62:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v34) = 4;
                WPP_RECORDER_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v34,
                  3,
                  20,
                  (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
                  v18);
                PoolWithTag = ListEntrya;
              }
              if ( v32 )
              {
                IoFreeMdl(v32);
                PoolWithTag = ListEntrya;
              }
              if ( PoolWithTag )
                ExFreePoolWithTag(PoolWithTag, 0);
              NetBuffer->NdisReserved[0] = 0LL;
              NetBuffer->Reserved &= ~2u;
              NetBuffer->Reserved &= ~4u;
              goto LABEL_14;
            }
            v40 = v38 - v34;
            v50 = 0LL;
            v41 = &MappedSystemVa[v34];
            if ( v31 < v40 )
              v40 = v31;
            memmove(v36, v41, v40);
            v34 = 0LL;
            v36 = (PSLIST_ENTRY)((char *)v44 + v40);
            v44 = (PSLIST_ENTRY)((char *)v44 + v40);
            v31 -= v40;
          }
          MdlChain = MdlChain->Next;
          if ( !MdlChain )
            goto LABEL_48;
        }
      }
    }
    NetBuffer->Reserved |= 2u;
    NetBuffer->NdisReserved[0] = v32;
    LOBYTE(v43) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PSLIST_ENTRY, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 88LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3824),
            v32,
            ListEntrya,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            Context,
            v43);
    if ( v18 < 0 )
    {
      PoolWithTag = ListEntrya;
      goto LABEL_62;
    }
  }
LABEL_14:
  if ( (v46.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwEndCycleCounter(&v46, 0xAu, 0x17uLL);
  return v18;
}
