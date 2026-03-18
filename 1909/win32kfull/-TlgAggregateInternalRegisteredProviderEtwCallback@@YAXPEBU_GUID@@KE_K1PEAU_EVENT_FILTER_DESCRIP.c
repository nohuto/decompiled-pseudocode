/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0369270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     LookUpTableFlushComplete @ 0x1C0368820 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C03690F4 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  int v8; // edi
  void (__fastcall *v9)(LPCGUID, __int64, ULONGLONG, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // rax
  ULONGLONG v10; // r8

  v8 = ControlCode;
  v9 = (void (__fastcall *)(LPCGUID, __int64, ULONGLONG, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))CallbackContext[41];
  if ( v9 )
  {
    v10 = MatchAllKeyword;
    LOBYTE(v10) = Level;
    v9(SourceId, ControlCode, v10, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext[42]);
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
