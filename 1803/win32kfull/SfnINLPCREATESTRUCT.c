/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C00201D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00526D8 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0052A10 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v10; // r15d
  int v11; // esi
  unsigned __int8 *v12; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int8 *result; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  CHAR *v36; // rdx
  void **v37; // r9
  struct _CAPTUREBUF *v38; // rcx
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  int v41; // eax
  CHAR *v42; // rax
  int v43; // r8d
  void **v44; // r9
  unsigned int v45; // r8d
  CHAR *v46; // rdx
  int v47; // eax
  unsigned int v48; // r8d
  struct _KTHREAD *v49; // rsi
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  bool v60; // bl
  int v61; // r14d
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct _KTHREAD *v64; // rbx
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 *v69; // rax
  char v70; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v73; // rax
  __int64 *v74; // rcx
  __int64 v75; // rbx
  char v76[4]; // [rsp+30h] [rbp-3F8h] BYREF
  unsigned int v77; // [rsp+34h] [rbp-3F4h]
  unsigned int v78; // [rsp+38h] [rbp-3F0h]
  CHAR v79; // [rsp+3Ch] [rbp-3ECh]
  unsigned __int8 *v80; // [rsp+40h] [rbp-3E8h]
  __int16 v81; // [rsp+48h] [rbp-3E0h]
  unsigned int v82; // [rsp+4Ch] [rbp-3DCh]
  int v83; // [rsp+58h] [rbp-3D0h] BYREF
  int v84[6]; // [rsp+70h] [rbp-3B8h] BYREF
  __int64 v85; // [rsp+88h] [rbp-3A0h]
  __int128 v86; // [rsp+90h] [rbp-398h]
  __int64 v87; // [rsp+A0h] [rbp-388h]
  unsigned int v88; // [rsp+B4h] [rbp-374h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-368h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+C8h] [rbp-360h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-350h] BYREF
  volatile signed __int32 *v92; // [rsp+E0h] [rbp-348h]
  __int64 v93; // [rsp+E8h] [rbp-340h]
  __int64 v94; // [rsp+F8h] [rbp-330h]
  _BYTE v95[24]; // [rsp+128h] [rbp-300h] BYREF
  _DWORD v96[44]; // [rsp+140h] [rbp-2E8h] BYREF
  unsigned __int8 v97[512]; // [rsp+1F0h] [rbp-238h] BYREF

  v82 = a2;
  v77 = 0;
  v78 = 0;
  v10 = 0;
  v11 = a7 & 1;
  v12 = (unsigned __int8 *)v96;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v86 = 0uLL;
  v87 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v85 = 0LL;
  if ( (unsigned int)IsThreadCrossSessionAttached(a1, a2)
    || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = *ThreadWin32Thread;
    v85 = v15;
  }
  if ( a1 )
    v16 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v15 + 464);
  else
    v16 = 0LL;
  if ( a4 )
  {
    v17 = *(_QWORD *)(a4 + 56);
    if ( !v17 || (v18 = *(_DWORD *)(a4 + 84) >> 31, v18 == v11) && v17 < (unsigned __int64)MmSystemRangeStart )
    {
      v20 = -1;
    }
    else
    {
      v19 = *(_DWORD *)(a4 + 80);
      v20 = -1;
      v21 = -1;
      if ( v19 + 2 >= v19 )
        v21 = v19 + 2;
      v77 = v21;
      if ( v19 + 2 < v19 )
        goto LABEL_110;
      if ( v18 && (a7 & 1) == 0 )
      {
        v22 = 2LL * v21;
        v23 = -1;
        if ( v22 <= 0xFFFFFFFF )
          v23 = 2 * v21;
        v77 = v23;
        if ( v22 > 0xFFFFFFFF )
          goto LABEL_110;
      }
      v10 = 1;
    }
    v24 = *(_QWORD *)(a4 + 64);
    if ( (v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v25 = *(_DWORD *)(a4 + 100) >> 31;
      if ( v25 != v11 || v24 >= (unsigned __int64)MmSystemRangeStart )
      {
        v26 = *(_DWORD *)(a4 + 96);
        v27 = -1;
        if ( v26 + 2 >= v26 )
          v27 = v26 + 2;
        v78 = v27;
        if ( v26 + 2 < v26 )
          goto LABEL_110;
        if ( v25 && (a7 & 1) == 0 )
        {
          v28 = 2LL * v27;
          v29 = -1;
          if ( v28 <= 0xFFFFFFFF )
            v29 = 2 * v27;
          v78 = v29;
          if ( v28 > 0xFFFFFFFF )
            goto LABEL_110;
        }
        ++v10;
      }
    }
  }
  else
  {
    v20 = -1;
  }
  if ( v77 + v78 >= v77 )
    v20 = v77 + v78;
  v88 = v20;
  if ( v77 + v78 >= v77 )
  {
    if ( v10 )
    {
      result = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v10, v20, v97, 1, 0x200uLL);
      v12 = result;
      v80 = result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = (unsigned __int8 *)v96;
      v80 = (unsigned __int8 *)v96;
      memset(v96, 0, 0xA8uLL);
      v96[0] = 168;
    }
    v33 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31) )
      PsGetThreadWin32Thread(v33);
    if ( v12 != (unsigned __int8 *)v96 && v12 != v97 )
      PushW32ThreadLock(v12, v95, Win32FreePool);
    *((_QWORD *)v12 + 5) = v16;
    *((_DWORD *)v12 + 12) = v82;
    *((_QWORD *)v12 + 7) = a3;
    *((_QWORD *)v12 + 8) = a4 != 0;
    if ( !a4 )
      goto LABEL_78;
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v12 + 72) = *(_OWORD *)a4;
    *(_OWORD *)(v12 + 88) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v12 + 104) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v12 + 120) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v12 + 136) = *(_OWORD *)(a4 + 64);
    if ( !v77 )
    {
LABEL_68:
      if ( v78 )
      {
        v44 = (void **)(v12 + 136);
        v45 = *(_DWORD *)(a4 + 96);
        v46 = *(CHAR **)(a4 + 104);
        if ( *(int *)(a4 + 100) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v47 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v46, 2 * v45 + 2, v44);
LABEL_77:
            if ( v47 < 0 )
              goto LABEL_110;
            goto LABEL_78;
          }
          v48 = v45 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v47 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v46, (v45 >> 1) + 1, v44);
            goto LABEL_77;
          }
          v48 = v45 + 2;
        }
        v47 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v46, v48, v44);
        goto LABEL_77;
      }
