/*
 * XREFs of IoctlQueryProtocolInfoProcess @ 0x1C0001008
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012848 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0012AA4 (QueryProtocolInfoIdentifyData.c)
 */

__int64 __fastcall IoctlQueryProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // r11
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v2 = *(_DWORD **)(a2 + 64);
    v3 = 60LL;
  }
  else
  {
    v2 = *(_DWORD **)(a2 + 24);
    v3 = 16LL;
  }
  v4 = *(unsigned int *)(a2 + v3);
  if ( (unsigned int)v4 < 0x4C || (v5 = (unsigned int)v2[13], v4 < v5 + 36 + (unsigned __int64)(unsigned int)v2[14]) )
  {
    *(_BYTE *)(a2 + 3) = 21;
  }
  else
  {
    if ( (!(_DWORD)v5 || (((_BYTE)v5 + 36) & 7) == 0) && v2[9] == 3 )
    {
      v6 = v2[10];
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
          return QueryProtocolInfoIdentifyData(a1);
        v8 = v7 - 1;
        if ( !v8 )
          return QueryProtocolInfoLogPageData(a1);
        if ( v8 == 1 )
          return QueryProtocolInfoFeatureData(a1);
      }
    }
    *(_BYTE *)(a2 + 3) = 6;
  }
  return 3238002694LL;
}
