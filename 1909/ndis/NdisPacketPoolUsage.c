/*
 * XREFs of NdisPacketPoolUsage @ 0x1C0081B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UINT __stdcall NdisPacketPoolUsage(NDIS_HANDLE PoolHandle)
{
  UINT v2; // edi
  KIRQL v3; // r15
  _QWORD *i; // rax
  _SLIST_HEADER *Alignment; // rsi
  USHORT DepthSList; // ax

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 4);
  for ( i = (_QWORD *)*((_QWORD *)PoolHandle + 7);
        i != (_QWORD *)((char *)PoolHandle + 56);
        v2 += *((unsigned __int16 *)PoolHandle + 3) )
  {
    i = (_QWORD *)*i;
  }
  Alignment = (_SLIST_HEADER *)*((_QWORD *)PoolHandle + 5);
  while ( Alignment != (_SLIST_HEADER *)((char *)PoolHandle + 40) )
  {
    DepthSList = ExQueryDepthSList(Alignment + 2);
    Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    v2 += *((unsigned __int16 *)PoolHandle + 3) - DepthSList;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 4, v3);
  return v2;
}
