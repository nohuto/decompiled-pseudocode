/*
 * XREFs of ndisDeletePatternEntry @ 0x1C0022CDC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0022BB0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C007312C (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0073180 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0073F40 (ndisOidPostPMRemoveWOLPattern.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisDeletePatternEntry(void **a1, int a2)
{
  void **v2; // r8
  char result; // al
  void **v4; // rcx
  void *v5; // r9

  v2 = a1;
  result = 0;
  v4 = (void **)*a1;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *((_DWORD *)v4 + 10) == a2 )
        break;
      v2 = v4;
      v4 = (void **)*v4;
      if ( !v5 )
        return result;
    }
    *v2 = v5;
    ExFreePoolWithTag(v4, 0);
    return 1;
  }
  return result;
}
