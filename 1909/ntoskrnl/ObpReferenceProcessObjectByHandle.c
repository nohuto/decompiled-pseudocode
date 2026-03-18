/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1405E6FF0
 * Callers:
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406CA72C (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x14003FA90 (ExLockHandleTableEntry.c)
 *     ObpIncrPointerCount @ 0x140047740 (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1405FBAD0 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14090B138 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v12; // rax
  signed __int64 *v13; // rbx
  __int64 v14; // rdx
  int v15; // r8d
  volatile signed __int64 *v16; // rdi
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  bool v23; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_6;
  if ( a1 == -1LL )
  {
    v23 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v23 )
      ObpPushStackInfo((__int64)&a2[-1].OtherTransferCount, 1, 1u, a5);
    ObpIncrPointerCount(&a2[-1].OtherTransferCount);
    result = 0LL;
    *a6 = a2;
  }
  else
  {
    if ( a1 != -2LL )
    {
      if ( a4 )
        return 3221225480LL;
      a3 = ObpKernelHandleTable;
      v8 = a1 ^ 0xFFFFFFFF80000000uLL;
LABEL_6:
      --CurrentThread->KernelApcDisable;
      if ( (v8 & 0x3FC) != 0 )
      {
        v12 = (signed __int64 *)ExpLookupHandleTableEntry(a3, v8);
        v13 = v12;
        if ( v12 )
        {
          if ( ExLockHandleTableEntry(a3, v12) )
          {
            v14 = *v13;
            v15 = *((_DWORD *)v13 + 2);
            v16 = (volatile signed __int64 *)((*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
            v17 = v15 & 0x1FFFFFF;
            if ( *(_DWORD *)(a3 + 4)
              && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v8),
                  v14 = *v13,
                  v15 = *((_DWORD *)v13 + 2),
                  HandleExtraInfo) )
            {
              v18 = *HandleExtraInfo;
            }
            else
            {
              v18 = 0LL;
            }
            v19 = (v14 >> 17) & 7;
            *a8 = v18;
            v20 = v19 | 8;
            if ( (v15 & 0x2000000) == 0 )
              v20 = v19;
            *a7 = v20;
            a7[1] = v17;
            BugCheckParameter4 = _InterlockedIncrement64(v16);
            if ( BugCheckParameter4 <= 1 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v16 + 6), 0x10uLL, BugCheckParameter4);
            _InterlockedExchangeAdd64(v13, 1uLL);
            _InterlockedOr(v25, 0);
            if ( *(_QWORD *)(a3 + 48) )
              ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)v16, 1, 1u, a5);
            *a6 = (struct _KTHREAD *)(v16 + 6);
            return 0LL;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
    v23 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v23 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].OtherTransferCount, 1, 1u, a5);
    ObpIncrPointerCount(&CurrentThread[-1].OtherTransferCount);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
