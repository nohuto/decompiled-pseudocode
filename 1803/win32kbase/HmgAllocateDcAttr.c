/*
 * XREFs of HmgAllocateDcAttr @ 0x1C0030F9C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C0047870 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C25D0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  char *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  void *v17; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v2 = 0LL;
  v3 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 24) )
  {
    v3 = *(_QWORD *)(ThreadWin32Thread + 24);
    *(_QWORD *)(ThreadWin32Thread + 24) = 0LL;
    return v3;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL, v1);
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) || (v11 = (char *)HmgAllocateSecureUserMemory(&v17)) == 0LL )
  {
LABEL_5:
    if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    {
      v6 = CurrentProcessWin32Process + 192;
      v3 = *(_QWORD *)(CurrentProcessWin32Process + 40);
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 192);
      if ( (*(_DWORD *)(v7 + 16))-- == 1 )
      {
        v9 = *(_QWORD *)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v10 = *(_QWORD **)(v7 + 8), *v10 != v7) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        Win32FreePool(v7);
        if ( *(_QWORD *)v6 != v6 )
          v2 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 16LL) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v2;
      }
      else
      {
        *(_QWORD *)(CurrentProcessWin32Process + 40) = *(_QWORD *)(v7
                                                                 + 8LL * (unsigned int)(*(_DWORD *)(v7 + 16) - 1)
                                                                 + 24);
      }
    }
    GreReleaseHmgrSemaphore();
    return v3;
  }
  v12 = PALLOCMEM2(0x60uLL, 0x66636447u, 0);
  if ( v12 )
  {
    v13 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v14 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v14 + 8) != CurrentProcessWin32Process + 192 )
      __fastfail(3u);
    *v12 = v14;
    v12[1] = v13;
    *(_QWORD *)(v14 + 8) = v12;
    v15 = 9LL;
    *v13 = v12;
    v16 = v12 + 3;
    *((_DWORD *)v12 + 4) = 9;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v11 + 3328;
    do
    {
      *v16 = v11;
      v11 += 416;
      ++v16;
      --v15;
    }
    while ( v15 );
    goto LABEL_5;
  }
  HmgFreeAllocateSecureUserMemory(v11, v17);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