LABEL_78:
      *((_QWORD *)v12 + 19) = a5;
      *((_QWORD *)v12 + 20) = a6;
      v49 = KeGetCurrentThread();
      v50 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v34) )
      {
        v51 = (__int64 *)PsGetThreadWin32Thread(v49);
        if ( v51 )
          v50 = *v51;
      }
      v91 = *(_QWORD *)(v50 + 408);
      *(_QWORD *)(v50 + 408) = &v91;
      v92 = a1;
      if ( a1 )
        _InterlockedIncrement(a1 + 2);
      v52 = v85;
      v53 = *(_QWORD *)(v85 + 472);
      v86 = *(_OWORD *)(v53 + 64);
      v87 = *(_QWORD *)(v53 + 80);
      *(_QWORD *)(v53 + 72) = v16;
      if ( a1 )
        v54 = *(_QWORD *)a1;
      else
        v54 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v52 + 472) + 64LL) = v54;
      if ( a1 )
        v55 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
      else
        v55 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v52 + 472) + 80LL) = v55;
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v76);
      v60 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
      UserSessionSwitchLeaveCrit(v57, v56, v58, v59);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v12 + 2) = 0LL;
      v61 = KeUserModeCallback(10LL, v12, *(unsigned int *)v12, &v89, v84);
      EtwTraceEndCallback(10LL);
      if ( v60 )
        EnterSharedCrit(0LL, 1LL);
      else
        EnterCrit(0LL, 1LL);
      v64 = KeGetCurrentThread();
      v65 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v63, v62) )
      {
        v69 = (__int64 *)PsGetThreadWin32Thread(v64);
        if ( v69 )
          v65 = *v69;
      }
      v70 = v76[0];
      if ( (v76[0] & 1) != 0 )
      {
        DLT = DLT_THREADINFO::getDLT();
        DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
        tagObjLock::LockShared(DomainLockRef);
        tagObjLock::LockExclusive((tagObjLock *)(v65 + 384));
      }
      *(_BYTE *)(v65 + 1464) = v70;
      ThreadUnlock1(v67, v66, v68);
      v73 = *(_QWORD *)(v52 + 472);
      *(_OWORD *)(v73 + 64) = v86;
      *(_QWORD *)(v73 + 80) = v87;
      if ( v61 >= 0 && v84[0] == 24 )
      {
        v74 = (__int64 *)v89;
        if ( v89 + 8 < v89 || v89 + 8 > MmUserProbeAddress )
          v74 = (__int64 *)MmUserProbeAddress;
        v75 = *v74;
        v94 = *v74;
        goto LABEL_111;
      }
      goto LABEL_110;
    }
    if ( *(int *)(a4 + 84) < 0 )
    {
      v42 = *(CHAR **)(a4 + 56);
      v79 = *v42;
      if ( v79 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          v39 = 3;
          v36 = v42;
        }
        else
        {
          v83 = ((unsigned __int16)(*(_DWORD *)v42 >> 8) << 16) | 0xFFFF;
          v39 = 4;
          v36 = (CHAR *)&v83;
        }
        v37 = (void **)(v12 + 128);
        v38 = (struct _CAPTUREBUF *)v12;
      }
      else
      {
        v37 = (void **)(v12 + 128);
        v43 = *(_DWORD *)(a4 + 80);
        v36 = *(CHAR **)(a4 + 88);
        v38 = (struct _CAPTUREBUF *)v12;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v36, 2 * v43 + 2, v37) < 0 )
            goto LABEL_110;
          goto LABEL_68;
        }
        v39 = v43 + 1;
      }
    }
    else
    {
      v36 = *(CHAR **)(a4 + 56);
      v81 = *(_WORD *)v36;
      v37 = (void **)(v12 + 128);
      v38 = (struct _CAPTUREBUF *)v12;
      if ( v81 == -1 )
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
          v41 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v36, (v40 >> 1) + 1, v37);
          goto LABEL_65;
        }
        v39 = v40 + 2;
      }
    }
    v41 = CaptureCallbackData(v38, v36, v39, v37);
LABEL_65:
    if ( v41 < 0 )
      goto LABEL_110;
    goto LABEL_68;
  }
LABEL_110:
  v75 = 0LL;
LABEL_111:
  if ( v12 != (unsigned __int8 *)v96 && v12 != v97 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v95);
  }
  return (unsigned __int8 *)v75;
}
