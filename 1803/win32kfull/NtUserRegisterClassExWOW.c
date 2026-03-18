/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C001AAC0
 * Callers:
 *     <none>
 * Callees:
 *     RegisterDefaultClass @ 0x1C001A8C0 (RegisterDefaultClass.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _RegisterClassEx @ 0x1C001B1C4 (_RegisterClassEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C00FBFF0 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  ULONG64 v21; // rdx
  ULONG64 v22; // r12
  ULONG64 v23; // rcx
  __int64 ThreadWin32Thread; // rax
  ULONG64 v25; // rcx
  __int64 v26; // rax
  ULONG64 v27; // rcx
  __int16 Atom; // r8
  __int64 v29; // rcx
  unsigned __int16 *v30; // rdx
  unsigned __int16 v31; // ax
  __int16 v32; // dx
  int v33; // ecx
  int v35; // [rsp+30h] [rbp-1B8h]
  int v36; // [rsp+34h] [rbp-1B4h]
  int v37; // [rsp+38h] [rbp-1B0h]
  int v38; // [rsp+3Ch] [rbp-1ACh]
  int v39; // [rsp+40h] [rbp-1A8h]
  __int64 v40; // [rsp+58h] [rbp-190h]
  wchar_t *Str1; // [rsp+68h] [rbp-180h]
  unsigned __int64 Src; // [rsp+78h] [rbp-170h]
  _QWORD v43[3]; // [rsp+88h] [rbp-160h] BYREF
  _QWORD v44[4]; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-118h]
  __int128 v47; // [rsp+E0h] [rbp-108h]
  __int128 v48; // [rsp+F0h] [rbp-F8h]
  __int128 v49; // [rsp+100h] [rbp-E8h]
  __int64 v50; // [rsp+110h] [rbp-D8h]
  __int64 v51; // [rsp+118h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+120h] [rbp-C8h]
  struct _KTHREAD *v53; // [rsp+128h] [rbp-C0h]
  __int64 v54; // [rsp+130h] [rbp-B8h]
  int v55; // [rsp+140h] [rbp-A8h]
  ULONG64 v56; // [rsp+148h] [rbp-A0h]
  __int128 v57; // [rsp+150h] [rbp-98h]
  ULONG64 v58; // [rsp+160h] [rbp-88h]
  __int128 v59; // [rsp+168h] [rbp-80h] BYREF
  ULONG64 v60; // [rsp+178h] [rbp-70h]
  __int128 v61; // [rsp+180h] [rbp-68h]
  __int128 v62; // [rsp+190h] [rbp-58h]
  __int128 v63; // [rsp+1A0h] [rbp-48h]
  __int128 v64; // [rsp+1B0h] [rbp-38h]
  __int128 v65; // [rsp+1C0h] [rbp-28h]

  v37 = 0;
  v36 = 0;
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
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v18 = *(_DWORD *)a2;
    v38 = *(_DWORD *)a2;
    v19 = *(wchar_t **)(a2 + 8);
    Str1 = v19;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v20 = *(_DWORD *)a3;
    v39 = *(_DWORD *)a3;
    Src = *(_QWORD *)(a3 + 8);
    v40 = Src;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v57 = *(_OWORD *)a4;
    v58 = *(_QWORD *)(a4 + 16);
    v59 = v57;
    v60 = v58;
    v21 = v58;
    if ( v58 >= MmUserProbeAddress )
      v21 = MmUserProbeAddress;
    v35 = *(_DWORD *)v21;
    v55 = *(_DWORD *)v21;
    v22 = *(_QWORD *)(v21 + 8);
    v56 = v22;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v61 = *a1;
    v62 = a1[1];
    v63 = a1[2];
    v64 = a1[3];
    v65 = a1[4];
    v45 = v61;
    v46 = v62;
    v47 = v63;
    v48 = v64;
    v49 = v65;
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
        v37 = 1;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v44[0] = *(_QWORD *)(ThreadWin32Thread + 16);
        *(_QWORD *)(ThreadWin32Thread + 16) = v44;
        v44[1] = Str1;
        v44[2] = Win32FreePool;
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
          v40 = Win32AllocPoolWithQuota((unsigned __int16)(v20 + 2), 2020897621LL);
          if ( !v40 )
            ExRaiseStatus(-1073741801);
          v36 = 1;
          v53 = KeGetCurrentThread();
          v26 = W32GetThreadWin32Thread(v53);
          v43[0] = *(_QWORD *)(v26 + 16);
          *(_QWORD *)(v26 + 16) = v43;
          v43[1] = v40;
          v43[2] = Win32FreePool;
          memmove((void *)v40, (const void *)Src, (unsigned __int16)v20);
          *(_WORD *)(v40 + 2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)) = 0;
        }
        if ( (v22 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
LABEL_67:
          if ( a7 )
            v54 = *a7;
          *(_QWORD *)&v49 = Str1;
          v50 = v40;
          *((_QWORD *)&v48 + 1) = v22;
          if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) != 0
            || (unsigned int)RegisterDefaultClass(Str1) )
          {
            if ( (v40 & 0xFFFFFFFFFFFF0000uLL) != 0 )
              Atom = UserFindAtom(v40);
            else
              Atom = v40;
            v51 = 0LL;
            if ( Atom )
            {
              v29 = 0LL;
              v30 = (unsigned __int16 *)&unk_1C02D2596;
              while ( 1 )
              {
                if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v30 - 3) >> 3) & 0x1F) + 868) )
                {
                  v31 = *v30;
                  if ( *v30 )
                    break;
                }
                v29 = (unsigned int)(v29 + 1);
                v30 += 24;
                if ( (unsigned int)v29 >= 8 )
                  goto LABEL_85;
              }
              v32 = v31 | a6;
              a6 |= v31;
              if ( (v32 & 0x200) != 0 && SDWORD1(v46) < *((_DWORD *)&gDefaultServerClasses + 12 * v29 + 6) )
              {
                UserSetLastError(5LL);
                v15 = 0;
                UserSetLastError(0LL);
                goto LABEL_86;
              }
              v33 = *((_DWORD *)&gDefaultServerClasses + 12 * v29 + 6);
              if ( SDWORD1(v46) >= v33 )
              {
                LODWORD(v51) = v33;
                DWORD1(v46) -= v33;
              }
            }
