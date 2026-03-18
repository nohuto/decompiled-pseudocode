/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C00962A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     RegisterDefaultClass @ 0x1C0096080 (RegisterDefaultClass.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _RegisterClassEx @ 0x1C0096AB8 (_RegisterClassEx.c)
 *     RegisterIconTitleClass @ 0x1C0122218 (RegisterIconTitleClass.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 *ThreadWin32Thread; // rax
  void *v29; // r13
  unsigned __int64 v30; // rbx
  char *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *v36; // rdi
  __int64 v37; // rbx
  __int64 *v38; // rax
  ULONG64 v39; // rcx
  __int16 Atom; // r8
  unsigned int v41; // ecx
  unsigned __int16 *v42; // rdx
  unsigned __int16 v43; // ax
  __int16 v44; // dx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edx
  int v50; // [rsp+30h] [rbp-1C8h]
  int v51; // [rsp+34h] [rbp-1C4h]
  int v52; // [rsp+38h] [rbp-1C0h]
  __int64 v53; // [rsp+48h] [rbp-1B0h]
  wchar_t *Str1; // [rsp+58h] [rbp-1A0h]
  int v55; // [rsp+60h] [rbp-198h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-198h]
  int v57; // [rsp+68h] [rbp-190h]
  __int128 v58; // [rsp+78h] [rbp-180h] BYREF
  __int64 (__fastcall *v59)(_QWORD); // [rsp+88h] [rbp-170h]
  __int128 v60; // [rsp+90h] [rbp-168h] BYREF
  __int64 (__fastcall *v61)(_QWORD); // [rsp+A0h] [rbp-158h]
  __int64 v62; // [rsp+B0h] [rbp-148h]
  void *Src; // [rsp+B8h] [rbp-140h]
  __int64 v64; // [rsp+C0h] [rbp-138h]
  __int64 v65; // [rsp+C8h] [rbp-130h]
  __int64 v66; // [rsp+D0h] [rbp-128h]
  __int64 v67; // [rsp+D8h] [rbp-120h]
  ULONG64 v68; // [rsp+E0h] [rbp-118h]
  __int128 v69; // [rsp+E8h] [rbp-110h] BYREF
  ULONG64 v70; // [rsp+F8h] [rbp-100h]
  __int128 v71; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v72; // [rsp+110h] [rbp-E8h]
  __int128 v73; // [rsp+120h] [rbp-D8h]
  __int128 v74; // [rsp+130h] [rbp-C8h]
  __int128 v75; // [rsp+140h] [rbp-B8h]
  __int64 v76; // [rsp+150h] [rbp-A8h]
  __int64 v77; // [rsp+158h] [rbp-A0h]
  struct _KTHREAD *v78; // [rsp+160h] [rbp-98h]
  struct _KTHREAD *v79; // [rsp+168h] [rbp-90h]
  __int128 v80; // [rsp+178h] [rbp-80h]
  ULONG64 v81; // [rsp+188h] [rbp-70h]
  __int128 v82; // [rsp+190h] [rbp-68h]
  __int128 v83; // [rsp+1A0h] [rbp-58h]
  __int128 v84; // [rsp+1B0h] [rbp-48h]
  __int128 v85; // [rsp+1C0h] [rbp-38h]
  __int128 v86; // [rsp+1D0h] [rbp-28h]

  v67 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v69 = 0uLL;
  v70 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v52 = 0;
  v51 = 0;
  EnterCrit(0LL, 1LL);
  v66 = gptiCurrent;
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
    v55 = *(_DWORD *)a2;
    v18 = *(wchar_t **)(a2 + 8);
    Str1 = v18;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v19 = *(_DWORD *)a3;
    v57 = *(_DWORD *)a3;
    Src = *(void **)(a3 + 8);
    v53 = (__int64)Src;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v80 = *(_OWORD *)a4;
    v81 = *(_QWORD *)(a4 + 16);
    v69 = v80;
    v70 = v81;
    v20 = v81;
    if ( v81 >= MmUserProbeAddress )
      v20 = MmUserProbeAddress;
    v50 = *(_DWORD *)v20;
    LODWORD(v67) = *(_DWORD *)v20;
    v21 = *(_QWORD *)(v20 + 8);
    v68 = v21;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v82 = *a1;
    v83 = a1[1];
    v84 = a1[2];
    v85 = a1[3];
    v86 = a1[4];
    v71 = v82;
    v72 = v83;
    v73 = v84;
    v74 = v85;
    v75 = v86;
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
        v52 = 1;
        CurrentThread = KeGetCurrentThread();
        v78 = CurrentThread;
        v27 = 0LL;
        v62 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23, v25, v26) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v27 = *ThreadWin32Thread;
            v62 = *ThreadWin32Thread;
          }
        }
        *(_QWORD *)&v60 = *(_QWORD *)(v27 + 16);
        *(_QWORD *)(v27 + 16) = &v60;
        *((_QWORD *)&v60 + 1) = Str1;
        v61 = Win32FreePool;
        memmove(Str1, v18, (unsigned __int16)v17);
        Str1[(unsigned __int64)(unsigned __int16)v17 >> 1] = 0;
      }
      v29 = Src;
      v30 = (unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL;
      if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_54:
        if ( v30 )
        {
          if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
            ExRaiseStatus(-1073741675);
          v53 = Win32AllocPoolWithQuota((unsigned __int16)(v19 + 2), 2020897621LL);
          if ( !v53 )
            ExRaiseStatus(-1073741801);
          v51 = 1;
          v36 = KeGetCurrentThread();
          v79 = v36;
          v37 = 0LL;
          v64 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v32, v34, v35) )
          {
            v38 = (__int64 *)PsGetThreadWin32Thread(v36);
            if ( v38 )
            {
              v37 = *v38;
              v64 = *v38;
            }
          }
          *(_QWORD *)&v58 = *(_QWORD *)(v37 + 16);
          *(_QWORD *)(v37 + 16) = &v58;
          *((_QWORD *)&v58 + 1) = v53;
          v59 = Win32FreePool;
          memmove((void *)v53, v29, (unsigned __int16)v19);
          *(_WORD *)(v53 + 2 * ((unsigned __int64)(unsigned __int16)v19 >> 1)) = 0;
        }
        if ( (v21 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_73:
          if ( a7 )
            v65 = *a7;
          *(_QWORD *)&v75 = Str1;
          v76 = v53;
          *((_QWORD *)&v74 + 1) = v21;
          if ( (*(_DWORD *)(*(_QWORD *)(v66 + 416) + 12LL) & 0x2000) != 0 || (unsigned int)RegisterDefaultClass(Str1) )
          {
            if ( (v53 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = UserFindAtom(v53);
            else
              Atom = v53;
            v77 = 0LL;
            if ( Atom )
            {
              v41 = 0;
              v42 = (unsigned __int16 *)&unk_1C02D6A56;
              while ( 1 )
              {
                if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v42 - 3) >> 3) & 0x1F) + 868) )
                {
                  v43 = *v42;
                  if ( *v42 )
                    break;
                }
                ++v41;
                v42 += 24;
                if ( v41 >= 8 )
                  goto LABEL_91;
              }
              v44 = v43 | a6;
              a6 |= v43;
              if ( (v44 & 0x200) != 0 && SDWORD1(v72) < *((_DWORD *)&gDefaultServerClasses + 12 * v41 + 6) )
              {
                UserSetLastError(5LL, v41, (__int64)&gDefaultServerClasses, gpsi);
                v14 = 0;
                UserSetLastError(0LL, v45, v46, v47);
                goto LABEL_92;
              }
              v48 = *((_DWORD *)&gDefaultServerClasses + 12 * v41 + 6);
              if ( SDWORD1(v72) >= v48 )
              {
                LODWORD(v77) = *((_DWORD *)&gDefaultServerClasses + 12 * v41 + 6);
                DWORD1(v72) -= v48;
              }
            }
