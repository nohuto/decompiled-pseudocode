/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C0052C00
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00578F4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005799C (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r15d
  int v10; // esi
  unsigned __int8 *v11; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int8 *result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KTHREAD *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  CHAR *v33; // rdx
  void **v34; // r9
  struct _CAPTUREBUF *v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // r8d
  int v38; // eax
  _DWORD *v39; // rax
  int v40; // r8d
  void **v41; // r9
  unsigned int v42; // r8d
  CHAR *v43; // rdx
  int v44; // eax
  unsigned int v45; // r8d
  struct _KTHREAD *v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rbx
  __int64 v54; // rsi
  __int64 *v55; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v58; // rcx
  bool v59; // si
  int v60; // r15d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct _KTHREAD *v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 *v69; // rax
  unsigned int v70; // eax
  tagDomLock *v71; // rax
  __int64 v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // rbx
  PVOID *v75; // rdx
  char v76; // [rsp+30h] [rbp-3F8h]
  unsigned int v77; // [rsp+34h] [rbp-3F4h]
  unsigned int v78; // [rsp+38h] [rbp-3F0h]
  int v80; // [rsp+58h] [rbp-3D0h] BYREF
  int v81[6]; // [rsp+70h] [rbp-3B8h] BYREF
  __int128 v82; // [rsp+88h] [rbp-3A0h]
  __int64 v83; // [rsp+98h] [rbp-390h]
  unsigned int v84; // [rsp+B0h] [rbp-378h]
  __int64 v85; // [rsp+B8h] [rbp-370h]
  unsigned __int64 v86; // [rsp+C0h] [rbp-368h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+C8h] [rbp-360h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-350h] BYREF
  _QWORD *v89; // [rsp+E0h] [rbp-348h]
  __int64 v90; // [rsp+E8h] [rbp-340h]
  _QWORD v91[10]; // [rsp+F0h] [rbp-338h] BYREF
  _DWORD v92[44]; // [rsp+140h] [rbp-2E8h] BYREF
  unsigned __int8 v93[512]; // [rsp+1F0h] [rbp-238h] BYREF

  v85 = a3;
  v77 = 0;
  v78 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v92, 0, 0xA8uLL);
  v11 = (unsigned __int8 *)v92;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v82 = 0uLL;
  v83 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v19 = 0LL;
  if ( a4 )
  {
    v20 = *(_QWORD *)(a4 + 56);
    if ( v20 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || v20 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v21 = *(_DWORD *)(a4 + 80);
      if ( v21 + 2 < v21 )
        goto LABEL_104;
      v77 = v21 + 2;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v22 = 2LL * (v21 + 2);
        if ( v22 > 0xFFFFFFFF )
          goto LABEL_104;
        v77 = v22;
      }
      v9 = 1;
    }
    v23 = *(_QWORD *)(a4 + 64);
    if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v17 = *(unsigned int *)(a4 + 100);
      if ( *(_DWORD *)(a4 + 100) >> 31 != v10 || v23 >= (unsigned __int64)MmSystemRangeStart )
      {
        v24 = *(_DWORD *)(a4 + 96);
        if ( v24 + 2 < v24 )
          goto LABEL_104;
        v78 = v24 + 2;
        if ( (v17 & 0x80000000) != 0LL && (a7 & 1) == 0 )
        {
          v25 = 2LL * (v24 + 2);
          if ( v25 > 0xFFFFFFFF )
            goto LABEL_104;
          v78 = v25;
        }
        ++v9;
      }
    }
  }
  v17 = v77 + v78;
  if ( (unsigned int)v17 < v77 )
    goto LABEL_104;
  v84 = v77 + v78;
  if ( v9 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v9, v17, v93, 1, 0x200uLL);
    v11 = result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v92;
    memset(&v92[1], 0, 0xA4uLL);
    v92[0] = 168;
  }
  v30 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v28, v27, v29) )
    PsGetThreadWin32Thread(v30);
  memset(v91, 0, 24);
  if ( v11 != (unsigned __int8 *)v92 && v11 != v93 )
    PushW32ThreadLock((__int64)v11, v91, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v19;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v85;
  *((_QWORD *)v11 + 8) = a4 != 0;
  if ( !a4 )
    goto LABEL_67;
  *(_DWORD *)(a4 + 52) = 0;
  *(_DWORD *)(a4 + 76) = 0;
  *(_OWORD *)(v11 + 72) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 88) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v11 + 104) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v11 + 120) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v11 + 136) = *(_OWORD *)(a4 + 64);
  if ( v77 )
  {
    if ( *(int *)(a4 + 84) < 0 )
    {
      v39 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v39 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v36 = 3;
          v33 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v80 = ((unsigned __int16)(*v39 >> 8) << 16) | 0xFFFF;
          v36 = 4;
          v33 = (CHAR *)&v80;
        }
        v34 = (void **)(v11 + 128);
        v35 = (struct _CAPTUREBUF *)v11;
      }
      else
      {
        v34 = (void **)(v11 + 128);
        v40 = *(_DWORD *)(a4 + 80);
        v33 = *(CHAR **)(a4 + 88);
        v35 = (struct _CAPTUREBUF *)v11;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v33, 2 * v40 + 2, v34) < 0 )
            goto LABEL_104;
          goto LABEL_57;
        }
        v36 = v40 + 1;
      }
    }
    else
    {
      v33 = *(CHAR **)(a4 + 56);
      v34 = (void **)(v11 + 128);
      v35 = (struct _CAPTUREBUF *)v11;
      if ( *(_WORD *)v33 == 0xFFFF )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v33;
          v36 = 3;
        }
        else
        {
          v36 = 4;
        }
      }
      else
      {
        v37 = *(_DWORD *)(a4 + 80);
        v33 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v38 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v33, (v37 >> 1) + 1, v34);
          goto LABEL_54;
        }
        v36 = v37 + 2;
      }
    }
    v38 = CaptureCallbackData(v35, v33, v36, v34);
