/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0055C30
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int8 *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  __int64 v34; // r8
  __int64 v35; // rcx
  PVOID *v36; // rdx
  char v37; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v40; // [rsp+38h] [rbp-350h]
  int v41; // [rsp+40h] [rbp-348h]
  _DWORD v42[7]; // [rsp+44h] [rbp-344h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int64 v45; // [rsp+70h] [rbp-318h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-310h]
  __int64 v47; // [rsp+80h] [rbp-308h]
  __int128 v48; // [rsp+88h] [rbp-300h]
  __int64 v49; // [rsp+98h] [rbp-2F0h]
  _QWORD v50[7]; // [rsp+A0h] [rbp-2E8h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-2B0h]
  _DWORD v52[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v53[512]; // [rsp+150h] [rbp-238h] BYREF

  v41 = a2;
  v9 = (unsigned __int16)a3 & 0x8000;
  v10 = 0;
  memset(v52, 0, 0x58uLL);
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0uLL;
  v49 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  LOBYTE(v12) = 1;
  if ( !HMValidateHandleNoSecure(v15, v12) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          if ( (*(_BYTE *)(a1[5] + 19LL) & 1) == 0 )
            return 0LL;
          v34 = 769LL;
        }
        else
        {
          if ( (unsigned int)a3 <= 5 )
            goto LABEL_14;
          if ( (unsigned int)a3 > 7 )
          {
            if ( (_DWORD)a3 == 32787 )
              v10 = 1;
            goto LABEL_14;
          }
          SetOrClrWF(0LL, a1, 769LL, 1LL);
          v34 = 770LL;
        }
        v35 = 0LL;
LABEL_48:
        SetOrClrWF(v35, a1, v34, 1LL);
        goto LABEL_14;
      }
      SetOrClrWF(0LL, a1, 769LL, 1LL);
      v34 = 770LL;
    }
    else
    {
      v34 = 769LL;
    }
    v35 = 1LL;
    goto LABEL_48;
  }
LABEL_14:
  v16 = 0;
  v39 = 0;
  if ( v9 && a4 && a4 >= (unsigned __int64)MmSystemRangeStart )
  {
    v16 = *(_DWORD *)(a4 + 16) + 20;
    if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
      return 0LL;
    v39 = *(_DWORD *)(a4 + 16) + 20;
  }
  if ( !v10 )
  {
    v17 = (unsigned __int8 *)v52;
    v40 = (unsigned __int8 *)v52;
    memset(&v52[1], 0, 0x54uLL);
    v52[0] = 88;
    goto LABEL_21;
  }
  v17 = AllocCallbackMessage(88, v10, v16, v53, 1, 0x200uLL);
  v40 = v17;
  if ( !v17 )
    return 0LL;
LABEL_21:
  W32GetThreadWin32Thread(KeGetCurrentThread());
  memset(v50, 0, 24);
  if ( v17 != (unsigned __int8 *)v52 && v17 != v53 )
    PushW32ThreadLock((__int64)v17, v50, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v14;
  *((_DWORD *)v17 + 12) = v41;
  *((_QWORD *)v17 + 7) = a3;
  if ( v39 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (char *)a4, v39, (void **)v17 + 10) < 0 )
      goto LABEL_59;
  }
  else
  {
    *((_QWORD *)v17 + 10) = a4;
  }
  *((_QWORD *)v17 + 8) = a5;
  *((_QWORD *)v17 + 9) = a6;
  v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v45 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v45;
  v46 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v13 + 472);
  v51 = *(_OWORD *)(v21 + 64);
  v48 = v51;
  v49 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v14;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    gdwInAtomicOperation,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v24 = KeUserModeCallback(29LL, v17, *(unsigned int *)v17, &v43, v42);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v38,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v30 + 64) = v51;
  *(_QWORD *)(v30 + 80) = v49;
  if ( v24 >= 0 && v42[0] == 24 )
  {
    v31 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v50[3] = *v31;
    goto LABEL_41;
  }
LABEL_59:
  v32 = 0LL;
LABEL_41:
  if ( v17 != (unsigned __int8 *)v52 && v17 != v53 )
  {
    v36 = (PVOID *)(v17 + 32);
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v36, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v50, (__int64)v36, v18);
  }
  return v32;
}
