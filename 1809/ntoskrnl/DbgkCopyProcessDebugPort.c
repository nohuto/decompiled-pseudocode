/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14060A650
 * Callers:
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14060A21C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x14080FC78 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(_QWORD *BugCheckParameter1, __int64 a2, char *a3, bool *a4)
{
  char *v5; // rbx
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v11; // rcx
  char *v12; // r14
  NTSTATUS v13; // edi
  __int64 v14; // rax
  __int16 v15; // cx
  char v16; // di
  char *v17; // rbx
  char v18[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+28h] [rbp-B0h]
  __int64 v20; // [rsp+30h] [rbp-A8h]

  BugCheckParameter1[132] = 0LL;
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
      if ( (*(_DWORD *)(a2 + 772) & 2) != 0 )
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
  if ( PsTestProtectedProcessIncompatibility(v11, a2, (__int64)BugCheckParameter1) )
  {
    v13 = -1073740014;
  }
  else if ( (*((_DWORD *)v5 + 24) & 4) == 0
         || (v14 = BugCheckParameter1[133]) != 0 && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452) )
  {
    if ( (BugCheckParameter1[90] & 1) == 0
      || (v19 = BugCheckParameter1[90], v20 = 1LL, v13 = VslpEnterIumSecureMode(2u, 12LL, 0, (__int64)v18), v13 >= 0) )
    {
      v16 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 24));
      if ( (*((_DWORD *)v5 + 24) & 1) != 0 )
        v16 = 1;
      else
        BugCheckParameter1[132] = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 24));
      if ( v16 )
        ObfDereferenceObject(v5);
      v17 = 0LL;
      if ( !v16 )
        v17 = v12;
      v9 = v17 == 0LL;
      if ( v17 )
      {
        DbgkpMarkProcessPeb((ULONG_PTR)BugCheckParameter1);
        v9 = v17 == 0LL;
      }
      goto LABEL_3;
    }
  }
  else
  {
    v13 = -1073741637;
  }
  ObfDereferenceObject(v5);
  return (unsigned int)v13;
}
