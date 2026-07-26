/*
 * XREFs of ndisFAllocateFilterOffload @ 0x1C0029830
 * Callers:
 *     ndisFIndicateOffloadChange @ 0x1C0021A00 (ndisFIndicateOffloadChange.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F20 (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(__int64 a1)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      14,
      (struct _GUID *)&WPP_0f86ec8ab8323576aba22cac554c0387_Traceguids,
      a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 664) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xD8uLL);
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      15,
      (struct _GUID *)&WPP_0f86ec8ab8323576aba22cac554c0387_Traceguids,
      *(_QWORD *)(a1 + 664));
  return v2;
}
