/*
 * XREFs of ReadGenAddrMaybeHidden @ 0x1C00039F8
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C0022250 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C0022778 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00229EC (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0003898 (ReadGenAddr.c)
 *     ReadGenAddrHidden @ 0x1C0003A5C (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHidden(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 78) )
    return ReadGenAddrHidden(*(unsigned int *)(a1 + 80), a2);
  if ( a2 )
    return ReadGenAddr(a2);
  return result;
}
