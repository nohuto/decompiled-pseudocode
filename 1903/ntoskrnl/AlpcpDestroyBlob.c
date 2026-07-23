/*
 * XREFs of AlpcpDestroyBlob @ 0x1405E4880
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF070 (AlpcpReceiveMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E1230 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1, int a2)
{
  __int64 v4; // rbp
  _SLIST_HEADER *v5; // rcx
  void *v6; // rcx

  v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)];
  (*(void (**)(void))(v4 + 24))();
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
    KeAbPostRelease(a1 - 16);
  }
  if ( (*(int (__fastcall **)(__int64))(v4 + 40))(a1) >= 0 )
  {
    if ( (*(_BYTE *)(a1 - 32) & 2) != 0 )
    {
      v5 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v4 + 8);
      ++*((_DWORD *)&v5[1].HeaderX64 + 3);
      if ( LOWORD(v5->Alignment) >= LOWORD(v5[1].Alignment) )
      {
        ++LODWORD(v5[2].Alignment);
        ((void (__fastcall *)(__int64))v5[3].Region)(a1 - 48);
      }
      else
      {
        RtlpInterlockedPushEntrySList(v5, (PSLIST_ENTRY)(a1 - 48));
      }
    }
    else
    {
      v6 = (void *)(a1 - 48);
      if ( *(_QWORD *)(v4 + 48) )
        (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v4 + 8) + 7))(v6);
      else
        ExFreePoolWithTag(v6, *(_DWORD *)(v4 + 4));
    }
  }
}
