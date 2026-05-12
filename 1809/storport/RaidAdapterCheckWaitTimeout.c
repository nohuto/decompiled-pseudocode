/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C0020EF8
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C0020ED0 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0015980 (RaidDeleteDeviceQueueEntry.c)
 *     GatewayCheckWaitTimeout @ 0x1C0021070 (GatewayCheckWaitTimeout.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C003CB48 (RaidLunQueueCheckWaitTimeout.c)
 *     RaidLogAllocationFailure @ 0x1C0045F8C (RaidLogAllocationFailure.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rdi
  _QWORD **v7; // r15
  _QWORD *i; // rdi
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r14
  char v17; // si
  __int64 v18; // rbx
  __int64 v19; // rax
  char v20; // al
  char v21; // cl
  char v22; // cl
  char v23; // al
  unsigned int v24; // r8d
  char v25; // al
  unsigned int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  IRP *v29; // r14
  __int64 v30; // rcx
  char v31; // si
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v33; // rax
  char v34; // al
  char v35; // cl
  char v36; // cl
  char v37; // al
  unsigned int v38; // r8d
  char v39; // al
  _QWORD v40[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v42; // [rsp+90h] [rbp+40h]
  __int64 *PoolWithTag; // [rsp+98h] [rbp+48h]

  v40[1] = v40;
  v42 = DpcCompletionLimit;
  v40[0] = v40;
  v2 = 0LL;
  v3 = GatewayCheckWaitTimeout((PKSPIN_LOCK)(a1 + 832));
  while ( 1 )
  {
    v4 = v40[0];
    if ( (_QWORD *)v40[0] == v40 )
      break;
    if ( *(_QWORD **)(v40[0] + 8LL) != v40 || (v13 = *(_QWORD *)v40[0], *(_QWORD *)(*(_QWORD *)v40[0] + 8LL) != v40[0]) )
LABEL_66:
      __fastfail(3u);
    v40[0] = *(_QWORD *)v40[0];
    *(_QWORD *)(v13 + 8) = v40;
    v14 = (_QWORD *)(v4 - 24);
    v15 = *(_QWORD *)(v4 - 24 + 48);
    v16 = *(_QWORD *)(v4 - 24 + 40);
    v17 = *(_BYTE *)(v15 + 450);
    RaidDeleteDeviceQueueEntry(v15 + 656, *(_BYTE *)(v16 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 2096));
    RaUnitReleaseRemoveLock(v15);
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 184) + 8LL);
    v19 = v14[2];
    if ( *(_BYTE *)(v18 + 2) == 40 )
    {
      *(_QWORD *)(v18 + 96) = v19;
    }
    else
    {
      *(_QWORD *)(v18 + 56) = 0LL;
      *(_QWORD *)(v18 + 40) = 0LL;
      *(_QWORD *)(v18 + 48) = v19;
    }
    ExFreePoolWithTag(v14, 0x54436152u);
    v20 = *(_BYTE *)(v18 + 2);
    v21 = *(_BYTE *)(v18 + 3);
    if ( (v17 & 2) != 0 )
    {
      if ( v20 == 40 )
      {
        v22 = ((v21 >> 7) & 0x80) + 56;
      }
      else
      {
        v23 = 56;
        if ( v21 < 0 )
          v23 = -72;
        v22 = v23;
      }
      v24 = -1073740534;
    }
    else
    {
      if ( v20 == 40 )
      {
        v22 = ((v21 >> 7) & 0x80) + 9;
      }
      else
      {
        v25 = 9;
        if ( v21 < 0 )
          v25 = -119;
        v22 = v25;
      }
      v24 = 258;
    }
    *(_BYTE *)(v18 + 3) = v22;
    RaidCompleteRequestEx((PIRP)v16, 0, v24);
  }
  if ( v42 != v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v5 = *(_DWORD *)(a1 + 152);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v5, 0x4C556152u);
      if ( PoolWithTag )
      {
        v7 = (_QWORD **)(a1 + 136);
        for ( i = *v7; i != v7; i = (_QWORD *)*i )
        {
          v9 = i - 7;
          if ( *((_BYTE *)i + 3136)
            && (*((_DWORD *)v9 + 804) != -1 || (*((_BYTE *)v9 + 450) & 2) != 0)
            && (int)RaUnitAcquireRemoveLock((__int64)(i - 7), 0LL, 0LL) >= 0 )
          {
            PoolWithTag[v2] = (__int64)v9;
            v2 = (unsigned int)(v2 + 1);
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (unsigned int)v2 < v5 )
          PoolWithTag[v2] = 0LL;
        v10 = 0;
        v11 = PoolWithTag;
        do
        {
          if ( !*v11 )
            break;
          if ( v42 > v3 )
          {
            v26 = RaidLunQueueCheckWaitTimeout(*v11 + 656, v42 - v3, v40);
            v3 += v26;
            if ( v26 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*v11 + 2104), v26);
          }
          RaUnitReleaseRemoveLock(*v11);
          ++v10;
          ++v11;
        }
        while ( v10 < v5 );
        ExFreePoolWithTag(PoolWithTag, 0x4C556152u);
        while ( 1 )
        {
          v12 = v40[0];
          if ( (_QWORD *)v40[0] == v40 )
            return;
          if ( *(_QWORD **)(v40[0] + 8LL) != v40 )
            goto LABEL_66;
          v27 = *(_QWORD *)v40[0];
          if ( *(_QWORD *)(*(_QWORD *)v40[0] + 8LL) != v40[0] )
            goto LABEL_66;
          v40[0] = *(_QWORD *)v40[0];
          v28 = (_QWORD *)(v12 - 24);
          *(_QWORD *)(v27 + 8) = v40;
          v29 = *(IRP **)(v12 - 24 + 40);
          v30 = *(_QWORD *)(v12 - 24 + 48);
          v31 = *(_BYTE *)(v30 + 450);
          SecurityContext = v29->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
          RaUnitReleaseRemoveLock(v30);
          v33 = (_SECURITY_QUALITY_OF_SERVICE *)v28[2];
          if ( BYTE2(SecurityContext->SecurityQos) == 40 )
          {
            SecurityContext[4].SecurityQos = v33;
          }
          else
          {
            SecurityContext[2].AccessState = 0LL;
            *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
            SecurityContext[2].SecurityQos = v33;
          }
          ExFreePoolWithTag(v28, 0x54436152u);
          v34 = BYTE2(SecurityContext->SecurityQos);
          v35 = BYTE3(SecurityContext->SecurityQos);
          if ( (v31 & 2) != 0 )
          {
            if ( v34 == 40 )
            {
              v36 = ((v35 >> 7) & 0x80) + 56;
            }
            else
            {
              v37 = 56;
              if ( v35 < 0 )
                v37 = -72;
              v36 = v37;
            }
            v38 = -1073740534;
          }
          else
          {
            if ( v34 == 40 )
            {
              v36 = ((v35 >> 7) & 0x80) + 9;
            }
            else
            {
              v39 = 9;
              if ( v35 < 0 )
                v39 = -119;
              v36 = v39;
            }
            v38 = 258;
          }
          BYTE3(SecurityContext->SecurityQos) = v36;
          RaidCompleteRequestEx(v29, 0, v38);
        }
      }
      RaidLogAllocationFailure(v6, 512LL, 8LL * v5, 1280663890LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
