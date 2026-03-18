/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022E70
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000ECA0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C000EE80 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C000EF58 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007AEBC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 * Callees:
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021F44 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0022014 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002915C (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002A4A0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0076818 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C007792C (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x1C007923C (EtwTraceGdiCreateHandle.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct _BASEOBJECT *a1, unsigned __int16 a2, unsigned __int8 a3)
{
  struct HOBJ__ *v4; // rbp
  unsigned __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  GdiHandleManager *v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  struct _ERESOURCE *v13; // rsi
  struct _BASEOBJECT *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int EtwGdiHandleType; // eax
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
    if ( v12 )
      LODWORD(v7) = *(_DWORD *)(v12 + 8);
  }
  v13 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v10, v9, v11, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCountEx((unsigned int)v7, v9, 0LL) )
  {
    v19 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v10, &v19) )
    {
      v4 = ENTRYOBJ::hSetup(a1, a3, a2, v19);
      RECHMGRCREATE(v4, v14);
      if ( a3 == 5 )
      {
        if ( (a2 & 2) != 0 )
          RECALTLOCK(v4, a1);
        v15 = *((_QWORD *)a1 + 85);
        v16 = 0LL;
      }
      else
      {
        if ( a3 != 16 )
        {
LABEL_19:
          if ( (a2 & 8) != 0 )
            LODWORD(v7) = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(a3);
          EtwTraceGdiCreateHandle(v4, EtwGdiHandleType, v7);
          goto LABEL_24;
        }
        v15 = *((_QWORD *)a1 + 17);
        v16 = 2LL;
      }
      TrackObjectReferenceInitialization(v16, v15, *((unsigned int *)a1 + 2));
      goto LABEL_19;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount(v7);
  }
LABEL_24:
  GreReleaseHmgrSemaphore();
  return v4;
}
