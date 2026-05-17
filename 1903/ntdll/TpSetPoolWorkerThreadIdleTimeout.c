/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x180062E90
 * Callers:
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  struct _PEB_LDR_DATA *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = Ldr;
  if ( a1 )
  {
    if ( (__int64)Ldr < 0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v5);
    }
  }
  sub_18010EFC8(a1, Ldr, a3, a4);
  return 3221225485LL;
}
