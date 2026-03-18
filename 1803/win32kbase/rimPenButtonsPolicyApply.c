/*
 * XREFs of rimPenButtonsPolicyApply @ 0x1C010293C
 * Callers:
 *     rimFinalizePointerFlags @ 0x1C010248C (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  *(_DWORD *)(a2 + 2488) &= 0xFFFFFFF9;
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 940) <= 1u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    *(_WORD *)(a2 + 2384) = *(_WORD *)(*(_QWORD *)(a1 + 928) + 16LL);
    v5 = *(_DWORD *)(a2 + 2488) | 2;
    *(_DWORD *)(a2 + 2488) = v5;
    result = *(unsigned int *)(a2 + 2404);
    if ( (result & 4) != 0 )
      *(_DWORD *)(a2 + 2488) = v5 | 4;
  }
  v6 = *(_DWORD *)(a2 + 2404);
  if ( (v6 & 4) != 0 )
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (result & 0x10) != 0 )
      *(_DWORD *)(a2 + 2404) = v6 & 0xFFFFFFCF | 0x20;
  }
  return result;
}
