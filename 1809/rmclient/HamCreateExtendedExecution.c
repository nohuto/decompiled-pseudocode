/*
 * XREFs of HamCreateExtendedExecution @ 0x180006310
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180006710 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateExtendedExecution(_QWORD *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // rdi
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // esi
  unsigned __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-58h]
  unsigned int Pointer; // [rsp+40h] [rbp-38h]
  _QWORD v21[3]; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h]

  P = 0LL;
  v21[0] = -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v10 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 2;
    Heap[7] = a2;
    Heap[6] = -1LL;
    P = Heap;
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
    v10 = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v19 = a3;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138A0, 4u, 0LL, *a1, v19, a4, v21).Pointer;
    v21[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v10[6] = v21[0];
      v12 = v10[5];
      RtlAcquireSRWLockExclusive(v12 + 8);
      *(_DWORD *)(v12 + 16) = GetCurrentThreadId();
      v14 = v10[5] + 24LL;
      v15 = *(_QWORD *)(v10[5] + 32LL);
      v16 = *(_QWORD *)v14;
      if ( (v15 & 1) != 0 && v16 )
        v16 ^= v14;
      v17 = v15 & 1;
      LOBYTE(v13) = 0;
      if ( v16 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v10, v16, v13) < 0 )
          {
            v18 = *(_QWORD *)v16;
            if ( v17 )
            {
              if ( !v18 )
                goto LABEL_21;
              v18 ^= v16;
            }
            if ( !v18 )
            {
LABEL_21:
              LOBYTE(v13) = 0;
              break;
            }
          }
          else
          {
            v18 = *(_QWORD *)(v16 + 8);
            if ( v17 )
            {
              if ( !v18 )
                goto LABEL_15;
              v18 ^= v16;
            }
            if ( !v18 )
            {
LABEL_15:
              LOBYTE(v13) = 1;
              break;
            }
          }
          v16 = v18;
        }
      }
      RtlRbInsertNodeEx(v14, v16, v13, v10);
      *(_DWORD *)(v12 + 16) = 0;
      RtlReleaseSRWLockExclusive(v12 + 8);
      v10 = 0LL;
      P = 0LL;
      *a5 = v21[0];
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
