/*
 * XREFs of ndisAllocateOpenOffload @ 0x1C00CF880
 * Callers:
 *     ndisOidPreOpenSetEncapsulation @ 0x1C0023930 (ndisOidPreOpenSetEncapsulation.c)
 *     ndisOidPreTaskOffload @ 0x1C00E45B0 (ndisOidPreTaskOffload.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisAllocateOpenOffload(__int64 a1)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax

  v2 = -1073741670;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x57u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x666F444Eu);
  *(_QWORD *)(a1 + 696) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v2 = 0;
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x58u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, *(_QWORD *)(a1 + 696));
  return v2;
}
