/*
 * XREFs of HmgAlloc @ 0x1C00248F0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002FA68 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002FE90 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     HmgIncProcessHandleCount @ 0x1C001ED30 (HmgIncProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002BA30 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002C230 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     FreeObject @ 0x1C00449C0 (FreeObject.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C2A64 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

unsigned __int64 __fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  _WORD *Object; // r14
  unsigned __int64 v6; // rsi
  __int64 ThreadWin32Thread; // rax
  int v8; // edx
  int v9; // r8d
  struct _ERESOURCE *v10; // rbx
  GdiHandleManager *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  GdiHandleEntryTable *v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v22; // edx
  unsigned int v23; // r12d
  unsigned __int16 v24; // cx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  unsigned int v28; // ebx
  GdiHandleManager *v29; // rbp
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rax
  __int64 v34; // rcx
  signed __int32 v35[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 v36; // [rsp+78h] [rbp+10h]
  unsigned int v37; // [rsp+80h] [rbp+18h] BYREF

  Object = AllocateObject(a1, a2, (a3 & 4) == 0);
  if ( !Object )
    return 0LL;
  v6 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (a3 & 0x10) == 0 )
    {
      v34 = *(_QWORD *)(ThreadWin32Thread + 72);
      if ( v34 )
        LODWORD(v6) = *(_DWORD *)(v34 + 8);
    }
  }
  v10 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
  }
  v11 = (GdiHandleManager *)L"ghsemHmgr";
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((unsigned int)L"ghsemHmgr", v8, v9, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCount(v6, v8, v9) )
  {
LABEL_74:
    GreReleaseHmgrSemaphore();
    FreeObject(Object, a2);
    return 0LL;
  }
  v37 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v11, &v37) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount((unsigned int)v6);
    goto LABEL_74;
  }
  v12 = v37;
  if ( v37 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v37,
                                  1)
           + 13) == HIWORD(v12) )
        v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = (unsigned __int16)v37;
    }
  }
  v13 = *((_QWORD *)gpHandleManager + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
  {
    v17 = 0LL;
  }
  else
  {
    v15 = ((v12 - v14) >> 16) + 1;
    if ( v12 < v14 )
      v15 = 0LL;
    v16 = *(GdiHandleEntryTable **)(v13 + 8 * v15 + 8);
    if ( (_DWORD)v15 )
      v12 += ((1 - (_DWORD)v15) << 16) - v14;
    v17 = 0LL;
    if ( v12 < *((_DWORD *)v16 + 5) || GdiHandleEntryTable::GetEntryObject(v16, v12) )
      v17 = *(_QWORD *)v16 + 24LL * v12;
  }
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v18 && (a3 & 0x10) == 0 )
    v19 = *(_QWORD *)(v18 + 72);
  else
    v19 = 0LL;
  v20 = *(_DWORD *)(v17 + 8) & 1;
  *(_BYTE *)(v17 + 14) = a2;
  *(_BYTE *)(v17 + 15) = 0;
  *(_QWORD *)(v17 + 16) = 0LL;
  if ( (a3 & 8) == 0 )
  {
    if ( v19 )
      v20 |= *(_DWORD *)(v19 + 8) & 0xFFFFFFFE;
    else
      v20 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v19 )
      CurrentThread = *(struct _KTHREAD **)v19;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)Object + 2) = CurrentThread;
  }
  Object[6] = a3 & 1;
  v22 = v37;
  LOBYTE(v36) = a2;
  v23 = HIWORD(v37);
  HIBYTE(v36) = BYTE2(v37);
  *((_DWORD *)Object + 2) = (a3 >> 1) & 1;
  *(_DWORD *)(v17 + 8) = v20;
  v24 = v36;
  *(_WORD *)(v17 + 12) = v36;
  *(_QWORD *)(v17 + 16) = 0LL;
  if ( (a3 & 0x40) != 0 )
  {
    v24 = v36 | 0x80;
    *(_WORD *)(v17 + 12) = v36 | 0x80;
  }
  if ( (a3 & 0x80u) != 0 )
    *(_BYTE *)(v17 + 15) |= 1u;
  *(_QWORD *)v17 = v22 | 0xFFFFFFFFFF000000uLL;
  v25 = v24 << 16;
  LODWORD(v26) = (unsigned __int16)v22;
  v27 = (unsigned __int16)v22 | (unsigned __int64)v25;
  *(_QWORD *)Object = v27;
  _InterlockedOr(v35, 0);
  v28 = v37;
  v29 = gpHandleManager;
  if ( v37 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      LODWORD(v26) = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)v37,
                                            1)
                     + 13);
      if ( (_DWORD)v26 == v23 )
        v28 = (unsigned __int16)v28;
    }
    else
    {
      v28 = (unsigned __int16)v37;
    }
  }
  v30 = *((_QWORD *)v29 + 2);
  v31 = *(_DWORD *)(v30 + 2056);
  if ( v28 < v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
  {
    v26 = ((v28 - v31) >> 16) + 1;
    if ( v28 < v31 )
      v26 = 0LL;
    v32 = *(_QWORD *)(v30 + 8 * v26 + 8);
    if ( (_DWORD)v26 )
      v28 += ((1 - (_DWORD)v26) << 16) - v31;
    if ( v28 < *(_DWORD *)(v32 + 20) )
    {
      LODWORD(v26) = 2 * (unsigned __int8)v28;
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                + 16LL * (unsigned __int8)v28
                + 8) = Object;
    }
  }
  if ( gbGdiHmgrStacks && gpentHmgrStacks )
    RECSTACKBACKTRACE((unsigned __int16)v27 | ((unsigned int)v27 >> 8) & 0xFF0000);
  if ( (a3 & 3) != 0 )
    v27 = (unsigned __int64)Object;
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v26, (unsigned int)&LockRelease, v31, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  return v27;
}
