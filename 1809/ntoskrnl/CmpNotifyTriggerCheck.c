/*
 * XREFs of CmpNotifyTriggerCheck @ 0x1405DD1A8
 * Callers:
 *     CmpReportNotifyHelper @ 0x1405DCEE0 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     CmpCheckNotifyAccess @ 0x1405DD224 (CmpCheckNotifyAccess.c)
 */

char __fastcall CmpNotifyTriggerCheck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9

  ExAcquireFastMutexUnsafe(&CmpPostLock);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 == a1 + 16 || (unsigned __int16)*(_DWORD *)(v6 + 56) != 3 )
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpCheckNotifyAccess(a1, a2, a3);
  }
  else
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return 1;
  }
}
