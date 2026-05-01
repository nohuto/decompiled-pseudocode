/*
 * XREFs of HamCompleteExtendedExecution @ 0x180006520
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x1800060A0 (HampIpcChannelObjectComparePayloadForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCompleteExtendedExecution(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  _QWORD v14[13]; // [rsp+40h] [rbp-68h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800138A0, 6u, 0LL, *(_QWORD *)a1, a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    memset(&v14[3], 0, 40);
    v14[0] = a2;
    v14[1] = 0LL;
    v14[2] = 3LL;
    RtlAcquireSRWLockExclusive(a1 + 24);
    *(_DWORD *)(a1 + 32) = GetCurrentThreadId();
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_QWORD *)(a1 + 40);
    if ( (v5 & 1) != 0 && v6 )
      v6 ^= a1 + 40;
    v7 = v5 & 1;
    if ( v6 )
    {
      do
      {
        v8 = HampIpcChannelObjectComparePayloadForTree((__int64)v14, v6);
        if ( v8 >= 0 )
        {
          if ( v8 <= 0 )
            break;
          v9 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          v9 = *(_QWORD *)v6;
        }
        if ( v7 && v9 )
          v6 ^= v9;
        else
          v6 = v9;
      }
      while ( v6 );
      if ( v6 )
      {
        RtlRbRemoveNode(a1 + 40, v6);
        v10 = (_QWORD *)(v6 + 24);
        v11 = *(_QWORD **)(a1 + 64);
        if ( *v11 != a1 + 56 )
          __fastfail(3u);
        *v10 = a1 + 56;
        v10[1] = v11;
        *v11 = v10;
        *(_QWORD *)(a1 + 64) = v10;
        v12 = *(_QWORD *)(a1 + 16);
        RtlAcquireSRWLockExclusive(v12 + 32);
        v13 = *(_DWORD *)(v12 + 64) | 2;
        *(_DWORD *)(v12 + 64) = v13;
        if ( (v13 & 1) == 0 )
        {
          *(_DWORD *)(v12 + 64) = v13 | 1;
          TpPostWork(*(_QWORD *)(v12 + 56));
        }
        RtlReleaseSRWLockExclusive(v12 + 32);
      }
    }
    *(_DWORD *)(a1 + 32) = 0;
    RtlReleaseSRWLockExclusive(a1 + 24);
    return 0LL;
  }
  return result;
}
