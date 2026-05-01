/*
 * XREFs of HamCreateActivityEx @ 0x1800052A0
 * Callers:
 *     HamCreateActivity @ 0x180005270 (HamCreateActivity.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180006710 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // r15
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // edi
  unsigned __int64 v19; // rax
  ULONG v20; // [rsp+30h] [rbp-88h]
  int v21; // [rsp+38h] [rbp-80h]
  int v22; // [rsp+40h] [rbp-78h]
  unsigned int Pointer; // [rsp+70h] [rbp-48h]
  _QWORD v24[3]; // [rsp+78h] [rbp-40h] BYREF
  PVOID P; // [rsp+C0h] [rbp+8h]

  P = 0LL;
  v24[0] = -1LL;
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
    v12 = *(_QWORD *)(a3 + 544);
    v22 = *(_DWORD *)(a3 + 536);
    v21 = *(_DWORD *)(a3 + 532);
    v20 = RtlLengthSid((PSID)(a3 + 464));
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800138D0,
                       2u,
                       0LL,
                       *a1,
                       a3,
                       a3 + 464,
                       v20,
                       v21,
                       v22,
                       v12,
                       a4,
                       a5,
                       v24).Pointer;
    v24[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v10[6] = v24[0];
      v13 = v10[5];
      RtlAcquireSRWLockExclusive(v13 + 8);
      *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
      v15 = v10[5] + 24LL;
      v16 = *(_QWORD *)(v10[5] + 32LL);
      v17 = *(_QWORD *)v15;
      if ( (v16 & 1) != 0 && v17 )
        v17 ^= v15;
      v18 = v16 & 1;
      LOBYTE(v14) = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v10, v17, v14) < 0 )
          {
            v19 = *(_QWORD *)v17;
            if ( v18 )
            {
              if ( !v19 )
                goto LABEL_21;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_21:
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
                goto LABEL_15;
              v19 ^= v17;
            }
            if ( !v19 )
            {
LABEL_15:
              LOBYTE(v14) = 1;
              break;
            }
          }
          v17 = v19;
        }
      }
      RtlRbInsertNodeEx(v15, v17, v14, v10);
      *(_DWORD *)(v13 + 16) = 0;
      RtlReleaseSRWLockExclusive(v13 + 8);
      v10 = 0LL;
      P = 0LL;
      *a6 = v24[0];
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
