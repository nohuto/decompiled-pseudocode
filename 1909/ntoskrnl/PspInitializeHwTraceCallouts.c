/*
 * XREFs of PspInitializeHwTraceCallouts @ 0x140A017E8
 * Callers:
 *     PspInitPhase1 @ 0x1409FEEE0 (PspInitPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x14075D0B4 (ExRegisterHost.c)
 */

__int64 __fastcall PspInitializeHwTraceCallouts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  v3[0] = 131082LL;
  v3[3] = 0LL;
  v3[2] = PspHwTraceHostInterface;
  v3[4] = 0LL;
  v3[1] = 512LL;
  result = ExRegisterHost(&PspHwTraceExtensionHost, a2, (unsigned __int16 *)v3);
  if ( (int)result < 0 )
    PspHwTraceExtensionHost = 0LL;
  return result;
}
