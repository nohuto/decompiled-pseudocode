/*
 * XREFs of ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C003535C
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0038600 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004BD0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     McTemplateK0ppp @ 0x1C0026760 (McTemplateK0ppp.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C00351BC (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchiDecrementHwQueueReference(char *P)
{
  __int64 v2; // rdi
  char **v3; // rcx
  PVOID *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 16LL) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1648), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 28, 0xFFFFFFFF) != 1 )
    goto LABEL_17;
  v3 = (char **)*((_QWORD *)P + 1);
  if ( v3[1] != P + 8 || (v4 = (PVOID *)*((_QWORD *)P + 2), *v4 != P + 8) )
LABEL_19:
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  while ( 1 )
  {
    v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1656), (_QWORD **)P + 24, (_DWORD *)P + 52);
    if ( !v5 )
      break;
    ExFreePoolWithTag(v5 - 1, 0);
  }
  VidSchiDecrementHwContextReference(*((unsigned int **)P + 5), 1LL);
  if ( *((char **)P + 23) != P + 136 || *((_DWORD *)P + 32) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v11[3] = 281LL;
    v11[4] = 12288LL;
    v11[5] = P;
    v12 = *((unsigned int *)P + 32);
    v11[7] = 0LL;
    v11[6] = v12;
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
    goto LABEL_19;
  }
  if ( !*((_QWORD *)P + 6) && bTracingEnabled )
  {
    v9 = *((_QWORD *)P + 5);
    v10 = *(_QWORD *)(v9 + 24);
    if ( !v10 || (*(_DWORD *)(v9 + 56) & 0x40) != 0 )
      v10 = *((_QWORD *)P + 5);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp(v9, &EventDestroyHwQueue, v8, v10, 0LL, P);
  }
  ExFreePoolWithTag(P, 0);
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
