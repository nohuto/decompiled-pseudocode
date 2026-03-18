/*
 * XREFs of HmgAlloc @ 0x1C0027540
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C0017AE0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0020440 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0016BA0 (FreeObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021EDC (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0021FAC (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C00287BC (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0029910 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     AllocateObject @ 0x1C0029BF0 (AllocateObject.c)
 *     EtwTraceGdiCreateHandle @ 0x1C007CB5C (EtwTraceGdiCreateHandle.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BE1A0 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  int v5; // r15d
  struct OBJECT *Object; // r14
  unsigned __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  GdiHandleManager *v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct HOBJ__ *v16; // rbx
  struct _BASEOBJECT *v17; // rdx
  unsigned int EtwGdiHandleType; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v23; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  Object = (struct OBJECT *)AllocateObject(a1);
  if ( !Object )
    return 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (a3 & 0x10) == 0 )
    {
      v12 = *(_QWORD *)(ThreadWin32Thread + 72);
      if ( v12 )
        LODWORD(v7) = *(_DWORD *)(v12 + 8);
    }
  }
  v13 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v10, v9, v11, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx((unsigned int)v7, v9, 0LL) )
  {
LABEL_21:
    GreReleaseHmgrSemaphore((__int64)v10, v14, v15);
    FreeObject((__int64)Object, v5);
    return 0LL;
  }
  v23 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v10, &v23) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount(v7);
    goto LABEL_21;
  }
  v16 = ENTRYOBJ::hSetup(Object, a2, a3, v23);
  RECHMGRCREATE(v16, v17);
  if ( (a3 & 8) != 0 )
    LODWORD(v7) = 0;
  EtwGdiHandleType = GetEtwGdiHandleType(a2);
  EtwTraceGdiCreateHandle(v16, EtwGdiHandleType, v7);
  if ( (a3 & 3) != 0 )
    v16 = Object;
  GreReleaseHmgrSemaphore(v20, v19, v21);
  return v16;
}
