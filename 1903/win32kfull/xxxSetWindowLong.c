/*
 * XREFs of xxxSetWindowLong @ 0x1C01007C4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C01006C0 (NtUserSetWindowLong.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     FCallerOk @ 0x1C01009BC (FCallerOk.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0100A8C (safe_cast_wf_to_PDIALOG.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  _WORD *v19; // rdx
  __int64 v20; // rdx
  int v21; // edi
  unsigned int *v22; // r8
  unsigned int v23; // edi
  int v25; // ecx
  unsigned int *v26; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // r10
  __int64 v33; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_28;
  if ( (int)v7 >= 0 )
  {
    v13 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    v10 = v7 + 4;
    if ( v7 + 4 > v13 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v14 != PsGetCurrentProcessWin32Process(v13, v10) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v10);
        if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, v14 + 872)
          || *(int *)(PsGetCurrentProcessWin32Process(v29, v28) + 12) < 0 )
        {
          KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
          v9 = 1;
          goto LABEL_5;
        }
LABEL_28:
        UserSetLastError(5LL, v10, v11, v12);
        return 0LL;
      }
    }
  }
LABEL_5:
  v16 = *((_QWORD *)a1 + 5);
  v17 = *(_WORD *)(v16 + 42) & 0x3FFF;
  if ( (*(_WORD *)(v16 + 42) & 0x3FFF) != 0 )
  {
    v26 = (unsigned int *)safe_cast_wf_to_PDIALOG(a1);
    if ( v26 )
    {
      if ( !(_DWORD)v7 )
      {
        v23 = *v26;
        *(_QWORD *)v26 = (int)v6;
        goto LABEL_14;
      }
      if ( (_DWORD)v7 == 16 )
      {
        v23 = v26[4];
        *((_QWORD *)v26 + 2) = (int)v6;
        goto LABEL_14;
      }
      if ( (unsigned int)v7 <= 0x1D )
      {
        v30 = 1415LL;
        goto LABEL_37;
      }
    }
    else if ( (int)v7 >= 0 )
    {
      v10 = (unsigned int)(v17 - 666);
      if ( (int)v7 < *(unsigned __int16 *)(gpsi + 2 * v10 + 328) - 320 )
      {
        if ( (_DWORD)v17 != 679 )
          goto LABEL_46;
        v18 = v16;
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 != 8 || **(_DWORD **)(v16 + 296) && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_46;
          v16 = *((_QWORD *)a1 + 5);
          v18 = v16;
        }
        goto LABEL_7;
      }
    }
  }
  v18 = v16;
  if ( (int)v7 < 0 )
  {
    if ( (unsigned int)(v7 + 21) <= 9 )
    {
      v25 = 547;
      if ( _bittest(&v25, v7 + 21) )
      {
        v23 = xxxSetWindowData(a1, (unsigned int)v7, v6, a4);
        goto LABEL_14;
      }
    }
LABEL_46:
    v30 = 1413LL;
LABEL_37:
    UserSetLastError(v30, v10, v16, v17);
    if ( v9 )
      KeDetachProcess();
    return 0LL;
  }
LABEL_7:
  v17 = *(unsigned int *)(v18 + 252);
  if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v17 + *(_DWORD *)(v18 + 200)) )
    goto LABEL_46;
  if ( a5 )
  {
    v19 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v19[3] & 0x100) != 0 )
    {
      v31 = 0LL;
      v32 = &gDefaultServerClasses;
      while ( *v19 != *(_WORD *)(gpsi + 2LL * ((*v32 >> 3) & 0x1F) + 868) )
      {
        v31 = (unsigned int)(v31 + 1);
        v32 += 12;
        if ( (unsigned int)v31 >= 8 )
          goto LABEL_10;
      }
      if ( (int)v7 < *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6) )
      {
        v10 = *v32 & 0xF8;
        if ( (*(_BYTE *)v32 & 0xF8) != 0xB0 || (unsigned __int64)((int)v7 + 4LL) > 0xFFFFFFFFFFFFFEE0uLL )
        {
          v30 = 5LL;
          goto LABEL_37;
        }
      }
    }
  }
LABEL_10:
  v20 = (int)v7;
  if ( (int)v7 + 4LL <= v17 )
  {
    v33 = *((_QWORD *)a1 + 35);
    v23 = *(_DWORD *)((int)v7 + v33);
    *(_DWORD *)(v20 + v33) = v6;
  }
  else
  {
    v21 = v7 - v17;
    if ( (*(_DWORD *)(v16 + 232) & 0x800) != 0 )
      v22 = (unsigned int *)(*(_QWORD *)(v16 + 296) + v21 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v22 = (unsigned int *)(*(_QWORD *)(v16 + 296) + v21);
    v23 = *v22;
    *v22 = v6;
  }
LABEL_14:
  if ( v9 )
    KeDetachProcess();
  return v23;
}
