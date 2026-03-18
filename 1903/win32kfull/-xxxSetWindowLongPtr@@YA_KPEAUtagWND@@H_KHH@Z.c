/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0061558
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C0061450 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C0132700 (xxxCsDdeInitialize.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  char v8; // bl
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // rdi
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  _WORD *v24; // rdx
  __int64 v25; // rdx
  int v26; // edi
  __int64 *v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 CurrentProcess; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  HANDLE v36; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _DWORD *v42; // r10

  v6 = a2;
  v8 = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0 )
    goto LABEL_48;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v36 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v36 != (HANDLE)gpidLogon )
      goto LABEL_48;
  }
  if ( !(unsigned __int8)Enforced(v11) )
  {
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v34 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      v35 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( *(_DWORD *)(v35 + 772) != *(_DWORD *)(v34 + 772) || *(_DWORD *)(v35 + 776) != *(_DWORD *)(v34 + 776) )
        goto LABEL_48;
    }
  }
  if ( (int)v6 >= 0 )
  {
    v28 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    if ( v6 + 8 > v28 )
    {
      v29 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v29 != PsGetCurrentProcessWin32Process(v28, v6 + 8)
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31, v30);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, v29 + 872)
          && *(int *)(PsGetCurrentProcessWin32Process(v39, v38) + 12) >= 0 )
        {
LABEL_48:
          UserSetLastError(5LL);
          return 0LL;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v8 = 1;
      }
    }
  }
  v16 = *((_QWORD *)a1 + 5);
  v17 = *(_WORD *)(v16 + 42) & 0x3FFF;
  if ( !v17 )
    goto LABEL_6;
  if ( (*(_BYTE *)(v16 + 18) & 1) != 0 )
  {
    if ( *(_DWORD *)(v16 + 252) )
      v20 = (__int64 *)*((_QWORD *)a1 + 35);
    else
      v20 = *(__int64 **)(v16 + 296);
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    if ( !(_DWORD)v6 )
    {
      v18 = *v20;
      *v20 = a3;
      goto LABEL_8;
    }
    if ( (_DWORD)v6 == 16 )
    {
      v18 = v20[2];
      v20[2] = a3;
      goto LABEL_8;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v40 = 1415LL;
      goto LABEL_51;
    }
  }
  else
  {
    if ( (int)v6 < 0 )
      goto LABEL_7;
    if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(v16 + 42) & 0x3FFFu) - 666) + 328) - 320 )
    {
      if ( v17 < 0x2A1 )
        goto LABEL_50;
      if ( v17 > 0x2A6 )
      {
        if ( v17 == 679 )
        {
          if ( (_DWORD)v6 != 8 )
            goto LABEL_50;
          v21 = **(_QWORD **)(v16 + 296);
LABEL_23:
          if ( v21 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_50;
          goto LABEL_24;
        }
        if ( v17 > 0x2AA )
          goto LABEL_50;
      }
      if ( (_DWORD)v6 )
        goto LABEL_50;
      if ( *(_DWORD *)(v16 + 252) )
        v21 = **((_QWORD **)a1 + 35);
      else
        v21 = **(_QWORD **)(v16 + 296);
      goto LABEL_23;
    }
  }
LABEL_6:
  if ( (int)v6 >= 0 )
  {
LABEL_24:
    v22 = *((_QWORD *)a1 + 5);
    v23 = *(unsigned int *)(v22 + 252);
    if ( (unsigned __int64)(unsigned int)v6 + 8 <= (unsigned int)(v23 + *(_DWORD *)(v22 + 200)) )
    {
      if ( !a5 )
        goto LABEL_27;
      v24 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
      if ( (v24[3] & 0x100) == 0 )
        goto LABEL_27;
      v41 = 0LL;
      v42 = &gDefaultServerClasses;
      while ( *v24 != *(_WORD *)(gpsi + 2LL * ((*v42 >> 3) & 0x1F) + 868) )
      {
        v41 = (unsigned int)(v41 + 1);
        v42 += 12;
        if ( (unsigned int)v41 >= 8 )
          goto LABEL_27;
      }
      if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v41 + 6)
        || (*v42 & 0xF8) == 0xB0 && (unsigned __int64)((int)v6 + 8LL) <= 0xFFFFFFFFFFFFFEE0uLL )
      {
LABEL_27:
        v25 = (int)v6;
        if ( (int)v6 + 8LL <= v23 )
        {
          v32 = *((_QWORD *)a1 + 35);
          v18 = *(_QWORD *)((int)v6 + v32);
          *(_QWORD *)(v25 + v32) = a3;
        }
        else
        {
          v26 = v6 - v23;
          if ( (*(_DWORD *)(v22 + 232) & 0x800) != 0 )
            v27 = (__int64 *)(*(_QWORD *)(v22 + 296) + v26 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
          else
            v27 = (__int64 *)(*(_QWORD *)(v22 + 296) + v26);
          v18 = *v27;
          *v27 = a3;
        }
        goto LABEL_8;
      }
      v40 = 5LL;
LABEL_51:
      UserSetLastError(v40);
      if ( v8 )
        KeDetachProcess();
      return 0LL;
    }
LABEL_50:
    v40 = 1413LL;
    goto LABEL_51;
  }
LABEL_7:
  v18 = xxxSetWindowData(a1);
LABEL_8:
  if ( v8 )
    KeDetachProcess();
  return v18;
}
