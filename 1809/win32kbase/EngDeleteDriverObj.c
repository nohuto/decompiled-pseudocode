/*
 * XREFs of EngDeleteDriverObj @ 0x1C0107A40
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C001D830 (FreeObject.c)
 *     HmgLock @ 0x1C0022520 (HmgLock.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AC498 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00AC4EC (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  HSEMAPHORE *v8; // rbx
  int v9; // edi
  __int64 v10; // r8
  BOOL v11; // ebx
  void *v12; // rdi
  __int64 v13; // r8
  _QWORD v15[6]; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE *v16; // [rsp+98h] [rbp+20h] BYREF

  v6 = HmgLock((unsigned int)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((unsigned __int64)v15, v6);
  v7 = v15[0];
  if ( !v15[0] )
    goto LABEL_6;
  v8 = *(HSEMAPHORE **)(v15[0] + 40LL);
  v16 = v8;
  if ( bCallBack )
  {
    EngAcquireSemaphore(v8[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v8[6], 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v15[0] + 32LL))((v7 + 24) & -(__int64)(v7 != 0));
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (__int64)v8[6], v10);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)v8[6]);
    if ( !v9 )
      goto LABEL_6;
  }
  v11 = 1;
  v12 = HmgRemoveObject((struct HOBJ__ *)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
  if ( v12 )
  {
    v15[0] = 0LL;
    PDEVOBJ::vUnreferencePdev((struct PDEV **)&v16, 0, v13);
    FreeObject((__int64)v12, 28);
  }
  else
  {
LABEL_6:
    v11 = 0;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v15);
  return v11;
}
