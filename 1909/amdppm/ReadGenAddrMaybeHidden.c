/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0002318
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C002D784 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002DD58 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002E018 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddr @ 0x1C00021B8 (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x1C000237C (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80));
  if ( a2 )
    return ReadGenAddr(a2);
  return result;
}
