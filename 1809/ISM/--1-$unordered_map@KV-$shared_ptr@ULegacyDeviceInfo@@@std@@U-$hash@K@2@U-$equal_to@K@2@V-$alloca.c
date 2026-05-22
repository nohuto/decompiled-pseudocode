/*
 * XREFs of ??1?$unordered_map@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180062038
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$5 @ 0x18013116F (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,std::shared_ptr<LegacyDeviceInfo>>::~unordered_map<unsigned long,std::shared_ptr<LegacyDeviceInfo>>(
        _QWORD *a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x18006209ELL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return std::list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::~list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>(a1 + 1);
}
