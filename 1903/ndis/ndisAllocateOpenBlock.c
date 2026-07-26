/*
 * XREFs of ndisAllocateOpenBlock @ 0x1C0024A5C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00252F0 (NdisAllocateRefCount.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C0026080 (NdisNblTrackerRegisterComponent.c)
 *     ndisAllocatePerProcessorSlot @ 0x1C00261A0 (ndisAllocatePerProcessorSlot.c)
 *     ndisFreePerProcessorSlot @ 0x1C003E2F0 (ndisFreePerProcessorSlot.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

_QWORD *__fastcall ndisAllocateOpenBlock(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR PerProcessorSlot; // rsi
  SIZE_T v7; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *result; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(1869431886LL);
  if ( !PerProcessorSlot )
    return 0LL;
  v7 = (*(_DWORD *)(a1 + 120) & 0x20000) != 0 ? 1104LL : 960LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6F6D444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ndisFreePerProcessorSlot(PerProcessorSlot, 0x6F6D444EuLL);
    return 0LL;
  }
  memset(PoolWithTag, 0, v7);
  v9[90] = PerProcessorSlot;
  if ( a3 )
  {
    *(_WORD *)v9 = 274;
    *((_WORD *)v9 + 1) = v7;
  }
  v9[93] = v9 + 92;
  v9[92] = v9 + 92;
  v9[96] = v9 + 95;
  v9[95] = v9 + 95;
  v9[102] = v9 + 101;
  v9[101] = v9 + 101;
  v9[105] = v9 + 104;
  v9[104] = v9 + 104;
  KeInitializeSpinLock(v9 + 75);
  v9[73] = NdisNblTrackerRegisterComponent(2LL, v9, a2 + 72);
  LOBYTE(v10) = 20;
  v9[74] = NdisAllocateRefCount(v10, 0LL);
  v9[108] = 0LL;
  v9[110] = ndisCompleteUnsolicitedUnbind;
  result = v9;
  v9[111] = v9;
  return result;
}
