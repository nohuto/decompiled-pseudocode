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

signed __int64 __fastcall LdrpLoadContextReplaceModule(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  _QWORD **v9; // rcx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // r8
  _QWORD **v14; // rcx
  _QWORD *i; // rdx
  int v16; // eax
  _QWORD *v19; // rcx
  _QWORD **v20; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v7 = *(_QWORD *)(a2 + 152);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 != -1 )
    *(_DWORD *)(v7 + 24) = v8 + 1;
  *(_DWORD *)(v6 + 24) = 0;
  v9 = *(_QWORD ***)(v6 + 48);
  if ( v9 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      *(_QWORD *)(v6 + 48) = 0LL;
    else
      *v9 = (_QWORD *)*v10;
    LdrpDereferenceModule(a2);
    v11 = v10[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
    if ( LdrpDependencyExist(v11, v7) )
    {
      v14 = *(_QWORD ***)(v11 + 40);
      for ( i = *v14; i != v13; i = (_QWORD *)*i )
        v14 = (_QWORD **)i;
      *v14 = (_QWORD *)*v13;
      if ( *(_QWORD **)(v11 + 40) == v13 )
      {
        v20 = 0LL;
        if ( v14 != v13 )
          v20 = v14;
        *(_QWORD *)(v11 + 40) = v20;
      }
      v16 = *(_DWORD *)(v7 + 24);
      if ( v16 != -1 )
        *(_DWORD *)(v7 + 24) = v16 - 1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v13);
      v13 = 0LL;
    }
    else
    {
      v13[1] = v7;
      v19 = *(_QWORD **)(v7 + 48);
      if ( v19 )
      {
        *v10 = *v19;
        *v19 = v10;
      }
      else
      {
        *v10 = v10;
      }
      *(_QWORD *)(v7 + 48) = v10;
    }
    if ( v12 && (*(int *)(v7 + 56) >= 2 || !v13) && (*(_DWORD *)(v12 + 100))-- == 1 )
    {
      *(_DWORD *)(v11 + 56) = 4;
      LdrpQueueWork(v12);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
