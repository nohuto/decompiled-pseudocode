/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C0068AB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C00A025C >= 2u )
    WPP_SF_q(0x41u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3792) + 864LL) )
  {
    v2 = *(_QWORD *)(a1 + 4120);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 32) && ndisReferenceMiniport(a1) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
          if ( PoolWithTag )
          {
            if ( !*(_WORD *)(v3 + 1460) )
              *(_WORD *)(v3 + 1460) = 71;
            *PoolWithTag = a1;
            PoolWithTag[1] = ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal((__int64)PoolWithTag);
            return;
          }
          ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR);
        }
        ndisDereferenceMiniport(a1, 9u);
      }
    }
  }
}
