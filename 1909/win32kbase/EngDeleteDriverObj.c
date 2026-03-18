/*
 * XREFs of EngDeleteDriverObj @ 0x1C012F6B0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C0018B30 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C001A1E0 (FreeObject.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgLockEx @ 0x1C001FCA0 (HmgLockEx.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  struct OBJECT *v6; // rax
  struct OBJECT *v7; // rdi
  HSEMAPHORE *v8; // rbx
  int v9; // r14d
  __int64 v10; // r8
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rbx
  __int64 v14; // r8
  HSEMAPHORE *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = HmgLockEx((unsigned int)hdo, 28, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = (HSEMAPHORE *)*((_QWORD *)v6 + 5);
    v16 = v8;
    if ( !bCallBack )
      goto LABEL_12;
    EngAcquireSemaphore(v8[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[6], 11);
    v9 = (*((__int64 (__fastcall **)(__int64))v7 + 4))((__int64)v7 + 24);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (__int64)v8[6], v10);
    v11 = (struct _ERESOURCE *)v8[6];
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
    if ( v9 )
    {
LABEL_12:
      v13 = HmgRemoveObject((struct HOBJ__ *)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
      if ( v13 )
      {
        PDEVOBJ::vUnreferencePdev((struct PDEV **)&v16, 0, v14);
        FreeObject((__int64)v13, 28);
        return 1;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
  }
  return 0;
}
