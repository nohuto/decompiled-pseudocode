/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0043A30 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0086BD4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00ABEDC (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     EngCreateLockedBitmap @ 0x1C00AC0E0 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00AC150 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00AC1C0 (EngCreateLockedRedirectionDeviceBitmap.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C001D634 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023928 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C008840C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C009D8E0 (EngFreeUserMem.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00F8AF0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00F8F28 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0109608 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 v1; // rbx
  char v3; // al
  unsigned int v4; // edx
  unsigned __int16 *v5; // rdi
  char v6; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  unsigned int v8; // ebx
  GdiHandleManager *v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rax
  __int16 v21; // cx
  PVOID v22; // r14
  void *v23; // rbx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 ThreadWin32Thread; // r15
  PVOID v29; // rbx
  __int64 CurrentProcess; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  unsigned __int16 *v36; // [rsp+30h] [rbp-39h] BYREF
  int v37; // [rsp+38h] [rbp-31h]
  PVOID Object[2]; // [rsp+48h] [rbp-21h]
  __int128 v39; // [rsp+58h] [rbp-11h]
  _OWORD v40[3]; // [rsp+70h] [rbp+7h] BYREF
  PEPROCESS Process; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+6Fh] BYREF
  HSEMAPHORE v43; // [rsp+E0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_BYTE *)this + 8);
    if ( (v3 & 1) == 0 )
    {
      if ( (v3 & 8) != 0 && *(_QWORD *)(v1 + 128) )
      {
        v42 = *(_QWORD *)(v1 + 128);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v42);
        v1 = *(_QWORD *)this;
      }
      HmgRemoveObject(*(struct HOBJ__ **)v1, *((_DWORD *)this + 3) != 0, 1, 1, 5, 0LL);
      if ( *((_DWORD *)this + 3) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      v20 = *(_QWORD *)this;
      v21 = *(_WORD *)(*(_QWORD *)this + 102LL);
      v22 = *(PVOID *)(*(_QWORD *)this + 72LL);
      v23 = *(void **)(*(_QWORD *)this + 248LL);
      v24 = *(_OWORD *)(*(_QWORD *)this + 288LL);
      v40[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
      v25 = *(_OWORD *)(v20 + 304);
      v40[1] = v24;
      v26 = *(_OWORD *)(v20 + 600);
      v40[2] = v25;
      v27 = *(_OWORD *)(v20 + 584);
      v39 = v26;
      *(_OWORD *)Object = v27;
      if ( (v21 & 8) != 0 )
      {
        if ( (*(_DWORD *)(v20 + 112) & 0x40000) != 0 && v22 )
        {
          if ( (v21 & 0x80u) == 0 )
          {
            EngFreeUserMem(v22);
            SURFACE::Free(*(struct _SLIST_ENTRY **)this);
            return;
          }
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( *(_QWORD *)(ThreadWin32Thread + 72) )
          {
            v29 = Object[1];
            if ( DWORD2(v39) )
              v29 = v22;
            CurrentProcess = PsGetCurrentProcess();
            MmUnmapViewOfSection(CurrentProcess, v29);
            if ( PsLookupProcessByProcessId((HANDLE)*(int *)(*(_QWORD *)(ThreadWin32Thread + 72) + 8LL), &Process) >= 0 )
            {
              if ( DWORD2(v39) )
                v22 = Object[1];
              MmUnmapViewOfSection(Process, v22);
              ObfDereferenceObject(Process);
            }
          }
          if ( !Object[0] )
            KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
          ObfDereferenceObject(Object[0]);
        }
      }
      else if ( (v21 & 0x800) != 0 )
      {
        v43 = ghsemMapRot;
        EngAcquireSemaphore(ghsemMapRot);
        v32 = *(_QWORD **)(*(_QWORD *)this + 264LL);
        if ( v32 )
        {
          PsGetCurrentProcessWin32Process(v31);
          v33 = (_QWORD *)(*(_QWORD *)this + 528LL);
          v34 = (_QWORD *)*v33;
          if ( (_QWORD *)*v33 != v33 )
          {
            if ( (_QWORD *)v34[1] != v33 || (v35 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v35 != v33) )
              __fastfail(3u);
            *v35 = v34;
            v34[1] = v35;
          }
          if ( v22 && v23 )
            MmUnmapViewOfSection(*v32, v22);
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v40);
        if ( v23 )
          ObfDereferenceObject(v23);
        SEMOBJ::vUnlock((SEMOBJ *)&v43);
      }
      else if ( (v21 & 0x10) != 0 )
      {
        vFreeKernelSection(v22);
      }
      SURFACE::Free(*(struct _SLIST_ENTRY **)this);
      return;
    }
    v4 = (unsigned __int16)*(_DWORD *)v1 | (*(_DWORD *)v1 >> 8) & 0xFF0000;
    v36 = 0LL;
    v37 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v36, v4, 0, 0, 1);
    if ( v37 )
    {
      v5 = v36;
      v6 = *((_BYTE *)v36 + 14);
      if ( v6 == 5
        && (!gbGdiHmgrAltStacks
         || !gpentHmgrAltStacks
         || (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v1), v6 = *((_BYTE *)v5 + 14), v6 == 5)) )
      {
        v7 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v1 + 680);
        if ( v7 && qword_1C01C8828 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C01C8828,
            v7,
            0);
      }
      else if ( v6 == 16 )
      {
        TrackObjectReferenceDecrement(2LL, *(_QWORD *)(v1 + 136));
      }
      --*(_DWORD *)(v1 + 8);
      v8 = *(_DWORD *)v5 & 0xFFFFFF;
      if ( v8 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v5,
                                      1)
               + 13) == HIWORD(v8) )
            v8 = (unsigned __int16)v8;
        }
        else
        {
          v8 = *v5;
        }
      }
      v9 = gpHandleManager;
      v10 = *((_QWORD *)gpHandleManager + 2);
      v11 = *(_DWORD *)(v10 + 2056);
      if ( v8 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
        goto LABEL_51;
      v12 = ((v8 - v11) >> 16) + 1;
      if ( v8 < v11 )
        v12 = 0LL;
      v13 = *(_QWORD *)(v10 + 8 * v12 + 8);
      if ( (_DWORD)v12 )
        v8 += ((1 - (_DWORD)v12) << 16) - v11;
      if ( v8 >= *(_DWORD *)(v13 + 20) )
LABEL_51:
        v14 = 0LL;
      else
        v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                         + 16LL * (unsigned __int8)v8
                         + 8);
      v15 = (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000;
      if ( v15 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)*v14,
                                      1)
               + 13) == HIWORD(v15) )
            v15 = (unsigned __int16)v15;
        }
        else
        {
          v15 = (unsigned __int16)*v14;
        }
      }
      v16 = *((_QWORD *)v9 + 2);
      v17 = *(_DWORD *)(v16 + 2056);
      if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      {
        v18 = ((v15 - v17) >> 16) + 1;
        if ( v15 < v17 )
          v18 = 0LL;
        v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
        if ( (_DWORD)v18 )
          v15 += ((1 - (_DWORD)v18) << 16) - v17;
        *(_DWORD *)(*(_QWORD *)v19 + 24LL * v15 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8)) + 16LL * (unsigned __int8)v15,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
    }
  }
}
