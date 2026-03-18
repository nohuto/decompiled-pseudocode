/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01D6994
 * Callers:
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     xxxEnableWindow @ 0x1C0016740 (xxxEnableWindow.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 */

_BOOL8 __fastcall ExemptedFromImmersiveRestrictions(__int64 a1)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(a1 + 416);
  if ( *(int *)(v2 + 12) < 0 )
    return 1LL;
  if ( (unsigned int)IsImmersiveBroker(v2) )
    return 1LL;
  result = IAMThreadAccessGranted((const struct tagTHREADINFO *)a1);
  if ( result )
    return 1LL;
  return result;
}
