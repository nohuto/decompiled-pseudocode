/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C00083A4
 * Callers:
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002C7E0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002CAA0 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddr @ 0x1C00082E0 (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x1C0008338 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, char *a2)
{
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  else
    return ReadGenAddr((__int64)a2);
}
