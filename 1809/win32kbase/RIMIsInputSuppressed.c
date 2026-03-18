/*
 * XREFs of RIMIsInputSuppressed @ 0x1C0121410
 * Callers:
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0128D14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 1176);
  v2 = 0;
  if ( v1 == 1 || v1 == 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 336) + 84LL) & gWakeOnDeviceTypes) == 0 )
    return 1;
  return v2;
}