LABEL_85:
            v15 = RegisterClassEx(&v45, &v59, a5, a6);
            goto LABEL_86;
          }
LABEL_27:
          v15 = 0;
LABEL_86:
          if ( v36 )
            PopAndFreeAlwaysW32ThreadLock(v43);
          if ( v37 )
            PopAndFreeAlwaysW32ThreadLock(v44);
          goto LABEL_90;
        }
        if ( (v22 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v27 = v22 + (unsigned __int16)v35 + 2LL;
        if ( v27 < MmUserProbeAddress && (unsigned __int16)v35 <= HIWORD(v35) )
        {
          if ( (v35 & 1) != 0 )
            goto LABEL_65;
          if ( v27 > v22 )
            goto LABEL_67;
        }
        if ( (v35 & 1) == 0 )
        {
LABEL_66:
          *(_BYTE *)MmUserProbeAddress = 0;
          goto LABEL_67;
        }
LABEL_65:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
        goto LABEL_66;
      }
      if ( (Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = (unsigned __int16)v20 + Src + 2;
      if ( v25 < MmUserProbeAddress && (unsigned __int16)v20 <= HIWORD(v39) )
      {
        if ( (v20 & 1) != 0 )
          goto LABEL_49;
        if ( v25 > Src )
          goto LABEL_51;
      }
      if ( (v20 & 1) == 0 )
      {
LABEL_50:
        *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_51;
      }
LABEL_49:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      goto LABEL_50;
    }
    if ( ((unsigned __int8)v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (ULONG64)v19 + (unsigned __int16)v18 + 2;
    if ( v23 < MmUserProbeAddress && (unsigned __int16)v18 <= HIWORD(v38) )
    {
      if ( (v18 & 1) != 0 )
        goto LABEL_33;
      if ( v23 > (unsigned __int64)v19 )
        goto LABEL_35;
    }
    if ( (v18 & 1) == 0 )
    {
LABEL_34:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_35;
    }
LABEL_33:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
    goto LABEL_34;
  }
  v14 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_27;
  v16 = 0;
  v17 = &unk_1C02D2594;
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
