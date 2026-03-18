/*
 * XREFs of ExemptedFromImmersiveRestrictions @ 0x1C01D6814
 * Callers:
 *     xxxEnableWindow @ 0x1C012FAB0 (xxxEnableWindow.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
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
