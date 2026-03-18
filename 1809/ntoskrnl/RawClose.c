/*
 * XREFs of RawClose @ 0x14068F918
 * Callers:
 *     RawDispatch @ 0x14064B460 (RawDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x1400C10A0 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14010C61C (RawInitiateDeleteVolume.c)
 */

__int64 __fastcall RawClose(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // rsi

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) == 0 )
  {
    p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
    ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
    --*(_DWORD *)&AdvancedHeader[1].Flags;
    --LODWORD(AdvancedHeader[1].Resource);
    if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
      KeReleaseGuardedMutex(p_PagingIoResource);
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
