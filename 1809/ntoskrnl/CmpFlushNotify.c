/*
 * XREFs of CmpFlushNotify @ 0x1406927C8
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AD310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpPostNotify @ 0x1405DC29C (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v3; // rdi
  char v5; // si
  __int64 v7; // rax
  volatile signed __int64 *v8; // rbx
  char v9; // al

  v3 = *(char **)(a1 + 16);
  v5 = a2;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 24) + 1672LL);
    if ( !(_BYTE)a2 )
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v7 + 24) + 1672LL, 0LL);
      v3 = *(char **)(a1 + 16);
    }
    if ( !v3 )
      goto LABEL_15;
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
        v9 = _InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
      }
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
LABEL_15:
      if ( !v5 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
      }
    }
  }
}
