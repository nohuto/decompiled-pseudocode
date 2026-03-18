/*
 * XREFs of xxxSetWindowLong @ 0x1C0025120
 * Callers:
 *     NtUserSetWindowLong @ 0x1C0025050 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C0025B7C (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0070C74 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C01318AC (safe_cast_wf_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  HANDLE ThreadProcessId; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  int *v22; // rax
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // ecx
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  _WORD *v33; // rdx
  unsigned int v34; // ecx
  _DWORD *v35; // r10
  int v36; // edi
  __int64 v37; // rdx
  unsigned int *v38; // rax
  int v39; // ecx
  __int64 v40; // rcx
  _BYTE v41[4]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v42; // [rsp+24h] [rbp-64h]
  struct tagWND *v43; // [rsp+90h] [rbp+8h] BYREF
  int v44; // [rsp+98h] [rbp+10h]
  unsigned int v45; // [rsp+A0h] [rbp+18h]

  v45 = a3;
  v44 = a2;
  v43 = a1;
  v6 = a2;
  v8 = 0;
  v41[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9), ThreadProcessId == (HANDLE)gpidLogon)
    && (ThreadProcessId = PsGetThreadProcessId((PETHREAD)*gptiCurrent), ThreadProcessId != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(ThreadProcessId, v10), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL),
         v14 = *(_QWORD *)(gptiCurrent + 416LL),
         *(_DWORD *)(v14 + 772) != *(_DWORD *)(v13 + 772))
     || *(_DWORD *)(v14 + 776) != *(_DWORD *)(v13 + 776)) )
  {
    UserSetLastError(5LL);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v41);
    return 0LL;
  }
  if ( (int)v6 >= 0 )
  {
    v16 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    if ( v6 + 4 > v16 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v17 != PsGetCurrentProcessWin32Process(v16) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        v19 = *(_QWORD *)(v17 + 872);
        v20 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v18) + 872);
        if ( gbEnforceUIPI
          && (unsigned int)v20 <= (unsigned int)v19
          && ((_DWORD)v20 != (_DWORD)v19 || HIDWORD(v20) != HIDWORD(v19) && HIDWORD(v20) != -1 && HIDWORD(v19) != -1)
          && *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v20)) + 12) >= 0 )
        {
          goto LABEL_62;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v41[0] = 1;
      }
    }
  }
  v21 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v21 + 42) & 0x3FFF) == 0 )
    goto LABEL_55;
  v22 = (int *)safe_cast_wf_to_PDIALOG(a1);
  if ( !v22 )
  {
    if ( (int)v6 >= 0 && (int)v6 < *(unsigned __int16 *)(gpsi + 2LL * (unsigned int)(v23 - 666) + 328) - 312 )
    {
      if ( v23 != 679 )
        goto LABEL_54;
      v31 = v21;
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 != 8 )
          goto LABEL_54;
        v42 = **(_DWORD **)(v21 + 296);
        if ( v42 )
        {
          if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_54;
        }
        v21 = *((_QWORD *)a1 + 5);
        v31 = v21;
      }
LABEL_45:
      v32 = *(unsigned int *)(v31 + 252);
      if ( (unsigned __int64)(unsigned int)v6 + 4 > (unsigned int)(v32 + *(_DWORD *)(v31 + 200)) )
        goto LABEL_54;
      if ( !a5 )
        goto LABEL_51;
      v33 = *(_WORD **)(*((_QWORD *)a1 + 14) + 8LL);
      if ( (v33[3] & 0x100) == 0 )
        goto LABEL_51;
      v34 = 0;
      v35 = &gDefaultServerClasses;
      while ( *v33 != *(_WORD *)(gpsi + 2LL * ((*v35 >> 3) & 0x1F) + 868) )
      {
        ++v34;
        v35 += 12;
        if ( v34 >= 8 )
          goto LABEL_51;
      }
      if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v34 + 6)
        || (*v35 & 0xF8) == 0xB0 && (unsigned __int64)((int)v6 + 4LL) <= 0xFFFFFFFFFFFFFF08uLL )
      {
LABEL_51:
        if ( (int)v6 + 4LL <= v32 )
        {
          v40 = *((_QWORD *)a1 + 34);
          v8 = *(_DWORD *)((int)v6 + v40);
          *(_DWORD *)((int)v6 + v40) = a3;
        }
        else
        {
          v36 = v6 - v32;
          v37 = *(_QWORD *)(v21 + 296);
          if ( (*(_DWORD *)(v21 + 232) & 0x800) != 0 )
            v38 = (unsigned int *)(v37 + v36 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
          else
            v38 = (unsigned int *)(v36 + v37);
          v8 = *v38;
          v42 = *v38;
          *v38 = a3;
        }
        goto LABEL_67;
      }
LABEL_62:
      v24 = 5LL;
      goto LABEL_63;
    }
LABEL_55:
    v31 = v21;
    if ( (int)v6 < 0 )
    {
      if ( (unsigned int)(v6 + 21) <= 9 )
      {
        v39 = 547;
        if ( _bittest(&v39, v6 + 21) )
        {
          v8 = xxxSetWindowData(a1);
          goto LABEL_67;
        }
      }
LABEL_54:
      v24 = 1413LL;
      goto LABEL_63;
    }
    goto LABEL_45;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 16 )
    {
      LODWORD(v43) = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 293, &v43)
        && *(int *)(v26 + 200) >= 30 )
      {
        v8 = *(_DWORD *)(v27 + 16);
        v42 = v8;
        *(_QWORD *)(v27 + 16) = (int)a3;
      }
      else
      {
        LODWORD(v43) = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v25, &v43) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
          v29 = *((_QWORD *)a1 + 5);
        }
        if ( *(int *)(v29 + 200) < 30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
      }
      goto LABEL_67;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v24 = 1415LL;
LABEL_63:
      UserSetLastError(v24);
      goto LABEL_67;
    }
    goto LABEL_55;
  }
  v42 = *v22;
  v30 = v42;
  *(_QWORD *)v22 = (int)a3;
  v8 = v30;
LABEL_67:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v41);
  return v8;
}
