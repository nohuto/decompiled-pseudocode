/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C00A44A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *PoolWithTag; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      13,
      65,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3760) + 864LL) )
  {
    v2 = *(_QWORD *)(a1 + 4088);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 32) && (unsigned __int8)ndisReferenceMiniport(a1) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
          if ( PoolWithTag )
          {
            if ( !*(_WORD *)(v3 + 1452) )
              *(_WORD *)(v3 + 1452) = 71;
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
