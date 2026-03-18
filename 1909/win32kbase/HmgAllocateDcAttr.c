/*
 * XREFs of HmgAllocateDcAttr @ 0x1C0027C58
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C009292C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0122E50 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  char *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 24) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 24);
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_5;
  v10 = (char *)HmgAllocateSecureUserMemory(&v16);
  if ( !v10 )
    goto LABEL_5;
  v11 = PALLOCMEM2(0x70uLL, 0x66636447u, 0);
  if ( v11 )
  {
    v12 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v13 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v13 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_21;
    *v11 = v13;
    v11[1] = v12;
    *(_QWORD *)(v13 + 8) = v11;
    v14 = 11LL;
    *v12 = v11;
    v15 = v11 + 3;
    *((_DWORD *)v11 + 4) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v10 + 3520;
    do
    {
      *v15 = v10;
      v10 += 352;
      ++v15;
      --v14;
    }
    while ( v14 );
LABEL_5:
    if ( !*(_QWORD *)(CurrentProcessWin32Process + 40) )
    {
LABEL_8:
      GreReleaseHmgrSemaphore();
      return v2;
    }
    v5 = CurrentProcessWin32Process + 192;
    v2 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v6 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( (*(_DWORD *)(v6 + 16))-- != 1 )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 40) = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 16) - 1) + 24);
      goto LABEL_8;
    }
    v8 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
    {
      v9 = *(_QWORD **)(v6 + 8);
      if ( *v9 == v6 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        Win32FreePool(v6);
        if ( *(_QWORD *)v5 != v5 )
          v1 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v5 + 16LL) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v1;
        goto LABEL_8;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v10, v16);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
