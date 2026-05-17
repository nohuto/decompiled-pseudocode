/*
 * XREFs of sub_1800CD828 @ 0x1800CD828
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CD6A0 (LdrLoadEnclaveModule.c)
 *     sub_1800CDAC4 @ 0x1800CDAC4 (sub_1800CDAC4.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180064FB8 @ 0x180064FB8 (sub_180064FB8.c)
 */

_UNKNOWN **__fastcall sub_1800CD828(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 96);
  v5 = *(_QWORD **)(a1 + 96);
  while ( v5 != v3 )
  {
    v6 = v5[22];
    v7 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 88);
      if ( v8 )
      {
        RtlFreeHeap(qword_180165420, 0, v8);
        *(_QWORD *)(v6 + 88) = 0LL;
      }
      result = (_UNKNOWN **)sub_180064FB8(v6);
    }
    if ( a2 < 0 )
    {
      v9 = *(_QWORD *)v7;
      v10 = *(_QWORD *)(v7 + 152);
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v11 = *(_QWORD **)(v7 + 8), *v11 != v7) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v10 + 24) = 0;
      *(_DWORD *)(v7 + 276) = 1;
      *(_DWORD *)(v10 + 56) = -2;
      result = (_UNKNOWN **)sub_18001B678(v7);
    }
  }
  return result;
}
