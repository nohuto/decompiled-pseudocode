/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C001F238
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C001F210 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C00119C8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C003992C (RaidLunQueueCheckWaitTimeout.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 ***v2; // rbx
  unsigned int v3; // r12d
  char v4; // r15
  unsigned int v5; // esi
  __int64 *v6; // r14
  __int64 *v7; // rax
  unsigned int v8; // esi
  __int64 *v9; // r14
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 ***v16; // rax
  __int64 **v17; // r8
  ULONGLONG v18; // rdx
  __int64 **v19; // rcx
  __int64 ****v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rdx
  __int64 ***v24; // rcx
  __int64 *v25; // rcx
  __int64 *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r14
  char v29; // si
  __int64 v30; // rbx
  __int64 v31; // rax
  char v32; // al
  char v33; // cl
  char v34; // cl
  char v35; // al
  unsigned int v36; // r8d
  char v37; // al
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 *v41; // rdi
  IRP *v42; // rsi
  __int64 v43; // rcx
  char v44; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v46; // rax
  char v47; // al
  char v48; // cl
  char v49; // cl
  char v50; // al
  unsigned int v51; // r8d
  char v52; // al
  __int64 *v53; // [rsp+20h] [rbp-48h] BYREF
  __int64 **v54; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v57; // [rsp+B0h] [rbp+48h]
  unsigned int v58; // [rsp+B8h] [rbp+50h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+C0h] [rbp+58h]
  unsigned int v60; // [rsp+C0h] [rbp+58h]
  __int64 *Pool; // [rsp+C8h] [rbp+60h]

  v57 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (__int64 ***)(a1 + 1032);
  v58 = DpcCompletionLimit;
  v53 = (__int64 *)&v53;
  memset(&v56, 0, sizeof(v56));
  v54 = &v53;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v6 = 0LL;
  if ( !*(_DWORD *)(a1 + 792) || *v2 == (__int64 **)v2 )
    goto LABEL_2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 768), &v56);
  v16 = (__int64 ***)*v2;
  if ( *v2 != (__int64 **)v2 )
  {
    do
    {
      v17 = v16[3];
      if ( (*((_BYTE *)v17 + 450) & 2) == 0 )
      {
        v18 = (ULONGLONG)*(v16 - 2);
        if ( v18 == -1LL || v18 >= UnbiasedInterruptTime )
          break;
      }
      if ( (*((_BYTE *)v17 + 450) & 2) == 0 && !v4 )
      {
        v6 = v17[3];
        v4 = 1;
        v5 = *(_DWORD *)(a1 + 792);
      }
      v19 = *v16;
      if ( (*v16)[1] != (__int64 *)v16 )
        goto LABEL_85;
      v20 = (__int64 ****)v16[1];
      if ( *v20 != v16 )
        goto LABEL_85;
      *v20 = (__int64 ***)v19;
      v19[1] = (__int64 *)v20;
      v21 = (__int64)(v16[2] + 15);
      v22 = *(_QWORD *)v21;
      if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) == v21 )
      {
        v23 = v16[2][16];
        if ( *v23 == v21 )
        {
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
          v24 = (__int64 ***)v54;
          --*(_DWORD *)(a1 + 792);
          if ( *v24 == &v53 )
            goto LABEL_89;
        }
      }
LABEL_85:
      __fastfail(3u);
