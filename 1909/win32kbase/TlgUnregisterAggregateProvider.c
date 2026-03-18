/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C0246928
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C0246A1C (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0246A5C (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0246A80 (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  NTSTATUS result; // eax

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C020C528 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0215578, 0LL);
    v2 = qword_1C0215850;
    v3 = &qword_1C0215850;
    while ( v2 )
    {
      v4 = (__int64 *)(v2 + 352);
      if ( *(int **)(v2 + 344) == &dword_1C020C500 )
      {
        v0 = (void *)v2;
        *v3 = *v4;
        LookUpTableFlushComplete(v2, v3, &dword_1C020C500, v1);
        if ( !qword_1C0215850 )
        {
          EtwUnregister(qword_1C020C638);
          qword_1C020C638 = 0LL;
          dword_1C020C618 = 0;
        }
        break;
      }
      v2 = *v4;
      v3 = v4;
    }
    ExReleasePushLockExclusiveEx(&unk_1C0215578, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    EtwUnregister(qword_1C020C520);
    qword_1C020C520 = 0LL;
    dword_1C020C500 = 0;
    return DestroyAggregateSession(v0);
  }
  else
  {
    result = EtwUnregister(qword_1C020C520);
    qword_1C020C520 = 0LL;
    dword_1C020C500 = 0;
  }
  return result;
}
