/*
 * XREFs of HampIpcChannelWnfCallback @ 0x180004A50
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x1800060A0 (HampIpcChannelObjectComparePayloadForTree.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelWnfCallback(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  v5 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    v6[1] = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(a1 + 56))(a1, v6 - 3, 0LL);
    RtlAcquireSRWLockExclusive(a1 + 8);
    CurrentThreadId = GetCurrentThreadId();
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)(a1 + 24);
    if ( (v10 & 1) != 0 )
    {
      if ( v11 )
        v11 ^= a1 + 24;
      else
        v11 = 0LL;
    }
    v12 = v10 & 1;
    while ( v11 )
    {
      v13 = HampIpcChannelObjectComparePayloadForTree(a2, v11);
      if ( v13 >= 0 )
      {
        if ( v13 <= 0 )
          break;
        v14 = *(_QWORD *)(v11 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v11;
      }
      if ( v12 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
    }
    *(_DWORD *)(a1 + 16) = 0;
    result = RtlReleaseSRWLockExclusive(a1 + 8);
    if ( v11 )
      return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(a1 + 56))(a1, v11, a2);
  }
  return result;
}
