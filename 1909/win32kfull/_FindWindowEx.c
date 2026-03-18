/*
 * XREFs of _FindWindowEx @ 0x1C006CFC0
 * Callers:
 *     NtUserFindWindowEx @ 0x1C006CC10 (NtUserFindWindowEx.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
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
  struct tagBWL *v20; // r12
  _QWORD *v21; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // rsi
  unsigned __int64 v26; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v28; // rsi
  _QWORD *v29; // r15
  unsigned __int64 v30; // rbx
  const wchar_t *v31; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rax
  unsigned __int16 v34; // [rsp+20h] [rbp-A8h]
  _QWORD *v35; // [rsp+28h] [rbp-A0h]
  int v36; // [rsp+E0h] [rbp+18h]
  int v37; // [rsp+F0h] [rbp+28h]

  v5 = a3;
  ThreadDesktopWindow = a1;
  v34 = 0;
  v8 = 0;
  v37 = 0;
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
    v9 = v36;
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
    v34 = (unsigned __int16)v5;
    goto LABEL_23;
  }
  LOWORD(v5) = UserFindAtom(gawchAtomScratch);
  v34 = (unsigned __int16)v5;
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
    v37 = v8;
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
    v20 = InternalBuildHwndList(v17, v16, 2u);
    v21 = (_QWORD *)*((_QWORD *)v20 + 1);
    if ( (unsigned __int64)v21 >= *((_QWORD *)v20 + 2) )
    {
      Win32FreePool(v20);
      return 0LL;
    }
    *v21 = 1LL;
    *((_QWORD *)v20 + 3) = gptiCurrent;
    v23 = gpbwlList;
    *(_QWORD *)v20 = gpbwlList;
    gpbwlList = v20;
    v24 = 0LL;
    v25 = (_QWORD *)((char *)v20 + 32);
    while ( 1 )
    {
      v35 = v25;
      v26 = *v25;
      if ( *v25 == 1LL )
        break;
      v24 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v18, v19) )
        PsGetThreadWin32Thread(CurrentThread);
      v18 = (unsigned __int16)v26;
      v23 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v26 < *(_QWORD *)(gpsi + 8LL) )
      {
        v28 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v26 * LODWORD(gSharedInfo[2]);
        v29 = (_QWORD *)HMPkheFromPhe(v28);
        v30 = v26 >> 16;
        if ( ((_WORD)v30 == *(_WORD *)(v28 + 26)
           || (_WORD)v30 == 0xFFFF
           || !(_WORD)v30 && PsGetCurrentProcessWow64Process(v23))
          && (*(_BYTE *)(v28 + 25) & 1) == 0
          && *(_BYTE *)(v28 + 24) == 1 )
        {
          v24 = (_QWORD *)*v29;
        }
      }
      if ( v24 )
      {
        v18 = v34;
        if ( !v34 || (v23 = *(_QWORD *)(v24[17] + 8LL), v34 == *(_WORD *)(v23 + 2)) )
        {
          if ( !a4
            || (!*(_DWORD *)(v24[5] + 184LL) ? (v31 = szNull) : (v31 = (const wchar_t *)v24[23]), !_wcsicmp(a4, v31)) )
          {
            v25 = v35;
            break;
          }
        }
        v24 = 0LL;
        v25 = v35 + 1;
      }
      else
      {
        v25 = v35 + 1;
      }
    }
    FreeHwndList(v20);
    if ( v24 || !v37 )
      break;
    v37 = 0;
    ThreadDesktopWindow = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v33 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v33 )
        ThreadDesktopWindow = *(_QWORD *)(v33 + 104);
    }
    a2 = 0LL;
  }
  if ( *v25 == 1LL )
    return 0LL;
  return v24;
}
