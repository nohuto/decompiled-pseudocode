/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C0201180
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0107EF4 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0124A84 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r12d
  int v10; // r15d
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned __int8 *result; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  void **v27; // r9
  unsigned int v28; // r8d
  CHAR *v29; // rdx
  int v30; // eax
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  CHAR *v33; // rdx
  void **v34; // r9
  int v35; // eax
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 *v47; // rcx
  __int64 v48; // rsi
  PVOID *v49; // rdx
  char v50; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v51[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-394h]
  unsigned int v53; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v54; // [rsp+40h] [rbp-388h]
  unsigned int v55; // [rsp+48h] [rbp-380h]
  _DWORD v56[9]; // [rsp+4Ch] [rbp-37Ch] BYREF
  __int64 v57; // [rsp+70h] [rbp-358h]
  __int128 v58; // [rsp+78h] [rbp-350h]
  unsigned __int64 v59; // [rsp+88h] [rbp-340h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-338h] BYREF
  __int64 v61; // [rsp+98h] [rbp-330h] BYREF
  volatile signed __int32 *v62; // [rsp+A0h] [rbp-328h]
  __int64 v63; // [rsp+A8h] [rbp-320h]
  __int128 v64; // [rsp+B0h] [rbp-318h]
  __int64 v65; // [rsp+C0h] [rbp-308h]
  __int64 v66; // [rsp+C8h] [rbp-300h]
  _QWORD v67[3]; // [rsp+E8h] [rbp-2E0h] BYREF
  _DWORD v68[36]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v69[512]; // [rsp+190h] [rbp-238h] BYREF

  v57 = a3;
  v55 = a2;
  v52 = 0;
  v53 = 0;
  v9 = 0;
  v10 = a7 & 1;
  v11 = (unsigned __int8 *)v68;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0uLL;
  v65 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  *(_QWORD *)&v58 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(a4 + 8);
  if ( !v14 || v14 < (unsigned __int64)MmSystemRangeStart && *(_DWORD *)(a4 + 60) >> 31 == v10 )
  {
    v16 = -1;
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 56);
    v16 = -1;
    v17 = -1;
    if ( v15 + 2 >= v15 )
      v17 = v15 + 2;
    v52 = v17;
    if ( v15 + 2 < v15 )
      goto LABEL_76;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v18 = 2LL * v17;
      v19 = -1;
      if ( v18 <= 0xFFFFFFFF )
        v19 = 2 * v17;
      v52 = v19;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_76;
    }
    v9 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v10) )
  {
    v20 = *(_DWORD *)(a4 + 72);
    v21 = -1;
    if ( v20 + 2 >= v20 )
      v21 = v20 + 2;
    v53 = v21;
    if ( v20 + 2 < v20 )
      goto LABEL_76;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v22 = 2LL * v21;
      v23 = -1;
      if ( v22 <= 0xFFFFFFFF )
        v23 = 2 * v21;
      v53 = v23;
      if ( v22 > 0xFFFFFFFF )
        goto LABEL_76;
    }
    ++v9;
  }
  if ( v52 + v53 >= v52 )
    v16 = v52 + v53;
  v56[5] = v16;
  if ( v52 + v53 >= v52 )
  {
    if ( v9 )
    {
      result = AllocCallbackMessage(144, v9, v16, v69, 1, 0x200uLL);
      v11 = result;
      v54 = result;
      if ( !result )
        return result;
    }
    else
    {
      v11 = (unsigned __int8 *)v68;
      v54 = (unsigned __int8 *)v68;
      memset(v68, 0, sizeof(v68));
      v68[0] = 144;
    }
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
    if ( v11 != (unsigned __int8 *)v68 && v11 != v69 )
      PushW32ThreadLock((__int64)v11, v67, (__int64)Win32FreePool);
    *((_QWORD *)v11 + 5) = v13;
    *((_DWORD *)v11 + 12) = v55;
    *((_QWORD *)v11 + 7) = v57;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v11 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v11 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v11 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v11 + 14) = *(_QWORD *)(a4 + 48);
    if ( !v52 )
      goto LABEL_49;
    v27 = (void **)(v11 + 72);
    v28 = *(_DWORD *)(a4 + 56);
    v29 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v30 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v29, 2 * v28 + 2, v27);
LABEL_48:
        if ( v30 < 0 )
          goto LABEL_76;
LABEL_49:
        if ( !v53 )
        {
LABEL_59:
          *((_QWORD *)v11 + 15) = a5;
          *((_QWORD *)v11 + 16) = a6;
          v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
          v61 = *(_QWORD *)(v37 + 416);
          *(_QWORD *)(v37 + 416) = &v61;
          v62 = a1;
          if ( a1 )
            _InterlockedIncrement(a1 + 2);
          v38 = v58;
          v39 = *(_QWORD *)(v58 + 480);
          v58 = *(_OWORD *)(v39 + 64);
          v64 = v58;
          v65 = *(_QWORD *)(v39 + 80);
          *(_QWORD *)(v39 + 72) = v13;
          if ( a1 )
            v40 = *(_QWORD *)a1;
          else
            v40 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v38 + 480) + 64LL) = v40;
          if ( a1 )
            v41 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
          else
            v41 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v38 + 480) + 80LL) = v41;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)v51,
            gdwInAtomicOperation);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v11 + 2) = 0LL;
          v42 = KeUserModeCallback(15LL, v11, *(unsigned int *)v11, &v59, v56);
          EtwTraceEndCallback(15LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)v51,
            v43);
          ThreadUnlock1(v45, v44);
          v46 = *(_QWORD *)(v38 + 480);
          *(_OWORD *)(v46 + 64) = v58;
          *(_QWORD *)(v46 + 80) = v65;
          if ( v42 >= 0 && v56[0] == 24 )
          {
            v47 = (__int64 *)v59;
            if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
              v47 = (__int64 *)MmUserProbeAddress;
            v48 = *v47;
            v66 = *v47;
            goto LABEL_77;
          }
          goto LABEL_76;
        }
        v32 = *(_DWORD *)(a4 + 72);
        v33 = *(CHAR **)(a4 + 80);
        v34 = (void **)(v11 + 64);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v35 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v33, 2 * v32 + 2, v34);
LABEL_58:
            if ( v35 < 0 )
              goto LABEL_76;
            goto LABEL_59;
          }
          v36 = v32 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v35 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v33, (v32 >> 1) + 1, v34);
            goto LABEL_58;
          }
          v36 = v32 + 2;
        }
        v35 = CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v33, v36, v34);
        goto LABEL_58;
      }
      v31 = v28 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v30 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v29, (v28 >> 1) + 1, v27);
        goto LABEL_48;
      }
      v31 = v28 + 2;
    }
    v30 = CaptureCallbackData((struct _CAPTUREBUF *)v11, (unsigned __int64)v29, v31, v27);
    goto LABEL_48;
  }
LABEL_76:
  v48 = 0LL;
LABEL_77:
  if ( v11 != (unsigned __int8 *)v68 && v11 != v69 )
  {
    v49 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v49, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v67, (__int64)v49);
  }
  return (unsigned __int8 *)v48;
}
