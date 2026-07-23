/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x180071770
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x180071958 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpDependencyExist @ 0x180026C78 (LdrpDependencyExist.c)
 *     LdrpQueueWork @ 0x1800718CC (LdrpQueueWork.c)
 */

void __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // r8
  _QWORD **v12; // rcx
  _QWORD *i; // rdx
  int v14; // eax
  _QWORD *v16; // rcx
  _QWORD **v17; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  v7 = *(_QWORD ***)(v4 + 48);
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(v4 + 48) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    LdrpDereferenceModule((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( LdrpDependencyExist(v9, v5) )
    {
      v12 = *(_QWORD ***)(v9 + 40);
      for ( i = *v12; i != v11; i = (_QWORD *)*i )
        v12 = (_QWORD **)i;
      *v12 = (_QWORD *)*v11;
      if ( *(_QWORD **)(v9 + 40) == v11 )
      {
        v17 = 0LL;
        if ( v12 != v11 )
          v17 = v12;
        *(_QWORD *)(v9 + 40) = v17;
      }
      v14 = *(_DWORD *)(v5 + 24);
      if ( v14 != -1 )
        *(_DWORD *)(v5 + 24) = v14 - 1;
      RtlFreeHeap(LdrpHeap, 0, v11);
      v11 = 0LL;
    }
    else
    {
      v11[1] = v5;
      v16 = *(_QWORD **)(v5 + 48);
      if ( v16 )
      {
        *v8 = *v16;
        *v16 = v8;
      }
      else
      {
        *v8 = v8;
      }
      *(_QWORD *)(v5 + 48) = v8;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v11) && (*(_DWORD *)(v10 + 100))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      LdrpQueueWork(v10);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
