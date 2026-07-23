/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180067B5C
 * Callers:
 *     RtlFlushHeaps @ 0x180067840 (RtlFlushHeaps.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180067A6C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHpGCCallback @ 0x180067B20 (RtlpHpGCCallback.c)
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7550 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800EEE60 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800EEE70 (RtlGetProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF564 (RtlSetHeapDebuggingInformation.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800FB030 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceDisable @ 0x1801022DC (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceSerialize @ 0x1801028E0 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
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
      if ( *((_QWORD *)&unk_18016A2F8 + 2 * k) )
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
