/*
 * XREFs of ndisOidPreEnableWakeUp @ 0x1C0074070
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueryEnableWakeUp @ 0x1C0075BE8 (ndisQueryEnableWakeUp.c)
 *     ndisSetEnableWakeUp @ 0x1C0076A44 (ndisSetEnableWakeUp.c)
 */

__int64 __fastcall ndisOidPreEnableWakeUp(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL);
  if ( (v1 & 0xFFFFFFFD) == 0 )
    return ndisQueryEnableWakeUp();
  result = 1LL;
  if ( v1 == 1 )
    return ndisSetEnableWakeUp();
  *(_DWORD *)(a1 + 40) = -1073676267;
  return result;
}
