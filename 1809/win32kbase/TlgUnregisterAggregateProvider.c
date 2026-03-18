/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C02006D0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C02007C4 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0200804 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0200828 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  NTSTATUS result; // eax

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C01C7600 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C01D0F68, 0LL);
    v2 = qword_1C01D0F70;
    v3 = &qword_1C01D0F70;
    while ( v2 )
    {
      v4 = (__int64 *)(v2 + 352);
      if ( *(int **)(v2 + 344) == &dword_1C01C75D8 )
      {
        v0 = (void *)v2;
        *v3 = *v4;
        LookUpTableFlushComplete(v2, v3, &dword_1C01C75D8, v1);
        if ( !qword_1C01D0F70 )
        {
          EtwUnregister(qword_1C01C7A20);
          qword_1C01C7A20 = 0LL;
          dword_1C01C7A00 = 0;
        }
        break;
      }
      v2 = *v4;
      v3 = v4;
    }
    ExReleasePushLockExclusiveEx(&unk_1C01D0F68, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(qword_1C01C75F8);
    qword_1C01C75F8 = 0LL;
    dword_1C01C75D8 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(qword_1C01C75F8);
    qword_1C01C75F8 = 0LL;
    dword_1C01C75D8 = 0;
  }
  return result;
}
