/*
 * XREFs of RmpClientAcquireResourceSet @ 0x180004DA0
 * Callers:
 *     RmAcquireResourceSetEx @ 0x180004D90 (RmAcquireResourceSetEx.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180006710 (HampIpcChannelObjectCompareObjectsForTree.c)
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall RmpClientAcquireResourceSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // r13
  int v10; // edi
  _QWORD *Heap; // rax
  _QWORD *v12; // r15
  int v13; // eax
  int Pointer; // ebx
  __int64 v15; // rbx
  int v16; // edi
  int v17; // esi
  void *v18; // r14
  CLIENT_CALL_RETURN v19; // r8
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  int v23; // esi
  unsigned __int64 v24; // rax
  ULONG v26; // [rsp+40h] [rbp-88h]
  int v27; // [rsp+48h] [rbp-80h]
  int v28; // [rsp+50h] [rbp-78h]
  unsigned int v29; // [rsp+70h] [rbp-58h]
  PVOID P; // [rsp+78h] [rbp-50h]

  v9 = a1 + 24;
  P = 0LL;
  v10 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v12 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x58uLL);
    v12[5] = v9;
    v12[6] = -1LL;
    *((_DWORD *)v12 + 14) = 0;
    v12[9] = a5;
    v12[10] = a6;
    v12[8] = -1LL;
    P = v12;
    v13 = 0;
  }
  else
  {
    v13 = -1073741801;
    v12 = 0LL;
  }
  Pointer = 0;
  if ( v13 < 0 )
    Pointer = v13;
  v29 = Pointer;
  if ( Pointer >= 0 )
  {
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    v15 = *(_QWORD *)(a4 + 544);
    v16 = *(_DWORD *)(a4 + 536);
    v17 = *(_DWORD *)(a4 + 532);
    v18 = (void *)(a4 + 464);
    v28 = v16;
    v27 = v17;
    v26 = RtlLengthSid(v18);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                              4u,
                              0LL,
                              *(_QWORD *)(a1 + 16),
                              a2,
                              a3,
                              a4,
                              v18,
                              v26,
                              v27,
                              v28,
                              v15,
                              a8).Pointer;
    v29 = Pointer;
    if ( Pointer >= 0 )
    {
      v12[6] = *a8;
      v20 = v12[5] + 24LL;
      v21 = *(_QWORD *)(v12[5] + 32LL);
      v22 = *(_QWORD *)v20;
      if ( (v21 & 1) != 0 && v22 )
        v22 ^= v20;
      v23 = v21 & 1;
      LOBYTE(v19.Pointer) = 0;
      if ( v22 )
      {
        while ( 1 )
        {
          if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HampIpcChannelObjectCompareObjectsForTree)(
                      v12,
                      v22,
                      (CLIENT_CALL_RETURN)v19.Simple) < 0 )
          {
            v24 = *(_QWORD *)v22;
            if ( v23 )
            {
              if ( !v24 )
                goto LABEL_23;
              v24 ^= v22;
            }
            if ( !v24 )
            {
LABEL_23:
              LOBYTE(v19.Pointer) = 0;
              break;
            }
          }
          else
          {
            v24 = *(_QWORD *)(v22 + 8);
            if ( v23 )
            {
              if ( !v24 )
                goto LABEL_17;
              v24 ^= v22;
            }
            if ( !v24 )
            {
LABEL_17:
              LOBYTE(v19.Pointer) = 1;
              break;
            }
          }
          v22 = v24;
        }
      }
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlRbInsertNodeEx)(
        v20,
        v22,
        (CLIENT_CALL_RETURN)v19.Simple,
        v12);
      v12 = 0LL;
      P = 0LL;
    }
    v10 = 1;
  }
  if ( v10 )
  {
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
  }
  if ( v12 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v29;
  }
  return (unsigned int)Pointer;
}
