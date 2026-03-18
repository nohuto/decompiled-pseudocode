/*
 * XREFs of FreeNameSpaceObjects @ 0x1C0003550
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AAE8 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     CreateNativeNameSpaceObject @ 0x1C00229A0 (CreateNativeNameSpaceObject.c)
 *     WriteFieldObj @ 0x1C0023F50 (WriteFieldObj.c)
 *     Simulator_RemoveNode @ 0x1C0061DD8 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0062EC8 (FreeOwnedObjects.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

void __fastcall FreeNameSpaceObjects(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  KIRQL v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned __int64 v18; // rdi
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *i; // r8
  unsigned __int64 *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a1;
  v7 = v2;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 24);
      if ( v8 == v6 + 24 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
    }
    v9 = *(_QWORD *)(v6 + 16);
    if ( !v9 || (v10 = *(_QWORD *)v6, *(_QWORD *)v6 == v9 + 24) )
      v10 = 0LL;
    v11 = P;
    if ( P )
    {
      while ( v6 != v11[3] )
      {
        v11 = (_QWORD *)v11[1];
        if ( !v11 )
          goto LABEL_9;
      }
      if ( *v11 )
        *(_QWORD *)(*v11 + 8LL) = v11[1];
      v33 = (_QWORD *)v11[1];
      if ( v33 )
        *v33 = *v11;
      if ( v11 == P )
        P = (PVOID)v11[1];
      ExFreePoolWithTag(v11, 0);
    }
LABEL_9:
    if ( *(_WORD *)(v6 + 66) == 10 )
    {
      v37 = *(_QWORD *)(v6 + 96);
      if ( !*(_BYTE *)(v37 + 12) && (*(_BYTE *)(v37 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v37, *(unsigned int *)(v37 + 8));
    }
    if ( v9 )
    {
      v12 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
        goto LABEL_59;
      v13 = *(unsigned __int64 **)(v6 + 8);
      if ( *v13 != v6 )
        goto LABEL_59;
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else if ( v6 == gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v14 = *(_QWORD *)(v6 + 48);
    if ( v14 )
    {
      v15 = (_QWORD *)(v14 + 24);
      v16 = *(_QWORD *)(v14 + 24);
      if ( v16 )
      {
        while ( v16 != v6 )
        {
          v15 = (_QWORD *)(v16 + 56);
          v16 = *(_QWORD *)(v16 + 56);
          if ( !v16 )
            goto LABEL_18;
        }
        *v15 = *(_QWORD *)(v6 + 56);
      }
LABEL_18:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v6 + 48) + 32LL));
    }
    v17 = *(_WORD *)(v6 + 64);
    if ( (v17 & 0x40) == 0 )
    {
      if ( (v17 & 1) != 0 )
      {
        v38 = *(_QWORD *)(v6 + 72);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v38 & 8) != 0 )
          FreeData(v38, v8, v3, v4);
      }
      else if ( *(_QWORD *)(v6 + 96) )
      {
        if ( *(int *)(v6 + 72) > 0 )
        {
          *(_WORD *)(v6 + 64) |= 8u;
        }
        else
        {
          if ( *(_WORD *)(v6 + 66) == 4 )
            FreeDataBuffs(*(_QWORD *)(v6 + 96) + 8LL, **(_DWORD **)(v6 + 96));
          FreeObjData(v6 + 64, v8, v3, v4);
        }
      }
      memset((void *)(v6 + 64), 0, 0x28uLL);
      v18 = v6 - 16;
      *(_DWORD *)(v6 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v19 = *(_QWORD *)(v6 - 16 + 8);
      v20 = *(_QWORD **)(v19 + 40);
      for ( i = (_QWORD *)(v19 + 40); v20 != i; v20 = (_QWORD *)*v20 )
      {
        if ( v6 < (unsigned __int64)v20 )
          break;
      }
      v22 = (unsigned __int64 *)v20[1];
      if ( (_QWORD *)*v22 != v20 )
LABEL_59:
        __fastfail(3u);
      *(_QWORD *)(v6 + 8) = v22;
      *(_QWORD *)v6 = v20;
      *v22 = v6;
      v20[1] = v6;
      v23 = *(_QWORD **)v6;
      v24 = *(_QWORD *)v6 - 16LL;
      if ( *(_QWORD **)v6 != i )
      {
        v34 = *(unsigned int *)(v18 + 4);
        if ( v24 == v18 + v34 )
        {
          *(_DWORD *)(v18 + 4) = v34 + *(_DWORD *)(v24 + 4);
          v35 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) != v23 )
            goto LABEL_59;
          v36 = (_QWORD *)v23[1];
          if ( (_QWORD *)*v36 != v23 )
            goto LABEL_59;
          *v36 = v35;
          *(_QWORD *)(v35 + 8) = v36;
        }
      }
      v25 = *(_QWORD **)(v18 + 24);
      v26 = v25 - 2;
      if ( v25 != i )
      {
        v27 = *((unsigned int *)v26 + 1);
        if ( (_QWORD *)v18 == (_QWORD *)((char *)v26 + v27) )
        {
          *((_DWORD *)v26 + 1) = *(_DWORD *)(v18 + 4) + v27;
          v28 = *(_QWORD *)v6;
          if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
            goto LABEL_59;
          v29 = *(unsigned __int64 **)(v6 + 8);
          if ( *v29 != v6 )
            goto LABEL_59;
          *v29 = v28;
          v18 = (unsigned __int64)v26;
          *(_QWORD *)(v28 + 8) = v29;
        }
      }
      if ( *(_QWORD *)(v19 + 32) <= v18 + *(unsigned int *)(v18 + 4) )
      {
        *(_QWORD *)(v19 + 32) = v18;
        v30 = (_QWORD *)(v18 + 16);
        v31 = *v30;
        if ( *(_QWORD **)(*v30 + 8LL) != v30 )
          goto LABEL_59;
        v32 = (_QWORD *)v30[1];
        if ( (_QWORD *)*v32 != v30 )
          goto LABEL_59;
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
      }
      KeReleaseSpinLock(&gmutHeap, NewIrql);
    }
    if ( v6 == a1 )
      break;
    v6 = v10;
    if ( !v10 )
      v6 = v9;
  }
  while ( v6 );
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v7);
  if ( v5 )
    DereferenceObjectEx(v5, "Child Object");
}
