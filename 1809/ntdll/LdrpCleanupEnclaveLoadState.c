/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800CF038
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800CF2BC (LdrpDeleteEnclave.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpFreeLoadContext @ 0x180028C38 (LdrpFreeLoadContext.c)
 */

_UNKNOWN **__fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // r14
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 88);
  v5 = *(_QWORD **)(a1 + 88);
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
        RtlFreeHeap(LdrpHeap, 0, v8);
        *(_QWORD *)(v6 + 88) = 0LL;
      }
      result = (_UNKNOWN **)LdrpFreeLoadContext(v6);
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
      result = (_UNKNOWN **)LdrpDereferenceModule(v7);
    }
  }
  return result;
}
