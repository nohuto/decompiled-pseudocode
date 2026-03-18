/*
 * XREFs of SfnIMECONTROL @ 0x1C0215C00
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00B2694 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E3CB8 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     MBToWCSEx @ 0x1C00F1C4C (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00F1CB0 (WCSToMBEx.c)
 *     THREAD_CODEPAGE @ 0x1C015DD58 (THREAD_CODEPAGE.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r15
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r14d
  char v19; // bl
  __int64 v20; // rdx
  unsigned __int8 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r8d
  char *v29; // rdx
  char *v30; // rax
  __int64 v31; // rcx
  char *v32; // rbx
  char *v33; // r13
  int v34; // r15d
  int v35; // r15d
  PCHAR v36; // rdx
  signed __int64 v37; // r12
  unsigned __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  __int128 v45; // xmm6
  __int64 v46; // xmm7_8
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 *v57; // r15
  __int64 v58; // r15
  ULONG64 v59; // rcx
  CHAR *v60; // xmm0_8
  __int16 v61; // cx
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r14
  __int64 v66; // rax
  __int128 v67; // xmm6
  __int64 v68; // xmm7_8
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // esi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 *v79; // rcx
  PVOID *v80; // rdx
  char v81; // [rsp+30h] [rbp-468h] BYREF
  char v82; // [rsp+31h] [rbp-467h] BYREF
  char v83; // [rsp+32h] [rbp-466h] BYREF
  _BYTE v84[5]; // [rsp+33h] [rbp-465h] BYREF
  unsigned __int8 *v85; // [rsp+38h] [rbp-460h]
  char v86; // [rsp+40h] [rbp-458h] BYREF
  char v87; // [rsp+41h] [rbp-457h] BYREF
  int v88; // [rsp+44h] [rbp-454h] BYREF
  unsigned __int64 v89; // [rsp+48h] [rbp-450h] BYREF
  char *v90; // [rsp+50h] [rbp-448h]
  __int64 v91; // [rsp+80h] [rbp-418h]
  unsigned __int8 *v92; // [rsp+88h] [rbp-410h] BYREF
  __int64 v93; // [rsp+90h] [rbp-408h]
  __int64 v94; // [rsp+98h] [rbp-400h] BYREF
  _QWORD *v95; // [rsp+A0h] [rbp-3F8h]
  __int64 v96; // [rsp+A8h] [rbp-3F0h]
  __int128 v97; // [rsp+B0h] [rbp-3E8h]
  __int64 v98; // [rsp+C0h] [rbp-3D8h]
  int v99; // [rsp+D4h] [rbp-3C4h]
  _OWORD *v100; // [rsp+D8h] [rbp-3C0h] BYREF
  _QWORD *v101; // [rsp+E0h] [rbp-3B8h]
  PWCH v102; // [rsp+E8h] [rbp-3B0h] BYREF
  __int64 v103; // [rsp+F0h] [rbp-3A8h]
  ULONG_PTR RegionSize[2]; // [rsp+F8h] [rbp-3A0h] BYREF
  _QWORD v105[10]; // [rsp+108h] [rbp-390h] BYREF
  __int128 v106; // [rsp+158h] [rbp-340h]
  volatile void *Address; // [rsp+168h] [rbp-330h]
  __int128 v108; // [rsp+170h] [rbp-328h]
  CHAR *v109; // [rsp+180h] [rbp-318h]
  _DWORD v110[28]; // [rsp+190h] [rbp-308h] BYREF
  __int128 v111; // [rsp+200h] [rbp-298h] BYREF
  __int64 v112; // [rsp+210h] [rbp-288h]
  unsigned int v113; // [rsp+218h] [rbp-280h]
  _OWORD v114[2]; // [rsp+21Ch] [rbp-27Ch] BYREF
  unsigned __int8 v115[512]; // [rsp+240h] [rbp-258h] BYREF

  LODWORD(v90) = a2;
  v10 = a1;
  v101 = a1;
  memset(v110, 0, 0x68uLL);
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0uLL;
  v98 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v93 = ThreadWin32Thread;
  if ( v10 )
    v15 = v10[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v91 = v15;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
  {
LABEL_17:
    v16 = 0;
    v18 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)a3 <= 8 )
  {
    v16 = 1;
    v18 = 32;
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
          v16 = 1;
          v17 = (unsigned __int64)*(unsigned int *)a4 << 9;
          if ( v17 > 0xFFFFFFFF )
            return 0LL;
          v18 = v17 + 4;
          if ( (int)v17 + 4 < (unsigned int)v17 )
            return 0LL;
          v99 = v17 + 4;
          goto LABEL_18;
        }
        goto LABEL_17;
      }
LABEL_15:
      v16 = 1;
      v19 = a7;
      v18 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_19;
    }
    v16 = 1;
    v18 = 28;
  }
LABEL_18:
  v19 = a7;
LABEL_19:
  if ( v16 )
  {
    v21 = AllocCallbackMessage(104, v16, v18, v115, 1, 0x200uLL);
    v85 = v21;
    if ( !v21 )
      return 0LL;
  }
  else
  {
    v21 = (unsigned __int8 *)v110;
    v85 = (unsigned __int8 *)v110;
    memset(&v110[1], 0, 0x64uLL);
    v110[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v22, v23);
  memset(v105, 0, 24);
  if ( v21 != (unsigned __int8 *)v110 && v21 != v115 )
    PushW32ThreadLock((__int64)v21, v105, (__int64)Win32FreePool, v27);
  *((_QWORD *)v21 + 5) = v15;
  *((_DWORD *)v21 + 12) = (_DWORD)v90;
  *((_QWORD *)v21 + 7) = a3;
  *((_QWORD *)v21 + 8) = a4;
  *((_QWORD *)v21 + 9) = a5;
  *((_QWORD *)v21 + 10) = a6;
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
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v21, v18, (void **)v21 + 11) >= 0 )
        {
          *((_DWORD *)v21 + 24) = v18;
          v40 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v26, v27);
          v94 = *(_QWORD *)(v40 + 408);
          *(_QWORD *)(v40 + 408) = &v94;
          v95 = v10;
          if ( v10 )
            HMLockObject(v10);
          v43 = v93;
          v44 = *(_QWORD *)(v93 + 472);
          v45 = *(_OWORD *)(v44 + 64);
          v97 = v45;
          v46 = *(_QWORD *)(v44 + 80);
          v98 = v46;
          *(_QWORD *)(v44 + 72) = v91;
          if ( v10 )
            v47 = *v10;
          else
            v47 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v43 + 472) + 64LL) = v47;
          if ( v10 )
            v48 = *(_QWORD *)(v10[5] + 224LL);
          else
            v48 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v43 + 472) + 80LL) = v48;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v82,
            gdwInAtomicOperation,
            v41,
            v42);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v81);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v21 + 2) = 0LL;
          v49 = KeUserModeCallback(94LL, v21, *(unsigned int *)v21, &v89, &v88);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v81);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v82,
            v50,
            v51,
            v52);
          ThreadUnlock1(v54, v53, v55);
          v56 = *(_QWORD *)(v43 + 472);
          *(_OWORD *)(v56 + 64) = v45;
          *(_QWORD *)(v56 + 80) = v46;
          if ( v49 >= 0 && v88 == 24 )
          {
            v57 = (__int64 *)v89;
            if ( v89 + 8 < v89 || v89 + 8 > MmUserProbeAddress )
              v57 = (__int64 *)MmUserProbeAddress;
            v58 = *v57;
            v103 = v58;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v59 = v89;
              if ( v89 + 24 < v89 || v89 + 24 > MmUserProbeAddress )
                v59 = MmUserProbeAddress;
              v106 = *(_OWORD *)v59;
              v60 = *(CHAR **)(v59 + 16);
              Address = v60;
              v108 = v106;
              v109 = v60;
              ProbeForRead(v60, v18, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v60, v18);
              }
              else
              {
                v60[v18 - 1] = 0;
                v102 = a4 + 14;
                *(_OWORD *)a4 = *(_OWORD *)v60;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v60 + 2);
                *((_DWORD *)a4 + 6) = *((_DWORD *)v60 + 6);
                memset(a4 + 14, 0, 0x40uLL);
                MBToWCSEx(v61, v60 + 28, -1, &v102, 32);
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
      v28 = 32;
      goto LABEL_43;
    case 0xCuLL:
      v28 = 28;
      goto LABEL_43;
    case 0xAuLL:
      if ( (v19 & 1) != 0 )
      {
        memset(v114, 0, sizeof(v114));
        v100 = v114;
        v111 = *(_OWORD *)a4;
        v112 = *((_QWORD *)a4 + 2);
        v113 = *((_DWORD *)a4 + 6);
        memset(v114, 0, sizeof(v114));
        WCSToMBEx(0, a4 + 14, -1, (PCHAR *)&v100, 32);
        v28 = 60;
        v29 = (char *)&v111;
        goto LABEL_44;
      }
      v28 = 92;
LABEL_43:
      v29 = (char *)a4;
LABEL_44:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v21, v29, v28, (void **)v21 + 8) < 0 )
        goto LABEL_104;
      goto LABEL_87;
  }
  if ( (v19 & 1) != 0 )
  {
    v92 = (unsigned __int8 *)&v86;
    v30 = (char *)Win32AllocPool(v18, 1835627349LL);
    v32 = v30;
    v90 = v30;
    if ( !v30 )
      goto LABEL_104;
    v33 = v30 + 4;
    v34 = *(_DWORD *)a4;
    *(_DWORD *)v30 = *(_DWORD *)a4;
    v35 = v34 << 8;
    if ( v35 )
    {
      v36 = &v87;
      v37 = (char *)a4 - v33;
      do
      {
        --v35;
        *v36 = 0;
        v38 = THREAD_CODEPAGE(v31, (__int64)v36, v26, v27);
        WCSToMBEx(v38, (WCHAR *)&v33[v37 + 4], 1, (PCHAR *)&v92, 2);
        v36 = (PCHAR)(v92 + 1);
        LOBYTE(v26) = v92[1];
        if ( (_BYTE)v26 )
        {
          v31 = *v92;
          LOWORD(v31) = (unsigned __int8)v26 | (unsigned __int16)((_WORD)v31 << 8);
          *(_WORD *)v33 = v31;
        }
        else
        {
          *(_WORD *)v33 = *v92;
        }
        v33 += 2;
      }
      while ( v35 );
      v10 = v101;
      v32 = v90;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v21, v32, v18, (void **)v21 + 8) < 0 )
      goto LABEL_104;
    Win32FreePool(v32);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v21, (char *)a4, v18, (void **)v21 + 8) < 0 )
  {
    goto LABEL_104;
  }
LABEL_87:
  v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27);
  v94 = *(_QWORD *)(v62 + 408);
  *(_QWORD *)(v62 + 408) = &v94;
  v95 = v10;
  if ( v10 )
    HMLockObject(v10);
  v65 = v93;
  v66 = *(_QWORD *)(v93 + 472);
  v67 = *(_OWORD *)(v66 + 64);
  v97 = v67;
  v68 = *(_QWORD *)(v66 + 80);
  v98 = v68;
  *(_QWORD *)(v66 + 72) = v91;
  if ( v10 )
    v69 = *v10;
  else
    v69 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v65 + 472) + 64LL) = v69;
  if ( v10 )
    v70 = *(_QWORD *)(v10[5] + 224LL);
  else
    v70 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v65 + 472) + 80LL) = v70;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v84,
    gdwInAtomicOperation,
    v63,
    v64);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v83);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v21 + 2) = 0LL;
  v71 = KeUserModeCallback(94LL, v21, *(unsigned int *)v21, &v89, &v88);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v83);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v84,
    v72,
    v73,
    v74);
  ThreadUnlock1(v76, v75, v77);
  v78 = *(_QWORD *)(v65 + 472);
  *(_OWORD *)(v78 + 64) = v67;
  *(_QWORD *)(v78 + 80) = v68;
  if ( v71 >= 0 && v88 == 24 )
  {
    v79 = (__int64 *)v89;
    if ( v89 + 8 < v89 || v89 + 8 > MmUserProbeAddress )
      v79 = (__int64 *)MmUserProbeAddress;
    v58 = *v79;
    v103 = *v79;
    goto LABEL_105;
  }
LABEL_104:
  v58 = 0LL;
LABEL_105:
  if ( v21 != (unsigned __int8 *)v110 && v21 != v115 )
  {
    v80 = (PVOID *)(v21 + 32);
    if ( *((_QWORD *)v21 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v80, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v105, (__int64)v80, v26, v27);
  }
  return v58;
}
