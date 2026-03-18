/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C0036FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     RegisterDefaultClass @ 0x1C0036DB8 (RegisterDefaultClass.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _RegisterClassEx @ 0x1C00377E8 (_RegisterClassEx.c)
 *     RegisterIconTitleClass @ 0x1C00FD218 (RegisterIconTitleClass.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int16 v14; // bx
  unsigned int v15; // ecx
  _WORD *v16; // rax
  int v17; // ebx
  wchar_t *v18; // r13
  int v19; // r15d
  ULONG64 v20; // rdx
  ULONG64 v21; // r12
  ULONG64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 *ThreadWin32Thread; // rax
  void *v28; // r13
  unsigned __int64 v29; // rbx
  char *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rbx
  __int64 *v36; // rax
  ULONG64 v37; // rcx
  __int16 Atom; // r8
  unsigned int v39; // ecx
  unsigned __int16 *v40; // rdx
  unsigned __int16 v41; // ax
  __int16 v42; // dx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // edx
  int v48; // [rsp+30h] [rbp-1C8h]
  int v49; // [rsp+34h] [rbp-1C4h]
  int v50; // [rsp+38h] [rbp-1C0h]
  __int64 v51; // [rsp+48h] [rbp-1B0h]
  wchar_t *Str1; // [rsp+58h] [rbp-1A0h]
  int v53; // [rsp+60h] [rbp-198h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-198h]
  int v55; // [rsp+68h] [rbp-190h]
  __int128 v56; // [rsp+78h] [rbp-180h] BYREF
  __int64 (__fastcall *v57)(_QWORD); // [rsp+88h] [rbp-170h]
  __int128 v58; // [rsp+90h] [rbp-168h] BYREF
  __int64 (__fastcall *v59)(_QWORD); // [rsp+A0h] [rbp-158h]
  __int64 v60; // [rsp+B0h] [rbp-148h]
  void *Src; // [rsp+B8h] [rbp-140h]
  __int64 v62; // [rsp+C0h] [rbp-138h]
  __int64 v63; // [rsp+C8h] [rbp-130h]
  __int64 v64; // [rsp+D0h] [rbp-128h]
  __int64 v65; // [rsp+D8h] [rbp-120h]
  ULONG64 v66; // [rsp+E0h] [rbp-118h]
  __int128 v67; // [rsp+E8h] [rbp-110h] BYREF
  ULONG64 v68; // [rsp+F8h] [rbp-100h]
  __int128 v69; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v70; // [rsp+110h] [rbp-E8h]
  __int128 v71; // [rsp+120h] [rbp-D8h]
  __int128 v72; // [rsp+130h] [rbp-C8h]
  __int128 v73; // [rsp+140h] [rbp-B8h]
  __int64 v74; // [rsp+150h] [rbp-A8h]
  __int64 v75; // [rsp+158h] [rbp-A0h]
  struct _KTHREAD *v76; // [rsp+160h] [rbp-98h]
  struct _KTHREAD *v77; // [rsp+168h] [rbp-90h]
  __int128 v78; // [rsp+178h] [rbp-80h]
  ULONG64 v79; // [rsp+188h] [rbp-70h]
  __int128 v80; // [rsp+190h] [rbp-68h]
  __int128 v81; // [rsp+1A0h] [rbp-58h]
  __int128 v82; // [rsp+1B0h] [rbp-48h]
  __int128 v83; // [rsp+1C0h] [rbp-38h]
  __int128 v84; // [rsp+1D0h] [rbp-28h]

  v65 = 0LL;
  v66 = 0LL;
  v63 = 0LL;
  v67 = 0uLL;
  v68 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v50 = 0;
  v49 = 0;
  EnterCrit(0LL, 1LL);
  v64 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL, v11, gptiCurrent, v12);
LABEL_3:
    v14 = 0;
    goto LABEL_96;
  }
  if ( !a5 )
  {
LABEL_9:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v17 = *(_DWORD *)a2;
    v53 = *(_DWORD *)a2;
    v18 = *(wchar_t **)(a2 + 8);
    Str1 = v18;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v19 = *(_DWORD *)a3;
    v55 = *(_DWORD *)a3;
    Src = *(void **)(a3 + 8);
    v51 = (__int64)Src;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v78 = *(_OWORD *)a4;
    v79 = *(_QWORD *)(a4 + 16);
    v67 = v78;
    v68 = v79;
    v20 = v79;
    if ( v79 >= MmUserProbeAddress )
      v20 = MmUserProbeAddress;
    v48 = *(_DWORD *)v20;
    LODWORD(v65) = *(_DWORD *)v20;
    v21 = *(_QWORD *)(v20 + 8);
    v66 = v21;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v80 = *a1;
    v81 = a1[1];
    v82 = a1[2];
    v83 = a1[3];
    v84 = a1[4];
    v69 = v80;
    v70 = v81;
    v71 = v82;
    v72 = v83;
    v73 = v84;
    if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
LABEL_35:
      if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int16)(v17 + 2) < (unsigned __int16)v17 )
          ExRaiseStatus(-1073741675);
        Str1 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)(v17 + 2), 2020897621LL);
        if ( !Str1 )
          ExRaiseStatus(-1073741801);
        v50 = 1;
        CurrentThread = KeGetCurrentThread();
        v76 = CurrentThread;
        v26 = 0LL;
        v60 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23, v25) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v26 = *ThreadWin32Thread;
            v60 = *ThreadWin32Thread;
          }
        }
        *(_QWORD *)&v58 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)(v26 + 16) = &v58;
        *((_QWORD *)&v58 + 1) = Str1;
        v59 = Win32FreePool;
        memmove(Str1, v18, (unsigned __int16)v17);
        Str1[(unsigned __int64)(unsigned __int16)v17 >> 1] = 0;
      }
      v28 = Src;
      v29 = (unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL;
      if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_54:
        if ( v29 )
        {
          if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
            ExRaiseStatus(-1073741675);
          v51 = Win32AllocPoolWithQuota((unsigned __int16)(v19 + 2), 2020897621LL);
          if ( !v51 )
            ExRaiseStatus(-1073741801);
          v49 = 1;
          v34 = KeGetCurrentThread();
          v77 = v34;
          v35 = 0LL;
          v62 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31, v33) )
          {
            v36 = (__int64 *)PsGetThreadWin32Thread(v34);
            if ( v36 )
            {
              v35 = *v36;
              v62 = *v36;
            }
          }
          *(_QWORD *)&v56 = *(_QWORD *)(v35 + 16);
          *(_QWORD *)(v35 + 16) = &v56;
          *((_QWORD *)&v56 + 1) = v51;
          v57 = Win32FreePool;
          memmove((void *)v51, v28, (unsigned __int16)v19);
          *(_WORD *)(v51 + 2 * ((unsigned __int64)(unsigned __int16)v19 >> 1)) = 0;
        }
        if ( (v21 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_73:
          if ( a7 )
            v63 = *a7;
          *(_QWORD *)&v73 = Str1;
          v74 = v51;
          *((_QWORD *)&v72 + 1) = v21;
          if ( (*(_DWORD *)(*(_QWORD *)(v64 + 416) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1) )
          {
            if ( (v51 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = UserFindAtom(v51);
            else
              Atom = v51;
            v75 = 0LL;
            if ( Atom )
            {
              v39 = 0;
              v40 = (unsigned __int16 *)&unk_1C02D55D6;
              while ( 1 )
              {
                if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v40 - 3) >> 3) & 0x1F) + 868) )
                {
                  v41 = *v40;
                  if ( *v40 )
                    break;
                }
                ++v39;
                v40 += 24;
                if ( v39 >= 8 )
                  goto LABEL_91;
              }
              v42 = v41 | a6;
              a6 |= v41;
              if ( (v42 & 0x200) != 0 && SDWORD1(v70) < *((_DWORD *)&gDefaultServerClasses + 12 * v39 + 6) )
              {
                UserSetLastError(5LL, v39, (__int64)&gDefaultServerClasses, gpsi);
                v14 = 0;
                UserSetLastError(0LL, v43, v44, v45);
                goto LABEL_92;
              }
              v46 = *((_DWORD *)&gDefaultServerClasses + 12 * v39 + 6);
              if ( SDWORD1(v70) >= v46 )
              {
                LODWORD(v75) = *((_DWORD *)&gDefaultServerClasses + 12 * v39 + 6);
                DWORD1(v70) -= v46;
              }
            }
LABEL_91:
            v14 = RegisterClassEx(&v69, &v67, a5, a6);
            goto LABEL_92;
          }
