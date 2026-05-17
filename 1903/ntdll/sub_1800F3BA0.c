/*
 * XREFs of sub_1800F3BA0 @ 0x1800F3BA0
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F36C0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     RtlCreateUmsThreadContext @ 0x1800F3460 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F35D0 (RtlDeleteUmsThreadContext.c)
 */

__int64 __fastcall sub_1800F3BA0(__int64 a1, __int64 a2)
{
  struct _TEB *v2; // rsi
  int v3; // edi
  int v4; // eax
  __int64 v5; // rbx
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = NtCurrentTeb();
  v3 = -1073741811;
  if ( a2 )
  {
    v4 = RtlCreateUmsThreadContext(&v7);
    v5 = v7;
    v3 = v4;
    if ( v4 < 0
      || (*(_QWORD *)(v7 + 1248) = v2,
          *(_QWORD *)(v5 + 1280) = v5,
          *(_QWORD *)(v5 + 1272) = SLODWORD(v2->ClientId.UniqueThread),
          v3 = ZwSetInformationThread(),
          v3 < 0) )
    {
      if ( v5 )
        RtlDeleteUmsThreadContext(v5);
    }
    else
    {
      v2->TlsSlots[4] = (void *)v5;
    }
  }
  return (unsigned int)v3;
}
