/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0004944
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 *     InitAcpiCpc @ 0x1C0022250 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002F798 (ValidateAcpiCPC.c)
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
