/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x18007FD70
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010E940 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (int)Ldr;
  if ( !a1 )
    return sub_18010EFC8(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return sub_18010EFC8(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return sub_18010EFC8(a1, Ldr, a3, a4);
  else
    return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 14LL, &v5);
}
