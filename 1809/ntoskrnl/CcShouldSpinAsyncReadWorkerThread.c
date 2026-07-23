/*
 * XREFs of CcShouldSpinAsyncReadWorkerThread @ 0x1400E035C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

char __fastcall CcShouldSpinAsyncReadWorkerThread(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v5; // eax
  _DWORD *v6; // r9
  char v8; // bl
  _QWORD **v9; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  v3 = a3;
  v5 = 0;
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 824) + 404LL * a3);
  v8 = 1;
  v9 = (_QWORD **)(*(_QWORD *)(a1 + 776) + 16LL * a3);
  if ( CcMaxAsyncReadWorkerThreads )
  {
    while ( *v6 >= 0x3Fu )
    {
      ++v5;
      ++v6;
      if ( v5 >= CcMaxAsyncReadWorkerThreads )
        goto LABEL_6;
    }
    return 0;
  }
  else
  {
LABEL_6:
    if ( a2 )
    {
      *a2 = 0LL;
      ExAcquirePushLockExclusiveEx(a1 + 832, 0LL);
      v11 = *v9;
      if ( *v9 != v9 )
      {
        if ( (_QWORD **)v11[1] != v9 || (v12 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
          __fastfail(3u);
        *v9 = v12;
        v12[1] = v9;
        *a2 = v11;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v3);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
          __fastfail(0xEu);
      }
      ExReleasePushLockEx(a1 + 832, 0LL);
      if ( !*a2 )
        _InterlockedAdd(&CcDbgFoundAsyncReadThreadListEmpty, 1u);
    }
  }
  return v8;
}
