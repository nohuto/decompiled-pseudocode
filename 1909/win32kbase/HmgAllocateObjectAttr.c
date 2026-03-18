/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C000F318
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000ECA0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C009292C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C0122E50 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v4; // rsi
  __int64 *v5; // rax
  char *v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rdx
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  GreAcquireHmgrSemaphore();
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) )
    goto LABEL_3;
  v8 = (char *)HmgAllocateSecureUserMemory(&v16);
  if ( !v8 )
    goto LABEL_3;
  v9 = PALLOCMEM2(0x568uLL);
  if ( v9 )
  {
    v10 = (__int64 *)(CurrentProcessWin32Process + 208);
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v11 + 8) != CurrentProcessWin32Process + 208 )
      goto LABEL_20;
    *(_QWORD *)v9 = v11;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v11 + 8) = v9;
    v12 = 170LL;
    *v10 = v9;
    v13 = (_QWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 16) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v8 + 4056;
    do
    {
      *v13 = v8;
      v8 += 24;
      ++v13;
      --v12;
    }
    while ( v12 );
LABEL_3:
    if ( !*(_QWORD *)(CurrentProcessWin32Process + 48) )
    {
LABEL_6:
      GreReleaseHmgrSemaphore();
      return v2;
    }
    v4 = CurrentProcessWin32Process + 208;
    v2 = *(_QWORD *)(CurrentProcessWin32Process + 48);
    v5 = *(__int64 **)(CurrentProcessWin32Process + 208);
    if ( (*((_DWORD *)v5 + 4))-- != 1 )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 48) = v5[(unsigned int)(*((_DWORD *)v5 + 4) - 1) + 3];
      goto LABEL_6;
    }
    v14 = (__int64 *)*v5;
    if ( *(__int64 **)(*v5 + 8) == v5 )
    {
      v15 = (__int64 **)v5[1];
      if ( *v15 == v5 )
      {
        *v15 = v14;
        v14[1] = (__int64)v15;
        Win32FreePool(v5);
        if ( *(_QWORD *)v4 != v4 )
          v1 = *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 16LL) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 48) = v1;
        goto LABEL_6;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
  HmgFreeAllocateSecureUserMemory(v8, v16);
  GreReleaseHmgrSemaphore();
  return 0LL;
}
