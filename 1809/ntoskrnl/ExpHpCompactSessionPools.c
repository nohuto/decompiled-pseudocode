/*
 * XREFs of ExpHpCompactSessionPools @ 0x1401B7788
 * Callers:
 *     ExpHpCompactionRoutine @ 0x1401B78D0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpHpHeapCompact @ 0x1401B63AC (RtlpHpHeapCompact.c)
 */

__int64 ExpHpCompactSessionPools()
{
  __int64 result; // rax
  _KPROCESS *i; // rbx
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  result = MmGetNextSession(0LL);
  for ( i = (_KPROCESS *)result; result; i = (_KPROCESS *)result )
  {
    if ( (int)MmAttachSession(i, (__int64)v9) >= 0 )
    {
      v2 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424);
      v3 = *(_QWORD *)(v2 + 12504);
      if ( v3 )
      {
        v4 = *(__int16 *)(v3 + 278);
        v5 = *(_QWORD *)(v4 + v3 + 264) >> *(_BYTE *)(v3 + 267);
        if ( v5 <= 8 )
          v5 = 8LL;
        if ( *(_QWORD *)(v4 + v3 + 272) + *(_QWORD *)(v4 + v3 + 280) > v5 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 12504));
      }
      v6 = *(_QWORD *)(v2 + 12512);
      if ( v6 )
      {
        v7 = *(__int16 *)(v6 + 278);
        v8 = *(_QWORD *)(v7 + v6 + 264) >> *(_BYTE *)(v6 + 267);
        if ( v8 <= 8 )
          v8 = 8LL;
        if ( *(_QWORD *)(v7 + v6 + 272) + *(_QWORD *)(v7 + v6 + 280) > v8 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 12512));
      }
      MmDetachSession((__int64)i, (__int64)v9);
    }
    result = MmGetNextSession(i);
  }
  return result;
}