LABEL_27:
          v14 = 0;
LABEL_92:
          if ( v49 )
            PopAndFreeAlwaysW32ThreadLock(&v56);
          if ( v50 )
            PopAndFreeAlwaysW32ThreadLock(&v58);
          goto LABEL_96;
        }
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v37 = v21 + (unsigned __int16)v48 + 2LL;
        if ( v37 < MmUserProbeAddress && (unsigned __int16)v48 <= HIWORD(v48) )
        {
          if ( (v48 & 1) != 0 )
            goto LABEL_71;
          if ( v37 > v21 )
            goto LABEL_73;
        }
        if ( (v48 & 1) == 0 )
        {
LABEL_72:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_73;
        }
LABEL_71:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
        goto LABEL_72;
      }
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v30 = (char *)Src + (unsigned __int16)v19 + 2;
      if ( (unsigned __int64)v30 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v55) )
      {
        if ( (v19 & 1) != 0 )
          goto LABEL_52;
        if ( v30 > Src )
          goto LABEL_54;
      }
      if ( (v19 & 1) == 0 )
      {
LABEL_53:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_54;
      }
LABEL_52:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
      goto LABEL_53;
    }
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    if ( v22 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v53) )
    {
      if ( (v17 & 1) != 0 )
        goto LABEL_33;
      if ( v22 > (unsigned __int64)v18 )
        goto LABEL_35;
    }
    if ( (v17 & 1) == 0 )
    {
LABEL_34:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_35;
    }
LABEL_33:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
    goto LABEL_34;
  }
  v13 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_27;
  v15 = 0;
  v16 = &unk_1C02D55D4;
  while ( *v16 != a5 )
  {
    ++v15;
    v16 += 24;
    if ( v15 >= 8 )
      goto LABEL_9;
  }
  v14 = 0;
  UserSetLastError(87LL, a5, gptiCurrent, v12);
LABEL_96:
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
