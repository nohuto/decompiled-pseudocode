/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0
 * Callers:
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0057140 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BDBC8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0011660 (GreAcquireSemaphoreSharedInternal.c)
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0014708 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0014738 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00169E0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C00182C0 (GreReleaseSemaphoreInternal.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001CBC0 (DEC_SHARE_REF_CNT.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     EngFreeUserMem @ 0x1C0038BD0 (EngFreeUserMem.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003AE48 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003EC90 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C004D430 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C004D8D0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C006173C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C007777C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     GreGetObjectOwner @ 0x1C007A080 (GreGetObjectOwner.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00B1414 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0125520 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rbx
  struct _SLIST_ENTRY *v12; // rcx
  __int16 v13; // r15
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // r8
  unsigned int ObjectOwner; // eax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r12
  void (__fastcall *v23)(__int64); // rax
  __int64 v24; // rcx
  HANDLE v25; // rbx
  HANDLE v26; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r15d
  __int64 v31; // r14
  PVOID v32; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v34; // rax
  int v35; // ecx
  PVOID v36; // rdx
  struct _EPROCESS **v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  struct HOBJ__ *v43; // r14
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rbx
  __int64 v47; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SecureHandle; // [rsp+78h] [rbp-88h]
  HANDLE v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  PVOID v58; // [rsp+90h] [rbp-70h]
  int v59[2]; // [rsp+98h] [rbp-68h]
  PERESOURCE v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  struct _ERESOURCE *v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h]
  struct _SLIST_ENTRY *v65; // [rsp+C8h] [rbp-38h]
  struct _SLIST_ENTRY *v66; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v68; // [rsp+E8h] [rbp-18h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  _OWORD v70[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v71[128]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v72; // [rsp+1C0h] [rbp+C0h]
  unsigned int v73; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( (SURFACE *)a1 == SURFACE::pdibDefault || !a1 )
    return v6;
  v7 = 0LL;
  v8 = *(char **)(a1 + 72);
  v56 = 0LL;
  v57 = 0LL;
  SecureHandle = 0LL;
  v50 = 0;
  if ( !*(_WORD *)(a1 + 100) )
  {
    v56 = *(HANDLE *)(a1 + 192);
    v57 = *(_QWORD *)(a1 + 184);
    v50 = *(_DWORD *)(a1 + 216);
    v7 = &v8[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
    SecureHandle = *(HANDLE *)(a1 + 224);
  }
  v9 = *(_OWORD *)(a1 + 272);
  v10 = *(_OWORD *)(a1 + 288);
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(struct _SLIST_ENTRY **)(a1 + 128);
  v13 = *(_WORD *)(a1 + 102);
  v61 = *(_QWORD *)(a1 + 24);
  v64 = *(_QWORD *)(a1 + 136);
  v58 = *(PVOID *)(a1 + 248);
  v14 = *(_DWORD *)(a1 + 320);
  v54 = v11;
  v65 = v12;
  BaseAddress = v8;
  LODWORD(Process) = v14;
  v70[0] = v9;
  v15 = *(_OWORD *)(a1 + 304);
  v70[1] = v10;
  v16 = *(_OWORD *)(a1 + 600);
  v70[2] = v15;
  v17 = *(_OWORD *)(a1 + 584);
  v68 = v16;
  *(_OWORD *)Object = v17;
  v69 = *(_QWORD *)(a1 + 616);
  if ( v11
    && (*(_DWORD *)(a1 + 112) & 0x400000) != 0
    && (*(_DWORD *)(v11 + 40) & 1) != 0
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange) )
  {
    v51 = 1;
    GreAcquireSemaphoreSharedInternal((__int64)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v18);
  }
  else
  {
    v51 = 0;
  }
  v60 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v71);
  if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v11 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v60, (struct PDEVOBJ *)&v54);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v71, (struct PDEVOBJ *)&v54);
  }
  else
  {
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v71);
  }
  *(_QWORD *)v59 = *(_QWORD *)a1;
  ObjectOwner = GreGetObjectOwner(v59[0], 5);
  v73 = 0;
  v53 = ObjectOwner;
  v72 = *(_WORD *)(a1 + 12);
  if ( a3
    || HmgRemoveObject(*(struct HOBJ__ **)v59, 0, 1, a2 == 2, 5, &v73)
    || (unsigned int)(a2 - 1) <= 1 && HmgRemoveObject(*(struct HOBJ__ **)a1, 0, 0, a2 == 2, 5, &v73)
    || a2 == 3 && HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v73) )
  {
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v11 = v54;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported() >= 0 )
      vAccNotifyDeleteSurfaceWrap(a1);
    v21 = *(_DWORD *)(a1 + 112);
    if ( (v21 & 0x400000) == 0 || (v22 = v61) == 0 || !v11 )
    {
LABEL_52:
      v25 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v25);
        goto LABEL_98;
      }
      if ( v50 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_98;
      }
      v26 = v56;
      if ( v56 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v26);
          if ( BaseAddress )
          {
            if ( v57 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            }
          }
        }
        goto LABEL_98;
      }
      if ( (v13 & 8) == 0 )
      {
        if ( (v13 & 0x800) != 0 )
        {
          v63 = (struct _ERESOURCE *)ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v37 = *(struct _EPROCESS ***)(a1 + 264);
          if ( v37 )
          {
            v38 = a1 + 528;
            v39 = *(_QWORD *)(a1 + 528);
            if ( v39 != a1 + 528 )
            {
              if ( *(_QWORD *)(v39 + 8) != v38 || (v40 = *(_QWORD **)(a1 + 536), *v40 != v38) )
                __fastfail(3u);
              *v40 = v39;
              *(_QWORD *)(v39 + 8) = v40;
            }
            if ( BaseAddress && v58 )
              vUnmapKernelSectionForUserMapping(*v37, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((REGION **)v70);
          if ( v58 )
            ObfDereferenceObject(v58);
          SEMOBJ::vUnlock(&v63, v41, v42);
        }
        else if ( (v13 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_98;
      }
      if ( (v13 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_98:
        v43 = *(struct HOBJ__ **)v59;
        v44 = v73;
        v45 = v53;
        *(_QWORD *)(a1 + 488) = *(_QWORD *)v59;
        *(_DWORD *)(a1 + 496) = v44;
        *(_WORD *)(a1 + 500) = v72;
        *(_WORD *)(a1 + 502) = *(_WORD *)(a1 + 14);
        *(_DWORD *)(a1 + 512) = v45;
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(a1 + 520), 0LL);
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v43, v44, v45, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v46 = v64;
        if ( v64 && (int)IsGreDeleteWndSupported() >= 0 )
          GreDeleteWnd(v46);
        if ( v65 )
        {
          v66 = v65;
          XEPALOBJ::vUnrefPalette(&v66);
        }
        goto LABEL_105;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v30 = DWORD2(v68);
      v31 = ThreadWin32Thread;
      v32 = Object[1];
      if ( DWORD2(v68) )
        v32 = BaseAddress;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v29, v28);
      vUnmapKernelSectionForUserMapping(CurrentProcess, v32);
      if ( v31 && (v34 = *(_QWORD *)(v31 + 72)) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 8);
      }
      else
      {
        if ( !(_DWORD)v69 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 )
            UMPDEngFreeUserMem(BaseAddress);
          goto LABEL_79;
        }
        v35 = HIDWORD(v68);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v35, &Process) >= 0 )
      {
        v36 = BaseAddress;
        if ( v30 )
          v36 = Object[1];
        vUnmapKernelSectionForUserMapping(Process, v36);
        ObfDereferenceObject(Process);
      }
LABEL_79:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_98;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v23 = *(void (__fastcall **)(__int64))(v11 + 2664);
      if ( v23 )
      {
        v24 = a1 + 24;
LABEL_51:
        v23(v24);
        goto LABEL_52;
      }
      v23 = *(void (__fastcall **)(__int64))(v11 + 3448);
      if ( !v23 )
        goto LABEL_52;
    }
    else
    {
      v23 = *(void (__fastcall **)(__int64))(v11 + 2776);
      if ( !v23 )
        goto LABEL_52;
      if ( (v21 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0 )
          UMPDDrvDeleteDeviceBitmap(*(_QWORD *)(v11 + 1800), v22);
        goto LABEL_52;
      }
    }
    v24 = v61;
    goto LABEL_51;
  }
  if ( v73 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
    {
      EngSetLastError(0xAAu);
LABEL_26:
      v6 = 0;
      goto LABEL_105;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 160)
      && ((*(_DWORD *)a1 & 0x800000) == 0 || (*(_WORD *)(a1 + 102) & 0x200) == 0)
      && (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
    {
      goto LABEL_26;
    }
    v20 = *(_DWORD *)(a1 + 112);
    if ( (v20 & 0x800) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 320) )
      {
        *(_DWORD *)(a1 + 320) = 1;
        _InterlockedAdd(&glRenderEndDelete, 1u);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 112) = v20 | 0x1000000;
    }
  }
  DEC_SHARE_REF_CNT((struct OBJECT *)a1);
LABEL_105:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v71);
  NEEDGRELOCK::vUnlock(&v60);
  if ( v51 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v47);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v6;
}
