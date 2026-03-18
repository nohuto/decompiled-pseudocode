/*
 * XREFs of _FindWindowEx @ 0x1C00CB8F0
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00CB540 (NtUserFindWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall FindWindowEx(__int64 a1, __int64 a2, unsigned __int16 *a3, const wchar_t *a4)
{
  unsigned __int16 *v5; // rbx
  __int64 ThreadDesktopWindow; // rdi
  int v8; // r15d
  int v9; // r12d
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int16 *v12; // rax
  int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // ecx
  struct tagWND *v16; // rbx
  struct tagBWL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct tagBWL *v21; // r12
  _QWORD *v22; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v29; // rsi
  _QWORD *v30; // r15
  unsigned __int64 v31; // rbx
  const wchar_t *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v37; // rax
  unsigned __int16 v38; // [rsp+20h] [rbp-A8h]
  _QWORD *v39; // [rsp+28h] [rbp-A0h]
  int v40; // [rsp+E0h] [rbp+18h]
  int v41; // [rsp+F0h] [rbp+28h]

  v5 = a3;
  ThreadDesktopWindow = a1;
  v38 = 0;
  v8 = 0;
  v41 = 0;
  if ( !a3 )
    goto LABEL_32;
  if ( gpresUser
    && (unsigned int)((__int64 (*)(void))UserIsUserCritSecInExclusive)()
    && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v9 = ++gdwAtomicCheckSerial;
    a1 = 0LL;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)a1 << 6) + gpAtomickCheckStacks) )
      {
        a1 = (unsigned int)(a1 + 1);
        if ( (unsigned int)a1 >= gdwAtomicCheckLogSize )
        {
          v8 = 0;
          goto LABEL_11;
        }
      }
      v10 = (unsigned __int64)(unsigned int)a1 << 6;
      *(_DWORD *)(v10 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v10 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v10 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v10 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
      v8 = 0;
    }
  }
  else
  {
    v9 = v40;
  }
LABEL_11:
  if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_22;
  v11 = 2147483646LL;
  a1 = 256LL;
  v12 = gawchAtomScratch;
  v13 = 0;
  v14 = 0LL;
  while ( a1 )
  {
    if ( !v11 || !*v5 )
      goto LABEL_19;
    *v12++ = *v5++;
    --a1;
    --v11;
    ++v14;
  }
  --v12;
  v13 = -2147483643;
LABEL_19:
  *v12 = 0;
  if ( v13 < 0 )
  {
    LOWORD(v5) = 0;
LABEL_22:
    v38 = (unsigned __int16)v5;
    goto LABEL_23;
  }
  LOWORD(v5) = UserFindAtom(gawchAtomScratch);
  v38 = (unsigned __int16)v5;
LABEL_23:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(a1) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v15 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v15 << 6) + gpAtomickCheckStacks) != v9 )
          {
            if ( ++v15 >= gdwAtomicCheckLogSize )
              goto LABEL_31;
          }
          *(_DWORD *)(((unsigned __int64)v15 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_31:
  if ( !(_WORD)v5 )
    return 0LL;
LABEL_32:
  if ( !ThreadDesktopWindow )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( !a2 )
      v8 = 1;
    v41 = v8;
  }
  while ( 1 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 104) != ThreadDesktopWindow )
        return 0LL;
      v16 = *(struct tagWND **)(a2 + 88);
    }
    else
    {
      v16 = *(struct tagWND **)(ThreadDesktopWindow + 112);
    }
    v17 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v17 = (struct tagBWL *)Win32AllocPool(296LL, 1819767637LL);
      if ( !v17 )
        return 0LL;
      *((_QWORD *)v17 + 2) = (char *)v17 + 280;
    }
    *((_QWORD *)v17 + 1) = (char *)v17 + 32;
    *((_QWORD *)v17 + 3) = 0LL;
    v21 = InternalBuildHwndList(v17, v16, 2u);
    v22 = (_QWORD *)*((_QWORD *)v21 + 1);
    if ( (unsigned __int64)v22 >= *((_QWORD *)v21 + 2) )
    {
      Win32FreePool(v21);
      return 0LL;
    }
    *v22 = 1LL;
    *((_QWORD *)v21 + 3) = gptiCurrent;
    v24 = gpbwlList;
    *(_QWORD *)v21 = gpbwlList;
    gpbwlList = v21;
    v25 = 0LL;
    v26 = (_QWORD *)((char *)v21 + 32);
    while ( 1 )
    {
      v39 = v26;
      v27 = *v26;
      if ( *v26 == 1LL )
        break;
      v25 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v18, v19, v20) )
        PsGetThreadWin32Thread(CurrentThread);
      v18 = (unsigned __int16)v27;
      v24 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v27 < *(_QWORD *)(gpsi + 8LL) )
      {
        v29 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v27 * LODWORD(gSharedInfo[2]);
        v30 = (_QWORD *)HMPkheFromPhe(v29);
        v31 = v27 >> 16;
        if ( ((_WORD)v31 == *(_WORD *)(v29 + 26)
           || (_WORD)v31 == 0xFFFF
           || !(_WORD)v31 && PsGetCurrentProcessWow64Process(v24))
          && (*(_BYTE *)(v29 + 25) & 1) == 0
          && *(_BYTE *)(v29 + 24) == 1 )
        {
          v25 = (_QWORD *)*v30;
        }
      }
      if ( v25 )
      {
        v18 = v38;
        if ( !v38 || (v24 = *(_QWORD *)(v25[17] + 8LL), v38 == *(_WORD *)(v24 + 2)) )
        {
          if ( !a4
            || (!*(_DWORD *)(v25[5] + 184LL) ? (v32 = szNull) : (v32 = (const wchar_t *)v25[23]), !_wcsicmp(a4, v32)) )
          {
            v26 = v39;
            break;
          }
        }
        v25 = 0LL;
        v26 = v39 + 1;
      }
      else
      {
        v26 = v39 + 1;
      }
    }
    FreeHwndList(v21);
    if ( v25 || !v41 )
      break;
    v41 = 0;
    ThreadDesktopWindow = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
    if ( ThreadWin32Thread )
    {
      v37 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v37 )
        ThreadDesktopWindow = *(_QWORD *)(v37 + 104);
    }
    a2 = 0LL;
  }
  if ( *v26 == 1LL )
    return 0LL;
  return v25;
}
