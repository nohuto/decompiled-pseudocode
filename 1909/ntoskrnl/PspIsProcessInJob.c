/*
 * XREFs of PspIsProcessInJob @ 0x14068A2AC
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x14068970C (PspGetJobAssignmentDisposition.c)
 *     NtIsProcessInJob @ 0x14068A1C0 (NtIsProcessInJob.c)
 *     PspCheckConditionalWakeCharge @ 0x14068AA14 (PspCheckConditionalWakeCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIsProcessInJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 952);
  result = 291LL;
  while ( v2 )
  {
    v4 = v2 == a2;
    v2 = *(_QWORD *)(v2 + 1072);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
