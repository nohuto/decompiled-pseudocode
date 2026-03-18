/*
 * XREFs of HmgAllocateDcAttr @ 0x1C0027304
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C0053F38 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C01256C0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateDcAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  char *v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  void *v25; // [rsp+30h] [rbp+8h] BYREF

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
  GreAcquireHmgrSemaphore(v7, v6, v8);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
    goto LABEL_5;
  v17 = (char *)HmgAllocateSecureUserMemory(&v25);
  if ( !v17 )
    goto LABEL_5;
  v18 = PALLOCMEM2(0x70uLL, 0x66636447u, 0);
  if ( v18 )
  {
    v19 = (_QWORD *)(CurrentProcessWin32Process + 192);
    v20 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( *(_QWORD *)(v20 + 8) != CurrentProcessWin32Process + 192 )
      goto LABEL_21;
    *v18 = v20;
    v18[1] = v19;
    *(_QWORD *)(v20 + 8) = v18;
    v9 = 11LL;
    *v19 = v18;
    v21 = v18 + 3;
    *((_DWORD *)v18 + 4) = 11;
    *(_QWORD *)(CurrentProcessWin32Process + 40) = v17 + 3520;
    do
    {
      *v21 = v17;
      v17 += 352;
      ++v21;
      --v9;
    }
    while ( v9 );
LABEL_5:
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    if ( !v11 )
    {
LABEL_8:
      GreReleaseHmgrSemaphore(v11, v9, v10);
      return v3;
    }
    v12 = (__int64 *)(CurrentProcessWin32Process + 192);
    v3 = *(_QWORD *)(CurrentProcessWin32Process + 40);
    v13 = *(_QWORD *)(CurrentProcessWin32Process + 192);
    if ( (*(_DWORD *)(v13 + 16))-- != 1 )
    {
      v11 = *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(v13 + 16) - 1) + 24);
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v11;
      goto LABEL_8;
    }
    v15 = *(_QWORD *)v13;
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
    {
      v16 = *(_QWORD **)(v13 + 8);
      if ( *v16 == v13 )
      {
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        Win32FreePool(v13);
        v11 = *v12;
        if ( (__int64 *)*v12 != v12 )
          v2 = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 16) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 40) = v2;
        goto LABEL_8;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v17, v25);
  GreReleaseHmgrSemaphore(v23, v22, v24);
  return 0LL;
}
