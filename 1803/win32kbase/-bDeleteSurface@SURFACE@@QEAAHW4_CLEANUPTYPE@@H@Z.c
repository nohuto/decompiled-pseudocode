/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C001CB70 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00224D8 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0022BF8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0022C48 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0022CF8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     GreGetObjectOwner @ 0x1C002EE00 (GreGetObjectOwner.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0031970 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0031A50 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EngFreeUserMem @ 0x1C003C200 (EngFreeUserMem.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004D190 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C005BF4C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C005D39C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C005D3E4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C006D2DC (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00764AC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00C249C (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int16 v13; // r15
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  int v19; // edx
  unsigned int ObjectOwner; // eax
  int v21; // eax
  int v22; // ecx
  __int64 v23; // r12
  void (__fastcall *v24)(__int64); // rax
  __int64 v25; // rcx
  HANDLE v26; // rbx
  HANDLE v27; // rbx
  __int64 ThreadWin32Thread; // rax
  int v29; // r15d
  __int64 v30; // r14
  PVOID v31; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v33; // rax
  int v34; // ecx
  PVOID v35; // rdx
  struct _EPROCESS **v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-98h]
  _BYTE v49[4]; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SecureHandle; // [rsp+78h] [rbp-88h]
  HANDLE v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  PVOID v54; // [rsp+90h] [rbp-70h]
  int v55[2]; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v59; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  _OWORD v66[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v67[128]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v68; // [rsp+1C0h] [rbp+C0h]
  unsigned int v69; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = 1;
  if ( (SURFACE *)a1 != SURFACE::pdibDefault && a1 )
  {
    v7 = 0LL;
    v8 = *(char **)(a1 + 72);
    v52 = 0LL;
    v53 = 0LL;
    SecureHandle = 0LL;
    v46 = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v52 = *(HANDLE *)(a1 + 192);
      v53 = *(_QWORD *)(a1 + 184);
      v46 = *(_DWORD *)(a1 + 216);
      v7 = &v8[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
      SecureHandle = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_OWORD *)(a1 + 272);
    v10 = *(_OWORD *)(a1 + 288);
    v11 = *(_QWORD *)(a1 + 48);
    v12 = *(_QWORD *)(a1 + 128);
    v13 = *(_WORD *)(a1 + 102);
    v57 = *(_QWORD *)(a1 + 24);
    v60 = *(_QWORD *)(a1 + 136);
    v54 = *(PVOID *)(a1 + 248);
    v14 = *(_DWORD *)(a1 + 320);
    v50 = v11;
    v61 = v12;
    BaseAddress = v8;
    LODWORD(Process) = v14;
    v66[0] = v9;
    v15 = *(_OWORD *)(a1 + 304);
    v66[1] = v10;
    v16 = *(_OWORD *)(a1 + 600);
    v66[2] = v15;
    v17 = *(_OWORD *)(a1 + 584);
    v64 = v16;
    *(_OWORD *)Object = v17;
    v65 = *(_QWORD *)(a1 + 616);
    if ( !v11
      || (*(_DWORD *)(a1 + 112) & 0x400000) == 0
      || (*(_DWORD *)(v11 + 40) & 1) == 0
      || (IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange),
          v19 = 1,
          IsSemaphoreOwnedOrSharedByCurrentThread) )
    {
      v19 = 0;
    }
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v49, v19);
    v56 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v67);
    if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v11 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v56, (struct PDEVOBJ *)&v50);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v67, (struct PDEVOBJ *)&v50);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v67);
    }
    *(_QWORD *)v55 = *(_QWORD *)a1;
    ObjectOwner = GreGetObjectOwner(*(_QWORD *)v55, 5LL);
    v69 = 0;
    v48 = ObjectOwner;
    v68 = *(_WORD *)(a1 + 12);
    if ( !a3
      && !HmgRemoveObject(v55[0], 0, 1, a2 == 2, 5, &v69)
      && ((unsigned int)(a2 - 1) > 1 || !HmgRemoveObject(*(_QWORD *)a1, 0, 0, a2 == 2, 5, &v69))
      && (a2 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v69)) )
    {
      if ( v69 == 1 )
      {
        if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          EngSetLastError(0xAAu);
LABEL_25:
          v6 = 0;
LABEL_104:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v67);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v56);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v49);
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
        v21 = *(_DWORD *)(a1 + 112);
        if ( (v21 & 0x800) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 320) )
          {
            *(_DWORD *)(a1 + 320) = 1;
            _InterlockedAdd(&glRenderEndDelete, 1u);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 112) = v21 | 0x1000000;
        }
      }
      DEC_SHARE_REF_CNT((struct OBJECT *)a1);
      goto LABEL_104;
    }
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v11 = v50;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported() >= 0 )
      vAccNotifyDeleteSurfaceWrap(a1);
    v22 = *(_DWORD *)(a1 + 112);
    if ( (v22 & 0x400000) == 0 || (v23 = v57) == 0 || !v11 )
    {
LABEL_51:
      v26 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          MmUnsecureVirtualMemory(v26);
        goto LABEL_97;
      }
      if ( v46 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_97;
      }
      v27 = v52;
      if ( v52 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          MmUnsecureVirtualMemory(v27);
          if ( BaseAddress )
          {
            if ( v53 )
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
      if ( (v13 & 8) == 0 )
      {
        if ( (v13 & 0x800) != 0 )
        {
          v59 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v36 = *(struct _EPROCESS ***)(a1 + 264);
          if ( v36 )
          {
            v37 = a1 + 528;
            v38 = *(_QWORD *)(a1 + 528);
            if ( v38 != a1 + 528 )
            {
              if ( *(_QWORD *)(v38 + 8) != v37 || (v39 = *(_QWORD **)(a1 + 536), *v39 != v37) )
                __fastfail(3u);
              *v39 = v38;
              *(_QWORD *)(v38 + 8) = v39;
            }
            if ( BaseAddress && v54 )
              vUnmapKernelSectionForUserMapping(*v36, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)v66);
          if ( v54 )
            ObfDereferenceObject(v54);
          SEMOBJ::vUnlock((SEMOBJ *)&v59);
        }
        else if ( (v13 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_97;
      }
      if ( (v13 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_97:
        v40 = *(_QWORD *)v55;
        v41 = v69;
        v42 = v48;
        *(_QWORD *)(a1 + 488) = *(_QWORD *)v55;
        *(_DWORD *)(a1 + 496) = v41;
        *(_WORD *)(a1 + 500) = v68;
        *(_WORD *)(a1 + 502) = *(_WORD *)(a1 + 14);
        *(_DWORD *)(a1 + 512) = v42;
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(a1 + 520), 0LL);
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v40, v41, v42, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v43 = v60;
        if ( v60 && (int)IsGreDeleteWndSupported() >= 0 )
          GreDeleteWnd(v43);
        if ( v61 )
        {
          v62 = v61;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v62);
        }
        goto LABEL_104;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v29 = DWORD2(v64);
      v30 = ThreadWin32Thread;
      v31 = Object[1];
      if ( DWORD2(v64) )
        v31 = BaseAddress;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
      vUnmapKernelSectionForUserMapping(CurrentProcess, v31);
      if ( v30 && (v33 = *(_QWORD *)(v30 + 72)) != 0 )
      {
        v34 = *(_DWORD *)(v33 + 8);
      }
      else
      {
        if ( !(_DWORD)v65 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 )
            UMPDEngFreeUserMem(BaseAddress);
          goto LABEL_78;
        }
        v34 = HIDWORD(v64);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v34, &Process) >= 0 )
      {
        v35 = BaseAddress;
        if ( v29 )
          v35 = Object[1];
        vUnmapKernelSectionForUserMapping(Process, v35);
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
      v24 = *(void (__fastcall **)(__int64))(v11 + 2656);
      if ( v24 )
      {
        v25 = a1 + 24;
LABEL_50:
        v24(v25);
        goto LABEL_51;
      }
      v24 = *(void (__fastcall **)(__int64))(v11 + 3440);
      if ( !v24 )
        goto LABEL_51;
    }
    else
    {
      v24 = *(void (__fastcall **)(__int64))(v11 + 2768);
      if ( !v24 )
        goto LABEL_51;
      if ( (v22 & 0x40000) != 0 )
      {
        if ( !a2 && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0 )
          UMPDDrvDeleteDeviceBitmap(*(_QWORD *)(v11 + 1792), v23);
        goto LABEL_51;
      }
    }
    v25 = v57;
    goto LABEL_50;
  }
  return v6;
}
