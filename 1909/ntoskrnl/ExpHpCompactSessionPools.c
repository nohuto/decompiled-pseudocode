/*
 * XREFs of ExpHpCompactSessionPools @ 0x14008CA14
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140002FF0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     RtlpHpHeapCompact @ 0x14010AB64 (RtlpHpHeapCompact.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 ExpHpCompactSessionPools()
{
  __int64 result; // rax
  ULONG_PTR i; // rbx
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  result = MmGetNextSession(0LL);
  for ( i = result; result; i = result )
  {
    if ( (int)MmAttachSession(i) >= 0 )
    {
      v2 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 672);
      v3 = *(_QWORD *)(v2 + 14560);
      if ( v3 )
      {
        v4 = *(__int16 *)(v3 + 278);
        v5 = *(_QWORD *)(v4 + v3 + 264) >> *(_BYTE *)(v3 + 267);
        if ( v5 <= 8 )
          v5 = 8LL;
        if ( *(_QWORD *)(v4 + v3 + 272) + *(_QWORD *)(v4 + v3 + 280) > v5 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 14560));
      }
      v6 = *(_QWORD *)(v2 + 14568);
      if ( v6 )
      {
        v7 = *(__int16 *)(v6 + 278);
        v8 = *(_QWORD *)(v7 + v6 + 264) >> *(_BYTE *)(v6 + 267);
        if ( v8 <= 8 )
          v8 = 8LL;
        if ( *(_QWORD *)(v7 + v6 + 272) + *(_QWORD *)(v7 + v6 + 280) > v8 )
          RtlpHpHeapCompact(*(_QWORD *)(v2 + 14568));
      }
      MmDetachSession(i, v9);
    }
    result = MmGetNextSession(i);
  }
  return result;
}
