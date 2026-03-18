/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00AB5F8
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00AB4F0 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C010D200 (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00ABB38 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0109D24 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // rcx
  _WORD *v35; // rdx
  unsigned int v36; // ecx
  _DWORD *v37; // r10
  int v38; // esi
  __int64 *v39; // r8
  __int64 v40; // r10
  __int64 v41; // rbx
  __int64 v42; // rcx
  _BYTE v43[4]; // [rsp+20h] [rbp-68h] BYREF
  int v44; // [rsp+24h] [rbp-64h] BYREF
  __int64 v45; // [rsp+28h] [rbp-60h]
  struct tagWND *v46; // [rsp+90h] [rbp+8h] BYREF
  int v47; // [rsp+98h] [rbp+10h]
  __int64 v48; // [rsp+A0h] [rbp+18h]

  v48 = a3;
  v47 = a2;
  v46 = a1;
  v6 = (int)a2;
  v8 = 0LL;
  v43[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9), v11 = gpidLogon, ThreadProcessId == (HANDLE)gpidLogon)
    && (v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent), v11 = gpidLogon, v12 != (HANDLE)gpidLogon)
    || !(unsigned __int8)Enforced(v11)
    && (CurrentProcess = PsGetCurrentProcess(v13, a2, v14, v15), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL),
         a2 = *(_QWORD *)(gptiCurrent + 416LL),
         *(_DWORD *)(a2 + 772) != *(_DWORD *)(v17 + 772))
     || *(_DWORD *)(a2 + 776) != *(_DWORD *)(v17 + 776)) )
  {
    UserSetLastError(5LL, a2, a3, a4);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
    return 0LL;
  }
  if ( (int)v6 >= 0 )
  {
    v19 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    a2 = v6 + 8;
    if ( v6 + 8 > v19 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v20 != PsGetCurrentProcessWin32Process(v19, a2) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, a2);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, v20 + 872)
          && *(int *)(PsGetCurrentProcessWin32Process(v24, v23) + 12) >= 0 )
        {
LABEL_66:
          v28 = 5LL;
          goto LABEL_67;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v43[0] = 1;
      }
    }
  }
  v27 = *((_QWORD *)a1 + 5);
  v25 = *(_WORD *)(v27 + 42) & 0x3FFF;
  if ( (*(_WORD *)(v27 + 42) & 0x3FFF) == 0 )
    goto LABEL_61;
  if ( (*(_BYTE *)(v27 + 18) & 1) != 0 )
  {
    if ( *(_DWORD *)(v27 + 252) )
      v26 = *((_QWORD *)a1 + 35);
    else
      v26 = *(_QWORD *)(v27 + 296);
  }
  else
  {
    v26 = 0LL;
  }
  if ( v26 )
  {
    if ( !(_DWORD)v6 )
    {
      v8 = *(_QWORD *)v26;
      v45 = *(_QWORD *)v26;
      *(_QWORD *)v26 = a3;
LABEL_68:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
      return v8;
    }
    if ( (_DWORD)v6 == 16 )
    {
      LODWORD(v46) = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, &v46)
        && *(int *)(v31 + 200) >= 30 )
      {
        v8 = *(_QWORD *)(v30 + 16);
        v45 = v8;
        *(_QWORD *)(v30 + 16) = a3;
      }
      else
      {
        LODWORD(v46) = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v29, &v46) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          v33 = *((_QWORD *)a1 + 5);
        }
        if ( *(int *)(v33 + 200) < 30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
      }
      goto LABEL_68;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v28 = 1415LL;
LABEL_67:
      UserSetLastError(v28, a2, v25, v26);
      goto LABEL_68;
    }
LABEL_61:
    if ( (int)v6 < 0 )
      goto LABEL_62;
    goto LABEL_48;
  }
  if ( (int)v6 < 0 )
  {
LABEL_62:
    v8 = xxxSetWindowData(a1);
    goto LABEL_68;
  }
  a2 = (*(_WORD *)(v27 + 42) & 0x3FFFu) - 666;
  if ( (int)v6 >= *(unsigned __int16 *)(gpsi + 2 * a2 + 328) - 320 )
    goto LABEL_61;
  if ( (unsigned int)v25 < 0x2A1 )
  {
LABEL_43:
    v28 = 1413LL;
    goto LABEL_67;
  }
  if ( (unsigned int)v25 <= 0x2A6 )
    goto LABEL_57;
  if ( (_DWORD)v25 != 679 )
  {
    if ( (unsigned int)(v25 - 680) > 2 )
      goto LABEL_43;
LABEL_57:
    if ( (_DWORD)v6 )
      goto LABEL_43;
    v44 = 0;
    if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, &v44) )
    {
      v34 = **(_QWORD **)(v40 + 296);
      v45 = v34;
    }
    else
    {
      v34 = **((_QWORD **)a1 + 35);
    }
    goto LABEL_46;
  }
  if ( (_DWORD)v6 != 8 )
    goto LABEL_43;
  v34 = **(_QWORD **)(v27 + 296);
  v45 = v34;
LABEL_46:
  if ( v34 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
    goto LABEL_43;
LABEL_48:
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(unsigned int *)(v25 + 252);
  if ( (unsigned __int64)(unsigned int)v6 + 8 > (unsigned int)(v26 + *(_DWORD *)(v25 + 200)) )
    goto LABEL_43;
  if ( a5 )
  {
    v35 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v35[3] & 0x100) != 0 )
    {
      v36 = 0;
      v37 = &gDefaultServerClasses;
      while ( *v35 != *(_WORD *)(gpsi + 2LL * ((*v37 >> 3) & 0x1F) + 868) )
      {
        ++v36;
        v37 += 12;
        if ( v36 >= 8 )
          goto LABEL_54;
      }
      if ( (int)v6 < *((_DWORD *)&gDefaultServerClasses + 12 * v36 + 6) )
      {
        a2 = *v37 & 0xF8;
        if ( (*(_BYTE *)v37 & 0xF8) != 0xB0 || (unsigned __int64)((int)v6 + 8LL) > 0xFFFFFFFFFFFFFEE0uLL )
          goto LABEL_66;
      }
    }
  }
LABEL_54:
  if ( (int)v6 + 8LL <= v26 )
  {
    v42 = *((_QWORD *)a1 + 35);
    v41 = *(_QWORD *)((int)v6 + v42);
    *(_QWORD *)((int)v6 + v42) = a3;
  }
  else
  {
    v38 = v6 - v26;
    if ( (*(_DWORD *)(v25 + 232) & 0x800) != 0 )
      v39 = (__int64 *)(*(_QWORD *)(v25 + 296) + v38 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v39 = (__int64 *)(*(_QWORD *)(v25 + 296) + v38);
    v41 = *v39;
    v45 = *v39;
    *v39 = a3;
  }
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
  return v41;
}
