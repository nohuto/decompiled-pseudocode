/*
 * XREFs of ndisAllocateOpenBlock @ 0x1C00C3978
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisNblTrackerRegisterComponent @ 0x1C001C360 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C001C520 (ndisAllocatePerProcessorSlot.c)
 *     ndisFreePerProcessorSlot @ 0x1C0025620 (ndisFreePerProcessorSlot.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     NdisAllocateRefCount @ 0x1C00C42B0 (NdisAllocateRefCount.c)
 */

__int64 __fastcall ndisAllocateOpenBlock(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR PerProcessorSlot; // rsi
  SIZE_T v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x6F6D444Eu);
  if ( !PerProcessorSlot )
    return 0LL;
  v7 = (*(_DWORD *)(a1 + 120) & 0x20000) != 0 ? 1160LL : 1016LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6F6D444Eu);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    ndisFreePerProcessorSlot(PerProcessorSlot, 0x6F6D444EuLL);
    return 0LL;
  }
  memset(PoolWithTag, 0, v7);
  *(_QWORD *)(v9 + 720) = PerProcessorSlot;
  if ( a3 )
  {
    *(_WORD *)v9 = 274;
    *(_WORD *)(v9 + 2) = v7;
  }
  *(_QWORD *)(v9 + 744) = v9 + 736;
  *(_QWORD *)(v9 + 736) = v9 + 736;
  *(_QWORD *)(v9 + 768) = v9 + 760;
  *(_QWORD *)(v9 + 760) = v9 + 760;
  *(_QWORD *)(v9 + 816) = v9 + 808;
  *(_QWORD *)(v9 + 808) = v9 + 808;
  *(_QWORD *)(v9 + 840) = v9 + 832;
  *(_QWORD *)(v9 + 832) = v9 + 832;
  KeInitializeSpinLock((PKSPIN_LOCK)(v9 + 600));
  *(_QWORD *)(v9 + 584) = NdisNblTrackerRegisterComponent(2, v9, a2 + 72);
  LOBYTE(v10) = 20;
  *(_QWORD *)(v9 + 592) = NdisAllocateRefCount(v10, 0LL);
  *(_QWORD *)(v9 + 864) = 0LL;
  *(_QWORD *)(v9 + 880) = ndisCompleteUnsolicitedUnbind;
  result = v9;
  *(_QWORD *)(v9 + 888) = v9;
  return result;
}
