/*
 * XREFs of SfnIMECONTROL @ 0x1C01FE660
 * Callers:
 *     <none>
 * Callees:
 *     MBToWCSEx @ 0x1C0007ABC (MBToWCSEx.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00AF69C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     WCSToMBEx @ 0x1C012D480 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C0205C24 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall SfnIMECONTROL(
        volatile signed __int32 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  volatile signed __int32 *v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r15
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r14d
  char v17; // bl
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int128 *v22; // rdx
  unsigned __int8 *v23; // rbx
  __int64 v24; // rax
  _DWORD *v25; // r12
  char *v26; // r13
  char *v27; // rax
  int v28; // r15d
  int v29; // r15d
  signed __int64 v30; // rsi
  unsigned __int16 v31; // ax
  unsigned __int8 v32; // al
  __int16 v33; // cx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 *v45; // r15
  __int64 v46; // r15
  ULONG64 v47; // rcx
  __int128 v48; // xmm2
  CHAR *v49; // xmm0_8
  __int16 v50; // cx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // esi
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 *v61; // rcx
  PVOID *v62; // rdx
  char v63; // [rsp+30h] [rbp-458h] BYREF
  char v64; // [rsp+31h] [rbp-457h] BYREF
  char v65; // [rsp+32h] [rbp-456h] BYREF
  _BYTE v66[5]; // [rsp+33h] [rbp-455h] BYREF
  unsigned __int8 *v67; // [rsp+38h] [rbp-450h]
  int v68; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-440h] BYREF
  char v70; // [rsp+50h] [rbp-438h] BYREF
  _DWORD *v71; // [rsp+58h] [rbp-430h]
  __int64 v72; // [rsp+88h] [rbp-400h]
  char *v73; // [rsp+90h] [rbp-3F8h]
  unsigned __int8 *v74; // [rsp+98h] [rbp-3F0h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-3E8h]
  __int128 v76; // [rsp+A8h] [rbp-3E0h]
  __int64 v77; // [rsp+B8h] [rbp-3D0h]
  __int64 v78; // [rsp+C0h] [rbp-3C8h] BYREF
  volatile signed __int32 *v79; // [rsp+C8h] [rbp-3C0h]
  __int64 v80; // [rsp+D0h] [rbp-3B8h]
  __int128 v81; // [rsp+D8h] [rbp-3B0h]
  CHAR *v82; // [rsp+E8h] [rbp-3A0h]
  unsigned int v83; // [rsp+F4h] [rbp-394h]
  unsigned __int8 *v84; // [rsp+100h] [rbp-388h] BYREF
  PWCH v85; // [rsp+110h] [rbp-378h] BYREF
  __int64 v86; // [rsp+118h] [rbp-370h]
  ULONG_PTR RegionSize[12]; // [rsp+120h] [rbp-368h] BYREF
  _QWORD v88[4]; // [rsp+180h] [rbp-308h] BYREF
  _DWORD v89[28]; // [rsp+1A0h] [rbp-2E8h] BYREF
  __int128 v90; // [rsp+210h] [rbp-278h] BYREF
  __int64 v91; // [rsp+220h] [rbp-268h]
  unsigned int v92; // [rsp+228h] [rbp-260h]
  unsigned __int8 v93[36]; // [rsp+22Ch] [rbp-25Ch] BYREF
  unsigned __int8 v94[512]; // [rsp+250h] [rbp-238h] BYREF

  v73 = (char *)a4;
  LODWORD(v71) = a2;
  v10 = a1;
  *(_QWORD *)&v81 = a1;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v76 = 0uLL;
  v77 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v75 = ThreadWin32Thread;
  if ( v10 )
    v12 = *((_QWORD *)v10 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v72 = v12;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
  {
LABEL_19:
    v13 = 0;
    v15 = 0;
    goto LABEL_20;
  }
  if ( (unsigned int)a3 <= 8 )
  {
    v13 = 1;
    v15 = 32;
  }
  else
  {
    if ( (unsigned int)a3 <= 0xA )
      goto LABEL_17;
    if ( (unsigned int)a3 > 0xC )
    {
      if ( (_DWORD)a3 != 17 )
      {
        if ( (_DWORD)a3 == 24 )
        {
          v13 = 1;
          v14 = (unsigned __int64)*a4 << 9;
          if ( v14 > 0xFFFFFFFF )
            return 0LL;
          v15 = -1;
          if ( (int)v14 + 4 >= (unsigned int)v14 )
            v15 = v14 + 4;
          v83 = v15;
          if ( (int)v14 + 4 < (unsigned int)v14 )
            return 0LL;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
LABEL_17:
      v13 = 1;
      v17 = a7;
      v15 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_21;
    }
    v13 = 1;
    v15 = 28;
  }
LABEL_20:
  v17 = a7;
LABEL_21:
  if ( v13 )
  {
    v19 = AllocCallbackMessage(104, v13, v15, v94, 1, 0x200uLL);
    v67 = v19;
    if ( !v19 )
      return 0LL;
  }
  else
  {
    v19 = (unsigned __int8 *)v89;
    v67 = (unsigned __int8 *)v89;
    memset(v89, 0, 0x68uLL);
    v89[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
  if ( v19 != (unsigned __int8 *)v89 && v19 != v94 )
    PushW32ThreadLock((__int64)v19, v88, (__int64)Win32FreePool);
  *((_QWORD *)v19 + 5) = v12;
  *((_DWORD *)v19 + 12) = (_DWORD)v71;
  *((_QWORD *)v19 + 7) = a3;
  *((_QWORD *)v19 + 8) = a4;
  *((_QWORD *)v19 + 9) = a5;
  *((_QWORD *)v19 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_88;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_60;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_60;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_60;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_88;
          goto LABEL_37;
        }
LABEL_60:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v19, v15, (void **)v19 + 11) >= 0 )
        {
          *((_DWORD *)v19 + 24) = v15;
          v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34);
          v78 = *(_QWORD *)(v35 + 416);
          *(_QWORD *)(v35 + 416) = &v78;
          v79 = v10;
          if ( v10 )
            _InterlockedIncrement(v10 + 2);
          v36 = v75;
          v37 = *(_QWORD *)(v75 + 480);
          v81 = *(_OWORD *)(v37 + 64);
          v76 = v81;
          v77 = *(_QWORD *)(v37 + 80);
          *(_QWORD *)(v37 + 72) = v72;
          if ( v10 )
            v38 = *(_QWORD *)v10;
          else
            v38 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v36 + 480) + 64LL) = v38;
          if ( v10 )
            v39 = *(_QWORD *)(*((_QWORD *)v10 + 5) + 224LL);
          else
            v39 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v36 + 480) + 80LL) = v39;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v64,
            gdwInAtomicOperation);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v63);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v19 + 2) = 0LL;
          v40 = KeUserModeCallback(94LL, v19, *(unsigned int *)v19, &v69, &v68);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v63);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v64,
            v41);
          ThreadUnlock1(v43, v42);
          v44 = *(_QWORD *)(v36 + 480);
          *(_OWORD *)(v44 + 64) = v81;
          *(_QWORD *)(v44 + 80) = v77;
          if ( v40 >= 0 && v68 == 24 )
          {
            v45 = (__int64 *)v69;
            if ( v69 + 8 < v69 || v69 + 8 > MmUserProbeAddress )
              v45 = (__int64 *)MmUserProbeAddress;
            v46 = *v45;
            v86 = v46;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v47 = v69;
              if ( v69 + 24 < v69 || v69 + 24 > MmUserProbeAddress )
                v47 = MmUserProbeAddress;
              v48 = *(_OWORD *)v47;
              v49 = *(CHAR **)(v47 + 16);
              RegionSize[11] = (ULONG_PTR)v49;
              v81 = v48;
              v82 = v49;
              ProbeForRead(v49, v15, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v49, v15);
              }
              else
              {
                v49[v15 - 1] = 0;
                v85 = (PWCH)(a4 + 7);
                *(_OWORD *)a4 = *(_OWORD *)v49;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v49 + 2);
                a4[6] = *((_DWORD *)v49 + 6);
                memset(a4 + 7, 0, 0x40uLL);
                MBToWCSEx(v50, v49 + 28, -1, &v85, 32);
              }
            }
            goto LABEL_106;
          }
        }
        goto LABEL_105;
      }
    }
  }
LABEL_37:
  switch ( a3 )
  {
    case 8uLL:
      v21 = 32;
      goto LABEL_45;
    case 0xCuLL:
      v21 = 28;
      goto LABEL_45;
    case 0xAuLL:
      if ( (v17 & 1) != 0 )
      {
        v84 = v93;
        v90 = *(_OWORD *)a4;
        v91 = *((_QWORD *)a4 + 2);
        v92 = a4[6];
        memset(v93, 0, 0x20uLL);
        WCSToMBEx(0, (WCHAR *)a4 + 14, -1, (PCHAR *)&v84, 32);
        v21 = 60;
        v22 = &v90;
        goto LABEL_46;
      }
      v21 = 92;
LABEL_45:
      v22 = (__int128 *)a4;
LABEL_46:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, (unsigned __int64)v22, v21, (void **)v19 + 8) < 0 )
        goto LABEL_105;
      goto LABEL_88;
  }
  if ( (v17 & 1) != 0 )
  {
    v23 = (unsigned __int8 *)&v70;
    v74 = (unsigned __int8 *)&v70;
    v24 = Win32AllocPool(v15, 1835627349LL);
    v25 = (_DWORD *)v24;
    v71 = (_DWORD *)v24;
    if ( !v24 )
      goto LABEL_105;
    v26 = (char *)(v24 + 4);
    v27 = v73;
    v28 = *(_DWORD *)v73;
    *v25 = *(_DWORD *)v73;
    v29 = v28 << 8;
    if ( v29 )
    {
      v30 = v27 - v26;
      do
      {
        --v29;
        v23[1] = 0;
        v31 = THREAD_CODEPAGE();
        WCSToMBEx(v31, (WCHAR *)&v26[v30 + 4], 1, (PCHAR *)&v74, 2);
        v23 = v74;
        v32 = v74[1];
        v33 = *v74;
        if ( v32 )
          v33 = v32 | (unsigned __int16)(v33 << 8);
        *(_WORD *)v26 = v33;
        v26 += 2;
      }
      while ( v29 );
      v10 = (volatile signed __int32 *)v81;
      v25 = v71;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, (unsigned __int64)v25, v15, (void **)v19 + 8) < 0 )
      goto LABEL_105;
    Win32FreePool(v25);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, (unsigned __int64)a4, v15, (void **)v19 + 8) < 0 )
  {
    goto LABEL_105;
  }
LABEL_88:
  v51 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  v78 = *(_QWORD *)(v51 + 416);
  *(_QWORD *)(v51 + 416) = &v78;
  v79 = v10;
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  v52 = v75;
  v53 = *(_QWORD *)(v75 + 480);
  v81 = *(_OWORD *)(v53 + 64);
  v76 = v81;
  v77 = *(_QWORD *)(v53 + 80);
  *(_QWORD *)(v53 + 72) = v72;
  if ( v10 )
    v54 = *(_QWORD *)v10;
  else
    v54 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v52 + 480) + 64LL) = v54;
  if ( v10 )
    v55 = *(_QWORD *)(*((_QWORD *)v10 + 5) + 224LL);
  else
    v55 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v52 + 480) + 80LL) = v55;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v66,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v65);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v56 = KeUserModeCallback(94LL, v19, *(unsigned int *)v19, &v69, &v68);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v65);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v66, v57);
  ThreadUnlock1(v59, v58);
  v60 = *(_QWORD *)(v52 + 480);
  *(_OWORD *)(v60 + 64) = v81;
  *(_QWORD *)(v60 + 80) = v77;
  if ( v56 >= 0 && v68 == 24 )
  {
    v61 = (__int64 *)v69;
    if ( v69 + 8 < v69 || v69 + 8 > MmUserProbeAddress )
      v61 = (__int64 *)MmUserProbeAddress;
    v46 = *v61;
    v86 = *v61;
    goto LABEL_106;
  }
LABEL_105:
  v46 = 0LL;
LABEL_106:
  if ( v19 != (unsigned __int8 *)v89 && v19 != v94 )
  {
    v62 = (PVOID *)(v19 + 32);
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v62, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v88, (__int64)v62);
  }
  return v46;
}
