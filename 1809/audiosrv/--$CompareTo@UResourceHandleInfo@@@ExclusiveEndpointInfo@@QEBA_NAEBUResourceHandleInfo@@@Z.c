/*
 * XREFs of ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x1800F3344
 * Callers:
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800F43D8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800F5F38 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 * Callees:
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1800F62B4 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

bool __fastcall ExclusiveEndpointInfo::CompareTo<ResourceHandleInfo>(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  _WORD *v4; // rdi
  bool result; // al

  v4 = a2;
  result = (!*(_WORD *)a1 || (a2 += 148, !*a2) || !(unsigned int)_o__wcsicmp(a1, a2))
        && SimpleWildcardStringCompare((const unsigned __int16 *const)(a1 + 402), (unsigned __int64)a2, v4 + 349, a4)
        && *(_DWORD *)(a1 + 924) == *((_DWORD *)v4 + 305);
  return result;
}
