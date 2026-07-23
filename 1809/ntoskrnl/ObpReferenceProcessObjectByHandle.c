/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x1405D21B0
 * Callers:
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A6BC8 (ObCaptureObjectStateForDuplication.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1405E9990 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1408CF3D0 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        int a5,
        struct _KTHREAD **a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v12; // rax
  signed __int64 *v13; // rsi
  __int64 v14; // rdx
  int v15; // r8d
  volatile signed __int64 *v16; // rbx
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 result; // rax
  bool v22; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v24[14]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
  {
LABEL_2:
    --CurrentThread->KernelApcDisable;
    if ( (v8 & 0x3FC) != 0
      && (v12 = (signed __int64 *)ExpLookupHandleTableEntry(a3, v8), (v13 = v12) != 0LL)
      && ExLockHandleTableEntry(a3, v12) )
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
      ObpIncrPointerCount(v16);
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v24, 0);
      if ( *(_QWORD *)(a3 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)v16, 1, 1u, a5);
      *a6 = (struct _KTHREAD *)(v16 + 6);
      return 0LL;
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
  }
  if ( a1 == -1LL )
  {
    v22 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v22 )
      ObpPushStackInfo((__int64)&a2[-1].ReadTransferCount, 1, 1u, a5);
    ObpIncrPointerCount(&a2[-1].ReadTransferCount);
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
      goto LABEL_2;
    }
    v22 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v22 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].ReadTransferCount, 1, 1u, a5);
    ObpIncrPointerCount(&CurrentThread[-1].ReadTransferCount);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
