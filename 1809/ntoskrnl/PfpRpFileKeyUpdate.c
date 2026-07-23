/*
 * XREFs of PfpRpFileKeyUpdate @ 0x1405D66D0
 * Callers:
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x1406A0E18 (PfpRpRehashIfNeeded.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r15d
  int v4; // ebx
  int v5; // eax
  _QWORD *v8; // r13
  PVOID v9; // r12
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  WCHAR *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  WCHAR *i; // rbp
  unsigned __int8 v16; // al
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v18; // edx
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // r10d
  char v23; // al
  unsigned __int64 v24; // r9
  _QWORD *v25; // rcx
  unsigned __int64 v27; // r10
  _QWORD *j; // rdx
  _QWORD *v29; // rcx
  void *v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-78h]
  PVOID PoolWithTag; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-68h]
  unsigned __int64 v34; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  PEX_RUNDOWN_REF RunRef; // [rsp+48h] [rbp-50h]
  unsigned int v37; // [rsp+A0h] [rbp+8h]
  _QWORD *P; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v31 = *(_QWORD *)(a2 + 16);
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  PoolWithTag = 0LL;
  v8 = 0LL;
  v37 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  RunRef = (PEX_RUNDOWN_REF)(a1 + 136);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 136)) )
    return 3221225600LL;
  if ( !v4 )
  {
    v14 = 0LL;
    goto LABEL_10;
  }
  P = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4B466650u);
  v8 = P;
  if ( P )
  {
    v11 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
    if ( *(_DWORD *)a1 >= v11 )
    {
      v37 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
      if ( !v11 )
      {
        v11 = 64;
        v37 = 64;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v11, 0x48466650u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        v37 = 0;
    }
    v12 = *(WCHAR **)(a2 + 24);
    v13 = *(unsigned __int16 *)(a2 + 34);
    v14 = 314159LL;
    for ( i = &v12[v13]; v12 < i; v14 = 37 * (v16 + 37 * v14) )
      v16 = RtlUpcaseUnicodeChar(*v12++);
    if ( v14 )
    {
      v4 = a3;
LABEL_10:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
      if ( v4 )
      {
        v18 = *(_DWORD *)(a1 + 4);
        v19 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        v20 = v31 & v19;
        v35 = (v31 & (unsigned __int64)v19) >> 24;
        v34 = (v31 & (unsigned __int64)v19) >> 16;
        v33 = (v31 & (unsigned __int64)v19) >> 8;
        if ( v18 >= 0x20 )
        {
          v21 = *(_QWORD *)(a1 + 8)
              + 8
              * ((((v31 & (unsigned __int64)v19) >> 56)
                + 37
                * ((unsigned __int8)((v31 & (unsigned __int64)v19) >> 48)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)((v31 & (unsigned __int64)v19) >> 32) >> 8)
                  + 37
                  * ((unsigned __int8)((v31 & (unsigned __int64)v19) >> 32)
                   + 37
                   * ((unsigned __int8)v35
                    + 37
                    * ((unsigned __int8)v34
                     + 37 * ((unsigned __int8)v33 + 37 * ((unsigned int)(unsigned __int8)v20 + 11623883)))))))) & ((v18 >> 5) - 1));
          while ( 1 )
          {
            v21 = *(_QWORD *)v21;
            if ( (v21 & 1) != 0 )
              break;
            if ( v20 == (v19 & *(_QWORD *)(v21 + 8)) )
            {
              *(_QWORD *)(v21 + 16) = v14;
              goto LABEL_18;
            }
          }
        }
        v8 = P;
        *P = 0LL;
        P[1] = v31;
        P[2] = v14;
        if ( (unsigned int)PfpRpRehashIfNeeded(a1, &PoolWithTag, v37) )
        {
          v22 = *(_DWORD *)(a1 + 4);
          P = 0LL;
          v23 = v22 & 0x1F;
          v24 = v8[1] & (-1LL << (v22 & 0x1F));
          v25 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8
                         * ((HIBYTE(v24)
                           + 37
                           * ((unsigned __int8)((v8[1] & (unsigned __int64)(-1LL << v23)) >> 48)
                            + 37
                            * ((unsigned __int8)((unsigned __int16)((v8[1] & (unsigned __int64)(-1LL << v23)) >> 32) >> 8)
                             + 37
                             * ((unsigned __int8)((v8[1] & (unsigned __int64)(-1LL << v23)) >> 32)
                              + 37
                              * ((((_DWORD)v8[1] & (unsigned int)(-1 << v23)) >> 24)
                               + 37
                               * ((unsigned __int8)(((_DWORD)v8[1] & (unsigned int)(-1 << v23)) >> 16)
                                + 37
                                * ((unsigned __int8)((unsigned __int16)(v8[1] & (-1 << v23)) >> 8)
                                 + 37 * ((unsigned __int8)v24 + 11623883)))))))) & ((v22 >> 5) - 1)));
          *v8 = *v25;
          *v25 = v8;
          ++*(_DWORD *)a1;
LABEL_18:
          v8 = P;
        }
        else
        {
          v3 = -1073741670;
        }
      }
      else
      {
LABEL_28:
        if ( *(_DWORD *)a1 )
        {
          v27 = v31 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
          for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                             + 8
                             * ((37
                               * (BYTE6(v27)
                                + 37
                                * (BYTE5(v27)
                                 + 37
                                 * (BYTE4(v27)
                                  + 37
                                  * ((((unsigned int)v31 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
                                   + 37
                                   * ((unsigned __int8)(((unsigned int)v31 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
                                    + 37
                                    * (37 * ((unsigned __int8)v27 + 11623883)
                                     + (unsigned __int8)((unsigned __int16)(v31 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)))))))
                               + HIBYTE(v27)) & ((*(_DWORD *)(a1 + 4) >> 5) - 1))); ; j = (_QWORD *)*j )
          {
            v29 = (_QWORD *)*j;
            if ( (*j & 1) != 0 )
              break;
            if ( ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & v29[1]) == v27 )
            {
              *j = *v29;
              --*(_DWORD *)a1;
              *v29 |= 0x8000000000000002uLL;
              if ( *(_QWORD **)(a1 + 16) == v29 )
                *(_QWORD *)(a1 + 16) = a1 + 24;
              *v29 = v10;
              v10 = v29;
              goto LABEL_28;
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
      KeAbPostRelease(a1 + 48);
      KeLeaveCriticalRegion();
      v9 = PoolWithTag;
      goto LABEL_22;
    }
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_22:
  ExReleaseRundownProtection_0(RunRef);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  while ( v10 )
  {
    v30 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v30, 0);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v3;
}
