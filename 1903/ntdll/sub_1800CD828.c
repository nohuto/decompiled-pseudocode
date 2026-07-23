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

int __fastcall sub_1800CD828(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  char *v3; // r14
  char *v5; // rbx
  _QWORD *v6; // rsi
  char *v7; // rdi
  void *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  char **v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = (char *)(a1 + 96);
  v5 = *(char **)(a1 + 96);
  while ( v5 != v3 )
  {
    v6 = (_QWORD *)*((_QWORD *)v5 + 22);
    v7 = v5;
    v5 = *(char **)v5;
    if ( v6 )
    {
      v8 = (void *)v6[11];
      if ( v8 )
      {
        RtlFreeHeap(HeapHandle, 0, v8);
        v6[11] = 0LL;
      }
      LODWORD(v2) = sub_180064FB8(v6);
    }
    if ( a2 < 0 )
    {
      v9 = *(_QWORD *)v7;
      v10 = *((_QWORD *)v7 + 19);
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v11 = (char **)*((_QWORD *)v7 + 1), *v11 != v7) )
        __fastfail(3u);
      *v11 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v10 + 24) = 0;
      *((_DWORD *)v7 + 69) = 1;
      *(_DWORD *)(v10 + 56) = -2;
      LODWORD(v2) = sub_18001B678(v7);
    }
  }
  return (int)v2;
}
