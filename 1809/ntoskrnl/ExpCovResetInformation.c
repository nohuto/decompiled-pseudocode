/*
 * XREFs of ExpCovResetInformation @ 0x1408D94A4
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x140005740 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1408D87A4 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1408D8958 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovReadRequestBuffer @ 0x1408D9320 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovResetInformation(unsigned __int64 a1, unsigned int a2)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rdi
  __int64 *v6; // r14
  int v7; // [rsp+20h] [rbp-A8h] BYREF
  UNICODE_STRING StringIn; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  _BYTE v11[16]; // [rsp+50h] [rbp-78h] BYREF
  UNICODE_STRING StringOut; // [rsp+60h] [rbp-68h] BYREF
  __int128 v13; // [rsp+70h] [rbp-58h]
  int v14; // [rsp+80h] [rbp-48h]
  __int128 v15; // [rsp+90h] [rbp-38h] BYREF

  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  StringOut.Length = 0;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a2 < 0x18 )
    return 3221225476LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v9 = *(_OWORD *)a1;
  v10 = *(_QWORD *)(a1 + 16);
  v3 = ExpCovReadRequestBuffer((int *)&v9, &StringIn, &v15, &v7);
  if ( v3 >= 0 )
  {
    v14 = v7;
    v13 = v15;
    if ( !StringIn.Buffer || (v3 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v3 >= 0) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v3 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovResetInfoCallBack, (__int64)v11);
      if ( v3 >= 0 )
      {
        ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
        for ( i = (__int64 *)ExpCovUnloadedModuleList; i != &ExpCovUnloadedModuleList; i = (__int64 *)*i )
        {
          v6 = i;
          if ( i[7] && ExpCovIsUnLoadedModulePresent((__int64)i, v7, &StringIn, &v15) )
          {
            i = (__int64 *)i[1];
            ExpCovDeleteUnloadedModuleEntry(v6);
          }
        }
        ExfReleasePushLock(&ExpCovPushLock);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  return (unsigned int)v3;
}
