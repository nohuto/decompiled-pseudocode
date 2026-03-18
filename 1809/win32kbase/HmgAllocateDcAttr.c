/*
 * XREFs of HmgAllocateDcAttr @ 0x1C0023C68
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C006B224 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00F8D70 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  char *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  void *v19; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 24) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 24);
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore(v5);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_5;
  v10 = (char *)HmgAllocateSecureUserMemory(&v19);
  if ( !v10 )
    goto LABEL_5;
  v13 = PALLOCMEM2(0x70uLL);
  if ( v13 )
  {
    v15 = (__int64 *)(CurrentProcessWin32Process + 192);
    v16 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v16 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_22;
    *(_QWORD *)v13 = v16;
    *(_QWORD *)(v13 + 8) = v15;
    *(_QWORD *)(v16 + 8) = v13;
    v12 = 11LL;
    *v15 = v13;
    v11 = (_QWORD *)(v13 + 24);
    *(_DWORD *)(v13 + 16) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v10 + 3520;
    do
    {
      *v11 = v10;
      v10 += 352;
      ++v11;
      --v12;
    }
    while ( v12 );
LABEL_5:
    v6 = *(_QWORD **)(CurrentProcessWin32Process + 40);
    if ( !v6 )
    {
LABEL_8:
      GreReleaseHmgrSemaphore(v6);
      return v2;
    }
    v7 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v2 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v8 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( (*(_DWORD *)(v8 + 16))-- != 1 )
    {
      v6 = *(_QWORD **)(v8 + 8LL * (unsigned int)(*(_DWORD *)(v8 + 16) - 1) + 24);
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v6;
      goto LABEL_8;
    }
    v17 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) == v8 )
    {
      v18 = *(_QWORD **)(v8 + 8);
      if ( *v18 == v8 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        Win32FreePool(v8);
        v6 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 != v7 )
          v1 = v6[(unsigned int)(*((_DWORD *)v6 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v1;
        goto LABEL_8;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v10, v19);
  GreReleaseHmgrSemaphore(v14);
  return 0LL;
}
