/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C00B1DA0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E3B50 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E3BF8 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int8 *result; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  CHAR *v36; // rdx
  void **v37; // r9
  struct _CAPTUREBUF *v38; // rcx
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  int v41; // eax
  _DWORD *v42; // rax
  int v43; // r8d
  void **v44; // r9
  unsigned int v45; // r8d
  CHAR *v46; // rdx
  int v47; // eax
  unsigned int v48; // r8d
  struct _KTHREAD *v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct _KTHREAD *v57; // rbx
  __int64 v58; // rsi
  __int64 *v59; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v62; // rcx
  bool v63; // si
  int v64; // r15d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  struct _KTHREAD *v69; // r14
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 *v74; // rax
  unsigned int v75; // eax
  tagDomLock *v76; // rax
  __int64 v77; // rax
  __int64 *v78; // rcx
  __int64 v79; // rbx
  PVOID *v80; // rdx
  char v81; // [rsp+30h] [rbp-3F8h]
  unsigned int v82; // [rsp+34h] [rbp-3F4h]
  unsigned int v83; // [rsp+38h] [rbp-3F0h]
  int v85; // [rsp+58h] [rbp-3D0h] BYREF
  int v86[6]; // [rsp+70h] [rbp-3B8h] BYREF
  __int128 v87; // [rsp+88h] [rbp-3A0h]
  __int64 v88; // [rsp+98h] [rbp-390h]
  unsigned int v89; // [rsp+B0h] [rbp-378h]
  __int64 v90; // [rsp+B8h] [rbp-370h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-368h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+C8h] [rbp-360h] BYREF
  __int64 v93; // [rsp+D8h] [rbp-350h] BYREF
  _QWORD *v94; // [rsp+E0h] [rbp-348h]
  __int64 v95; // [rsp+E8h] [rbp-340h]
  _QWORD v96[10]; // [rsp+F0h] [rbp-338h] BYREF
  _DWORD v97[44]; // [rsp+140h] [rbp-2E8h] BYREF
  unsigned __int8 v98[512]; // [rsp+1F0h] [rbp-238h] BYREF

  v90 = a3;
  v82 = 0;
  v83 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v97, 0, 0xA8uLL);
  v11 = (unsigned __int8 *)v97;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v87 = 0uLL;
  v88 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16, v17) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v21 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v21 = 0LL;
  if ( a4 )
  {
    v22 = *(_QWORD *)(a4 + 56);
    if ( v22 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || v22 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v23 = *(_DWORD *)(a4 + 80);
      if ( v23 + 2 < v23 )
        goto LABEL_104;
      v82 = v23 + 2;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v24 = 2LL * (v23 + 2);
        if ( v24 > 0xFFFFFFFF )
          goto LABEL_104;
        v82 = v24;
      }
      v9 = 1;
    }
    v25 = *(_QWORD *)(a4 + 64);
    if ( (v25 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v18 = *(unsigned int *)(a4 + 100);
      if ( *(_DWORD *)(a4 + 100) >> 31 != v10 || v25 >= (unsigned __int64)MmSystemRangeStart )
      {
        v26 = *(_DWORD *)(a4 + 96);
        if ( v26 + 2 < v26 )
          goto LABEL_104;
        v83 = v26 + 2;
        if ( (v18 & 0x80000000) != 0LL && (a7 & 1) == 0 )
        {
          v27 = 2LL * (v26 + 2);
          if ( v27 > 0xFFFFFFFF )
            goto LABEL_104;
          v83 = v27;
        }
        ++v9;
      }
    }
  }
  v18 = v82 + v83;
  if ( (unsigned int)v18 < v82 )
    goto LABEL_104;
  v89 = v82 + v83;
  if ( v9 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v9, v18, v98, 1, 0x200uLL);
    v11 = result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v97;
    memset(&v97[1], 0, 0xA4uLL);
    v97[0] = 168;
  }
  v33 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v29, v31, v32) )
    PsGetThreadWin32Thread(v33);
  memset(v96, 0, 24);
  if ( v11 != (unsigned __int8 *)v97 && v11 != v98 )
    PushW32ThreadLock((__int64)v11, v96, (__int64)Win32FreePool, v19);
  *((_QWORD *)v11 + 5) = v21;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v90;
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
  if ( v82 )
  {
    if ( *(int *)(a4 + 84) < 0 )
    {
      v42 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v42 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v39 = 3;
          v36 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v85 = ((unsigned __int16)(*v42 >> 8) << 16) | 0xFFFF;
          v39 = 4;
          v36 = (CHAR *)&v85;
        }
        v37 = (void **)(v11 + 128);
        v38 = (struct _CAPTUREBUF *)v11;
      }
      else
      {
        v37 = (void **)(v11 + 128);
        v43 = *(_DWORD *)(a4 + 80);
        v36 = *(CHAR **)(a4 + 88);
        v38 = (struct _CAPTUREBUF *)v11;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v36, 2 * v43 + 2, v37) < 0 )
            goto LABEL_104;
          goto LABEL_57;
        }
        v39 = v43 + 1;
      }
    }
    else
    {
      v36 = *(CHAR **)(a4 + 56);
      v37 = (void **)(v11 + 128);
      v38 = (struct _CAPTUREBUF *)v11;
      if ( *(_WORD *)v36 == 0xFFFF )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v36;
          v39 = 3;
        }
        else
        {
          v39 = 4;
        }
      }
      else
      {
        v40 = *(_DWORD *)(a4 + 80);
        v36 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v41 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v36, (v40 >> 1) + 1, v37);
          goto LABEL_54;
        }
        v39 = v40 + 2;
      }
    }
    v41 = CaptureCallbackData(v38, v36, v39, v37);
