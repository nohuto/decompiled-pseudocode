/*
 * XREFs of RtlReleaseActivationContext @ 0x1800373A0
 * Callers:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_18002F180 @ 0x18002F180 (sub_18002F180.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     RtlFreeActivationContextStack @ 0x18006E9C0 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x18006EB00 (RtlDeactivateActivationContext.c)
 *     sub_18006F284 @ 0x18006F284 (sub_18006F284.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073440 (LdrRemoveLoadAsDataTable.c)
 *     ntdll_8 @ 0x18007CF40 (ntdll_8.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     sub_180082AC4 @ 0x180082AC4 (sub_180082AC4.c)
 *     sub_1800DE908 @ 0x1800DE908 (sub_1800DE908.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax
  LONG v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    RefCount = ActivationContext->RefCount;
    do
    {
      v3 = RefCount - 1;
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount - 1, RefCount) )
        break;
      RefCount = ActivationContext->RefCount;
      v3 = ActivationContext->RefCount;
    }
    while ( ActivationContext->RefCount != 0x7FFFFFFF );
    if ( byte_18016650C )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( byte_18016650D )
        sub_1800DE908(ActivationContext);
      else
        sub_180082AC4(ActivationContext);
    }
  }
}
