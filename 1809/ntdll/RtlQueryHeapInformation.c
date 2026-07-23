/*
 * XREFs of RtlQueryHeapInformation @ 0x18007B050
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800D9600 (RtlQueryProcessHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x1800F7540 (RtlpReadProcessHeaps.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180104CE0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x18007B17C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x18007B480 (RtlpHpTagQueryTags.c)
 *     RtlpHpStackTraceSerialize @ 0x180105204 (RtlpHpStackTraceSerialize.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v6; // r10d

  if ( HeapInformationClass == -2147483647 )
  {
    if ( HeapInformationLength >= 8 )
    {
      *(_QWORD *)HeapInformation = &RtlpHeapFailureInfo;
      v6 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    return v6;
  }
  else if ( HeapInformationClass )
  {
    switch ( HeapInformationClass )
    {
      case 2:
        if ( HeapInformationLength < 0x58 )
          return -1073741811;
        else
          return RtlpQueryExtendedHeapInformation(HeapInformation, HeapInformationLength, ReturnLength);
      case 4:
        return RtlpHpTagQueryTags(HeapInformation, HeapInformationLength, ReturnLength);
      case 5:
        return RtlpHpStackTraceSerialize(HeapInformation, HeapInformationLength, ReturnLength);
      default:
        return -1073741811;
    }
  }
  else if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    if ( HeapInformationLength >= 4 )
    {
      if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
        *(_DWORD *)HeapInformation = 2;
      else
        *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 419);
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return 0;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return -1073741789;
    }
  }
  else
  {
    return -1073741822;
  }
}
