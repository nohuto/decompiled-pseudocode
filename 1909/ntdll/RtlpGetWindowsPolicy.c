/*
 * XREFs of RtlpGetWindowsPolicy @ 0x1800FD094
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1800FE870 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQueryLicenseValue @ 0x18009F820 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  PVOID Heap; // rbx
  NTSTATUS v8; // eax
  unsigned __int32 v9; // edi
  ULONG v10; // eax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  Heap = 0LL;
  if ( Type && ResultDataSize && a4 && SourceString )
  {
    RtlInitUnicodeString(&ValueName, SourceString);
    v8 = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = *ResultDataSize;
      if ( !*ResultDataSize )
      {
        *a4 = 0LL;
        return v9;
      }
    }
    else
    {
      if ( v8 != -1073741789 )
      {
LABEL_13:
        v9 = ZwQueryLicenseValue(&ValueName, Type, Heap, *ResultDataSize, ResultDataSize);
        if ( (v9 & 0x80000000) == 0 )
        {
          *a4 = Heap;
          return v9;
        }
        goto LABEL_16;
      }
      v10 = *ResultDataSize;
      if ( !*ResultDataSize )
      {
LABEL_9:
        if ( !Heap )
          return (unsigned __int32)-1073741801;
        goto LABEL_13;
      }
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
    goto LABEL_9;
  }
  v9 = -1073741811;
LABEL_16:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v9;
}
