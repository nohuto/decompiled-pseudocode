/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C00229A0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterClassEx @ 0x1C0022834 (_RegisterClassEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterDefaultClass @ 0x1C00230C8 (RegisterDefaultClass.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C0119D7C (RegisterIconTitleClass.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // bx
  unsigned int v16; // ecx
  _WORD *v17; // rax
  int v18; // ebx
  wchar_t *v19; // r13
  int v20; // r15d
  __int128 v21; // xmm2
  ULONG64 v22; // rdx
  ULONG64 v23; // r12
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  ULONG64 v28; // rcx
  __int64 ThreadWin32Thread; // rax
  ULONG64 v30; // rcx
  __int64 v31; // rax
  ULONG64 v32; // rcx
  __int16 Atom; // r8
  __int64 v34; // rcx
  unsigned __int16 *v35; // rdx
  unsigned __int16 v36; // ax
  __int16 v37; // dx
  int v38; // ecx
  int v40; // [rsp+30h] [rbp-168h]
  int v41; // [rsp+34h] [rbp-164h]
  int v42; // [rsp+38h] [rbp-160h]
  int v43; // [rsp+3Ch] [rbp-15Ch]
  int v44; // [rsp+40h] [rbp-158h]
  __int64 v45; // [rsp+58h] [rbp-140h]
  wchar_t *Str1; // [rsp+68h] [rbp-130h]
  unsigned __int64 Src; // [rsp+78h] [rbp-120h]
  _QWORD v48[3]; // [rsp+88h] [rbp-110h] BYREF
  _QWORD v49[4]; // [rsp+A0h] [rbp-F8h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v51; // [rsp+D0h] [rbp-C8h]
  __int128 v52; // [rsp+E0h] [rbp-B8h]
  __int128 v53; // [rsp+F0h] [rbp-A8h]
  __int128 v54; // [rsp+100h] [rbp-98h]
  __int64 v55; // [rsp+110h] [rbp-88h]
  __int64 v56; // [rsp+118h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+120h] [rbp-78h]
  struct _KTHREAD *v58; // [rsp+128h] [rbp-70h]
  __int64 v59; // [rsp+130h] [rbp-68h]
  int v60; // [rsp+140h] [rbp-58h]
  ULONG64 v61; // [rsp+148h] [rbp-50h]
  __int128 v62; // [rsp+150h] [rbp-48h] BYREF
  ULONG64 v63; // [rsp+160h] [rbp-38h]
  ULONG64 v64; // [rsp+178h] [rbp-20h]

  v42 = 0;
  v41 = 0;
  EnterCrit(0LL, 1LL);
  v12 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_3:
    v15 = 0;
    goto LABEL_90;
  }
  v13 = a5;
  if ( !a5 )
  {
LABEL_9:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v18 = *(_DWORD *)a2;
    v43 = *(_DWORD *)a2;
    v19 = *(wchar_t **)(a2 + 8);
    Str1 = v19;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v20 = *(_DWORD *)a3;
    v44 = *(_DWORD *)a3;
    Src = *(_QWORD *)(a3 + 8);
    v45 = Src;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v21 = *(_OWORD *)a4;
    v64 = *(_QWORD *)(a4 + 16);
    v62 = v21;
    v63 = v64;
    v22 = v64;
    if ( v64 >= MmUserProbeAddress )
      v22 = MmUserProbeAddress;
    v40 = *(_DWORD *)v22;
    v60 = *(_DWORD *)v22;
    v23 = *(_QWORD *)(v22 + 8);
    v61 = v23;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v24 = a1[1];
    v25 = a1[2];
    v26 = a1[3];
    v27 = a1[4];
    v50 = *a1;
    v51 = v24;
    v52 = v25;
    v53 = v26;
    v54 = v27;
    if ( ((unsigned __int64)v19 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
LABEL_35:
      if ( ((unsigned __int64)v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
          ExRaiseStatus(-1073741675);
        Str1 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)(v18 + 2), 2020897621LL);
        if ( !Str1 )
          ExRaiseStatus(-1073741801);
        v42 = 1;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v49[0] = *(_QWORD *)(ThreadWin32Thread + 16);
        *(_QWORD *)(ThreadWin32Thread + 16) = v49;
        v49[1] = Str1;
        v49[2] = Win32FreePool;
        memmove(Str1, v19, (unsigned __int16)v18);
        Str1[(unsigned __int64)(unsigned __int16)v18 >> 1] = 0;
      }
      if ( (Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
LABEL_51:
        if ( (Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          if ( (unsigned __int16)(v20 + 2) < (unsigned __int16)v20 )
            ExRaiseStatus(-1073741675);
          v45 = Win32AllocPoolWithQuota((unsigned __int16)(v20 + 2), 2020897621LL);
          if ( !v45 )
            ExRaiseStatus(-1073741801);
          v41 = 1;
          v58 = KeGetCurrentThread();
          v31 = W32GetThreadWin32Thread(v58);
          v48[0] = *(_QWORD *)(v31 + 16);
          *(_QWORD *)(v31 + 16) = v48;
          v48[1] = v45;
          v48[2] = Win32FreePool;
          memmove((void *)v45, (const void *)Src, (unsigned __int16)v20);
          *(_WORD *)(v45 + 2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)) = 0;
        }
        if ( (v23 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_67:
          if ( a7 )
            v59 = *a7;
          *(_QWORD *)&v54 = Str1;
          v55 = v45;
          *((_QWORD *)&v53 + 1) = v23;
          if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
            || (unsigned int)RegisterDefaultClass(Str1) )
          {
            if ( (v45 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = UserFindAtom(v45);
            else
              Atom = v45;
            v56 = 0LL;
            if ( Atom )
            {
              v34 = 0LL;
              v35 = (unsigned __int16 *)&unk_1C02C3606;
              while ( 1 )
              {
                if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v35 - 3) >> 3) & 0x1F) + 868) )
                {
                  v36 = *v35;
                  if ( *v35 )
                    break;
                }
                v34 = (unsigned int)(v34 + 1);
                v35 += 24;
                if ( (unsigned int)v34 >= 8 )
                  goto LABEL_85;
              }
              v37 = v36 | a6;
              a6 |= v36;
              if ( (v37 & 0x200) != 0 && SDWORD1(v51) < *((_DWORD *)&gDefaultServerClasses + 12 * v34 + 6) )
              {
                UserSetLastError(5LL);
                v15 = 0;
                UserSetLastError(0LL);
                goto LABEL_86;
              }
              v38 = *((_DWORD *)&gDefaultServerClasses + 12 * v34 + 6);
              if ( SDWORD1(v51) >= v38 )
              {
                LODWORD(v56) = v38;
                DWORD1(v51) -= v38;
              }
            }
LABEL_85:
            v15 = RegisterClassEx((__int64)&v50, &v62, a5, a6);
            goto LABEL_86;
          }
LABEL_27:
          v15 = 0;
LABEL_86:
          if ( v41 )
            PopAndFreeAlwaysW32ThreadLock(v48);
          if ( v42 )
            PopAndFreeAlwaysW32ThreadLock(v49);
          goto LABEL_90;
        }
        if ( (v23 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v32 = v23 + (unsigned __int16)v40 + 2LL;
        if ( v32 < MmUserProbeAddress && (unsigned __int16)v40 <= HIWORD(v40) )
        {
          if ( (v40 & 1) != 0 )
            goto LABEL_65;
          if ( v32 > v23 )
            goto LABEL_67;
        }
        if ( (v40 & 1) == 0 )
        {
LABEL_66:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_67;
        }
LABEL_65:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
        goto LABEL_66;
      }
      if ( (Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v30 = (unsigned __int16)v20 + Src + 2;
      if ( v30 < MmUserProbeAddress && (unsigned __int16)v20 <= HIWORD(v44) )
      {
        if ( (v20 & 1) != 0 )
          goto LABEL_49;
        if ( v30 > Src )
          goto LABEL_51;
      }
      if ( (v20 & 1) == 0 )
      {
LABEL_50:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_51;
      }
LABEL_49:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
      goto LABEL_50;
    }
    if ( ((unsigned __int8)v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = (ULONG64)v19 + (unsigned __int16)v18 + 2;
    if ( v28 < MmUserProbeAddress && (unsigned __int16)v18 <= HIWORD(v43) )
    {
      if ( (v18 & 1) != 0 )
        goto LABEL_33;
      if ( v28 > (unsigned __int64)v19 )
        goto LABEL_35;
    }
    if ( (v18 & 1) == 0 )
    {
LABEL_34:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_35;
    }
LABEL_33:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
    goto LABEL_34;
  }
  v14 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_27;
  v16 = 0;
  v17 = &unk_1C02C3604;
  while ( *v17 != a5 )
  {
    ++v16;
    v17 += 24;
    if ( v16 >= 8 )
      goto LABEL_9;
  }
  v15 = 0;
  UserSetLastError(87LL);
LABEL_90:
  UserSessionSwitchLeaveCrit(v14, v13, v12, v11);
  return v15;
}
