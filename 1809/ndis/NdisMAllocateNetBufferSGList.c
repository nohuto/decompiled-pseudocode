/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x1C0006450
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0024EE0 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // rsi
  PVOID v7; // r15
  bool v10; // r12
  unsigned int v11; // r8d
  _MDL *MdlChain; // rdi
  unsigned int DataOffset; // ecx
  ULONG i; // eax
  unsigned int DataLength; // eax
  ULONG v16; // r13d
  char *v17; // rbp
  NDIS_STATUS v18; // r15d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _SLIST_ENTRY *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r15
  size_t v27; // r15
  struct _MDL *v28; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  struct _MDL *Mdl; // rax
  PSLIST_ENTRY v31; // r9
  unsigned __int64 v32; // rdx
  unsigned __int64 ByteCount; // rax
  __int64 v34; // rbp
  char *MappedSystemVa; // rax
  size_t v36; // rbp
  char *v37; // rdx
  int v38; // [rsp+38h] [rbp-90h]
  int v39; // [rsp+38h] [rbp-90h]
  PSLIST_ENTRY v40; // [rsp+60h] [rbp-68h]
  struct _MDL *v41; // [rsp+68h] [rbp-60h]
  struct NDIS_PCW_CONTEXT v42; // [rsp+70h] [rbp-58h] BYREF
  _SLIST_ENTRY *ListEntry; // [rsp+D0h] [rbp+8h]
  PSLIST_ENTRY ListEntrya; // [rsp+D0h] [rbp+8h]
  __int64 v45; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+D8h] [rbp+10h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v7 = Context;
  v10 = (Flags & 1) != 0;
  v11 = *(_DWORD *)(v6 + 80);
  v42.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v6 + 40);
  v42.DatapathEventsMask = *(_DWORD *)(v6 + 48);
  v42.DatapathCyclesMask = v11;
  v42.CurrentCpu = -1;
  if ( (v42.DatapathEventsMask & 0x400) != 0 )
  {
    v42.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v42.PcwBlock->DatapathEventReferences[20]
                + ndisPcwPerCpuDataStride * v42.CurrentCpu
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v11 & 0x400) != 0 )
    ndisPcwStartCycleCounter(&v42, 0xAu);
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
            *(_QWORD *)(v6 + 3856),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v10,
            ScatterGatherListBuffer,
            ScatterGatherListBufferSize);
    if ( v18 >= 0 )
      goto LABEL_12;
    v7 = Context;
  }
  v20 = *((_QWORD *)NdisMiniportDmaHandle + 8);
  v21 = KeGetPcr()->Prcb.Number + 1;
  if ( (unsigned int)v21 >= *(_DWORD *)v20 )
    v21 = (unsigned int)(*(_DWORD *)v20 - 1);
  v22 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8 * v21);
  v45 = v22;
  if ( !*(_BYTE *)(v22 + 112) )
  {
    PplpLazyInitializeLookasideList(v20, v22);
    v22 = v45;
  }
  ++*(_DWORD *)(v22 + 20);
  ListEntry = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
  v23 = ListEntry;
  if ( ListEntry
    || (++*(_DWORD *)(v45 + 24),
        ListEntry = (_SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v45 + 48))(
                                      *(unsigned int *)(v45 + 36),
                                      *(unsigned int *)(v45 + 44),
                                      *(unsigned int *)(v45 + 40),
                                      v45),
        (v23 = ListEntry) != 0LL) )
  {
    NetBuffer->Reserved |= 1u;
    NetBuffer->NdisReserved[0] = v23;
    LOBYTE(v38) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, _SLIST_ENTRY *, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3856),
            MdlChain,
            v17,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            v7,
            v38,
            v23,
            *((_DWORD *)NdisMiniportDmaHandle + 14));
    if ( v18 >= 0 )
      goto LABEL_12;
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved &= ~1u;
    v24 = *((_QWORD *)NdisMiniportDmaHandle + 8);
    v25 = KeGetPcr()->Prcb.Number + 1;
    if ( (unsigned int)v25 >= *(_DWORD *)v24 )
      v25 = (unsigned int)(*(_DWORD *)v24 - 1);
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25);
    if ( !*(_BYTE *)(v26 + 112) )
      PplpLazyInitializeLookasideList(v24, *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25));
    ++*(_DWORD *)(v26 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v26) >= *(_WORD *)(v26 + 16) )
    {
      ++*(_DWORD *)(v26 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v26 + 56))(ListEntry, v26);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v26, ListEntry);
    }
  }
  LOBYTE(v38) = v10;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL)
                                                                                             + 88LL))(
          *((_QWORD *)NdisMiniportDmaHandle + 3),
          *(_QWORD *)(v6 + 3856),
          MdlChain,
          v17,
          v16,
          *((_QWORD *)NdisMiniportDmaHandle + 4),
          Context,
          v38);
  if ( v18 < 0 )
  {
    v27 = v16;
    v28 = 0LL;
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6773444Eu);
    ListEntrya = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_57;
    Mdl = IoAllocateMdl(PoolWithTag, v16, 0, 0, 0LL);
    v41 = Mdl;
    v28 = Mdl;
    if ( !Mdl )
      goto LABEL_56;
    MmBuildMdlForNonPagedPool(Mdl);
    v28->Next = 0LL;
    if ( v10 )
    {
      v31 = ListEntrya;
      v32 = 0LL;
      v40 = ListEntrya;
      do
      {
        ByteCount = MdlChain->ByteCount;
        if ( v32 < ByteCount )
          break;
        MdlChain = MdlChain->Next;
        v32 -= ByteCount;
      }
      while ( MdlChain );
      v46 = v32;
      if ( MdlChain )
      {
        while ( 1 )
        {
          if ( !v27 )
          {
LABEL_44:
            v28 = v41;
            break;
          }
          v34 = MdlChain->ByteCount;
          if ( MdlChain->ByteCount )
          {
            if ( (MdlChain->MdlFlags & 5) != 0 )
            {
              MappedSystemVa = (char *)MdlChain->MappedSystemVa;
            }
            else
            {
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MdlChain, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
              v31 = v40;
              v32 = v46;
            }
            if ( !MappedSystemVa )
            {
              v28 = v41;
LABEL_56:
              PoolWithTag = ListEntrya;
LABEL_57:
              v18 = -1073741670;
LABEL_58:
              if ( (unsigned __int8)byte_1C00A0252 >= 4u )
              {
                WPP_SF_D(20LL, &WPP_b7380f6131c0382fffce9713ea39f3ba_Traceguids, (unsigned int)v18);
                PoolWithTag = ListEntrya;
              }
              if ( v28 )
              {
                IoFreeMdl(v28);
                PoolWithTag = ListEntrya;
              }
              if ( PoolWithTag )
                ExFreePoolWithTag(PoolWithTag, 0);
              NetBuffer->NdisReserved[0] = 0LL;
              NetBuffer->Reserved &= ~2u;
              NetBuffer->Reserved &= ~4u;
              goto LABEL_12;
            }
            v36 = v34 - v32;
            v46 = 0LL;
            v37 = &MappedSystemVa[v32];
            if ( v27 < v36 )
              v36 = v27;
            memmove(v31, v37, v36);
            v32 = 0LL;
            v31 = (PSLIST_ENTRY)((char *)v40 + v36);
            v40 = (PSLIST_ENTRY)((char *)v40 + v36);
            v27 -= v36;
          }
          MdlChain = MdlChain->Next;
          if ( !MdlChain )
            goto LABEL_44;
        }
      }
    }
    NetBuffer->Reserved |= 2u;
    NetBuffer->NdisReserved[0] = v28;
    LOBYTE(v39) = v10;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PSLIST_ENTRY, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 3) + 8LL) + 88LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 3),
            *(_QWORD *)(v6 + 3856),
            v28,
            ListEntrya,
            v16,
            *((_QWORD *)NdisMiniportDmaHandle + 4),
            Context,
            v39);
    if ( v18 < 0 )
    {
      PoolWithTag = ListEntrya;
      goto LABEL_58;
    }
  }
LABEL_12:
  if ( (v42.DatapathCyclesMask & 0x400) != 0 )
    ndisPcwEndCycleCounter(&v42, 0xAu, 0x17uLL);
  return v18;
}
