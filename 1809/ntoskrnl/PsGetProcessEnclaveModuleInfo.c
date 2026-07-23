/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x1402EC0C0
 * Callers:
 *     DbgkpPostModuleMessages @ 0x1408103A4 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MmGetEnclaveModuleList @ 0x1402BEDB0 (MmGetEnclaveModuleList.c)
 *     PsFreeEnclaveModuleInfo @ 0x1402EC064 (PsFreeEnclaveModuleInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, char **a2, unsigned int *a3)
{
  int EnclaveModuleList; // r12d
  unsigned int v4; // esi
  char *PoolWithTag; // r13
  int v6; // edi
  unsigned int *v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // r15
  __int64 v11; // r10
  _QWORD *v12; // r11
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *i; // rdx
  __int64 v16; // r14
  _QWORD *v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rcx
  _QWORD *j; // rdx
  unsigned int v22; // [rsp+60h] [rbp+8h]

  EnclaveModuleList = 0;
  v22 = 0;
  v4 = 0;
  PoolWithTag = 0LL;
  v6 = 0;
  v7 = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 1832);
  ExAcquirePushLockExclusiveEx(a1 + 1832, 0LL);
  v11 = *(_QWORD *)(a1 + 1816);
  if ( v11 )
  {
    v12 = *(_QWORD **)(v11 + 8);
    v13 = v12;
    while ( 1 )
    {
      if ( !v13 )
        goto LABEL_8;
      v14 = (_QWORD *)*v13;
      if ( (*v13 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v14 = (_QWORD *)*v13;
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
LABEL_8:
        for ( i = v12 + 1; ; ++i )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v11 + 4) >> 5) )
          {
            v14 = 0LL;
            goto LABEL_13;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v13 = (_QWORD *)*i;
        v12 = i;
        v14 = (_QWORD *)*i;
      }
      else
      {
        v13 = v14;
      }
LABEL_13:
      if ( !v14 )
        break;
      ++v4;
    }
    if ( v4 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x56455350u);
      if ( PoolWithTag )
      {
        v16 = *(_QWORD *)(a1 + 1816);
        v17 = *(_QWORD **)(v16 + 8);
        v18 = v17;
        do
        {
          if ( !v18 )
            goto LABEL_25;
          v19 = (_QWORD *)*v18;
          if ( (*v18 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            v19 = (_QWORD *)*v18;
          if ( ((unsigned __int8)v19 & 1) != 0 )
          {
LABEL_25:
            for ( j = v17 + 1; ; ++j )
            {
              if ( (unsigned __int64)j >= *(_QWORD *)(v16 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v16 + 4) >> 5) )
              {
                v19 = 0LL;
                goto LABEL_30;
              }
              if ( (*j & 1) == 0 )
                break;
            }
            v18 = (_QWORD *)*j;
            v17 = j;
            v19 = (_QWORD *)*j;
          }
          else
          {
            v18 = v19;
          }
LABEL_30:
          if ( !v19 )
            break;
          EnclaveModuleList = MmGetEnclaveModuleList(
                                v19[4],
                                &PoolWithTag[16 * v22],
                                (unsigned int *)&PoolWithTag[16 * v22 + 8]);
          if ( EnclaveModuleList < 0 )
            break;
          ++v22;
        }
        while ( v22 < v4 );
        v6 = v22;
        v7 = a3;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(PoolWithTag, v6);
  }
  else
  {
    *a2 = PoolWithTag;
    *v7 = v4;
  }
  return (unsigned int)EnclaveModuleList;
}
