/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0068550 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BAB5C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 * Callees:
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0012D70 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0017A1C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C0018B30 (HmgRemoveObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002A0C0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C968 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C998 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002E230 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EngFreeUserMem @ 0x1C0037B60 (EngFreeUserMem.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C003FED0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C007080C (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00778D4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007933C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007CBF0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C0098F48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00AE4E4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BB020 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C0122CB0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int16 v12; // r15
  __int128 v13; // xmm0
  void *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v18; // rbx
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
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  int v50; // [rsp+5Ch] [rbp-A4h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SecureHandle; // [rsp+78h] [rbp-88h]
  HANDLE v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h]
  PVOID v57; // [rsp+90h] [rbp-70h]
  int v58[2]; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  struct _ERESOURCE *v62; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v67; // [rsp+E8h] [rbp-18h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  _OWORD v69[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v70[128]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v71; // [rsp+1C0h] [rbp+C0h]
  unsigned int v72; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( (SURFACE *)a1 != SURFACE::pdibDefault && a1 )
  {
    v7 = 0LL;
    v8 = *(char **)(a1 + 72);
    v55 = 0LL;
    v56 = 0LL;
    SecureHandle = 0LL;
    v50 = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v55 = *(HANDLE *)(a1 + 192);
      v56 = *(_QWORD *)(a1 + 184);
      v50 = *(_DWORD *)(a1 + 216);
      v7 = &v8[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
      SecureHandle = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_OWORD *)(a1 + 288);
    v11 = *(_QWORD *)(a1 + 128);
    v12 = *(_WORD *)(a1 + 102);
    v69[0] = *(_OWORD *)(a1 + 272);
    v60 = v9;
    v13 = *(_OWORD *)(a1 + 304);
    v63 = *(_QWORD *)(a1 + 136);
    v14 = *(void **)(a1 + 248);
    v69[2] = v13;
    v64 = v11;
    v15 = *(_OWORD *)(a1 + 584);
    v69[1] = v10;
    v57 = v14;
    v16 = *(_OWORD *)(a1 + 600);
    LODWORD(v14) = *(_DWORD *)(a1 + 320);
    *(_OWORD *)Object = v15;
    BaseAddress = v8;
    v68 = *(_QWORD *)(a1 + 616);
    LODWORD(Process) = (_DWORD)v14;
    v67 = v16;
    IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v49,
      IsSemaphoreOwnedOrSharedByCurrentThread == 0);
    v18 = *(_QWORD *)(a1 + 48);
    v53 = v18;
    if ( (!v18 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v18 + 40) & 1) == 0) && v49 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v49 = 0;
    }
    v59 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v70);
    if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v18 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v59, (struct PDEVOBJ *)&v53);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v70, (struct PDEVOBJ *)&v53);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v70);
    }
    *(_QWORD *)v58 = *(_QWORD *)a1;
    ObjectOwner = GreGetObjectOwner(v58[0], 5);
    v72 = 0;
    v52 = ObjectOwner;
    v71 = *(_WORD *)(a1 + 12);
    if ( !a3
      && !HmgRemoveObject(*(struct HOBJ__ **)v58, 0, 1, a2 == 2, 5, &v72)
      && ((unsigned int)(a2 - 1) > 1 || !HmgRemoveObject(*(struct HOBJ__ **)a1, 0, 0, a2 == 2, 5, &v72))
      && (a2 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v72)) )
    {
      if ( v72 == 1 )
      {
        if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          EngSetLastError(0xAAu);
LABEL_25:
          v6 = 0;
LABEL_104:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v70);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v59);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v49);
          return v6;
        }
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 160)
          && ((*(_DWORD *)a1 & 0x800000) == 0 || (*(_WORD *)(a1 + 102) & 0x200) == 0)
          && (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          goto LABEL_25;
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
      goto LABEL_104;
    }
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v18 = v53;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported() >= 0 )
      vAccNotifyDeleteSurfaceWrap(a1);
    v21 = *(_DWORD *)(a1 + 112);
    if ( (v21 & 0x400000) == 0 || (v22 = v60) == 0 || !v18 )
    {
LABEL_51:
      v25 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v25);
        goto LABEL_97;
      }
      if ( v50 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_97;
      }
      v26 = v55;
      if ( v55 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v26);
          if ( BaseAddress )
          {
            if ( v56 )
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
        goto LABEL_97;
      }
      if ( (v12 & 8) == 0 )
      {
        if ( (v12 & 0x800) != 0 )
        {
          v62 = (struct _ERESOURCE *)ghsemMapRot;
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
            if ( BaseAddress && v57 )
              vUnmapKernelSectionForUserMapping(*v37, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)v69);
          if ( v57 )
            ObfDereferenceObject(v57);
          SEMOBJ::vUnlock(&v62, v41, v42);
        }
        else if ( (v12 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_97;
      }
      if ( (v12 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_97:
        v43 = *(struct HOBJ__ **)v58;
        v44 = v72;
        v45 = v52;
        *(_QWORD *)(a1 + 488) = *(_QWORD *)v58;
        *(_DWORD *)(a1 + 496) = v44;
        *(_WORD *)(a1 + 500) = v71;
        *(_WORD *)(a1 + 502) = *(_WORD *)(a1 + 14);
        *(_DWORD *)(a1 + 512) = v45;
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(a1 + 520), 0LL);
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v43, v44, v45, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v46 = v63;
        if ( v63 && (int)IsGreDeleteWndSupported() >= 0 )
          GreDeleteWnd(v46);
        if ( v64 )
        {
          v65 = v64;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v65);
        }
        goto LABEL_104;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v30 = DWORD2(v67);
      v31 = ThreadWin32Thread;
      v32 = Object[1];
      if ( DWORD2(v67) )
        v32 = BaseAddress;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v29, v28);
      vUnmapKernelSectionForUserMapping(CurrentProcess, v32);
      if ( v31 && (v34 = *(_QWORD *)(v31 + 72)) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 8);
      }
      else
      {
        if ( !(_DWORD)v68 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 )
            UMPDEngFreeUserMem(BaseAddress);
          goto LABEL_78;
        }
        v35 = HIDWORD(v67);
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
LABEL_78:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v23 = *(void (__fastcall **)(__int64))(v18 + 2664);
      if ( v23 )
      {
        v24 = a1 + 24;
LABEL_50:
        v23(v24);
        goto LABEL_51;
      }
      v23 = *(void (__fastcall **)(__int64))(v18 + 3448);
      if ( !v23 )
        goto LABEL_51;
    }
    else
    {
      v23 = *(void (__fastcall **)(__int64))(v18 + 2776);
      if ( !v23 )
        goto LABEL_51;
      if ( (v21 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0 )
          UMPDDrvDeleteDeviceBitmap(*(_QWORD *)(v18 + 1800), v22);
        goto LABEL_51;
      }
    }
    v24 = v60;
    goto LABEL_50;
  }
  return v6;
}
