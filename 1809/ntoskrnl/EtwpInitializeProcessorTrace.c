/*
 * XREFs of EtwpInitializeProcessorTrace @ 0x140727380
 * Callers:
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 * Callees:
 *     ExRegisterHost @ 0x1407275DC (ExRegisterHost.c)
 */

__int64 __fastcall EtwpInitializeProcessorTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+24h] [rbp-34h]
  int v5; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v3 = 65547;
  v5 = 512;
  v4 = 3;
  v7 = 0LL;
  v8 = 0LL;
  v6 = off_140350498;
  result = ExRegisterHost(&EtwpHwTraceExtensionHost, a2, &v3);
  if ( (int)result < 0 )
    EtwpHwTraceExtensionHost = 0LL;
  return result;
}
