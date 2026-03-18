/*
 * XREFs of CmpFlushNotify @ 0x1406B9FEC
 * Callers:
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v3; // rdi
  char v5; // si
  __int64 v7; // rax
  volatile signed __int64 *v8; // rbx

  v3 = *(char **)(a1 + 16);
  v5 = a2;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 1672LL);
    if ( !(_BYTE)a2 )
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v7 + 32) + 1672LL, 0LL);
      v3 = *(char **)(a1 + 16);
    }
    if ( !v3 )
      goto LABEL_16;
    if ( *((char **)v3 + 2) != v3 + 16 )
    {
      CmpPostNotify((__int64)v3, a2, (__int64)a3, 267LL, 0, 0LL, a3);
      v3 = *(char **)(a1 + 16);
    }
    if ( v3 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v3 + 56));
      **((_QWORD **)v3 + 1) = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 )
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *((_QWORD *)v3 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v5 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
      }
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
LABEL_16:
      if ( !v5 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
      }
    }
  }
}
