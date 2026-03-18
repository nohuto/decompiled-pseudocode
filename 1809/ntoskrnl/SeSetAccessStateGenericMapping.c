/*
 * XREFs of SeSetAccessStateGenericMapping @ 0x14063CB10
 * Callers:
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

void __stdcall SeSetAccessStateGenericMapping(PACCESS_STATE AccessState, PGENERIC_MAPPING GenericMapping)
{
  *(GENERIC_MAPPING *)((char *)AccessState->AuxData + 8) = *GenericMapping;
}
