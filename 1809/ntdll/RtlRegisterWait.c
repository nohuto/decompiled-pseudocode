/*
 * XREFs of RtlRegisterWait @ 0x18002BA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     RtlpTpInitializeData @ 0x18002F1A4 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 Heap; // rax
  __int64 v11; // rbx
  _QWORD *v12; // r12
  int v13; // eax
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  char v17; // [rsp+20h] [rbp-98h]
  int v18; // [rsp+24h] [rbp-94h]
  unsigned __int64 v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+40h] [rbp-78h] BYREF
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int128 v25; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v26)(); // [rsp+70h] [rbp-48h]
  int v27; // [rsp+78h] [rbp-40h]
  int v28; // [rsp+7Ch] [rbp-3Ch]
  int v29; // [rsp+80h] [rbp-38h]

  v17 = 0;
  v20 = 0LL;
  v19 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = RtlpTpRevertCapture(&v20, a6 & 0x100);
  v18 = v8;
  v9 = 0LL;
  if ( v8 < 0 )
  {
    v11 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
    v11 = Heap;
    v19 = Heap;
    v9 = 0LL;
    if ( Heap )
    {
      v12 = (_QWORD *)(Heap + 48);
      *(_QWORD *)(Heap + 48) = 0LL;
      v8 = RtlpTpInitializeData(Heap, a6, v20);
      v18 = v8;
      v9 = 0LL;
      if ( v8 >= 0 )
      {
        v17 = 1;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_DWORD *)(v11 + 24) = 0;
        *(_QWORD *)(v11 + 32) = a3;
        *(_QWORD *)(v11 + 40) = a4;
        *(_QWORD *)(v11 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v11 + 64) = 0LL;
          *(_QWORD *)(v11 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v11 + 64) = a5;
          *(_QWORD *)(v11 + 64) = -10000LL * a5;
          *(_QWORD *)(v11 + 72) = v11 + 64;
        }
        *(_QWORD *)(v11 + 80) = 0LL;
        *(_DWORD *)(v11 + 88) = 0;
        v21 = 3;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0;
        v28 = 1;
        v29 = 72;
        v13 = 0;
        if ( (a6 & 0xC4) != 0 )
        {
          v13 = 2;
          v27 = 2;
        }
        if ( (a6 & 0x10) != 0 )
          v27 = v13 | 1;
        v26 = RtlpTpWaitFinalizationCallback;
        v8 = TpAllocWait(v12, RtlpTpWaitCallback, v11, &v21);
        v18 = v8;
        v9 = 0LL;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive(v11 + 16, 0LL, v14, v15);
          *a1 = v11;
          TpSetWaitEx(*v12, a2, *(_QWORD *)(v11 + 72), 0LL);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 16));
          v9 = 0LL;
          v11 = 0LL;
          v19 = 0LL;
          v8 = 0;
          v18 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v18 = -1073741801;
    }
  }
  if ( v11 )
  {
    if ( v17 )
    {
      if ( *(_QWORD *)v11 )
        NtClose(*(HANDLE *)v11);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
    v8 = v18;
  }
  RtlpTpResumeImpersonation(v20, v9);
  return (unsigned int)v8;
}
