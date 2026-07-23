/*
 * XREFs of RtlpFindAndCommitPages @ 0x18001CED8
 * Callers:
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x18001D2C4 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18001D4F8 (RtlpFindUCREntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180060BEC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180105DCC (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  __int64 UCREntry; // rdi
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  _QWORD *v7; // rbp
  NTSTATUS v8; // eax
  __int64 v9; // r15
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  ULONG_PTR v24; // r9
  ULONG_PTR v25; // rdx
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rdi
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  _DWORD *v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  ULONG Protect; // r15d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  PVOID BaseAddressa; // [rsp+60h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(BaseAddress, *RegionSize);
  if ( (_QWORD *)UCREntry == BaseAddress + 30 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v5 = UCREntry - 16;
  v6 = *(_BYTE *)(UCREntry - 16 + 14);
  if ( v6 )
    v7 = (_QWORD *)((v5 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v6 << 16) + 0x10000);
  else
    v7 = BaseAddress;
  BaseAddressa = *(PVOID *)(UCREntry + 32);
  if ( RtlpHeapKey != BaseAddress[45] )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]))(
           BaseAddress,
           &BaseAddressa,
           RegionSize);
  }
  else
  {
    v34 = *(_QWORD *)(UCREntry + 40);
    v35 = *RegionSize;
    if ( v34 - *RegionSize <= 16LL * BaseAddress[22] && v34 < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
    {
      *RegionSize = v34;
      v35 = v34;
    }
    *RegionSize = (v35 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpHpHeapValidateProtection(BaseAddress);
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         *RegionSize,
                         BaseAddress[72] - BaseAddress[83],
                         BaseAddress,
                         BaseAddress + 47) )
      v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    else
      v8 = -1073741523;
    ++*((_DWORD *)BaseAddress + 156);
  }
  if ( v8 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 158);
    return 0LL;
  }
  v9 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v11 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v11 = 2147353472LL;
  if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v12 = *(_DWORD *)(v5 + 8) ^ *((_DWORD *)BaseAddress + 34);
    *(_DWORD *)(v5 + 8) = v12;
    if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12))) )
      RtlpAnalyzeHeapFailure(BaseAddress, UCREntry - 16);
  }
  *(_BYTE *)(v5 + 10) = 0;
  v13 = UCREntry + 16;
  *(_BYTE *)(v5 + 15) = 0;
  v14 = *(_QWORD *)(UCREntry + 16);
  v15 = *(__int64 **)(UCREntry + 24);
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *v15;
  if ( *v15 == v16 && v17 == v13 )
  {
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v13, v16, v17, 0LL);
  }
  v18 = *(_QWORD *)(UCREntry + 40);
  if ( v18 )
  {
    v19 = BaseAddress[40];
    if ( v19 )
    {
      v37 = *(unsigned int *)(v19 + 8);
      v38 = v18 >> 12;
      while ( v38 >= v37 )
      {
        v39 = *(_QWORD *)v19;
        if ( !*(_QWORD *)v19 )
        {
          LODWORD(v38) = *(_DWORD *)(v19 + 8) - 1;
          break;
        }
        v19 = *(_QWORD *)v19;
        v37 = *(unsigned int *)(v39 + 8);
      }
      RtlpHeapRemoveListEntry((__int64)BaseAddress, v19, 0, (__int64 *)UCREntry, v38, *(_QWORD *)(UCREntry + 40));
    }
    v20 = *(_QWORD *)UCREntry;
    v21 = *(__int64 **)(UCREntry + 8);
    v22 = *(_QWORD *)(*(_QWORD *)UCREntry + 8LL);
    v23 = *v21;
    if ( *v21 == v22 && v23 == UCREntry )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, UCREntry, v22, v23, 0LL);
    }
  }
  --*((_DWORD *)v7 + 21);
  *((_DWORD *)v7 + 20) -= *(_QWORD *)(UCREntry + 40) >> 12;
  BaseAddress[72] += *(_QWORD *)(UCREntry + 40);
  ++*((_DWORD *)BaseAddress + 152);
  --*((_DWORD *)BaseAddress + 151);
  v24 = *(_QWORD *)(UCREntry + 40);
  if ( v24 >= 0xFF000 )
  {
    BaseAddress[73] -= v24;
    v24 = *(_QWORD *)(UCREntry + 40);
  }
  v25 = *RegionSize;
  if ( v24 > *RegionSize || v24 + *(_QWORD *)(UCREntry + 32) == v7[9] )
  {
    RtlpCreateUCREntry(
      (_DWORD)BaseAddress,
      (_DWORD)v7,
      v25 - 48 + *(_QWORD *)(UCREntry + 32),
      v24 - v25,
      UCREntry - 16,
      (__int64)RegionSize);
    *RegionSize *= 16LL;
  }
  else
  {
    *RegionSize = v25 + 16LL * *(unsigned __int16 *)(v5 + 8);
  }
  *(_BYTE *)(v5 + 11) = 0;
  v26 = (_QWORD *)v7[5];
  if ( v26 == v7 )
  {
    LOBYTE(v27) = 0;
  }
  else
  {
    v27 = ((unsigned __int64)(v5 - (_QWORD)v7) >> 16) + 1;
    if ( v27 >= 0xFE )
      RtlpLogHeapFailure(3, (_DWORD)v26, v5, (_DWORD)v7, 0LL, 0LL);
  }
  *(_BYTE *)(v5 + 14) = v27;
  v28 = NtCurrentPeb()->SharedData;
  if ( v28 && *v28 )
    v29 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v29 = 2147353472LL;
  if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent((int)BaseAddress, v5, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v9);
  }
  v30 = 2147353482LL;
  v31 = NtCurrentPeb()->SharedData;
  if ( v31 && *v31 )
    v32 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v32 = 2147353482LL;
  if ( *(_BYTE *)v32 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v30 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent((int)BaseAddress, v5, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v30);
  }
  return v5;
}
