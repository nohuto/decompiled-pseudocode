/*
 * XREFs of NdisClMakeCall @ 0x1C0082950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00823F0 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00824C4 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCmMakeCallComplete @ 0x1C0083990 (NdisCmMakeCallComplete.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0087690 (ndisReferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisClMakeCall(
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters,
        NDIS_HANDLE ProtocolPartyContext,
        PNDIS_HANDLE NdisPartyHandle)
{
  struct _NDIS_CO_AF_BLOCK *v4; // rsi
  _QWORD *v6; // rdi
  __int64 v10; // rdx
  NDIS_STATUS result; // eax
  _QWORD *PoolWithTag; // rax
  void (__fastcall *ClDropPartyCompleteHandler)(int, void *); // rax
  KIRQL v14; // al
  void *CallMgrChars; // rax
  NDIS_HANDLE CallMgrPartyContext; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _NDIS_CO_AF_BLOCK *)*((_QWORD *)NdisVcHandle + 8);
  v6 = 0LL;
  CallMgrPartyContext = 0LL;
  if ( !ndisReferenceAf(v4) )
    return -1073741823;
  if ( !(unsigned __int8)ndisReferenceVcPtr(NdisVcHandle, v10) )
  {
    ndisDereferenceAf((KSPIN_LOCK *)v4);
    return -1073741823;
  }
  if ( NdisPartyHandle )
  {
    *NdisPartyHandle = 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6F63444Eu);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      ndisDereferenceAf((KSPIN_LOCK *)v4);
      ndisDereferenceVcPtr((char)NdisVcHandle);
      return -1073741670;
    }
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    *PoolWithTag = NdisVcHandle;
    PoolWithTag[2] = ProtocolPartyContext;
    if ( v4->ClMajorNdisVersion >= 6 )
    {
      PoolWithTag[3] = v4->ClientChars.ClIncomingDropPartyHandler;
      ClDropPartyCompleteHandler = v4->ClientChars.ClDropPartyCompleteHandler;
    }
    else
    {
      PoolWithTag[3] = v4->ClientEntries.ClIncomingDropPartyHandler;
      ClDropPartyCompleteHandler = v4->ClientEntries.ClDropPartyCompleteHandler;
    }
    v6[4] = ClDropPartyCompleteHandler;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v14);
  if ( v4->CmMajorNdisVersion >= 6 )
    CallMgrChars = v4->CallMgrChars;
  else
    CallMgrChars = v4->CallMgrEntries;
  result = (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS, _QWORD *, NDIS_HANDLE *))CallMgrChars + 7))(
             *((_QWORD *)NdisVcHandle + 18),
             CallParameters,
             v6,
             &CallMgrPartyContext);
  if ( result != 259 )
  {
    NdisCmMakeCallComplete(result, NdisVcHandle, v6, CallMgrPartyContext, CallParameters);
    return 259;
  }
  return result;
}
