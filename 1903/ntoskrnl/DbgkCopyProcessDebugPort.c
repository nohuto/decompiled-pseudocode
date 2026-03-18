/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14067274C
 * Callers:
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14067222C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x140848320 (DbgkpMarkProcessPeb.c)
 *     PsRequestDebugSecureProcess @ 0x1408CB3B4 (PsRequestDebugSecureProcess.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(ULONG_PTR BugCheckParameter1, __int64 a2, char *a3, bool *a4)
{
  char *v5; // rbx
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v11; // rcx
  char *v12; // r14
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rax
  __int16 v16; // cx
  char v17; // di
  char *v18; // rbx

  *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  v5 = a3;
  if ( a3 )
  {
    ObfReferenceObject(a3);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 1056);
    v9 = v8 == 0;
    if ( !v8 )
    {
LABEL_3:
      *a4 = !v9;
      return 0LL;
    }
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v5 = *(char **)(a2 + 1056);
    if ( v5 )
    {
      if ( (*(_DWORD *)(a2 + 780) & 2) != 0 )
        v5 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1056));
    }
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  }
  v12 = v5;
  v9 = v5 == 0LL;
  if ( !v5 )
    goto LABEL_3;
  LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
  if ( PsTestProtectedProcessIncompatibility(v11, a2, BugCheckParameter1) )
  {
    v14 = -1073740014;
  }
  else if ( (*((_DWORD *)v5 + 24) & 4) == 0
         || (v15 = *(_QWORD *)(BugCheckParameter1 + 1064)) != 0
         && ((v16 = *(_WORD *)(v15 + 8), v16 == 332) || v16 == 452) )
  {
    if ( (*(_BYTE *)(BugCheckParameter1 + 728) & 1) == 0
      || (LOBYTE(v13) = 1, v14 = PsRequestDebugSecureProcess(BugCheckParameter1, v13), v14 >= 0) )
    {
      v17 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 24));
      if ( (*((_DWORD *)v5 + 24) & 1) != 0 )
        v17 = 1;
      else
        *(_QWORD *)(BugCheckParameter1 + 1056) = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 24));
      if ( v17 )
        ObfDereferenceObject(v5);
      v18 = 0LL;
      if ( !v17 )
        v18 = v12;
      v9 = v18 == 0LL;
      if ( v18 )
      {
        DbgkpMarkProcessPeb(BugCheckParameter1);
        v9 = v18 == 0LL;
      }
      goto LABEL_3;
    }
  }
  else
  {
    v14 = -1073741637;
  }
  ObfDereferenceObject(v5);
  return (unsigned int)v14;
}