LABEL_91:
            v14 = RegisterClassEx(&v71, &v69, a5, a6);
            goto LABEL_92;
          }
LABEL_27:
          v14 = 0;
LABEL_92:
          if ( v51 )
            PopAndFreeAlwaysW32ThreadLock(&v58);
          if ( v52 )
            PopAndFreeAlwaysW32ThreadLock(&v60);
          goto LABEL_96;
        }
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v39 = v21 + (unsigned __int16)v50 + 2LL;
        if ( v39 < MmUserProbeAddress && (unsigned __int16)v50 <= HIWORD(v50) )
        {
          if ( (v50 & 1) != 0 )
            goto LABEL_71;
          if ( v39 > v21 )
            goto LABEL_73;
        }
        if ( (v50 & 1) == 0 )
        {
LABEL_72:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_73;
        }
LABEL_71:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
        goto LABEL_72;
      }
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v31 = (char *)Src + (unsigned __int16)v19 + 2;
      if ( (unsigned __int64)v31 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v57) )
      {
        if ( (v19 & 1) != 0 )
          goto LABEL_52;
        if ( v31 > Src )
          goto LABEL_54;
      }
      if ( (v19 & 1) == 0 )
      {
LABEL_53:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_54;
      }
LABEL_52:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
      goto LABEL_53;
    }
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    if ( v22 < MmUserProbeAddress && (unsigned __int16)v17 <= HIWORD(v55) )
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
  v16 = &unk_1C02D6A54;
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