LABEL_54:
    if ( v38 < 0 )
      goto LABEL_104;
  }
LABEL_57:
  if ( v78 )
  {
    v41 = (void **)(v11 + 136);
    v42 = *(_DWORD *)(a4 + 96);
    v43 = *(CHAR **)(a4 + 104);
    if ( *(int *)(a4 + 100) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v44 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v43, 2 * v42 + 2, v41);
LABEL_66:
        if ( v44 < 0 )
          goto LABEL_104;
        goto LABEL_67;
      }
      v45 = v42 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v44 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v43, (v42 >> 1) + 1, v41);
        goto LABEL_66;
      }
      v45 = v42 + 2;
    }
    v44 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v43, v45, v41);
    goto LABEL_66;
  }
LABEL_67:
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  v46 = KeGetCurrentThread();
  v47 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31, v17) )
  {
    v49 = (__int64 *)PsGetThreadWin32Thread(v46);
    if ( v49 )
      v47 = *v49;
  }
  v88 = *(_QWORD *)(v47 + 408);
  *(_QWORD *)(v47 + 408) = &v88;
  v89 = a1;
  if ( a1 )
    HMLockObject(a1);
  v50 = *(_QWORD *)(v13 + 472);
  v82 = *(_OWORD *)(v50 + 64);
  v83 = *(_QWORD *)(v50 + 80);
  *(_QWORD *)(v50 + 72) = v19;
  if ( a1 )
    v51 = *a1;
  else
    v51 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v51;
  if ( a1 )
    v52 = *(_QWORD *)(a1[5] + 224LL);
  else
    v52 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v52;
  if ( gdwInAtomicOperation )
  {
    v52 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v53 = KeGetCurrentThread();
  v54 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v52, gdwInAtomicOperation, v48) )
  {
    v55 = (__int64 *)PsGetThreadWin32Thread(v53);
    if ( v55 )
      v54 = *v55;
  }
  v76 = *(_BYTE *)(v54 + 1480);
  *(_BYTE *)(v54 + 1480) = 0;
  if ( (v76 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v54 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v59 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v58);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v60 = KeUserModeCallback(10LL, v11, *(unsigned int *)v11, &v86, v81);
  EtwTraceEndCallback(10LL);
  if ( v59 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v64 = KeGetCurrentThread();
  v65 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v62, v61, v63) )
  {
    v69 = (__int64 *)PsGetThreadWin32Thread(v64);
    if ( v69 )
      v65 = *v69;
  }
  if ( (v76 & 1) != 0 )
  {
    v70 = DLT_THREADINFO::getDLT();
    v71 = (tagDomLock *)GetDomainLockRef(v70);
    tagDomLock::LockShared(v71);
    tagObjLock::LockExclusive((tagObjLock *)(v65 + 384));
  }
  *(_BYTE *)(v65 + 1480) = v76;
  ThreadUnlock1(v67, v66, v68);
  v72 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v72 + 64) = v82;
  *(_QWORD *)(v72 + 80) = v83;
  if ( v60 >= 0 && v81[0] == 24 )
  {
    v73 = (__int64 *)v86;
    if ( v86 + 8 < v86 || v86 + 8 > MmUserProbeAddress )
      v73 = (__int64 *)MmUserProbeAddress;
    v74 = *v73;
    v91[4] = *v73;
    goto LABEL_105;
  }
LABEL_104:
  v74 = 0LL;
LABEL_105:
  if ( v11 != (unsigned __int8 *)v92 && v11 != v93 )
  {
    v75 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v75, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v91, (__int64)v75, v17);
  }
  return (unsigned __int8 *)v74;
}
