/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C004551C
 * Callers:
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     NtGdiCreateRectRgn @ 0x1C00430D0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C0047870 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C25D0 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

__int64 HmgAllocateObjectAttr()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 CurrentProcessWin32Process; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // r8d
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  char *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  void *v24; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = 0LL;
  v2 = 0LL;
  if ( *(_QWORD *)(ThreadWin32Thread + 32) )
  {
    v2 = *(_QWORD *)(ThreadWin32Thread + 32);
    *(_QWORD *)(ThreadWin32Thread + 32) = 0LL;
    return v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  GreAcquireHmgrSemaphore(v5, v4, v6);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 48) || (v14 = (char *)HmgAllocateSecureUserMemory(&v24)) == 0LL )
  {
LABEL_3:
    v9 = *(_QWORD **)(CurrentProcessWin32Process + 48);
    if ( v9 )
    {
      v10 = (_QWORD *)(CurrentProcessWin32Process + 208);
      v2 = *(_QWORD *)(CurrentProcessWin32Process + 48);
      v11 = *(_QWORD *)(CurrentProcessWin32Process + 208);
      if ( (*(_DWORD *)(v11 + 16))-- == 1 )
      {
        v19 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v20 = *(_QWORD **)(v11 + 8), *v20 != v11) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        Win32FreePool(v11);
        v9 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 != v10 )
          v1 = v9[(unsigned int)(*((_DWORD *)v9 + 4) - 1) + 3];
        *(_QWORD *)(CurrentProcessWin32Process + 48) = v1;
      }
      else
      {
        v9 = *(_QWORD **)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 16) - 1) + 24);
        *(_QWORD *)(CurrentProcessWin32Process + 48) = v9;
      }
    }
    GreReleaseHmgrSemaphore((int)v9, v7, v8);
    return v2;
  }
  v15 = PALLOCMEM2(0x568uLL, 0x66616247u, 0);
  if ( v15 )
  {
    v16 = (_QWORD *)(CurrentProcessWin32Process + 208);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 208);
    if ( *(_QWORD *)(v17 + 8) != CurrentProcessWin32Process + 208 )
      __fastfail(3u);
    *v15 = v17;
    v15[1] = v16;
    *(_QWORD *)(v17 + 8) = v15;
    v7 = 170LL;
    *v16 = v15;
    v18 = v15 + 3;
    *((_DWORD *)v15 + 4) = 170;
    *(_QWORD *)(CurrentProcessWin32Process + 48) = v14 + 4056;
    do
    {
      *v18 = v14;
      v14 += 24;
      ++v18;
      --v7;
    }
    while ( v7 );
    goto LABEL_3;
  }
  HmgFreeAllocateSecureUserMemory(v14, v24);
  GreReleaseHmgrSemaphore(v22, v21, v23);
  return 0LL;
}
