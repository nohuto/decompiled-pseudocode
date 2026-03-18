/*
 * XREFs of ObSetHandleAttributes @ 0x14060F0D0
 * Callers:
 *     NtSetInformationObject @ 0x1406C7830 (NtSetInformationObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExSetHandleAttributes @ 0x14008287C (ExSetHandleAttributes.c)
 *     ObpIsKernelHandle @ 0x1400828B0 (ObpIsKernelHandle.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  char v6; // r12
  char v7; // r15
  _KPROCESS *Process; // r14
  unsigned __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v11; // rax
  volatile signed __int64 *v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebx
  signed __int32 v17[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v18[48]; // [rsp+20h] [rbp-68h] BYREF

  memset(v18, 0, sizeof(v18));
  v6 = 0;
  v7 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ObpIsKernelHandle(a1, a3) )
  {
    a1 ^= 0xFFFFFFFF80000000uLL;
    v9 = ObpKernelHandleTable;
    if ( Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v18);
      v6 = 1;
    }
  }
  else if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    if ( !v9 )
      return 3221225480LL;
    v7 = 1;
  }
  else
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (__int64 *)ExMapHandleToPointer(v9, a1);
  v12 = v11;
  if ( v11 )
  {
    v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v13 + 24) ^ (unsigned __int64)BYTE1(v13)]
                    + 72) & 2) == 0 )
    {
      v14 = (*a2 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v14 = *a2 != 0 ? 2 : 0;
      ExSetHandleAttributes((__int64)v12, v14, 3);
    }
    _InterlockedExchangeAdd64(v12, 1uLL);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(v9 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
    v15 = 0;
  }
  else
  {
    v15 = -1073741790;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v6 )
    KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return v15;
}
