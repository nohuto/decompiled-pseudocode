/*
 * XREFs of MiMirrorPerformBlackWrites @ 0x140152B54
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBlackWrites(__int64 a1)
{
  int v1; // ebp
  unsigned __int64 v2; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  _QWORD *v6; // rbx
  __int64 i; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 NextForwardRunClearCapped; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v15; // r8
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  do
  {
    v4 = v2 & -(__int64)(v2 < qword_14043B880);
    v5 = qword_14043B880 - 1;
    while ( 1 )
    {
      if ( v5 - v4 == -1LL )
        goto LABEL_17;
      v6 = (_QWORD *)(qword_14043B888 + 8 * (v4 >> 6));
      for ( i = ~*v6 | ((1LL << (v4 & 0x3F)) - 1); i == -1; i = ~*v6 )
      {
        if ( (unsigned __int64)++v6 > qword_14043B888 + 8 * (v5 >> 6) )
          goto LABEL_17;
      }
      _BitScanForward64(&v8, ~i);
      v9 = v8 + (((__int64)v6 - qword_14043B888) >> 3 << 6);
      if ( v9 > v5 )
      {
LABEL_17:
        v9 = -1LL;
      }
      else if ( v9 != -1LL )
      {
        break;
      }
      if ( !v4 )
        break;
      v15 = v2 + 1;
      if ( v2 + 1 > qword_14043B880 )
        v15 = qword_14043B880;
      v5 = v15 - 1;
      v4 = 0LL;
    }
    if ( v9 < v2 || v9 == -1LL )
      break;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx(&qword_14043B880, v9, v5, &v16);
    v11 = v16;
    v12 = NextForwardRunClearCapped;
    if ( !NextForwardRunClearCapped )
      v11 = qword_14043B880;
    v13 = v11 - v9;
    v1 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v9 << 12, v13 << 12);
    if ( v1 < 0 )
      break;
    v2 = v12 + v9 + v13;
  }
  while ( v2 < qword_14043B880 );
  return (unsigned int)v1;
}
