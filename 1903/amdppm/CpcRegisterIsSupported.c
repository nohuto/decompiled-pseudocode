/*
 * XREFs of CpcRegisterIsSupported @ 0x1C000A3E4
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C002D774 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002F608 (ValidateAcpiCPC.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcRegisterIsSupported(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
