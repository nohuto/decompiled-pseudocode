/*
 * XREFs of _FindWindowEx @ 0x1C0029C30
 * Callers:
 *     NtUserFindWindowEx @ 0x1C0029830 (NtUserFindWindowEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall FindWindowEx(__int64 ThreadDesktopWindow, __int64 a2, const wchar_t *a3, wchar_t *a4, int a5)
{
  const wchar_t *v5; // rdi
  int v8; // r15d
  struct tagWND *v9; // rdi
  struct tagBWL *v10; // rax
  __int64 v11; // rdx
  struct tagBWL *v12; // r14
  _QWORD *v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *i; // rsi
  unsigned __int64 v18; // r13
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  const wchar_t *v24; // rdx
  __int64 v25; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rax
  __int16 v28; // [rsp+20h] [rbp-88h]
  _QWORD *v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+C0h] [rbp+18h] BYREF
  wchar_t *Str1; // [rsp+C8h] [rbp+20h]

  Str1 = a4;
  v5 = a3;
  v28 = 0;
  v8 = 0;
  if ( a3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v30);
    if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, v5) < 0 )
      {
        LOWORD(v5) = 0;
        v28 = 0;
      }
      else
      {
        LOWORD(v5) = UserFindAtom(&gawchAtomScratch);
        v28 = (__int16)v5;
      }
    }
    else
    {
      v28 = (__int16)v5;
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v30);
    if ( !(_WORD)v5 )
      return 0LL;
  }
  if ( !ThreadDesktopWindow )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( !a2 )
      v8 = 1;
  }
  while ( 2 )
  {
    a5 = v8;
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 80) != ThreadDesktopWindow )
        return 0LL;
      v9 = *(struct tagWND **)(a2 + 64);
    }
    else
    {
      v9 = *(struct tagWND **)(ThreadDesktopWindow + 88);
    }
    v10 = pbwlCache;
    if ( !pbwlCache )
    {
      v10 = (struct tagBWL *)Win32AllocPool(296LL, 1819767637LL);
      if ( v10 )
      {
        *((_QWORD *)v10 + 2) = (char *)v10 + 280;
        goto LABEL_19;
      }
      return 0LL;
    }
    pbwlCache = 0LL;
LABEL_19:
    *((_QWORD *)v10 + 1) = (char *)v10 + 32;
    *((_QWORD *)v10 + 3) = 0LL;
    v12 = InternalBuildHwndList(v10, v9, 2u);
    v13 = (_QWORD *)*((_QWORD *)v12 + 1);
    if ( (unsigned __int64)v13 >= *((_QWORD *)v12 + 2) )
    {
      Win32FreePool(v12);
      return 0LL;
    }
    *v13 = 1LL;
    *((_QWORD *)v12 + 3) = gptiCurrent;
    v15 = gpbwlList;
    *(_QWORD *)v12 = gpbwlList;
    gpbwlList = v12;
    v16 = 0LL;
    for ( i = (_QWORD *)((char *)v12 + 32); ; i = v29 + 1 )
    {
      v29 = i;
      v18 = *i;
      if ( *i == 1LL )
        break;
      v16 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v11) )
        PsGetThreadWin32Thread(CurrentThread);
      v21 = (unsigned __int16)v18;
      v15 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v18 < *(_QWORD *)(gpsi + 8LL) )
      {
        v22 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v18 * LODWORD(gSharedInfo[2]);
        v15 = 3 * ((__int64)((unsigned int)(unsigned __int16)v18 * LODWORD(gSharedInfo[2])) >> 5);
        v30 = v15;
        v11 = gpKernelHandleTable;
        v23 = v18 >> 16;
        if ( (_WORD)v23 != *(_WORD *)(v22 + 26) && (_WORD)v23 != 0xFFFF )
        {
          if ( (_WORD)v23 || !PsGetCurrentProcessWow64Process(v15, gpKernelHandleTable, v21, v20) )
            goto LABEL_35;
          v15 = v30;
          v11 = gpKernelHandleTable;
        }
        if ( (*(_BYTE *)(v22 + 25) & 1) == 0 && *(_BYTE *)(v22 + 24) == 1 )
          v16 = *(_QWORD **)(v11 + 8 * v15);
      }
LABEL_35:
      if ( v16 )
      {
        if ( !v28 || (v15 = *(_QWORD *)(v16[14] + 8LL), v28 == *(_WORD *)(v15 + 2)) )
        {
          if ( !Str1
            || (!*(_DWORD *)(v16[5] + 184LL) ? (v24 = szNull) : (v24 = (const wchar_t *)v16[21]), !_wcsicmp(Str1, v24)) )
          {
            i = v29;
            break;
          }
        }
        v16 = 0LL;
      }
    }
    FreeHwndList(v12);
    if ( !v16 && v8 )
    {
      v8 = 0;
      ThreadDesktopWindow = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
      if ( ThreadWin32Thread )
      {
        v27 = *(_QWORD *)(ThreadWin32Thread + 448);
        if ( v27 )
          ThreadDesktopWindow = *(_QWORD *)(v27 + 104);
      }
      a2 = 0LL;
      continue;
    }
    break;
  }
  if ( *i == 1LL )
    return 0LL;
  return v16;
}
