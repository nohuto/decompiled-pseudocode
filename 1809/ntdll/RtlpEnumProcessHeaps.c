/*
 * XREFs of RtlpEnumProcessHeaps @ 0x18007B34C
 * Callers:
 *     RtlFlushHeaps @ 0x18007B030 (RtlFlushHeaps.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18007B25C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHpGCCallback @ 0x18007B310 (RtlpHpGCCallback.c)
 *     RtlSetHeapInformation @ 0x18007E6A0 (RtlSetHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D9600 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800F1EB0 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800F1EC0 (RtlGetProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F25A8 (RtlSetHeapDebuggingInformation.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800FDD70 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceDisable @ 0x180104BE0 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceSerialize @ 0x180105204 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 a1, __int64 a2, char a3)
{
  struct _PEB *v4; // rsi
  unsigned int i; // ebx
  unsigned int j; // ebx
  __int64 k; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+24h] [rbp-24h]

  v4 = NtCurrentPeb();
  v10 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0; i < v4->NumberOfHeaps; ++i )
  {
    v10 = _guard_dispatch_icall_fptr();
    if ( v10 < 0 )
      goto LABEL_18;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)RtlpNumberOfProtectedHeaps; ++j )
    {
      v10 = _guard_dispatch_icall_fptr();
      if ( v10 < 0 )
        goto LABEL_18;
    }
    for ( k = 0LL; ; k = (unsigned int)(v9 + 1) )
    {
      v9 = k;
      if ( (unsigned int)k >= 3 )
        break;
      if ( *((_QWORD *)&unk_180169990 + 2 * k) )
      {
        v10 = _guard_dispatch_icall_fptr();
        if ( v10 < 0 )
          break;
      }
    }
  }
LABEL_18:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v10;
}
