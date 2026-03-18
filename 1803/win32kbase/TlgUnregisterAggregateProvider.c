/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C01D8140
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C01D7A5C (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C01D7C28 (DestroyAggregateSession.c)
 *     LookUpTableFlushComplete @ 0x1C01D7D00 (LookUpTableFlushComplete.c)
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

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C019A268 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C01A2048, 0LL);
    v1 = qword_1C01A6500;
    v2 = &qword_1C01A6500;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C019A240 )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_1C01A6500 )
        {
          EtwUnregister(qword_1C019EF50);
          qword_1C019EF50 = 0LL;
          dword_1C019EF30 = 0;
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C01A2048, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    EtwUnregister(qword_1C019A260);
    qword_1C019A260 = 0LL;
    dword_1C019A240 = 0;
    DestroyAggregateSession(v0, v6, v7);
  }
  else
  {
    EtwUnregister(qword_1C019A260);
    qword_1C019A260 = 0LL;
    dword_1C019A240 = 0;
  }
}
