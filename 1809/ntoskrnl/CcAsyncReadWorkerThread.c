/*
 * XREFs of CcAsyncReadWorkerThread @ 0x14013FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 */

char __fastcall CcAsyncReadWorkerThread(__int64 *a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // r14
  _QWORD *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 **v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *((unsigned int *)a1 + 9);
  v4 = (_QWORD *)a1[7];
  v5 = v4[97] + 16 * v2;
  if ( *((_DWORD *)a1 + 8) == 3 )
  {
    v6 = v4[103] + 404 * v2;
    *(_DWORD *)(v6 + 4LL * *((unsigned int *)a1 + 10)) = 0;
    CcAsyncReadWorker(a1);
    *(_DWORD *)(v6 + 4LL * *((unsigned int *)a1 + 10)) = -1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 104), 0LL);
    v7 = *(__int64 ***)(v5 + 8);
    if ( *v7 != (__int64 *)v5 )
      __fastfail(3u);
    *a1 = v5;
    a1[1] = (__int64)v7;
    *v7 = a1;
    *(_QWORD *)(v5 + 8) = a1;
    --*(_DWORD *)(v4[98] + 4 * v2);
    ExReleasePushLockEx((ULONG_PTR)(v4 + 104), 0LL);
    LOBYTE(v1) = CcDereferencePartition((__int64)v4);
  }
  return (char)v1;
}
