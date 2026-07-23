/*
 * XREFs of KseLookupHardwareId @ 0x140849C94
 * Callers:
 *     AhcCacheQueryHwId @ 0x140906508 (AhcCacheQueryHwId.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KsepCacheLookup @ 0x14070DD7C (KsepCacheLookup.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  WCHAR v1; // r12
  WCHAR *v2; // r14
  ULONG_PTR v3; // rdi
  unsigned int v5; // ebp
  WCHAR v6; // ax
  WCHAR *v7; // rcx
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *i; // rsi
  WCHAR *v12; // rdx
  _BYTE v13[40]; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-40h] BYREF

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_14043D9C0;
  v5 = -1073741275;
  if ( *SourceString != 42 )
    v2 = SourceString;
  v6 = *v2;
  if ( *v2 )
  {
    v7 = v2;
    while ( v6 != 42 && v6 != 63 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    for ( i = *(_QWORD **)(v3 + 32); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v3 + 32) )
        goto LABEL_10;
      v12 = (WCHAR *)i[3];
      if ( v1 == 42 )
      {
        if ( *v12 != 42 )
          continue;
        ++v12;
      }
      if ( (unsigned int)AslStringPatternMatchW(v2, v12) )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_8:
  RtlInitUnicodeString(&DestinationString, SourceString);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( KsepCacheLookup(v3, (__int64)v13) )
    v5 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease(v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
