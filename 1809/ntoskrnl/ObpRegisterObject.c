/*
 * XREFs of ObpRegisterObject @ 0x14086486C
 * Callers:
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectRefInfo @ 0x140864110 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x1408645B0 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x1408B8FD8 (EtwTraceObject.c)
 */

__int64 __fastcall ObpRegisterObject(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // r9
  char *PoolWithTag; // rax
  unsigned int v6; // r8d
  char *v7; // rdi
  char v8; // al
  char v9; // cl
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( (xmmword_140542350 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0
      && ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
      && ObpIsObjectPoolTagTraced(a1)
      && (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v10) >= 0 )
    {
      v4 = v10;
      if ( v10 )
        goto LABEL_12;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x17F8uLL, 0x7452624Fu);
      v10 = PoolWithTag;
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        *((_QWORD *)PoolWithTag + 1) = *((_QWORD *)ObpObjectTable + v6);
        *((_QWORD *)ObpObjectTable + v6) = PoolWithTag;
        *((_WORD *)PoolWithTag + 17) = 508;
LABEL_12:
        ++ObpNumTracedObjects;
        *(_QWORD *)v4 = a1;
        v7 = v10;
        RtlStringCbCopyA(
          v10 + 16,
          0x10uLL,
          (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[12]);
        *((_WORD *)v7 + 16) = 0;
        memset(v7 + 36, 0, 12LL * *((unsigned __int16 *)v7 + 17));
        v8 = ObpTraceFlags;
        v9 = *(_BYTE *)(a1 + 25) | 1;
        *(_BYTE *)(a1 + 25) = v9;
        if ( (v8 & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) = v9 | 2;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
