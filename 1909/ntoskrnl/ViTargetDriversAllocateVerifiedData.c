/*
 * XREFs of ViTargetDriversAllocateVerifiedData @ 0x1409744D0
 * Callers:
 *     VfTargetDriversAdd @ 0x140154BD8 (VfTargetDriversAdd.c)
 *     VfTargetDriversEnableVerifier @ 0x140973F10 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_SLIST_HEADER *__fastcall ViTargetDriversAllocateVerifiedData(unsigned __int64 a1)
{
  _SLIST_HEADER *PoolWithTag; // rax
  _SLIST_HEADER *v3; // rbx

  PoolWithTag = (_SLIST_HEADER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x44566656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    v3->Alignment = a1;
    v3[2].Region = 2557876544LL;
    v3[1].Region = (unsigned __int64)&v3[1];
    v3[1].Alignment = (unsigned __int64)&v3[1];
    InitializeSListHead(v3 + 4);
    InitializeSListHead(v3 + 5);
    v3[16].Alignment = (unsigned __int64)&v3[15].Region;
    v3[15].Region = (unsigned __int64)&v3[15].Region;
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
  }
  return v3;
}
