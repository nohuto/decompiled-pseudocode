/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001EE44 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C002E870 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     NtGdiCreateRectRgn @ 0x1C006AF70 (NtGdiCreateRectRgn.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0070A6C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 * Callees:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0001120 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C00012E0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0023B18 (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002537C (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0043498 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C006A85C (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C009CC04 (HmgIncProcessHandleCount.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct _BASEOBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  GdiHandleManager *v11; // rcx
  struct _BASEOBJECT *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  __int64 *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]

  v6 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *(_QWORD *)(ThreadWin32Thread + 72);
  else
    v10 = 0LL;
  if ( v10 )
    LODWORD(v7) = *(_DWORD *)(v10 + 8);
  GreAcquireHmgrSemaphore(v9);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount((unsigned int)v7) )
  {
    v16 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v11, &v16) )
    {
      v6 = ENTRYOBJ::hSetup(a1, a3, a2, v16);
      RECHMGRCREATE(v6, v12);
      if ( a3 == 5 )
      {
        if ( (a2 & 2) != 0 )
          RECALTLOCK(v6, a1);
        v13 = *((_QWORD *)a1 + 85);
        v14 = 0LL;
        goto LABEL_15;
      }
      if ( a3 == 16 )
      {
        v13 = *((_QWORD *)a1 + 17);
        v14 = 2LL;
LABEL_15:
        TrackObjectReferenceInitialization(v14, v13, *((unsigned int *)a1 + 2));
      }
    }
    else
    {
      if ( (a2 & 8) == 0 )
        HmgDecProcessHandleCount((unsigned int)v7);
      if ( !gGDISessionLimitReachedAtLeastOnce )
      {
        v11 = gpHandleManager;
        if ( *((_DWORD *)gpHandleManager + 1) >= *((_DWORD *)gpHandleManager + 2) )
        {
          gGDISessionLimitReachedAtLeastOnce = 1;
          if ( hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
            {
              v17 = (unsigned int)gMaxGdiHandleCount;
              v20 = &v17;
              v22 = &v18;
              v21 = 8LL;
              v18 = 0x1000000LL;
              v23 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DF30, 0LL, 0LL, 4u, &pData);
            }
          }
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v11);
  return v6;
}
