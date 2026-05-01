/*
 * XREFs of HamCreateActivityForProcess @ 0x1800060C0
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180006710 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityForProcess(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _BYTE *a6)
{
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  CLIENT_CALL_RETURN result; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // esi
  unsigned __int64 v19; // rax
  unsigned int Pointer; // [rsp+40h] [rbp-48h]
  _QWORD v21[3]; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h]

  v21[0] = -1LL;
  P = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v11 = Heap;
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
    v11 = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138D0, 3u, 0LL, *a1, a3, a4, v21, a6).Pointer;
    v21[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      if ( !a6 || *a6 )
      {
        v11[6] = v21[0];
        v13 = v11[5];
        RtlAcquireSRWLockExclusive(v13 + 8);
        *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
        v15 = v11[5] + 24LL;
        v16 = *(_QWORD *)(v11[5] + 32LL);
        v17 = *(_QWORD *)v15;
        if ( (v16 & 1) != 0 && v17 )
          v17 ^= v15;
        v18 = v16 & 1;
        LOBYTE(v14) = 0;
        if ( v17 )
        {
          while ( 1 )
          {
            if ( (int)HampIpcChannelObjectCompareObjectsForTree(v11, v17, v14) < 0 )
            {
              v19 = *(_QWORD *)v17;
              if ( v18 )
              {
                if ( !v19 )
                  goto LABEL_24;
                v19 ^= v17;
              }
              if ( !v19 )
              {
LABEL_24:
                LOBYTE(v14) = 0;
                break;
              }
            }
            else
            {
              v19 = *(_QWORD *)(v17 + 8);
              if ( v18 )
              {
                if ( !v19 )
                  goto LABEL_18;
                v19 ^= v17;
              }
              if ( !v19 )
              {
LABEL_18:
                LOBYTE(v14) = 1;
                break;
              }
            }
            v17 = v19;
          }
        }
        RtlRbInsertNodeEx(v15, v17, v14, v11);
        *(_DWORD *)(v13 + 16) = 0;
        RtlReleaseSRWLockExclusive(v13 + 8);
        v11 = 0LL;
        P = 0LL;
        *a5 = v21[0];
        *a6 = 1;
      }
      else
      {
        *a5 = -1LL;
      }
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
