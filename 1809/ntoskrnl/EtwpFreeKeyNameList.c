/*
 * XREFs of EtwpFreeKeyNameList @ 0x140743C7C
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140742A4C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140743BC0 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x140134300 (RtlEnumerateGenericTableAvl.c)
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
