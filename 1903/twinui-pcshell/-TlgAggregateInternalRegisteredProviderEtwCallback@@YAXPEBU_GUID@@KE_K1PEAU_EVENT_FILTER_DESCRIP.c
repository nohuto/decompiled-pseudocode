/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180106740
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x180080A6C (LookUpTableFlushComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     LookUpTableFlushPartial @ 0x180106630 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        LPCGUID SourceId,
        __int64 IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  int v8; // edi
  void (__fastcall *v9)(LPCGUID, __int64, ULONGLONG, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // rax
  ULONGLONG v10; // r8

  v8 = IsEnabled;
  v9 = (void (__fastcall *)(LPCGUID, __int64, ULONGLONG, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))CallbackContext[39];
  if ( v9 )
  {
    v10 = MatchAllKeyword;
    LOBYTE(v10) = Level;
    v9(SourceId, IsEnabled, v10, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext[40]);
  }
  if ( v8 == 1 )
  {
    LookUpTableFlushComplete((__int64)CallbackContext);
  }
  else if ( v8 == 2 )
  {
    LookUpTableFlushPartial((__int64)CallbackContext);
  }
}
