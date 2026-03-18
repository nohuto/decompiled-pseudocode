/*
 * XREFs of EtwRegisterClassicProvider @ 0x1407184F0
 * Callers:
 *     WmipProcessLegacyEtwRegister @ 0x14077C92C (WmipProcessLegacyEtwRegister.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    return EtwpRegisterProvider(EtwpHostSiloState, a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}
