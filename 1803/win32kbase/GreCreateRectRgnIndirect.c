/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C001E910
 * Callers:
 *     CreateEmptyRgnPublic @ 0x1C001CD20 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C001CD60 (CreateEmptyRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F180 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C0064270 (UserValidateCopyRgn.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     HmgIncProcessHandleCount @ 0x1C001ED30 (HmgIncProcessHandleCount.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002BA30 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002C230 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C2A64 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

unsigned __int64 __fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdi
  int v5; // r14d
  __int64 v6; // rbx
  char *v7; // rbx
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  unsigned __int64 v12; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  struct _ERESOURCE *v17; // rsi
  GdiHandleManager *v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // esi
  unsigned int v21; // ebp
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  GdiHandleEntryTable *v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // esi
  unsigned int v30; // eax
  int v31; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v33; // edx
  unsigned int v34; // r12d
  unsigned __int64 v35; // r15
  unsigned int v36; // esi
  GdiHandleManager *v37; // r14
  unsigned int v38; // ebp
  __int64 v39; // rdx
  __int64 v40; // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-78h] BYREF
  char *v42; // [rsp+30h] [rbp-48h] BYREF
  int v43; // [rsp+38h] [rbp-40h]
  unsigned __int16 v44; // [rsp+80h] [rbp+8h]
  unsigned int v45; // [rsp+88h] [rbp+10h] BYREF

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 216;
  v4 = 0LL;
  v43 = 0;
  if ( gulGdiHmgrTraceObjectType == 4 )
  {
    v5 = 1;
    v3 = 376;
  }
  else
  {
    v5 = 0;
  }
  if ( dword_1C01A2650 >= v3 )
  {
    v6 = qword_1C01A26E0;
    if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0 )
    {
      v7 = (char *)Win32AllocateFromPagedLookasideListImpl(v6);
      if ( v7 )
      {
        *(_QWORD *)v7 = 0LL;
        *((_QWORD *)v7 + 1) = 0LL;
        *((_QWORD *)v7 + 2) = 0LL;
        if ( v5 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v7[v3 - 160], 0LL);
        *((_WORD *)v7 + 7) = 0x8000;
LABEL_14:
        *((_QWORD *)v7 + 3) = 216LL;
        *((_DWORD *)v7 + 20) = 0;
        *((_QWORD *)v7 + 4) = 0LL;
        *((_QWORD *)v7 + 7) = v7 + 48;
        *((_QWORD *)v7 + 6) = v7 + 48;
        left = a1->left;
        right = a1->right;
        v42 = v7;
        if ( left > right )
        {
          a1->left = right;
          a1->right = left;
        }
        top = a1->top;
        bottom = a1->bottom;
        if ( top > bottom )
        {
          a1->top = bottom;
          a1->bottom = top;
        }
        RGNOBJ::vSet((RGNOBJ *)&v42, a1);
        v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          v15 = *(_QWORD *)(ThreadWin32Thread + 72);
          if ( v15 )
            LODWORD(v12) = *(_DWORD *)(v15 + 8);
        }
        v17 = ghsemHmgr;
        if ( ghsemHmgr )
        {
          PsEnterPriorityRegion();
          ExEnterCriticalRegionAndAcquireResourceExclusive(v17);
        }
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pqz(v15, v14, v16, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
        if ( (unsigned int)HmgIncProcessHandleCount((unsigned int)v12, v14) )
        {
          v45 = 0;
          if ( GdiHandleManager::AcquireEntryIndex(v18, &v45) )
          {
            v20 = v45;
            if ( v45 >= 0x10000 )
            {
              v21 = (unsigned __int16)v45;
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)v45,
                                            1)
                     + 13) == HIWORD(v20) )
                  v20 = v21;
              }
              else
              {
                v20 = (unsigned __int16)v45;
              }
            }
            v22 = *((_QWORD *)gpHandleManager + 2);
            v23 = *(_DWORD *)(v22 + 2056);
            if ( v20 >= v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
            {
              v26 = 0LL;
            }
            else
            {
              v24 = ((v20 - v23) >> 16) + 1;
              if ( v20 < v23 )
                v24 = 0LL;
              v25 = *(GdiHandleEntryTable **)(v22 + 8 * v24 + 8);
              if ( (_DWORD)v24 )
                v20 += ((1 - (_DWORD)v24) << 16) - v23;
              v26 = 0LL;
              if ( v20 < *((_DWORD *)v25 + 5) || GdiHandleEntryTable::GetEntryObject(v25, v20) )
                v26 = *(_QWORD *)v25 + 24LL * v20;
            }
            v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
            if ( v27 )
              v28 = *(_QWORD *)(v27 + 72);
            else
              v28 = 0LL;
            v29 = *(_DWORD *)(v26 + 8) & 1;
            *(_WORD *)(v26 + 14) = 4;
            *(_QWORD *)(v26 + 16) = 0LL;
            if ( v28 )
              v30 = *(_DWORD *)(v28 + 8) & 0xFFFFFFFE;
            else
              v30 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v31 = v30 | v29;
            if ( v28 )
              CurrentThread = *(struct _KTHREAD **)v28;
            else
              CurrentThread = KeGetCurrentThread();
            v33 = v45;
            *((_QWORD *)v7 + 2) = CurrentThread;
            *((_WORD *)v7 + 6) = 1;
            *((_DWORD *)v7 + 2) = 0;
            *(_QWORD *)v26 = v33 | 0xFFFFFFFFFF000000uLL;
            v34 = HIWORD(v33);
            HIBYTE(v44) = BYTE2(v33);
            LOBYTE(v44) = 4;
            *(_QWORD *)(v26 + 16) = 0LL;
            LODWORD(v18) = (unsigned __int16)v33;
            v35 = (unsigned __int16)v33 | (unsigned __int64)(v44 << 16);
            *(_DWORD *)(v26 + 8) = v31;
            *(_WORD *)(v26 + 12) = v44;
            *(_QWORD *)v7 = v35;
            _InterlockedOr(v41, 0);
            v36 = v45;
            v37 = gpHandleManager;
            if ( v45 >= 0x10000 )
            {
              v38 = (unsigned __int16)v45;
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                LODWORD(v18) = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                      (unsigned __int16)v45,
                                                      1)
                               + 13);
                if ( (_DWORD)v18 == v34 )
                  v36 = v38;
              }
              else
              {
                v36 = (unsigned __int16)v45;
              }
            }
            v39 = *((_QWORD *)v37 + 2);
            v19 = *(_DWORD *)(v39 + 2056);
            if ( v36 < v19 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16) )
            {
              v18 = (GdiHandleManager *)(((v36 - v19) >> 16) + 1);
              if ( v36 < v19 )
                v18 = 0LL;
              v40 = *(_QWORD *)(v39 + 8LL * (_QWORD)v18 + 8);
              if ( (_DWORD)v18 )
                v36 += ((1 - (_DWORD)v18) << 16) - v19;
              if ( v36 < *(_DWORD *)(v40 + 20) )
              {
                LODWORD(v18) = 2 * (unsigned __int8)v36;
                *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                          + 16LL * (unsigned __int8)v36
                          + 8) = v7;
              }
            }
            v4 = v35;
            if ( gbGdiHmgrStacks && gpentHmgrStacks )
              RECSTACKBACKTRACE((unsigned __int16)v35 | ((unsigned int)v35 >> 8) & 0xFF0000);
          }
          else
          {
            HmgDecProcessHandleCount((unsigned int)v12);
          }
        }
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz((_DWORD)v18, (unsigned int)&LockRelease, v19, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
        if ( ghsemHmgr )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
          PsLeavePriorityRegion();
        }
        if ( v4 )
          _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
        else
          REGION::vDeleteREGION((REGION *)v7);
        return v4;
      }
    }
  }
  v7 = (char *)PALLOCMEM2(v3, 0x34306847u, 0);
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    if ( v5 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v7[v3 - 160], 0LL);
    goto LABEL_14;
  }
  EngSetLastError(8u);
  EngSetLastError(8u);
  return v4;
}
