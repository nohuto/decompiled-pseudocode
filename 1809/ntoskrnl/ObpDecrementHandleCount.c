/*
 * XREFs of ObpDecrementHandleCount @ 0x1405AA584
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x1405AA510 (AlpcHandleDataDestroyProcedure.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140613FA0 (ObCompleteObjectDuplication.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14000FBB0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x140698DA8 (ObpReleaseHandleInfo.c)
 */

void __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbp
  signed __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall *v7)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  char v8; // r12
  struct _LIST_ENTRY *v9; // r15
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  unsigned int v11; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v12[48]; // [rsp+38h] [rbp-70h] BYREF

  v11 = 0;
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
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v11);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  v7 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v8 = 1;
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v12);
      v7 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128);
    }
    v7(BugCheckParameter1, a2 + 48, v11, v5);
    if ( v8 )
    {
      KiUnstackDetachProcess((__int64)v12, 0LL);
      PsDetachSiloFromCurrentThread(v9);
    }
  }
  if ( v5 == 1 )
    ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF);
}
