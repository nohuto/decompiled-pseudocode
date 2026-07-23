/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x180062E90
 * Callers:
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, PPEB_LDR_DATA Ldr, __int64 a3)
{
  PPEB_LDR_DATA WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = Ldr;
  if ( a1 )
  {
    if ( (__int64)Ldr < 0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return ZwSetInformationWorkerFactory(
                 *(HANDLE *)(a1 + 56),
                 WorkerFactoryIdleTimeout,
                 &WorkerFactoryInformation,
                 8u);
    }
  }
  sub_18010EFC8(a1, Ldr, a3);
  return -1073741811;
}
