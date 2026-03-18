/*
 * XREFs of HmgAlloc @ 0x1C0001010
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00F6470 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C00F6574 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 * Callees:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0001120 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C00012E0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     FreeObject @ 0x1C001D830 (FreeObject.c)
 *     HmgDecProcessHandleCount @ 0x1C0023B18 (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0043498 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C009CC04 (HmgIncProcessHandleCount.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v5; // r14d
  struct OBJECT *Object; // rbp
  unsigned __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rax
  GdiHandleManager *v10; // rcx
  struct HOBJ__ *v11; // rbx
  struct _BASEOBJECT *v12; // rdx
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  Object = (struct OBJECT *)AllocateObject(a1);
  if ( !Object )
    return 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (a3 & 0x10) == 0 )
    v9 = *(_QWORD *)(ThreadWin32Thread + 72);
  else
    v9 = 0LL;
  if ( v9 )
    LODWORD(v7) = *(_DWORD *)(v9 + 8);
  GreAcquireHmgrSemaphore();
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCount((unsigned int)v7) )
  {
LABEL_17:
    GreReleaseHmgrSemaphore();
    FreeObject(Object, v5);
    return 0LL;
  }
  v14 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v10, &v14) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount((unsigned int)v7);
    goto LABEL_17;
  }
  v11 = ENTRYOBJ::hSetup(Object, a2, a3, v14);
  RECHMGRCREATE(v11, v12);
  if ( (a3 & 3) != 0 )
    v11 = Object;
  GreReleaseHmgrSemaphore();
  return v11;
}
