/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C003E0E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C001D634 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     GreGetObjectOwner @ 0x1C0020BF0 (GreGetObjectOwner.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002AB64 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002B910 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0048970 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C005E0EC (-vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0069E20 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C006D1B0 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0070990 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C008840C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C009D8E0 (EngFreeUserMem.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A05CC (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00ABEC0 (GrepUnsecureVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C00F8AF0 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  void *v5; // r12
  char *v6; // rdx
  char *v7; // r14
  void *v8; // r15
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int16 v12; // r13
  __int128 v13; // xmm0
  void *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned int ObjectOwner; // eax
  int v22; // eax
  int v23; // ecx
  void (__fastcall *v24)(__int64); // rax
  __int64 v25; // rcx
  const struct reg_FeatureDescriptor *v26; // rcx
  const struct reg_FeatureDescriptor *v27; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rcx
  int v30; // r15d
  PVOID v31; // rbx
  __int64 v32; // r14
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v34; // rax
  int v35; // ecx
  PVOID v36; // rdx
  struct _EPROCESS **v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  PEPROCESS Process; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  PVOID v55; // [rsp+90h] [rbp-70h]
  int v56[2]; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  HSEMAPHORE v58; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+C8h] [rbp-38h]
  __int128 v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  _OWORD v65[3]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v66[176]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v67; // [rsp+1E0h] [rbp+E0h] BYREF
  int v68; // [rsp+1E8h] [rbp+E8h]
  int v69; // [rsp+1F0h] [rbp+F0h]
  int v70; // [rsp+1F8h] [rbp+F8h] BYREF

  v69 = a3;
  v68 = a2;
  v4 = 1;
  if ( (SURFACE *)a1 != SURFACE::pdibDefault && a1 )
  {
    v5 = 0LL;
    v6 = *(char **)(a1 + 72);
    v7 = 0LL;
    v54 = 0LL;
    v8 = 0LL;
    v48 = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v5 = *(void **)(a1 + 192);
      v8 = *(void **)(a1 + 224);
      v54 = *(_QWORD *)(a1 + 184);
      v48 = *(_DWORD *)(a1 + 216);
      v7 = &v6[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_OWORD *)(a1 + 288);
    v11 = *(_QWORD *)(a1 + 128);
    v12 = *(_WORD *)(a1 + 102);
    v65[0] = *(_OWORD *)(a1 + 272);
    v53 = v9;
    v13 = *(_OWORD *)(a1 + 304);
    v59 = *(_QWORD *)(a1 + 136);
    v14 = *(void **)(a1 + 248);
    v65[2] = v13;
    v60 = v11;
    v15 = *(_OWORD *)(a1 + 584);
    v65[1] = v10;
    v55 = v14;
    v16 = *(_OWORD *)(a1 + 600);
    LODWORD(v14) = *(_DWORD *)(a1 + 320);
    *(_OWORD *)Object = v15;
    BaseAddress = v6;
    v64 = *(_QWORD *)(a1 + 616);
    LODWORD(Process) = (_DWORD)v14;
    v63 = v16;
    IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v70,
      IsSemaphoreOwnedOrSharedByCurrentThread == 0,
      v18);
    v20 = *(_QWORD *)(a1 + 48);
    v52 = v20;
    if ( (!v20 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v20 + 40) & 1) == 0) && v70 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v19);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v70 = 0;
    }
    v57 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v66);
    if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v20 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v57, (struct PDEVOBJ *)&v52);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v66, (struct PDEVOBJ *)&v52);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v66);
    }
    *(_QWORD *)v56 = *(_QWORD *)a1;
    ObjectOwner = GreGetObjectOwner(v56[0], 5);
    v67 = 0;
    v51 = ObjectOwner;
    if ( !v69 )
    {
      LODWORD(RegionSize) = v68 == 2;
      if ( !HmgRemoveObject(*(struct HOBJ__ **)v56, 0, 1, RegionSize, 5, &v67)
        && ((unsigned int)(v68 - 1) > 1 || !HmgRemoveObject(*(struct HOBJ__ **)a1, 0, 0, RegionSize, 5, &v67))
        && (v68 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v67)) )
      {
        if ( v67 == 1 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
          {
            EngSetLastError(0xAAu);
LABEL_25:
            v4 = 0;
LABEL_109:
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v57, v42, v43);
            NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
              (NEEDDYNAMICMODECHANGESHARELOCK *)&v70,
              v44,
              v45);
            return v4;
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
          v22 = *(_DWORD *)(a1 + 112);
          if ( (v22 & 0x800) != 0 )
          {
            if ( !*(_DWORD *)(a1 + 320) )
            {
              *(_DWORD *)(a1 + 320) = 1;
              _InterlockedAdd(&glRenderEndDelete, 1u);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 112) = v22 | 0x1000000;
          }
        }
        DEC_SHARE_REF_CNT((struct OBJECT *)a1);
        goto LABEL_109;
      }
    }
    if ( (_DWORD)Process )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v20 = v52;
    }
    if ( (int)IsvAccNotifyDeleteSurfaceSupported() >= 0 )
      vAccNotifyDeleteSurfaceWrap(a1);
    v23 = *(_DWORD *)(a1 + 112);
    if ( (v23 & 0x400000) == 0 || !v53 || !v20 )
    {
LABEL_51:
      if ( v8 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          if ( (unsigned int)EvaluateCurrentState(v26) )
            GrepUnsecureVirtualMemory(v8);
          else
            MmUnsecureVirtualMemory(v8);
        }
        goto LABEL_102;
      }
      if ( v48 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_102;
      }
      if ( v5 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          if ( (unsigned int)EvaluateCurrentState(v27) )
            GrepUnsecureVirtualMemory(v5);
          else
            MmUnsecureVirtualMemory(v5);
          if ( BaseAddress )
          {
            if ( v54 )
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
        goto LABEL_102;
      }
      if ( (v12 & 8) == 0 )
      {
        if ( (v12 & 0x800) != 0 )
        {
          v58 = ghsemMapRot;
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
            if ( BaseAddress && v55 )
              vUnmapKernelSectionForUserMapping(*v37, BaseAddress);
          }
          W32PIDLOCK::vCleanUp((REGION **)v65);
          if ( v55 )
            ObfDereferenceObject(v55);
          SEMOBJ::vUnlock((PERESOURCE *)&v58);
        }
        else if ( (v12 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_102;
      }
      if ( (v12 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_102:
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, *(_QWORD *)v56, v67, v51, 0LL, 0LL, 0);
        SURFACE::Free((struct _SLIST_ENTRY *)a1);
        v41 = v59;
        if ( v59 && (int)IsGreDeleteWndSupported() >= 0 )
          GreDeleteWnd(v41);
        if ( v60 )
        {
          v61 = v60;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v61);
        }
        goto LABEL_109;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v30 = DWORD2(v63);
      v31 = Object[1];
      v32 = ThreadWin32Thread;
      if ( DWORD2(v63) )
        v31 = BaseAddress;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v29);
      vUnmapKernelSectionForUserMapping(CurrentProcess, v31);
      if ( v32 && (v34 = *(_QWORD *)(v32 + 72)) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 8);
      }
      else
      {
        if ( !(_DWORD)v64 )
        {
          if ( (int)IsUMPDEngFreeUserMemSupported() >= 0 )
            UMPDEngFreeUserMem(BaseAddress);
          goto LABEL_83;
        }
        v35 = HIDWORD(v63);
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
LABEL_83:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_102;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v24 = *(void (__fastcall **)(__int64))(v20 + 2664);
      if ( v24 )
      {
        v25 = a1 + 24;
LABEL_50:
        v24(v25);
        goto LABEL_51;
      }
      v24 = *(void (__fastcall **)(__int64))(v20 + 3448);
      if ( !v24 )
        goto LABEL_51;
    }
    else
    {
      v24 = *(void (__fastcall **)(__int64))(v20 + 2776);
      if ( !v24 )
        goto LABEL_51;
      if ( (v23 & 0x40000) != 0 )
      {
        if ( !v68 && (int)IsUMPDDrvDeleteDeviceBitmapSupported() >= 0 )
          UMPDDrvDeleteDeviceBitmap(*(_QWORD *)(v20 + 1800), v53);
        goto LABEL_51;
      }
    }
    v25 = v53;
    goto LABEL_50;
  }
  return v4;
}
