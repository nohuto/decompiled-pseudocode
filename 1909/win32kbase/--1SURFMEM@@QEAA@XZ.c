/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0018750
 * Callers:
 *     GreCreateBitmap @ 0x1C0016C90 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0089864 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C008CED0 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0012D70 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C0018B30 (HmgRemoveObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020E70 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EngFreeUserMem @ 0x1C0037B60 (EngFreeUserMem.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C007080C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0098F48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0122CB0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0122FF0 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 v1; // rdi
  char v3; // al
  unsigned int v4; // esi
  GdiHandleManager *v5; // rbx
  unsigned int v6; // eax
  struct _ENTRY *v7; // rax
  struct _ENTRY *v8; // rbx
  bool v9; // zf
  unsigned __int8 v10; // cl
  __int64 v11; // rax
  __int16 v12; // cx
  PVOID v13; // rdi
  void *v14; // rbx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ThreadWin32Thread; // r15
  PVOID v22; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v24; // rcx
  struct _EPROCESS **v25; // r14
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  struct _ENTRY *v29; // [rsp+38h] [rbp-49h] BYREF
  int v30; // [rsp+40h] [rbp-41h]
  int v31; // [rsp+44h] [rbp-3Dh]
  PVOID Object[2]; // [rsp+50h] [rbp-31h]
  __int128 v33; // [rsp+60h] [rbp-21h]
  _OWORD v34[3]; // [rsp+78h] [rbp-9h] BYREF
  PEPROCESS Process; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v36; // [rsp+F0h] [rbp+6Fh] BYREF
  HSEMAPHORE v37; // [rsp+F8h] [rbp+77h] BYREF
  char v38; // [rsp+100h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_BYTE *)this + 8);
    if ( (v3 & 1) != 0 )
    {
      v4 = (unsigned __int16)*(_DWORD *)v1 | (*(_DWORD *)v1 >> 8) & 0xFF0000;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v38);
      v5 = gpHandleManager;
      v30 = 1;
      v6 = GdiHandleManager::DecodeIndex(gpHandleManager, v4);
      v7 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v5 + 2), v6, 0);
      v29 = v7;
      v8 = v7;
      if ( !v7 )
      {
        v30 = 0;
        KeLeaveCriticalRegion();
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v29);
        return;
      }
      _m_prefetchw((char *)v7 + 8);
      v9 = (*((_BYTE *)v7 + 15) & 0x20) == 0;
      v31 = *((_DWORD *)v7 + 2);
      if ( !v9 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
        if ( !v30 )
        {
LABEL_15:
          HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v29);
          return;
        }
        v8 = v29;
      }
      v10 = *((_BYTE *)v8 + 14);
      if ( v10 == 5 && gbGdiHmgrAltStacks )
      {
        if ( gpentHmgrAltStacks )
        {
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v1);
          v10 = *((_BYTE *)v8 + 14);
        }
      }
      TrackHmgrReferenceDecrement(v10, (struct OBJECT *)v1);
      --*(_DWORD *)(v1 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
      goto LABEL_15;
    }
    if ( (v3 & 8) != 0 && *(_QWORD *)(v1 + 128) )
    {
      v36 = *(_QWORD *)(v1 + 128);
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v36);
      v1 = *(_QWORD *)this;
    }
    HmgRemoveObject(*(_QWORD *)v1, *((_DWORD *)this + 3) != 0, 1, 1, 5, 0LL);
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    v11 = *(_QWORD *)this;
    v12 = *(_WORD *)(*(_QWORD *)this + 102LL);
    v13 = *(PVOID *)(*(_QWORD *)this + 72LL);
    v14 = *(void **)(*(_QWORD *)this + 248LL);
    v15 = *(_OWORD *)(*(_QWORD *)this + 288LL);
    v34[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
    v16 = *(_OWORD *)(v11 + 304);
    v34[1] = v15;
    v17 = *(_OWORD *)(v11 + 584);
    v34[2] = v16;
    v18 = *(_OWORD *)(v11 + 600);
    *(_OWORD *)Object = v17;
    v33 = v18;
    if ( (v12 & 8) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 112) & 0x40000) != 0 && v13 )
      {
        if ( (v12 & 0x80u) == 0 )
        {
          EngFreeUserMem(v13);
        }
        else
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
          {
            v22 = Object[1];
            if ( DWORD2(v33) )
              v22 = v13;
            CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v20, v19);
            vUnmapKernelSectionForUserMapping(CurrentProcess, v22);
            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
            {
              if ( DWORD2(v33) )
                v13 = Object[1];
              vUnmapKernelSectionForUserMapping(Process, v13);
              ObfDereferenceObject(Process);
            }
          }
          if ( !Object[0] )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    else if ( (v12 & 0x800) != 0 )
    {
      v37 = ghsemMapRot;
      EngAcquireSemaphore(ghsemMapRot);
      v25 = *(struct _EPROCESS ***)(*(_QWORD *)this + 264LL);
      if ( v25 )
      {
        PsGetCurrentProcessWin32Process(v24);
        v26 = (_QWORD *)(*(_QWORD *)this + 528LL);
        v27 = (_QWORD *)*v26;
        if ( (_QWORD *)*v26 != v26 )
        {
          if ( (_QWORD *)v27[1] != v26 || (v28 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v28 != v26) )
            __fastfail(3u);
          *v28 = v27;
          v27[1] = v28;
        }
        if ( v13 && v14 )
          vUnmapKernelSectionForUserMapping(*v25, v13);
      }
      W32PIDLOCK::vCleanUp((W32PIDLOCK *)v34);
      if ( v14 )
        ObfDereferenceObject(v14);
      SEMOBJ::vUnlock((SEMOBJ *)&v37);
    }
    else if ( (v12 & 0x10) != 0 )
    {
      vFreeKernelSection(v13);
    }
    SURFACE::Free(*(PSLIST_ENTRY *)this);
  }
}
