/*
 * XREFs of rimPenButtonsPolicyApply @ 0x1C0158078
 * Callers:
 *     rimFinalizePointerFlags @ 0x1C0157998 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyApply(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // ecx

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_DWORD *)(a2 + 2504) &= 0xFFFFFFF9;
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 980) <= 1u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    *(_WORD *)(a2 + 2400) = *(_WORD *)(*(_QWORD *)(a1 + 968) + 16LL);
    v6 = *(_DWORD *)(a2 + 2504) | 2;
    *(_DWORD *)(a2 + 2504) = v6;
    result = *(unsigned int *)(a2 + 2420);
    if ( (result & 4) != 0 )
      *(_DWORD *)(a2 + 2504) = v6 | 4;
  }
  v7 = *(_DWORD *)(a2 + 2420);
  if ( (v7 & 4) != 0 )
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (result & 0x10) != 0 )
      *(_DWORD *)(a2 + 2420) = v7 & 0xFFFFFFCF | 0x20;
  }
  return result;
}
