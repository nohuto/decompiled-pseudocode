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

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  volatile signed __int32 v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    v2 = *a1;
    do
    {
      v3 = v2 - 1;
      if ( v2 == _InterlockedCompareExchange(a1, v2 - 1, v2) )
        break;
      v2 = *a1;
      v3 = *a1;
    }
    while ( *a1 != 0x7FFFFFFF );
    if ( byte_18016650C )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( byte_18016650D )
        sub_1800DE908(a1);
      else
        sub_180082AC4(a1);
    }
  }
}
