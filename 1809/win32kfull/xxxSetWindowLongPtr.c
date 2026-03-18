/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C00666A0
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00665B0 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C0126F90 (xxxCsDdeInitialize.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C0066C00 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0123DD8 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

unsigned __int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v7; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  HANDLE v16; // rax
  __int64 CurrentProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  int v27; // ecx
  unsigned int v28; // r8d
  __int64 *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r10
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  _WORD *v38; // rdx
  unsigned int v39; // ecx
  _DWORD *v40; // r10
  int v41; // esi
  __int64 v42; // rdx
  __int64 *v43; // rax
  __int64 v44; // r10
  __int64 v45; // rcx
  _BYTE v46[4]; // [rsp+20h] [rbp-78h] BYREF
  int v47; // [rsp+24h] [rbp-74h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-70h]
  struct tagWND *v49; // [rsp+A0h] [rbp+8h] BYREF
  int v50; // [rsp+A8h] [rbp+10h]
  __int64 v51; // [rsp+B0h] [rbp+18h]

  v51 = a3;
  v50 = a2;
  v49 = a1;
  v7 = a2;
  v9 = 0LL;
  v46[0] = 0;
  v10 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v10 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v10), v15 = gpidLogon, ThreadProcessId == (HANDLE)gpidLogon)
    && (v16 = PsGetThreadProcessId((PETHREAD)*gptiCurrent), v15 = gpidLogon, v16 != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(v15, v12, v13, v14), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL),
         v19 = *(_QWORD *)(gptiCurrent + 424LL),
         *(_DWORD *)(v19 + 780) != *(_DWORD *)(v18 + 780))
     || *(_DWORD *)(v19 + 784) != *(_DWORD *)(v18 + 784)) )
  {
    UserSetLastError(5LL);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v46);
    return 0LL;
  }
  if ( (int)v7 >= 0 )
  {
    v21 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    if ( v7 + 8 > v21 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v22 != PsGetCurrentProcessWin32Process(v21) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        v24 = *(_QWORD *)(v22 + 880);
        v25 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v23) + 880);
        if ( gbEnforceUIPI
          && (unsigned int)v25 <= (unsigned int)v24
          && ((_DWORD)v25 != (_DWORD)v24 || HIDWORD(v25) != HIDWORD(v24) && HIDWORD(v25) != -1 && HIDWORD(v24) != -1)
          && *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v25)) + 12) >= 0 )
        {
LABEL_72:
          v30 = 5LL;
          goto LABEL_73;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v46[0] = 1;
      }
    }
  }
  v26 = *((_QWORD *)a1 + 5);
  v27 = *(unsigned __int16 *)(v26 + 42);
  v28 = v27 & 0x2FFF;
  if ( !v28 )
    goto LABEL_67;
  if ( (v27 & 0x1000) != 0
    || ((*(_BYTE *)(v26 + 18) & 1) == 0
      ? (v29 = 0LL)
      : !*(_DWORD *)(v26 + 252)
      ? (v29 = *(__int64 **)(v26 + 296))
      : (v29 = (__int64 *)*((_QWORD *)a1 + 33)),
        !v29) )
  {
    if ( (int)v7 < 0 )
    {
LABEL_68:
      v9 = xxxSetWindowData(a1, (unsigned int)v7, a3, a4);
      goto LABEL_77;
    }
    if ( (int)v7 >= *(unsigned __int16 *)(gpsi + 2LL * ((v27 & 0xFFFF2FFF) - 666) + 328) - 320 )
      goto LABEL_67;
    if ( v28 < 0x2A1 )
      goto LABEL_49;
    if ( v28 > 0x2A6 )
    {
      if ( v28 == 679 )
      {
        if ( (_DWORD)v7 != 8 )
          goto LABEL_49;
        v35 = **(_QWORD **)(v26 + 296);
        v48 = v35;
        goto LABEL_52;
      }
      if ( v28 - 680 > 2 )
        goto LABEL_49;
    }
    if ( (_DWORD)v7 )
      goto LABEL_49;
    v47 = 0;
    if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 305, &v47) )
    {
      v35 = **(_QWORD **)(v44 + 296);
      v48 = v35;
    }
    else
    {
      v35 = **((_QWORD **)a1 + 33);
    }
LABEL_52:
    if ( v35 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      goto LABEL_49;
    goto LABEL_54;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 16 )
    {
      LODWORD(v49) = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 305, &v49)
        && *(int *)(v33 + 200) >= 30 )
      {
        v9 = *(_QWORD *)(v32 + 16);
        v48 = v9;
        *(_QWORD *)(v32 + 16) = a3;
      }
      else
      {
        LODWORD(v49) = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v31, &v49) )
        {
          MicrosoftTelemetryAssertTriggeredMsgKM("MSRC:61600 Unexpected Server Extrabytes are allocated to Dialog");
          v34 = *((_QWORD *)a1 + 5);
        }
        if ( *(int *)(v34 + 200) < 30 )
          MicrosoftTelemetryAssertTriggeredMsgKM("MSRC:61600 Too small Extrabytes are allocated to Dialog");
      }
      goto LABEL_77;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v30 = 1415LL;
LABEL_73:
      UserSetLastError(v30);
      goto LABEL_77;
    }
LABEL_67:
    if ( (int)v7 < 0 )
      goto LABEL_68;
LABEL_54:
    v36 = *((_QWORD *)a1 + 5);
    v37 = *(unsigned int *)(v36 + 252);
    if ( (unsigned __int64)(unsigned int)v7 + 8 <= (unsigned int)(v37 + *(_DWORD *)(v36 + 200)) )
    {
      if ( !a5 )
        goto LABEL_60;
      v38 = *(_WORD **)(*((_QWORD *)a1 + 14) + 8LL);
      if ( (v38[3] & 0x100) == 0 )
        goto LABEL_60;
      v39 = 0;
      v40 = &gDefaultServerClasses;
      while ( *v38 != *(_WORD *)(gpsi + 2LL * ((*v40 >> 3) & 0x1F) + 868) )
      {
        ++v39;
        v40 += 12;
        if ( v39 >= 8 )
          goto LABEL_60;
      }
      if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v39 + 6)
        || (*v40 & 0xF8) == 0xB0 && (unsigned __int64)((int)v7 + 8LL) <= 0xFFFFFFFFFFFFFEF8uLL )
      {
LABEL_60:
        if ( (int)v7 + 8LL <= v37 )
        {
          v45 = *((_QWORD *)a1 + 33);
          v9 = *(_QWORD *)((int)v7 + v45);
          *(_QWORD *)((int)v7 + v45) = a3;
        }
        else
        {
          v41 = v7 - v37;
          v42 = *(_QWORD *)(v36 + 296);
          if ( (*(_DWORD *)(v36 + 232) & 0x800) != 0 )
            v43 = (__int64 *)(v42 + v41 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
          else
            v43 = (__int64 *)(v41 + v42);
          v9 = *v43;
          v48 = *v43;
          *v43 = a3;
        }
        goto LABEL_77;
      }
      goto LABEL_72;
    }
LABEL_49:
    v30 = 1413LL;
    goto LABEL_73;
  }
  v9 = *v29;
  v48 = *v29;
  *v29 = a3;
LABEL_77:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v46);
  return v9;
}
