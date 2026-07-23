/*
 * XREFs of PfpRpCHashAddEntries @ 0x140667A68
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x14069F080 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpRpCHashGrow @ 0x1406B7094 (PfpRpCHashGrow.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 *a3,
        __int64 *a4,
        unsigned int a5)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rbp
  unsigned int v9; // r12d
  __int64 *v10; // r14
  int v13; // r15d
  PVOID v14; // rcx
  __int64 v16; // r8
  int v17; // r11d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v25; // [rsp+78h] [rbp+10h]
  __int64 v26; // [rsp+78h] [rbp+10h]
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  v6 = a1;
  v7 = *(_DWORD *)(a2 + 8);
  P = 0LL;
  v8 = (unsigned __int64)a4 + ((unsigned __int64)a5 << v7);
  v9 = 1 << v7;
  v10 = a4;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  }
  if ( (unsigned __int64)v10 < v8 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * *(_DWORD *)(a2 + 16)) >= *(_DWORD *)(a2 + 12) )
      {
        if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a3);
        KeAbPostRelease((ULONG_PTR)a3);
        KeLeaveCriticalRegion();
        v13 = PfpRpCHashGrow(v6, a2, a3, &P);
        if ( v13 < 0 )
          goto LABEL_6;
      }
      v16 = *v10;
      v25 = *(_DWORD *)(a2 + 12);
      if ( !v25 )
        break;
      v17 = *(_DWORD *)(a2 + 8);
      v18 = (HIBYTE(*v10)
           + 37
           * ((unsigned __int8)BYTE6(*v10)
            + 37
            * ((unsigned __int8)((unsigned __int16)WORD2(*v10) >> 8)
             + 37
             * ((unsigned __int8)BYTE4(*v10)
              + 37
              * (BYTE3(*v10)
               + 37
               * ((unsigned __int8)BYTE2(*v10)
                + 37 * ((unsigned __int8)BYTE1(*v10) + 37 * ((unsigned __int8)v16 + 11623883)))))))) & (unsigned int)(v25 - 1);
      v26 = (unsigned int)(v25 - 1);
      v19 = 0LL;
      v20 = (__int64 *)(*(_QWORD *)a2 + (v18 << v17));
      if ( !*v20 )
        goto LABEL_18;
      v21 = *v20;
      do
      {
        v22 = v21;
        if ( v21 == v16 )
          break;
        if ( !v19 )
        {
          v19 = 2654435761LL * v16 + 1;
          if ( ((-79 * (_BYTE)v16) & 1) != 0 )
            v19 = 2654435761LL * v16;
        }
        v18 = v26 & (v19 + v18);
        v20 = (__int64 *)(*(_QWORD *)a2 + (v18 << v17));
        v22 = *v20;
        v21 = *v20;
      }
      while ( *v20 );
      v5 = a5;
      if ( !v22 )
        goto LABEL_18;
LABEL_19:
      v10 = (__int64 *)((char *)v10 + v9);
      if ( (unsigned __int64)v10 >= v8 )
        goto LABEL_4;
      v6 = a1;
    }
    v20 = 0LL;
LABEL_18:
    memmove(v20, v10, v9);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_19;
  }
LABEL_4:
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a3);
    KeAbPostRelease((ULONG_PTR)a3);
    KeLeaveCriticalRegion();
  }
  v13 = 0;
LABEL_6:
  while ( 1 )
  {
    v14 = P;
    if ( !P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v13;
}
