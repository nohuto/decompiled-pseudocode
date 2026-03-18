/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C00533D0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00535A0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0053780 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053858 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E6BC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021EDC (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0021FAC (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0021FCC (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C00287BC (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0029910 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C007ADB4 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C007B5BC (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x1C007CB5C (EtwTraceGdiCreateHandle.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BE1A0 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _BASEOBJECT *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int EtwGdiHandleType; // eax
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

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
    v21 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v10, &v21) )
    {
      v4 = ENTRYOBJ::hSetup(a1, a3, a2, v21);
      RECHMGRCREATE(v4, v16);
      if ( a3 == 5 )
      {
        if ( (a2 & 2) != 0 )
          RECALTLOCK(v4, a1);
        v17 = *((_QWORD *)a1 + 85);
        v18 = 0LL;
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
        v17 = *((_QWORD *)a1 + 17);
        v18 = 2LL;
      }
      TrackObjectReferenceInitialization(v18, v17, *((unsigned int *)a1 + 2));
      goto LABEL_19;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount(v7);
  }
LABEL_24:
  GreReleaseHmgrSemaphore((__int64)v10, v14, v15);
  return v4;
}
