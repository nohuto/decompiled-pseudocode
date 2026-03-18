/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C00CE3D4
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00AAA7C (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C0091E94 (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C00CE0FC (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C00CE190 (DestroyAggregateSession.c)
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

  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C004E070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C004E598, 0LL);
    v1 = qword_1C004E788;
    v2 = &qword_1C004E788;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &hProvider )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete((_DWORD *)v1);
        if ( !qword_1C004E788 )
        {
          EtwUnregister(qword_1C004E0A0);
          qword_1C004E0A0 = 0LL;
          dword_1C004E080 = 0;
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C004E598, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v4, v5);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    DestroyAggregateSession(v0, v6, v7);
  }
  else
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
}
