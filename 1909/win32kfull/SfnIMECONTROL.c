/*
 * XREFs of SfnIMECONTROL @ 0x1C02156C0
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0057A5C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     MBToWCSEx @ 0x1C00D1D3C (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00D1DA0 (WCSToMBEx.c)
 *     THREAD_CODEPAGE @ 0x1C015ED08 (THREAD_CODEPAGE.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SfnIMECONTROL(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        WCHAR *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r15
  unsigned int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r14d
  char v18; // bl
  __int64 v19; // rdx
  unsigned __int8 *v20; // rdi
  __int64 v21; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // r8d
  char *v26; // rdx
  char *v27; // rax
  __int64 v28; // rcx
  char *v29; // rbx
  char *v30; // r13
  int v31; // r15d
  int v32; // r15d
  PCHAR v33; // rdx
  signed __int64 v34; // r12
  unsigned __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // rax
  __int128 v41; // xmm6
  __int64 v42; // xmm7_8
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 *v52; // r15
  __int64 v53; // r15
  ULONG64 v54; // rcx
  CHAR *v55; // xmm0_8
  __int16 v56; // cx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r14
  __int64 v60; // rax
  __int128 v61; // xmm6
  __int64 v62; // xmm7_8
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // esi
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 *v72; // rcx
  PVOID *v73; // rdx
  char v74; // [rsp+30h] [rbp-468h] BYREF
  char v75; // [rsp+31h] [rbp-467h] BYREF
  char v76; // [rsp+32h] [rbp-466h] BYREF
  _BYTE v77[5]; // [rsp+33h] [rbp-465h] BYREF
  unsigned __int8 *v78; // [rsp+38h] [rbp-460h]
  char v79; // [rsp+40h] [rbp-458h] BYREF
  char v80; // [rsp+41h] [rbp-457h] BYREF
  int v81; // [rsp+44h] [rbp-454h] BYREF
  unsigned __int64 v82; // [rsp+48h] [rbp-450h] BYREF
  char *v83; // [rsp+50h] [rbp-448h]
  __int64 v84; // [rsp+80h] [rbp-418h]
  unsigned __int8 *v85; // [rsp+88h] [rbp-410h] BYREF
  __int64 v86; // [rsp+90h] [rbp-408h]
  __int64 v87; // [rsp+98h] [rbp-400h] BYREF
  _QWORD *v88; // [rsp+A0h] [rbp-3F8h]
  __int64 v89; // [rsp+A8h] [rbp-3F0h]
  __int128 v90; // [rsp+B0h] [rbp-3E8h]
  __int64 v91; // [rsp+C0h] [rbp-3D8h]
  int v92; // [rsp+D4h] [rbp-3C4h]
  _OWORD *v93; // [rsp+D8h] [rbp-3C0h] BYREF
  _QWORD *v94; // [rsp+E0h] [rbp-3B8h]
  PWCH v95; // [rsp+E8h] [rbp-3B0h] BYREF
  __int64 v96; // [rsp+F0h] [rbp-3A8h]
  ULONG_PTR RegionSize[2]; // [rsp+F8h] [rbp-3A0h] BYREF
  _QWORD v98[10]; // [rsp+108h] [rbp-390h] BYREF
  __int128 v99; // [rsp+158h] [rbp-340h]
  volatile void *Address; // [rsp+168h] [rbp-330h]
  __int128 v101; // [rsp+170h] [rbp-328h]
  CHAR *v102; // [rsp+180h] [rbp-318h]
  _DWORD v103[28]; // [rsp+190h] [rbp-308h] BYREF
  __int128 v104; // [rsp+200h] [rbp-298h] BYREF
  __int64 v105; // [rsp+210h] [rbp-288h]
  unsigned int v106; // [rsp+218h] [rbp-280h]
  _OWORD v107[2]; // [rsp+21Ch] [rbp-27Ch] BYREF
  unsigned __int8 v108[512]; // [rsp+240h] [rbp-258h] BYREF

  LODWORD(v83) = a2;
  v10 = a1;
  v94 = a1;
  memset(v103, 0, 0x68uLL);
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0uLL;
  v91 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v86 = ThreadWin32Thread;
  if ( v10 )
    v14 = v10[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v84 = v14;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
  {
LABEL_17:
    v15 = 0;
    v17 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)a3 <= 8 )
  {
    v15 = 1;
    v17 = 32;
  }
  else
  {
    if ( (unsigned int)a3 <= 0xA )
      goto LABEL_15;
    if ( (unsigned int)a3 > 0xC )
    {
      if ( (_DWORD)a3 != 17 )
      {
        if ( (_DWORD)a3 == 24 )
        {
          v15 = 1;
          v16 = (unsigned __int64)*(unsigned int *)a4 << 9;
          if ( v16 > 0xFFFFFFFF )
            return 0LL;
          v17 = v16 + 4;
          if ( (int)v16 + 4 < (unsigned int)v16 )
            return 0LL;
          v92 = v16 + 4;
          goto LABEL_18;
        }
        goto LABEL_17;
      }
LABEL_15:
      v15 = 1;
      v18 = a7;
      v17 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_19;
    }
    v15 = 1;
    v17 = 28;
  }
LABEL_18:
  v18 = a7;
LABEL_19:
  if ( v15 )
  {
    v20 = AllocCallbackMessage(104, v15, v17, v108, 1, 0x200uLL);
    v78 = v20;
    if ( !v20 )
      return 0LL;
  }
  else
  {
    v20 = (unsigned __int8 *)v103;
    v78 = (unsigned __int8 *)v103;
    memset(&v103[1], 0, 0x64uLL);
    v103[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v21);
  memset(v98, 0, 24);
  if ( v20 != (unsigned __int8 *)v103 && v20 != v108 )
    PushW32ThreadLock((__int64)v20, v98, (__int64)Win32FreePool);
  *((_QWORD *)v20 + 5) = v14;
  *((_DWORD *)v20 + 12) = (_DWORD)v83;
  *((_QWORD *)v20 + 7) = a3;
  *((_QWORD *)v20 + 8) = a4;
  *((_QWORD *)v20 + 9) = a5;
  *((_QWORD *)v20 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_87;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_59;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_59;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_59;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_87;
          goto LABEL_35;
        }
LABEL_59:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v20, v17, (void **)v20 + 11) >= 0 )
        {
          *((_DWORD *)v20 + 24) = v17;
          v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v24);
          v87 = *(_QWORD *)(v37 + 408);
          *(_QWORD *)(v37 + 408) = &v87;
          v88 = v10;
          if ( v10 )
            HMLockObject(v10);
          v39 = v86;
          v40 = *(_QWORD *)(v86 + 472);
          v41 = *(_OWORD *)(v40 + 64);
          v90 = v41;
          v42 = *(_QWORD *)(v40 + 80);
          v91 = v42;
          *(_QWORD *)(v40 + 72) = v84;
          if ( v10 )
            v43 = *v10;
          else
            v43 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v39 + 472) + 64LL) = v43;
          if ( v10 )
            v44 = *(_QWORD *)(v10[5] + 224LL);
          else
            v44 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v39 + 472) + 80LL) = v44;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v75,
            gdwInAtomicOperation,
            v38);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v74);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v20 + 2) = 0LL;
          v45 = KeUserModeCallback(94LL, v20, *(unsigned int *)v20, &v82, &v81);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v74);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v75,
            v46,
            v47);
          ThreadUnlock1(v49, v48, v50);
          v51 = *(_QWORD *)(v39 + 472);
          *(_OWORD *)(v51 + 64) = v41;
          *(_QWORD *)(v51 + 80) = v42;
          if ( v45 >= 0 && v81 == 24 )
          {
            v52 = (__int64 *)v82;
            if ( v82 + 8 < v82 || v82 + 8 > MmUserProbeAddress )
              v52 = (__int64 *)MmUserProbeAddress;
            v53 = *v52;
            v96 = v53;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v54 = v82;
              if ( v82 + 24 < v82 || v82 + 24 > MmUserProbeAddress )
                v54 = MmUserProbeAddress;
              v99 = *(_OWORD *)v54;
              v55 = *(CHAR **)(v54 + 16);
              Address = v55;
              v101 = v99;
              v102 = v55;
              ProbeForRead(v55, v17, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v55, v17);
              }
              else
              {
                v55[v17 - 1] = 0;
                v95 = a4 + 14;
                *(_OWORD *)a4 = *(_OWORD *)v55;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v55 + 2);
                *((_DWORD *)a4 + 6) = *((_DWORD *)v55 + 6);
                memset(a4 + 14, 0, 0x40uLL);
                MBToWCSEx(v56, v55 + 28, -1, &v95, 32);
              }
            }
            goto LABEL_105;
          }
        }
        goto LABEL_104;
      }
    }
  }
LABEL_35:
  switch ( a3 )
  {
    case 8uLL:
      v25 = 32;
      goto LABEL_43;
    case 0xCuLL:
      v25 = 28;
      goto LABEL_43;
    case 0xAuLL:
      if ( (v18 & 1) != 0 )
      {
        memset(v107, 0, sizeof(v107));
        v93 = v107;
        v104 = *(_OWORD *)a4;
        v105 = *((_QWORD *)a4 + 2);
        v106 = *((_DWORD *)a4 + 6);
        memset(v107, 0, sizeof(v107));
        WCSToMBEx(0, a4 + 14, -1, (PCHAR *)&v93, 0x20u);
        v25 = 60;
        v26 = (char *)&v104;
        goto LABEL_44;
      }
      v25 = 92;
LABEL_43:
      v26 = (char *)a4;
LABEL_44:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, v26, v25, (void **)v20 + 8) < 0 )
        goto LABEL_104;
      goto LABEL_87;
  }
  if ( (v18 & 1) != 0 )
  {
    v85 = (unsigned __int8 *)&v79;
    v27 = (char *)Win32AllocPool(v17, 1835627349LL);
    v29 = v27;
    v83 = v27;
    if ( !v27 )
      goto LABEL_104;
    v30 = v27 + 4;
    v31 = *(_DWORD *)a4;
    *(_DWORD *)v27 = *(_DWORD *)a4;
    v32 = v31 << 8;
    if ( v32 )
    {
      v33 = &v80;
      v34 = (char *)a4 - v30;
      do
      {
        --v32;
        *v33 = 0;
        v35 = THREAD_CODEPAGE(v28, (__int64)v33, v24);
        WCSToMBEx(v35, (const WCHAR *)&v30[v34 + 4], 1, (PCHAR *)&v85, 2u);
        v33 = (PCHAR)(v85 + 1);
        LOBYTE(v24) = v85[1];
        if ( (_BYTE)v24 )
        {
          v28 = *v85;
          LOWORD(v28) = (unsigned __int8)v24 | (unsigned __int16)((_WORD)v28 << 8);
          *(_WORD *)v30 = v28;
        }
        else
        {
          *(_WORD *)v30 = *v85;
        }
        v30 += 2;
      }
      while ( v32 );
      v10 = v94;
      v29 = v83;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, v29, v17, (void **)v20 + 8) < 0 )
      goto LABEL_104;
    Win32FreePool(v29);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, (char *)a4, v17, (void **)v20 + 8) < 0 )
  {
    goto LABEL_104;
  }
LABEL_87:
  v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
  v87 = *(_QWORD *)(v57 + 408);
  *(_QWORD *)(v57 + 408) = &v87;
  v88 = v10;
  if ( v10 )
    HMLockObject(v10);
  v59 = v86;
  v60 = *(_QWORD *)(v86 + 472);
  v61 = *(_OWORD *)(v60 + 64);
  v90 = v61;
  v62 = *(_QWORD *)(v60 + 80);
  v91 = v62;
  *(_QWORD *)(v60 + 72) = v84;
  if ( v10 )
    v63 = *v10;
  else
    v63 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v59 + 472) + 64LL) = v63;
  if ( v10 )
    v64 = *(_QWORD *)(v10[5] + 224LL);
  else
    v64 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v59 + 472) + 80LL) = v64;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v77,
    gdwInAtomicOperation,
    v58);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v76);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v20 + 2) = 0LL;
  v65 = KeUserModeCallback(94LL, v20, *(unsigned int *)v20, &v82, &v81);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v76);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v77,
    v66,
    v67);
  ThreadUnlock1(v69, v68, v70);
  v71 = *(_QWORD *)(v59 + 472);
  *(_OWORD *)(v71 + 64) = v61;
  *(_QWORD *)(v71 + 80) = v62;
  if ( v65 >= 0 && v81 == 24 )
  {
    v72 = (__int64 *)v82;
    if ( v82 + 8 < v82 || v82 + 8 > MmUserProbeAddress )
      v72 = (__int64 *)MmUserProbeAddress;
    v53 = *v72;
    v96 = *v72;
    goto LABEL_105;
  }
LABEL_104:
  v53 = 0LL;
LABEL_105:
  if ( v20 != (unsigned __int8 *)v103 && v20 != v108 )
  {
    v73 = (PVOID *)(v20 + 32);
    if ( *((_QWORD *)v20 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v73, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v98, (__int64)v73, v24);
  }
  return v53;
}
