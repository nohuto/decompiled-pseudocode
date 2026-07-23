/*
 * XREFs of PiDevCfgPushDriverNodeEntry @ 0x14028973C
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgPushDriverNodeEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rcx

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x63647050u);
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a2;
    v6 = *(_QWORD **)(a1 + 8);
    if ( *v6 != a1 )
      __fastfail(3u);
    *PoolWithTag = a1;
    PoolWithTag[1] = v6;
    *v6 = PoolWithTag;
    *(_QWORD *)(a1 + 8) = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
