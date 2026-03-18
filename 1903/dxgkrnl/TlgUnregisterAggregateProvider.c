/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C02D11A4
 * Callers:
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C00486E0 (-DxgkCleanupTelemetry@@YAXXZ.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C017FEB4 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C02D0ED0 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C02D0F64 (DestroyAggregateSession.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C00A18B0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C00A2F90, 0LL);
    v1 = qword_1C00A3BA0;
    v2 = &qword_1C00A3BA0;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(_UNKNOWN **)(v1 + 344) == &dword_1C00A1888 )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_1C00A3BA0 )
        {
          EtwUnregister(qword_1C00A1988);
          qword_1C00A1988 = 0LL;
          dword_1C00A1968 = 0;
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C00A2F90, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    EtwUnregister(qword_1C00A18A8);
    qword_1C00A18A8 = 0LL;
    dword_1C00A1888 = 0;
    DestroyAggregateSession(v0, v6, v7);
  }
  else
  {
    EtwUnregister(qword_1C00A18A8);
    qword_1C00A18A8 = 0LL;
    dword_1C00A1888 = 0;
  }
}
