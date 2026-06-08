/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C0004318
 * Callers:
 *     InitAcpiCpc @ 0x1C0020470 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002A7B0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002AA24 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrHidden @ 0x1C00042AC (ReadGenAddrHidden.c)
 *     ReadGenAddr @ 0x1C0008364 (ReadGenAddr.c)
 */

__int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  else
    return ReadGenAddr(a2);
}
