/*
 * XREFs of ObpDecrementHandleCount @ 0x14063C254
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     AlpcHandleDataDestroyProcedure @ 0x14063C1E0 (AlpcHandleDataDestroyProcedure.c)
 *     ObCompleteObjectDuplication @ 0x14063FF80 (ObCompleteObjectDuplication.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     PsDetachSiloFromCurrentThread @ 0x14008BD60 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpDeleteNameCheck @ 0x14063C400 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1406BC504 (ObpReleaseHandleInfo.c)
 */

__int64 __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbp
  signed __int64 v5; // rdi
  void (__fastcall *v6)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  __int64 result; // rax
  char v8; // r12
  struct _LIST_ENTRY *v9; // r15
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v13[48]; // [rsp+38h] [rbp-70h] BYREF

  memset(v13, 0, sizeof(v13));
  v12 = 0;
  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v4 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v5 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v4 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v12);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  v6 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128);
  if ( v6 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process == BugCheckParameter1 )
    {
      v6(BugCheckParameter1, a2 + 48, v12, v5);
    }
    else
    {
      v8 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v13);
      (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128))(
        BugCheckParameter1,
        a2 + 48,
        v12,
        v5);
    }
    if ( v8 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
      PsDetachSiloFromCurrentThread(v9);
    }
  }
  result = ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF);
  return result;
}
