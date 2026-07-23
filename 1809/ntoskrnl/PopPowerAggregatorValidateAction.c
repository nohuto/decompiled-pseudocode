/*
 * XREFs of PopPowerAggregatorValidateAction @ 0x1408770C8
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140877170 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTracePowerAggregatorValidationEvent @ 0x140874D84 (PopDiagTracePowerAggregatorValidationEvent.c)
 */

__int64 __fastcall PopPowerAggregatorValidateAction(int *a1, int *a2)
{
  int v2; // ebx
  unsigned int v5; // edi
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v7 = *a2;
  while ( v2 )
  {
    v5 = (*((__int64 (__fastcall **)(int *, int *))&unk_14096EB30 + 3 * v2))(a1, &v7);
    PopDiagTracePowerAggregatorValidationEvent(*a1, v2, v5);
    if ( v5 != 1 )
      goto LABEL_6;
    v2 = v7;
  }
  v5 = 0;
LABEL_6:
  if ( !v5 )
    *a2 = v2;
  return v5;
}
