/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C003BEBC
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C003BCDC (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C006E930 (ndisOidPreTaskOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      87,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 696) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      88,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      *(_QWORD *)(a1 + 696));
  return v2;
}
