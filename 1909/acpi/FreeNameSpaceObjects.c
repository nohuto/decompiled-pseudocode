/*
 * XREFs of FreeNameSpaceObjects @ 0x1C00137D0
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C0006870 (CreateNativeNameSpaceObject.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001A770 (AMLIGetNameSpaceObjectNoLock.c)
 *     WriteFieldObj @ 0x1C001F6A0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001FB60 (ReadFieldObj.c)
 *     Simulator_RemoveNode @ 0x1C0063D58 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0064E78 (FreeOwnedObjects.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

void __fastcall FreeNameSpaceObjects(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  KIRQL v5; // r12
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int64 v15; // rdi
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *i; // r8
  unsigned __int64 *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 *v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r10
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1;
  v5 = v2;
  do
  {
    while ( *(_QWORD *)(v4 + 24) != v4 + 24 )
      v4 = *(_QWORD *)(v4 + 24);
    v6 = *(_QWORD *)(v4 + 16);
    if ( !v6 || (v7 = *(_QWORD *)v4, *(_QWORD *)v4 == v6 + 24) )
      v7 = 0LL;
    v8 = P;
    if ( P )
    {
      while ( v4 != v8[3] )
      {
        v8 = (_QWORD *)v8[1];
        if ( !v8 )
          goto LABEL_9;
      }
      if ( *v8 )
        *(_QWORD *)(*v8 + 8LL) = v8[1];
      v30 = (_QWORD *)v8[1];
      if ( v30 )
        *v30 = *v8;
      if ( v8 == P )
        P = (PVOID)v8[1];
      ExFreePoolWithTag(v8, 0);
    }
LABEL_9:
    if ( *(_WORD *)(v4 + 66) == 10 )
    {
      v34 = *(_QWORD *)(v4 + 96);
      if ( !*(_BYTE *)(v34 + 12) && (*(_BYTE *)(v34 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v34, *(unsigned int *)(v34 + 8));
    }
    if ( v6 )
    {
      v9 = *(_QWORD *)v4;
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
        goto LABEL_59;
      v10 = *(unsigned __int64 **)(v4 + 8);
      if ( *v10 != v4 )
        goto LABEL_59;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
    else if ( v4 == gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v11 = *(_QWORD *)(v4 + 48);
    if ( v11 )
    {
      v12 = (_QWORD *)(v11 + 24);
      v13 = *(_QWORD *)(v11 + 24);
      if ( v13 )
      {
        while ( v13 != v4 )
        {
          v12 = (_QWORD *)(v13 + 56);
          v13 = *(_QWORD *)(v13 + 56);
          if ( !v13 )
            goto LABEL_18;
        }
        *v12 = *(_QWORD *)(v4 + 56);
      }
LABEL_18:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v4 + 48) + 32LL));
    }
    v14 = *(_WORD *)(v4 + 64);
    if ( (v14 & 0x40) == 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        v35 = *(_QWORD *)(v4 + 72);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v35 & 8) != 0 )
          FreeData((_QWORD *)v35);
      }
      else if ( *(_QWORD *)(v4 + 96) && *(int *)(v4 + 72) <= 0 )
      {
        if ( *(_WORD *)(v4 + 66) == 4 )
          FreeDataBuffs(*(_QWORD *)(v4 + 96) + 8LL, **(unsigned int **)(v4 + 96));
        FreeObjData(v4 + 64);
      }
      memset((void *)(v4 + 64), 0, 0x28uLL);
      v15 = v4 - 16;
      *(_DWORD *)(v4 - 16) = 0;
      byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v16 = *(_QWORD *)(v4 - 16 + 8);
      v17 = *(_QWORD **)(v16 + 40);
      for ( i = (_QWORD *)(v16 + 40); v17 != i; v17 = (_QWORD *)*v17 )
      {
        if ( v4 < (unsigned __int64)v17 )
          break;
      }
      v19 = (unsigned __int64 *)v17[1];
      if ( (_QWORD *)*v19 != v17 )
LABEL_59:
        __fastfail(3u);
      *(_QWORD *)(v4 + 8) = v19;
      *(_QWORD *)v4 = v17;
      *v19 = v4;
      v17[1] = v4;
      v20 = *(_QWORD **)v4;
      v21 = *(_QWORD *)v4 - 16LL;
      if ( *(_QWORD **)v4 != i )
      {
        v31 = *(unsigned int *)(v15 + 4);
        if ( v21 == v15 + v31 )
        {
          *(_DWORD *)(v15 + 4) = v31 + *(_DWORD *)(v21 + 4);
          v32 = *v20;
          if ( *(_QWORD **)(*v20 + 8LL) != v20 )
            goto LABEL_59;
          v33 = (_QWORD *)v20[1];
          if ( (_QWORD *)*v33 != v20 )
            goto LABEL_59;
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
        }
      }
      v22 = *(_QWORD **)(v15 + 24);
      v23 = v22 - 2;
      if ( v22 != i )
      {
        v24 = *((unsigned int *)v23 + 1);
        if ( (_QWORD *)v15 == (_QWORD *)((char *)v23 + v24) )
        {
          *((_DWORD *)v23 + 1) = *(_DWORD *)(v15 + 4) + v24;
          v25 = *(_QWORD *)v4;
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
            goto LABEL_59;
          v26 = *(unsigned __int64 **)(v4 + 8);
          if ( *v26 != v4 )
            goto LABEL_59;
          *v26 = v25;
          v15 = (unsigned __int64)v23;
          *(_QWORD *)(v25 + 8) = v26;
        }
      }
      if ( *(_QWORD *)(v16 + 32) <= v15 + *(unsigned int *)(v15 + 4) )
      {
        *(_QWORD *)(v16 + 32) = v15;
        v27 = (_QWORD *)(v15 + 16);
        v28 = *v27;
        if ( *(_QWORD **)(*v27 + 8LL) != v27 )
          goto LABEL_59;
        v29 = (_QWORD *)v27[1];
        if ( (_QWORD *)*v29 != v27 )
          goto LABEL_59;
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
      }
      KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
    }
    if ( v4 == a1 )
      break;
    v4 = v7;
    if ( !v7 )
      v4 = v6;
  }
  while ( v4 );
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
  if ( v3 )
    DereferenceObjectEx(v3);
}