LABEL_89:
      v16[1] = (__int64 **)v24;
      *v16 = &v53;
      ++v3;
      *v24 = (__int64 **)v16;
      v54 = (__int64 **)v16;
      v16 = (__int64 ***)*v2;
      if ( v3 == v58 )
        break;
    }
    while ( v16 != v2 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
  if ( v4 && v5 > *((_DWORD *)v6 + 1344) )
    *((_DWORD *)v6 + 1344) = v5;
LABEL_2:
  while ( 1 )
  {
    v7 = v53;
    if ( v53 == (__int64 *)&v53 )
      break;
    if ( (__int64 **)v53[1] != &v53 )
      goto LABEL_85;
    v25 = (__int64 *)*v53;
    if ( *(__int64 **)(*v53 + 8) != v53 )
      goto LABEL_85;
    v53 = (__int64 *)*v53;
    v25[1] = (__int64)&v53;
    v26 = v7 - 3;
    v27 = v7[3];
    v28 = v7[2];
    v29 = *(_BYTE *)(v27 + 450);
    RaidDeleteDeviceQueueEntry(v27 + 656, *(_BYTE *)(v28 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 2096));
    RaUnitReleaseRemoveLock(v27);
    v30 = *(_QWORD *)(*(_QWORD *)(v28 + 184) + 8LL);
    v31 = v26[2];
    if ( *(_BYTE *)(v30 + 2) == 40 )
    {
      *(_QWORD *)(v30 + 96) = v31;
    }
    else
    {
      *(_QWORD *)(v30 + 56) = 0LL;
      *(_QWORD *)(v30 + 40) = 0LL;
      *(_QWORD *)(v30 + 48) = v31;
    }
    ExFreePoolWithTag(v26, 0x54436152u);
    v32 = *(_BYTE *)(v30 + 2);
    v33 = *(_BYTE *)(v30 + 3);
    if ( (v29 & 2) != 0 )
    {
      if ( v32 == 40 )
      {
        v34 = ((v33 >> 7) & 0x80) + 56;
      }
      else
      {
        v35 = 56;
        if ( v33 < 0 )
          v35 = -72;
        v34 = v35;
      }
      v36 = -1073740534;
    }
    else
    {
      if ( v32 == 40 )
      {
        v34 = ((v33 >> 7) & 0x80) + 9;
      }
      else
      {
        v37 = 9;
        if ( v33 < 0 )
          v37 = -119;
        v34 = v37;
      }
      v36 = 258;
    }
    *(_BYTE *)(v30 + 3) = v34;
    RaidCompleteRequestEx((PIRP)v28, 0, v36);
  }
  if ( v58 != v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    v8 = *(_DWORD *)(a1 + 136);
    v60 = v8;
    if ( v8
      && (Pool = (__int64 *)RaidAllocatePool(NonPagedPoolNx, 8LL * v8, 0x4C556152u, *(_QWORD *)(a1 + 8)),
          (v9 = Pool) != 0LL) )
    {
      v10 = *(_QWORD **)(a1 + 120);
      if ( v10 != (_QWORD *)(a1 + 120) )
      {
        v11 = 0;
        do
        {
          v12 = v10 - 7;
          if ( *((_BYTE *)v10 + 2920)
            && (*((_DWORD *)v12 + 750) != -1 || (*((_BYTE *)v12 + 450) & 2) != 0)
            && (int)RaUnitAcquireRemoveLock((__int64)(v10 - 7), 0LL, 0LL) >= 0 )
          {
            v38 = v11++;
            Pool[v38] = (__int64)v12;
          }
          v10 = (_QWORD *)*v10;
        }
        while ( v10 != (_QWORD *)(a1 + 120) );
        v57 = v11;
        v8 = v60;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v57 < v8 )
        Pool[v57] = 0LL;
      v13 = 0;
      if ( v8 )
      {
        v14 = Pool;
        do
        {
          if ( !*v14 )
            break;
          if ( v58 > v3 )
          {
            v39 = RaidLunQueueCheckWaitTimeout(*v14 + 656, v58 - v3, &v53);
            v3 += v39;
            if ( v39 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*v14 + 2104), v39);
          }
          RaUnitReleaseRemoveLock(*v14);
          ++v13;
          ++v14;
        }
        while ( v13 < v8 );
        v9 = Pool;
      }
      ExFreePoolWithTag(v9, 0x4C556152u);
      while ( 1 )
      {
        v15 = v53;
        if ( v53 == (__int64 *)&v53 )
          break;
        if ( (__int64 **)v53[1] != &v53 )
          goto LABEL_85;
        v40 = *v53;
        if ( *(__int64 **)(*v53 + 8) != v53 )
          goto LABEL_85;
        v53 = (__int64 *)*v53;
        v41 = v15 - 3;
        *(_QWORD *)(v40 + 8) = &v53;
        v42 = (IRP *)v15[2];
        v43 = v15[3];
        v44 = *(_BYTE *)(v43 + 450);
        SecurityContext = v42->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        RaUnitReleaseRemoveLock(v43);
        v46 = (_SECURITY_QUALITY_OF_SERVICE *)v41[2];
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          SecurityContext[4].SecurityQos = v46;
        }
        else
        {
          SecurityContext[2].AccessState = 0LL;
          *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
          SecurityContext[2].SecurityQos = v46;
        }
        ExFreePoolWithTag(v41, 0x54436152u);
        v47 = BYTE2(SecurityContext->SecurityQos);
        v48 = BYTE3(SecurityContext->SecurityQos);
        if ( (v44 & 2) != 0 )
        {
          if ( v47 == 40 )
          {
            v49 = ((v48 >> 7) & 0x80) + 56;
          }
          else
          {
            v50 = 56;
            if ( v48 < 0 )
              v50 = -72;
            v49 = v50;
          }
          v51 = -1073740534;
        }
        else
        {
          if ( v47 == 40 )
          {
            v49 = ((v48 >> 7) & 0x80) + 9;
          }
          else
          {
            v52 = 9;
            if ( v48 < 0 )
              v52 = -119;
            v49 = v52;
          }
          v51 = 258;
        }
        BYTE3(SecurityContext->SecurityQos) = v49;
        RaidCompleteRequestEx(v42, 0, v51);
      }
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
