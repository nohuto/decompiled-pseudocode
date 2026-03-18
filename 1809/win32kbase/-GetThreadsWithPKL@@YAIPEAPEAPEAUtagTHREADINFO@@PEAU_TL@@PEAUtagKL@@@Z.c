/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0065AC0
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00659EC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     UserReAllocPool @ 0x1C007FC70 (UserReAllocPool.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r15
  struct tagTHREADINFO ***v4; // r14
  struct tagKL *v5; // rbp
  __int64 v6; // rdi
  int v7; // r12d
  void *v8; // rbx
  __int64 v9; // rsi
  __int64 i; // rbp
  _QWORD *j; // r14
  _QWORD *v12; // r15
  PVOID *v13; // rcx
  __int64 k; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v8 = (void *)Win32AllocPool(1024LL, 0x69747355u);
  if ( !v8 )
    return 0LL;
  v9 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v9 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          v12 = j - 93;
          if ( j != (_QWORD *)744 && (!a3 || a3 == (struct tagKL *)v12[55]) )
          {
            v13 = (PVOID *)v12[53];
            if ( *v13 == gpepCSRSS || *(_QWORD *)v12[53] == PsGetCurrentProcess(v13) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v16 = UserReAllocPool(v8, 8LL * (unsigned int)v6);
                if ( !v16 )
                  goto LABEL_28;
                v8 = (void *)v16;
              }
              *((_QWORD *)v8 + v6) = v12;
              v6 = (unsigned int)(v6 + 1);
            }
          }
        }
      }
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v9 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 328); k; k = *(_QWORD *)(k + 664) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 440) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v17 = UserReAllocPool(v8, 8LL * (unsigned int)v6);
        if ( !v17 )
        {
LABEL_28:
          Win32FreePool((__int64)v8);
          return 0LL;
        }
        v8 = (void *)v17;
      }
      *((_QWORD *)v8 + v6) = k;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  if ( (_DWORD)v6 && v4 )
  {
    *v4 = (struct tagTHREADINFO **)v8;
    PushW32ThreadLock(v8, v3, Win32FreePool);
  }
  else
  {
    Win32FreePool((__int64)v8);
  }
  return (unsigned int)v6;
}
