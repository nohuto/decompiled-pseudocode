/*
 * XREFs of RtlGetAppContainerSidType @ 0x18000C330
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlGetAppContainerParent @ 0x18000B6A0 (RtlGetAppContainerParent.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlIsParentOfChildAppContainer @ 0x18007FE10 (RtlIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(__int64 a1, _DWORD *a2)
{
  char v4; // al

  if ( *(_BYTE *)(a1 + 1) >= 2u
    && *(_BYTE *)a1 == 1
    && RtlCompareMemory((const void *)(a1 + 2), &unk_18011CB70, 6uLL) == 6
    && *(_DWORD *)(a1 + 8) == 2 )
  {
    v4 = *(_BYTE *)(a1 + 1);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
