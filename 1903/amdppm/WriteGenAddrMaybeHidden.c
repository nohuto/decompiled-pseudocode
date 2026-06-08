/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C0002348
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C002D774 (InitAcpiCpc.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C0002478 (WriteGenAddrHidden.c)
 */

char __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  char result; // al

  result = (char)a2;
  if ( *(_BYTE *)(a1 + 78) )
    return WriteGenAddrHidden(*(unsigned int *)(a1 + 80));
  if ( a2 )
    return WriteGenAddr(a2, a3);
  return result;
}
