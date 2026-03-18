/*
 * XREFs of _FindWindowEx @ 0x1C0070458
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00700C0 (NtUserFindWindowEx.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

_QWORD *__fastcall FindWindowEx(__int64 ThreadDesktopWindow, __int64 a2, const wchar_t *a3, wchar_t *a4, int a5)
{
  const wchar_t *v5; // rdi
  int v8; // r14d
  struct tagWND *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  _QWORD *v14; // rdi
  _QWORD *i; // rsi
  unsigned __int64 v16; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // r15
  const wchar_t *v20; // rdx
  __int64 v21; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rax
  __int16 v25; // [rsp+20h] [rbp-88h]
  _QWORD *v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+C0h] [rbp+18h] BYREF
  wchar_t *Str1; // [rsp+C8h] [rbp+20h]

  Str1 = a4;
  v5 = a3;
  v25 = 0;
  v8 = 0;
  if ( a3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
    if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, v5) < 0 )
      {
        LOWORD(v5) = 0;
        v25 = 0;
      }
      else
      {
        LOWORD(v5) = UserFindAtom(&gawchAtomScratch);
        v25 = (__int16)v5;
      }
    }
    else
    {
      v25 = (__int16)v5;
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
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
    v10 = BuildHwndList(v9);
    v13 = v10;
    if ( !v10 )
      return 0LL;
    v14 = 0LL;
    for ( i = (_QWORD *)(v10 + 32); ; i = v26 + 1 )
    {
      v26 = i;
      v16 = *i;
      if ( *i == 1LL )
        break;
      v14 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
        PsGetThreadWin32Thread(CurrentThread);
      v12 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v16 < *(_QWORD *)(gpsi + 8LL) )
      {
        v18 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v16 * *((_DWORD *)&gSharedInfo + 4);
        v12 = 3 * ((__int64)((unsigned int)(unsigned __int16)v16 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
        v27 = v12;
        v11 = gpKernelHandleTable;
        v19 = v16 >> 16;
        if ( (_WORD)v19 != *(_WORD *)(v18 + 26) && (_WORD)v19 != 0xFFFF )
        {
          if ( (_WORD)v19 || !PsGetCurrentProcessWow64Process(v12) )
            goto LABEL_29;
          v12 = v27;
          v11 = gpKernelHandleTable;
        }
        if ( (*(_BYTE *)(v18 + 25) & 1) == 0 && *(_BYTE *)(v18 + 24) == 1 )
          v14 = *(_QWORD **)(v11 + 8 * v12);
      }
LABEL_29:
      if ( v14 )
      {
        if ( !v25 || (v12 = *(_QWORD *)(v14[14] + 8LL), v25 == *(_WORD *)(v12 + 2)) )
        {
          if ( !Str1
            || (!*(_DWORD *)(v14[5] + 184LL) ? (v20 = szNull) : (v20 = (const wchar_t *)v14[21]), !_wcsicmp(Str1, v20)) )
          {
            i = v26;
            break;
          }
        }
        v14 = 0LL;
      }
    }
    FreeHwndList(v13);
    if ( !v14 && v8 )
    {
      v8 = 0;
      ThreadDesktopWindow = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
      if ( ThreadWin32Thread )
      {
        v23 = *(_QWORD *)(ThreadWin32Thread + 456);
        if ( v23 )
          ThreadDesktopWindow = *(_QWORD *)(v23 + 104);
      }
      a2 = 0LL;
      continue;
    }
    break;
  }
  if ( *i == 1LL )
    return 0LL;
  return v14;
}
