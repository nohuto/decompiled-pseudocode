/*
 * XREFs of MiMirrorVerify @ 0x140152B0C
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorVerify(__int64 a1)
{
  int v1; // ebp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  _QWORD *v7; // rbx
  __int64 i; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 NextForwardRunClearCapped; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v4 = 0LL;
  do
  {
    v5 = v4 & -(__int64)(v4 < qword_14043B870);
    v6 = qword_14043B870 - 1;
    while ( 1 )
    {
      if ( v6 - v5 == -1LL )
        goto LABEL_7;
      v7 = (_QWORD *)(qword_14043B878 + 8 * (v5 >> 6));
      for ( i = ~*v7 | ((1LL << (v5 & 0x3F)) - 1); i == -1; i = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > qword_14043B878 + 8 * (v6 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v10, ~i);
      v9 = v10 + (((__int64)v7 - qword_14043B878) >> 3 << 6);
      if ( v9 > v6 )
      {
LABEL_7:
        v9 = -1LL;
      }
      else if ( v9 != -1LL )
      {
        break;
      }
      if ( !v5 )
        break;
      v11 = v4 + 1;
      if ( v4 + 1 > qword_14043B870 )
        v11 = qword_14043B870;
      v6 = v11 - 1;
      v5 = 0LL;
    }
    if ( v9 < v4 || v9 == -1LL )
      break;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx(&qword_14043B870, v9, v6, &v16);
    v13 = v16;
    v14 = NextForwardRunClearCapped;
    if ( !NextForwardRunClearCapped )
      v13 = qword_14043B870;
    v15 = v13 - v9;
    v1 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 24))(v9 << 12, v15 << 12);
    if ( v1 < 0 )
      break;
    v4 = v14 + v9 + v15;
  }
  while ( v4 < qword_14043B870 );
  return (unsigned int)v1;
}
