/*
 * XREFs of PopFxPluginWork @ 0x1400B2FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PopFxProcessWork @ 0x1400B0C20 (PopFxProcessWork.c)
 *     PopPepWork @ 0x1400B18B8 (PopPepWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400B30DC (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1400B331C (PopFxEnableWorkOrderWatchdog.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxPluginWork(__int64 a1)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // rsi
  bool v4; // zf
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int8 (__fastcall *v7)(__int64, int **); // rax
  unsigned __int8 (__fastcall *v8)(__int64, int **); // rax
  int *v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  int v11[16]; // [rsp+30h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = *(_QWORD *)(a1 + 40);
  do
  {
    v3 = PopFxEnableWorkOrderWatchdog(a1, (unsigned int)PopFxWatchdogWorkOrderTimeout);
    v10 = 0LL;
    memset(v11, 0, sizeof(v11));
    v9 = v11;
    if ( !v2 )
    {
      v4 = PopPepWork((__int64)v11) == 0;
      goto LABEL_4;
    }
    v7 = *(unsigned __int8 (__fastcall **)(__int64, int **))(v2 + 96);
    if ( v7 && v7(13LL, &v9) )
    {
      v4 = (_BYTE)v10 == 0;
LABEL_4:
      if ( v4 )
        goto LABEL_8;
      goto LABEL_5;
    }
    v8 = *(unsigned __int8 (__fastcall **)(__int64, int **))(v2 + 112);
    if ( !v8 || !v8(10LL, &v9) )
      PopFxBugCheck(0x605uLL, 0xDuLL, v2, 0LL);
    if ( (_BYTE)v10 )
    {
      if ( (unsigned int)(v11[0] - 7) > 1 )
        PopFxBugCheck(0x612uLL, v2, 0LL, 0LL);
LABEL_5:
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
      *(_QWORD *)(v3 + 152) = v11;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopWorkOrderLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PopWorkOrderLock);
      KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
      PopFxProcessWork(v2, v11, v5);
    }
LABEL_8:
    PopFxDisableWorkOrderWatchdog(v3);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
