/*
 * XREFs of ExpCovResetInformation @ 0x140914E94
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1400C61F0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusive @ 0x1400EF900 (ExfAcquirePushLockExclusive.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1406F4910 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1409141D4 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x140914388 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x140914D0C (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx
  __int64 *v8; // rsi
  int v9; // [rsp+20h] [rbp-98h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-90h] BYREF
  __int128 v11; // [rsp+38h] [rbp-80h] BYREF
  __int64 v12; // [rsp+48h] [rbp-70h]
  UNICODE_STRING v13[4]; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING v14; // [rsp+90h] [rbp-28h] BYREF

  memset(v13, 0, sizeof(v13));
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v11 = *(_OWORD *)a1;
  v12 = *(_QWORD *)(a1 + 16);
  v5 = ExpCovReadRequestBuffer((int *)&v11, &StringIn, &v14, &v9);
  if ( v5 >= 0 )
  {
    *(_DWORD *)&v13[3].Length = v9;
    v13[2] = v14;
    if ( !StringIn.Buffer || (v5 = RtlDuplicateUnicodeString(1u, &StringIn, &v13[1]), v5 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v5 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v13);
      if ( v5 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v8 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v9, &StringIn, &v14) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v8);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( v13[1].Buffer )
    RtlFreeAnsiString(&v13[1]);
  return (unsigned int)v5;
}
