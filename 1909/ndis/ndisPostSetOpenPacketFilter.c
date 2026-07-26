/*
 * XREFs of ndisPostSetOpenPacketFilter @ 0x1C0026868
 * Callers:
 *     ndisOidPostPacketFilter @ 0x1C0026390 (ndisOidPostPacketFilter.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C000E020 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0026D44 (ndisUpdateLoopbackOpens.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E38 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall ndisPostSetOpenPacketFilter(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r14d
  __int64 *v7; // r12
  __int64 v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // ecx
  unsigned int v16; // eax
  _DWORD *v17; // rbx
  __int64 v18; // rdx
  KIRQL v19; // al
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  KIRQL v23; // r9
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // eax
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  if ( a3 && a3 != -1073676268 && a3 != -1073676266 )
  {
    if ( (*(_DWORD *)(a1 + 436) | *(_DWORD *)(a1 + 432)) == *(_DWORD *)(a1 + 436) )
    {
      v4 = 0;
    }
    else
    {
      v27 = *(_DWORD *)(v3 + 464);
      if ( v27 )
      {
        if ( v27 == 16 && (*(_DWORD *)(a1 + 224) & 0x8000) == 0 )
          *(_DWORD *)(a1 + 432) = *(_DWORD *)(a1 + 436);
      }
      else
      {
        v28 = *(_QWORD *)(v3 + 400);
        if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 )
        {
          *(_DWORD *)(a1 + 432) = *(_DWORD *)(a1 + 436);
          *(_DWORD *)(v28 + 304) = *(_DWORD *)(v28 + 308);
        }
      }
    }
  }
  if ( !*(_DWORD *)(v3 + 464) )
  {
    v7 = *(__int64 **)(v3 + 400);
    v8 = 0LL;
    *(_WORD *)&LockState.OldIrql = 0;
    v9 = 0;
    LockState.Flags = 0;
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)v7[36], &LockState, 0);
    v10 = *v7;
    while ( v10 )
    {
      v29 = v10;
      if ( v9 > 1 )
        break;
      v30 = *(_DWORD *)(v10 + 432);
      v10 = *(_QWORD *)(v10 + 424);
      if ( !v30 )
        v29 = v8;
      v8 = v29;
      v31 = v9 + 1;
      if ( !v30 )
        v31 = v9;
      v9 = v31;
    }
    v11 = v7[1];
    while ( v11 )
    {
      v24 = v11;
      if ( v9 > 1 )
        break;
      v25 = *(_DWORD *)(v11 + 432);
      v11 = *(_QWORD *)(v11 + 424);
      if ( !v25 )
        v24 = v8;
      v8 = v24;
      v26 = v9 + 1;
      if ( !v25 )
        v26 = v9;
      v9 = v26;
    }
    v12 = v7[2];
    while ( v12 )
    {
      v13 = v12;
      v14 = v9 == 1;
      if ( v9 > 1 )
        goto LABEL_16;
      v15 = *(_DWORD *)(v12 + 432);
      v12 = *(_QWORD *)(v12 + 424);
      if ( !v15 )
        v13 = v8;
      v8 = v13;
      v16 = v9 + 1;
      if ( !v15 )
        v16 = v9;
      v9 = v16;
    }
    v14 = v9 == 1;
LABEL_16:
    if ( !v14 )
      v8 = 0LL;
    v7[41] = v8;
    if ( *(_DWORD *)(a2 + 160) )
    {
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
      *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 160);
      *(_QWORD *)(a2 + 152) = 0LL;
      *(_DWORD *)(a2 + 160) = 0;
    }
    if ( v4 )
      goto LABEL_24;
    v17 = *(_DWORD **)(a2 + 40);
    LOBYTE(v18) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
    if ( (*v17 & 0xA0) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
        goto LABEL_23;
      *(_DWORD *)(a1 + 224) |= 4u;
      ++*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 608) >= 6u )
        ++*(_DWORD *)(v3 + 2244);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) == 0 )
      {
LABEL_23:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v18);
LABEL_24:
        ndisUpdateCheckForLoopbackFlag(v3, v12);
        NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v7[36], &LockState);
        v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v3 + 520) = CurrentThread;
        LOBYTE(v21) = v19;
        ndisUpdateLoopbackOpens(v3, CurrentThread, v22, v21);
        *(_QWORD *)(v3 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v23);
        return;
      }
      *(_DWORD *)(a1 + 224) &= ~4u;
      --*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 608) >= 6u )
        --*(_DWORD *)(v3 + 2244);
    }
    ndisUpdateCheckForLoopbackFlag(v3, v18);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a2 + 160) )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 160);
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(a2 + 160) = 0;
  }
}
