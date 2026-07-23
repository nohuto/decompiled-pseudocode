/*
 * XREFs of ObSetHandleAttributes @ 0x14068EA90
 * Callers:
 *     NtSetInformationObject @ 0x14068E870 (NtSetInformationObject.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExSetHandleAttributes @ 0x140109F64 (ExSetHandleAttributes.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ExMapHandleToPointer @ 0x1405F66A0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  __int64 v4; // rbx
  char v5; // r12
  char v6; // r15
  _KPROCESS *Process; // rbp
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v10; // rax
  volatile signed __int64 *v11; // r10
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  signed __int32 v16[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v17[48]; // [rsp+20h] [rbp-68h] BYREF

  v4 = a1;
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ObpIsKernelHandle(a1, a3) )
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v8 = ObpKernelHandleTable;
    if ( Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v17);
      v5 = 1;
    }
  }
  else if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v8 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    if ( !v8 )
      return 3221225480LL;
    v6 = 1;
  }
  else
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExMapHandleToPointer((unsigned int *)v8, v4);
  v11 = v10;
  if ( v10 )
  {
    v12 = (*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v12 + 24) ^ (unsigned __int64)BYTE1(v12)]
                    + 72) & 2) == 0 )
    {
      v13 = (*a2 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v13 = *a2 != 0 ? 2 : 0;
      ExSetHandleAttributes((__int64)v11, v13, 3);
    }
    _InterlockedExchangeAdd64(v11, 1uLL);
    _InterlockedOr(v16, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    v14 = 0;
  }
  else
  {
    v14 = -1073741790;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v5 )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  if ( v6 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return v14;
}
