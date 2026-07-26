/*
 * XREFs of NdisMResetMiniport @ 0x1C0061150
 * Callers:
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0xF4u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 216LL) && ndisReferenceMiniport(a1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      PoolWithTag[1] = ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
