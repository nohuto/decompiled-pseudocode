/*
 * XREFs of FsRtlpOplockCleanup @ 0x140103A40
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140010BD0 (FsRtlpComputeShareableOplockState.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1401038C8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x140103E2C (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x140103E74 (IoGetOplockFullFoExt.c)
 *     FsRtlpClearOwner @ 0x140103E9C (FsRtlpClearOwner.c)
 *     IoReleaseCancelSpinLock @ 0x140103EE0 (IoReleaseCancelSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140103F80 (IoAcquireCancelSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x140104020 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1401040E4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283A1C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283B1C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(_DWORD *a1, __int64 a2)
{
  char v3; // r15
  char v4; // di
  __int64 v5; // rdx
  char v6; // r10
  __int64 OplockFullFoExt; // r13
  _QWORD *v8; // rbx
  int v9; // r12d
  __int64 v10; // rbx
  char v11; // r14
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *i; // rbx
  _DWORD *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  char v27; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = 0;
  v27 = 0;
  if ( a1[36] == 1 )
    goto LABEL_60;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48));
  if ( (a1[36] & 0x1000000) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 13); i != (_QWORD *)(a1 + 26); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v5 + 48) == i[2] )
      {
        while ( 1 )
        {
          v23 = (_DWORD *)*((_QWORD *)a1 + 11);
          if ( v23 == a1 + 22 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v23);
        }
        v24 = *(_QWORD **)i[1];
        v25 = *v24;
        v26 = (_QWORD *)v24[1];
        if ( *(_QWORD **)(*v24 + 8LL) != v24 || (_QWORD *)*v26 != v24 )
          __fastfail(3u);
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        ObfDereferenceObject((PVOID)i[2]);
        ExFreePoolWithTag(i, 0);
        v5 = a2;
        v6 = 1;
        break;
      }
    }
    a1[36] &= ~0x1000000u;
    v4 = 0;
    if ( *((_DWORD **)a1 + 13) != a1 + 26 )
      v4 = v6;
    v27 = v4;
  }
  v8 = (_QWORD *)*((_QWORD *)a1 + 5);
  v9 = 534;
  if ( v8 != (_QWORD *)(a1 + 10) )
  {
    while ( v8 != (_QWORD *)(a1 + 10) )
    {
      v17 = v8[2];
      if ( *(_QWORD *)(v5 + 48) == *(_QWORD *)(v17 + 48) )
      {
        v8 = (_QWORD *)v8[1];
        if ( *(_DWORD *)(v17 + 24) == 590400 )
          v3 = v6;
        v18 = 534LL;
        if ( *(_DWORD *)(v17 + 24) != 590400 )
          v18 = 0LL;
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v8, v18, 0LL);
        if ( v3 )
          break;
        v5 = a2;
        v6 = 1;
      }
      v8 = (_QWORD *)*v8;
    }
    FsRtlpComputeShareableOplockState((__int64)a1);
    v6 = 1;
  }
  if ( OplockFullFoExt )
  {
    v10 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v10 )
    {
      v11 = 0;
      if ( (*(_DWORD *)(v10 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        FsRtlpModifyThreadPriorities(a1, v10, 0LL);
        FsRtlpClearOwner(a1, v10);
        if ( *((_DWORD **)a1 + 9) == a1 + 18 )
          *((_BYTE *)a1 + 32) = 0;
        ObfDereferenceObject(*(PVOID *)(v10 + 24));
      }
      else
      {
        if ( (a1[36] & 0x10000) == 0 || !*(_QWORD *)(v10 + 56) )
        {
          FsRtlpRemoveAndBreakRHIrp((PVOID)v10, (__int64)a1, v6, 534, 0, 0, 0, 0);
          goto LABEL_9;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        v20 = *v19;
        v21 = (_QWORD *)v19[1];
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        if ( *((_DWORD **)a1 + 15) == a1 + 30 )
          a1[36] &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v10 + 40) )
          FsRtlpClearOwner(a1, v10);
      }
      ExFreePoolWithTag((PVOID)v10, 0);
      v11 = 1;
LABEL_9:
      FsRtlpComputeShareableOplockState((__int64)a1);
      if ( v11 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
    }
  }
  if ( *(_QWORD *)(a2 + 48) == *((_QWORD *)a1 + 1) )
  {
    v12 = a1[36];
    if ( (v12 & 0x1F00F80) == 0 )
    {
      v13 = *(_QWORD *)a1;
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
      _InterlockedExchange64((volatile __int64 *)(v13 + 104), 0LL);
      IoReleaseCancelSpinLock(*(_BYTE *)(v13 + 69));
      if ( *(_DWORD *)(v14 + 24) == 590400 )
      {
        v15 = *(_QWORD *)(v13 + 24);
        *(_QWORD *)v15 = 0LL;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_DWORD *)v15 = 1572865;
        *(_DWORD *)(v15 + 4) = (a1[36] >> 12) & 7;
        *(_QWORD *)(v13 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v13 + 56) = 8LL;
        v9 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v9;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v12 = a1[36];
      v4 = v27;
    }
    if ( (v12 & 0x80u) == 0 )
      ObfDereferenceObject(*((PVOID *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *((_QWORD *)a1 + 3) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *((_BYTE *)a1 + 32) = 0;
    }
    a1[36] = a1[36] & 0x20 | 1;
    while ( 1 )
    {
      v16 = (_DWORD *)*((_QWORD *)a1 + 11);
      if ( v16 == a1 + 22 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v16);
    }
  }
LABEL_60:
  if ( v4 )
    a1[36] |= 0x1000000u;
}
