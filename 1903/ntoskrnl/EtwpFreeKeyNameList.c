/*
 * XREFs of EtwpFreeKeyNameList @ 0x14076E67C
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14076D434 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14076E59C (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x14010D720 (RtlEnumerateGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  _RTL_AVL_TABLE *i; // rbx
  PVOID result; // rax

  for ( i = Table; ; Table = i )
  {
    result = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !result )
      break;
    RtlDeleteElementGenericTableAvl(i, result);
  }
  return result;
}
