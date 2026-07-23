/*
 * XREFs of PiDqObjectActionQueueEntryCreate @ 0x1406FA804
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x1406FA6C0 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqObjectActionQueueEntryCreate(volatile signed __int32 *a1, _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x58706E50u);
  *a2 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v6[2] = a1;
    v6[3] = _InterlockedIncrement64(&PiDqSequenceNumber);
    _InterlockedIncrement(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
