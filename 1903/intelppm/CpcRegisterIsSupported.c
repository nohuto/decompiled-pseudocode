/*
 * XREFs of CpcRegisterIsSupported @ 0x1C0008AD4
 * Callers:
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002CE58 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
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
