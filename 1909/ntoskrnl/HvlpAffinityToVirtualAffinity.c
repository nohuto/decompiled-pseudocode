/*
 * XREFs of HvlpAffinityToVirtualAffinity @ 0x14028D548
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140289140 (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x14028AC28 (HvlParkedVirtualProcessors.c)
 *     HvlpPrepareFlushHeader @ 0x14028DDA0 (HvlpPrepareFlushHeader.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvlpAffinityToVirtualAffinity(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _BYTE *i; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9

  v1 = 0LL;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  for ( i = &unk_1405766D3; ; i += 4 )
  {
    if ( (a1 & 1) != 0 )
      v1 |= 1LL << *(i - 2);
    v4 = a1 >> 1;
    v5 = v4;
    if ( !v4 )
      break;
    if ( (v4 & 1) != 0 )
      v1 |= 1LL << *i;
    a1 = v4 >> 1;
    if ( v5 < 2 )
      break;
  }
  return v1;
}
