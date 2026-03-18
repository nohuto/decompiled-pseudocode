/*
 * XREFs of ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0071680
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00715AC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     UserReAllocPool @ 0x1C00929B0 (UserReAllocPool.c)
 */

__int64 __fastcall GetThreadsWithPKL(struct tagTHREADINFO ***a1, struct _TL *a2, struct tagKL *a3)
{
  struct _TL *v3; // r15
  struct tagTHREADINFO ***v4; // r14
  struct tagKL *v5; // rbp
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rdx
  void *v9; // rbx
  __int64 v10; // rsi
  __int64 i; // rbp
  _QWORD *j; // r14
  _QWORD *v13; // r15
  PVOID *v14; // rcx
  __int64 k; // rsi
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = 0LL;
  v7 = 128;
  v9 = (void *)Win32AllocPool(1024LL, 0x69747355u);
  if ( !v9 )
    return 0LL;
  v10 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( i = *(_QWORD *)(v10 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          v13 = j - 92;
          if ( j != (_QWORD *)736 && (!a3 || a3 == (struct tagKL *)v13[54]) )
          {
            v14 = (PVOID *)v13[52];
            if ( *v14 == gpepCSRSS || *(_QWORD *)v13[52] == PsGetCurrentProcess(v14, v8) )
            {
              if ( (_DWORD)v6 == v7 )
              {
                v7 += 128;
                v17 = UserReAllocPool(v9, 8LL * (unsigned int)v6);
                if ( !v17 )
                  goto LABEL_28;
                v9 = (void *)v17;
              }
              *((_QWORD *)v9 + v6) = v13;
              v6 = (unsigned int)(v6 + 1);
            }
          }
        }
      }
      v10 = *(_QWORD *)(v10 + 8);
    }
    while ( v10 );
    v5 = a3;
    v4 = a1;
    v3 = a2;
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 320); k; k = *(_QWORD *)(k + 656) )
  {
    if ( !v5 || v5 == *(struct tagKL **)(k + 432) )
    {
      if ( (_DWORD)v6 == v7 )
      {
        v7 += 128;
        v18 = UserReAllocPool(v9, 8LL * (unsigned int)v6);
        if ( !v18 )
        {
LABEL_28:
          Win32FreePool((__int64)v9);
          return 0LL;
        }
        v9 = (void *)v18;
      }
      *((_QWORD *)v9 + v6) = k;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  if ( (_DWORD)v6 && v4 )
  {
    *v4 = (struct tagTHREADINFO **)v9;
    PushW32ThreadLock(v9, v3, Win32FreePool);
  }
  else
  {
    Win32FreePool((__int64)v9);
  }
  return (unsigned int)v6;
}
