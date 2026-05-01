/*
 * XREFs of RmpClientRegisterActivityHostCallbacks @ 0x180005050
 * Callers:
 *     RmRegisterActivityHostCallbacks @ 0x180005040 (RmRegisterActivityHostCallbacks.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180006710 (HampIpcChannelObjectCompareObjectsForTree.c)
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterActivityHostCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // r12
  CLIENT_CALL_RETURN result; // rax
  _QWORD *Heap; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // esi
  unsigned __int64 v19; // rax
  unsigned int Pointer; // [rsp+30h] [rbp-38h]
  PVOID P; // [rsp+70h] [rbp+8h]

  v9 = 0LL;
  P = 0LL;
  v10 = a1 + 24;
  if ( a2 == -1 )
  {
    result.Simple = 3221225713LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
    v9 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x58uLL);
      v9[5] = v10;
      v9[6] = -1LL;
      *((_DWORD *)v9 + 14) = 1;
      v9[9] = a3;
      v9[10] = a4;
      v9[8] = a2;
      P = v9;
      result.Simple = 0LL;
    }
    else
    {
      result.Simple = 3221225495LL;
      v9 = 0LL;
    }
    if ( SLODWORD(result.Simple) >= 0 )
      result.Simple = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, *(_QWORD *)(a1 + 16), a2, a5).Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9[6] = *a5;
      v13 = v9[5];
      RtlAcquireSRWLockExclusive(v13 + 8);
      *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
      v15 = v9[5] + 24LL;
      v16 = *(_QWORD *)(v9[5] + 32LL);
      v17 = *(_QWORD *)v15;
      if ( (v16 & 1) != 0 )
      {
        if ( v17 )
          v17 ^= v15;
        else
          v17 = 0LL;
      }
      v18 = v16 & 1;
      LOBYTE(v14) = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v9, v17, v14) < 0 )
          {
            v19 = *(_QWORD *)v17;
            if ( v18 )
            {
              if ( !v19 )
                goto LABEL_26;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_26:
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
                goto LABEL_20;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_20:
              LOBYTE(v14) = 1;
              break;
            }
          }
          v17 = v19;
        }
      }
      RtlRbInsertNodeEx(v15, v17, v14, v9);
      *(_DWORD *)(v13 + 16) = 0;
      RtlReleaseSRWLockExclusive(v13 + 8);
      v9 = 0LL;
      P = 0LL;
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
