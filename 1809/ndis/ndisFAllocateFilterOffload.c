/*
 * XREFs of ndisFAllocateFilterOffload @ 0x1C0016F34
 * Callers:
 *     ndisFIndicateOffloadChange @ 0x1C0013F18 (ndisFIndicateOffloadChange.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0017CAC (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisFAllocateFilterOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(14LL, &WPP_78f864c349013b9f055032bfbe98ff58_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xBCuLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 672) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xBCuLL);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(15LL, &WPP_78f864c349013b9f055032bfbe98ff58_Traceguids, *(_QWORD *)(a1 + 672));
  return v2;
}