LABEL_54:
    if ( v41 < 0 )
      goto LABEL_104;
  }
LABEL_57:
  if ( v83 )
  {
    v44 = (void **)(v11 + 136);
    v45 = *(_DWORD *)(a4 + 96);
    v46 = *(CHAR **)(a4 + 104);
    if ( *(int *)(a4 + 100) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v47 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v46, 2 * v45 + 2, v44);
LABEL_66:
        if ( v47 < 0 )
          goto LABEL_104;
        goto LABEL_67;
      }
      v48 = v45 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v47 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v46, (v45 >> 1) + 1, v44);
        goto LABEL_66;
      }
      v48 = v45 + 2;
    }
    v47 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v46, v48, v44);
    goto LABEL_66;
  }
LABEL_67:
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  v49 = KeGetCurrentThread();
  v50 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v34, v18, v19) )
  {
    v53 = (__int64 *)PsGetThreadWin32Thread(v49);
    if ( v53 )
      v50 = *v53;
  }
  v93 = *(_QWORD *)(v50 + 408);
  *(_QWORD *)(v50 + 408) = &v93;
  v94 = a1;
  if ( a1 )
    HMLockObject(a1);
  v54 = *(_QWORD *)(v13 + 472);
  v87 = *(_OWORD *)(v54 + 64);
  v88 = *(_QWORD *)(v54 + 80);
  *(_QWORD *)(v54 + 72) = v21;
  if ( a1 )
    v55 = *a1;
  else
    v55 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v55;
  if ( a1 )
    v56 = *(_QWORD *)(a1[5] + 224LL);
  else
    v56 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v56;
  if ( gdwInAtomicOperation )
  {
    v56 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v57 = KeGetCurrentThread();
  v58 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v56, gdwInAtomicOperation, v51, v52) )
  {
    v59 = (__int64 *)PsGetThreadWin32Thread(v57);
    if ( v59 )
      v58 = *v59;
  }
  v81 = *(_BYTE *)(v58 + 1480);
  *(_BYTE *)(v58 + 1480) = 0;
  if ( (v81 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v58 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v63 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v62);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v64 = KeUserModeCallback(10LL, v11, *(unsigned int *)v11, &v91, v86);
  EtwTraceEndCallback(10LL);
  if ( v63 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v69 = KeGetCurrentThread();
  v70 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v66, v65, v67, v68) )
  {
    v74 = (__int64 *)PsGetThreadWin32Thread(v69);
    if ( v74 )
      v70 = *v74;
  }
  if ( (v81 & 1) != 0 )
  {
    v75 = DLT_THREADINFO::getDLT();
    v76 = (tagDomLock *)GetDomainLockRef(v75);
    tagDomLock::LockShared(v76);
    tagObjLock::LockExclusive((tagObjLock *)(v70 + 384));
  }
  *(_BYTE *)(v70 + 1480) = v81;
  ThreadUnlock1(v72, v71, v73);
  v77 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v77 + 64) = v87;
  *(_QWORD *)(v77 + 80) = v88;
  if ( v64 >= 0 && v86[0] == 24 )
  {
    v78 = (__int64 *)v91;
    if ( v91 + 8 < v91 || v91 + 8 > MmUserProbeAddress )
      v78 = (__int64 *)MmUserProbeAddress;
    v79 = *v78;
    v96[4] = *v78;
    goto LABEL_105;
  }
LABEL_104:
  v79 = 0LL;
LABEL_105:
  if ( v11 != (unsigned __int8 *)v97 && v11 != v98 )
  {
    v80 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v80, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v96, (__int64)v80, v18, v19);
  }
  return (unsigned __int8 *)v79;
}
