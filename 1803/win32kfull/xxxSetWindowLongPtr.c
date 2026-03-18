/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C0025674
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00255A0 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C0107074 (xxxCsDdeInitialize.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C0025B7C (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0070C74 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  HANDLE v13; // rax
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // r10
  unsigned int v24; // r8d
  __int64 *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  _WORD *v35; // rdx
  unsigned int v36; // ecx
  _DWORD *v37; // r10
  int v38; // esi
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // r10
  __int64 v42; // rcx
  _BYTE v43[4]; // [rsp+20h] [rbp-78h] BYREF
  int v44; // [rsp+24h] [rbp-74h] BYREF
  __int64 v45; // [rsp+28h] [rbp-70h]
  struct tagWND *v46; // [rsp+A0h] [rbp+8h] BYREF
  int v47; // [rsp+A8h] [rbp+10h]
  __int64 v48; // [rsp+B0h] [rbp+18h]

  v48 = a3;
  v47 = a2;
  v46 = a1;
  v6 = a2;
  v8 = 0LL;
  v43[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9), v12 = gpidLogon, ThreadProcessId == (HANDLE)gpidLogon)
    && (v13 = PsGetThreadProcessId((PETHREAD)*gptiCurrent), v12 = gpidLogon, v13 != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(v12, v11), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v15 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL),
         v16 = *(_QWORD *)(gptiCurrent + 416LL),
         *(_DWORD *)(v16 + 772) != *(_DWORD *)(v15 + 772))
     || *(_DWORD *)(v16 + 776) != *(_DWORD *)(v15 + 776)) )
  {
    UserSetLastError(5LL);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
    return 0LL;
  }
  if ( (int)v6 >= 0 )
  {
    v18 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    if ( v6 + 8 > v18 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v19 != PsGetCurrentProcessWin32Process(v18) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        v21 = *(_QWORD *)(v19 + 872);
        v22 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v20) + 872);
        if ( gbEnforceUIPI
          && (unsigned int)v22 <= (unsigned int)v21
          && ((_DWORD)v22 != (_DWORD)v21 || HIDWORD(v22) != HIDWORD(v21) && HIDWORD(v22) != -1 && HIDWORD(v21) != -1)
          && *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v22)) + 12) >= 0 )
        {
LABEL_71:
          v26 = 5LL;
          goto LABEL_72;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v43[0] = 1;
      }
    }
  }
  v23 = *((_QWORD *)a1 + 5);
  v24 = *(_WORD *)(v23 + 42) & 0x3FFF;
  if ( !v24 )
    goto LABEL_66;
  if ( (*(_BYTE *)(v23 + 18) & 1) != 0 )
  {
    if ( *(_DWORD *)(v23 + 252) )
      v25 = (__int64 *)*((_QWORD *)a1 + 34);
    else
      v25 = *(__int64 **)(v23 + 296);
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v25 )
  {
    if ( (int)v6 < 0 )
    {
LABEL_67:
      v8 = xxxSetWindowData(a1);
      goto LABEL_76;
    }
    if ( (int)v6 >= *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(v23 + 42) & 0x3FFFu) - 666) + 328) - 312 )
      goto LABEL_66;
    if ( v24 < 0x2A1 )
      goto LABEL_48;
    if ( v24 > 0x2A6 )
    {
      if ( v24 == 679 )
      {
        if ( (_DWORD)v6 != 8 )
          goto LABEL_48;
        v32 = **(_QWORD **)(v23 + 296);
        v45 = v32;
        goto LABEL_51;
      }
      if ( v24 - 680 > 2 )
        goto LABEL_48;
    }
    if ( (_DWORD)v6 )
      goto LABEL_48;
    v44 = 0;
    if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 293, &v44) )
    {
      v32 = **(_QWORD **)(v41 + 296);
      v45 = v32;
    }
    else
    {
      v32 = **((_QWORD **)a1 + 34);
    }
LABEL_51:
    if ( v32 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      goto LABEL_48;
    goto LABEL_53;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 16 )
    {
      LODWORD(v46) = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 293, &v46)
        && *(int *)(v29 + 200) >= 30 )
      {
        v8 = *(_QWORD *)(v28 + 16);
        v45 = v8;
        *(_QWORD *)(v28 + 16) = a3;
      }
      else
      {
        LODWORD(v46) = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v27, &v46) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
          v31 = *((_QWORD *)a1 + 5);
        }
        if ( *(int *)(v31 + 200) < 30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
      }
      goto LABEL_76;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v26 = 1415LL;
LABEL_72:
      UserSetLastError(v26);
      goto LABEL_76;
    }
LABEL_66:
    if ( (int)v6 < 0 )
      goto LABEL_67;
LABEL_53:
    v33 = *((_QWORD *)a1 + 5);
    v34 = *(unsigned int *)(v33 + 252);
    if ( (unsigned __int64)(unsigned int)v6 + 8 <= (unsigned int)(v34 + *(_DWORD *)(v33 + 200)) )
    {
      if ( !a5 )
        goto LABEL_59;
      v35 = *(_WORD **)(*((_QWORD *)a1 + 14) + 8LL);
      if ( (v35[3] & 0x100) == 0 )
        goto LABEL_59;
      v36 = 0;
      v37 = &gDefaultServerClasses;
      while ( *v35 != *(_WORD *)(gpsi + 2LL * ((*v37 >> 3) & 0x1F) + 868) )
      {
        ++v36;
        v37 += 12;
        if ( v36 >= 8 )
          goto LABEL_59;
      }
      if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v36 + 6)
        || (*v37 & 0xF8) == 0xB0 && (unsigned __int64)((int)v6 + 8LL) <= 0xFFFFFFFFFFFFFF08uLL )
      {
LABEL_59:
        if ( (int)v6 + 8LL <= v34 )
        {
          v42 = *((_QWORD *)a1 + 34);
          v8 = *(_QWORD *)((int)v6 + v42);
          *(_QWORD *)((int)v6 + v42) = a3;
        }
        else
        {
          v38 = v6 - v34;
          v39 = *(_QWORD *)(v33 + 296);
          if ( (*(_DWORD *)(v33 + 232) & 0x800) != 0 )
            v40 = (__int64 *)(v39 + v38 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
          else
            v40 = (__int64 *)(v38 + v39);
          v8 = *v40;
          v45 = *v40;
          *v40 = a3;
        }
        goto LABEL_76;
      }
      goto LABEL_71;
    }
LABEL_48:
    v26 = 1413LL;
    goto LABEL_72;
  }
  v8 = *v25;
  v45 = *v25;
  *v25 = a3;
LABEL_76:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
  return v8;
}
