/*
 * XREFs of TpSetPoolMinThreads @ 0x1800818A0
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010F510 @ 0x18010F510 (sub_18010F510.c)
 */

__int64 __fastcall TpSetPoolMinThreads(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (unsigned int)Ldr;
  if ( !a1 || (int)Ldr < 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_18010EFC8(a1, Ldr, a3, a4);
    return 3221225485LL;
  }
  else
  {
    v5 = ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 4LL, &v8);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
    {
      if ( v5 >= 0 )
        sub_18010F510(a1, v8);
    }
    return (unsigned int)v5;
  }
}
