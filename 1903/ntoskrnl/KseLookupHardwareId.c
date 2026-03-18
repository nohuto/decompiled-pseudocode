/*
 * XREFs of KseLookupHardwareId @ 0x140883EF4
 * Callers:
 *     AhcCacheQueryHwId @ 0x140943860 (AhcCacheQueryHwId.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepCacheLookup @ 0x140738F58 (KsepCacheLookup.c)
 *     AslStringPatternMatchW @ 0x14074B8C0 (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  unsigned int v2; // ebp
  WCHAR v3; // r15
  WCHAR *v4; // rsi
  ULONG_PTR v5; // rdi
  unsigned __int16 v6; // ax
  WCHAR *v7; // rcx
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // r11
  unsigned __int16 *v12; // rdx
  _QWORD v13[8]; // [rsp+20h] [rbp-58h] BYREF

  v2 = -1073741275;
  memset(v13, 0, 0x38uLL);
  v3 = *SourceString;
  v4 = SourceString + 1;
  v5 = qword_140468470;
  if ( *SourceString != 42 )
    v4 = SourceString;
  v6 = *v4;
  if ( *v4 )
  {
    v7 = v4;
    while ( v6 != 42 && v6 != 63 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    for ( i = *(_QWORD **)(v5 + 32); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v5 + 32) )
        goto LABEL_10;
      v12 = (unsigned __int16 *)i[3];
      if ( v3 == 42 )
      {
        if ( *v12 != 42 )
          continue;
        ++v12;
      }
      if ( (unsigned int)AslStringPatternMatchW(v4, v12) )
      {
        v2 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_8:
  RtlInitUnicodeString((PUNICODE_STRING)&v13[5], SourceString);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  if ( KsepCacheLookup(v5, (__int64)v13) )
    v2 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease(v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
