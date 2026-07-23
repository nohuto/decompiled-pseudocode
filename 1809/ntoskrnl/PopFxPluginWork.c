/*
 * XREFs of PopFxPluginWork @ 0x1401006F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopPepWork @ 0x1400FF084 (PopPepWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1401007D0 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x14010085C (PopFxEnableWorkOrderWatchdog.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxPluginWork(__int64 a1)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v3; // rsi
  bool v4; // zf
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int8 (__fastcall *v7)(__int64, int **); // rax
  unsigned __int8 (__fastcall *v8)(__int64, int **); // rax
  int *v9; // [rsp+20h] [rbp-50h] BYREF
  char v10; // [rsp+28h] [rbp-48h]
  int v11[16]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  do
  {
    v3 = PopFxEnableWorkOrderWatchdog(a1);
    memset(v11, 0, sizeof(v11));
    v10 = 0;
    v9 = v11;
    if ( !v1 )
    {
      v4 = PopPepWork((__int64)v11) == 0;
      goto LABEL_4;
    }
    v7 = *(unsigned __int8 (__fastcall **)(__int64, int **))(v1 + 96);
    if ( v7 && v7(13LL, &v9) )
    {
      v4 = v10 == 0;
LABEL_4:
      if ( v4 )
        goto LABEL_8;
      goto LABEL_5;
    }
    v8 = *(unsigned __int8 (__fastcall **)(__int64, int **))(v1 + 112);
    if ( !v8 || !v8(10LL, &v9) )
      PopFxBugCheck(0x605uLL, 0xDuLL, v1, 0LL);
    if ( v10 )
    {
      if ( (unsigned int)(v11[0] - 7) > 1 )
        PopFxBugCheck(0x612uLL, v1, 0LL, 0LL);
LABEL_5:
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
      *(_QWORD *)(v3 + 152) = v11;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopWorkOrderLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PopWorkOrderLock);
      KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
      PopFxProcessWork(v1, v11, v5);
    }
LABEL_8:
    PopFxDisableWorkOrderWatchdog(v3);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
