/*
 * XREFs of DbgkClearProcessDebugObject @ 0x1406E2614
 * Callers:
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 *     NtRemoveProcessDebug @ 0x140811230 (NtRemoveProcessDebug.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     DbgkpMarkProcessPeb @ 0x14080FC78 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140810BE0 (DbgkpWakeTarget.c)
 */

__int64 __fastcall DbgkClearProcessDebugObject(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // edi
  PVOID *v7; // rdx
  PVOID **v8; // rax
  PVOID ***v9; // rcx
  PVOID *v10; // r9
  _DWORD *v11; // rcx
  __int64 v12; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
  v4 = *(_QWORD *)(BugCheckParameter1 + 1056);
  if ( v4 && (v4 == a2 || !a2) )
  {
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
    v5 = 0;
  }
  else
  {
    v4 = 0LL;
    v5 = -1073740973;
  }
  KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  if ( v4 )
  {
    p_P = &P;
    P = &P;
    ExAcquireFastMutex((PFAST_MUTEX)(v4 + 24));
    v7 = *(PVOID **)(v4 + 80);
    while ( v7 != (PVOID *)(v4 + 80) )
    {
      v8 = (PVOID **)v7;
      v7 = (PVOID *)*v7;
      if ( v8[7] == (PVOID *)BugCheckParameter1 )
      {
        if ( v7[1] != v8
          || (v9 = (PVOID ***)v8[1], *v9 != v8)
          || (*v9 = (PVOID **)v7, v7[1] = v9, v10 = p_P, *p_P != &P) )
        {
LABEL_22:
          __fastfail(3u);
        }
        v8[1] = p_P;
        *v8 = &P;
        *v10 = v8;
        p_P = (PVOID *)v8;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v4 + 24));
    ObfDereferenceObject((PVOID)v4);
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_22;
      v12 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_22;
      P = *(PVOID *)P;
      *(_QWORD *)(v12 + 8) = &P;
      v11[18] = -1073740972;
      DbgkpWakeTarget(v11);
    }
  }
  return (unsigned int)v5;
}
