/*
 * XREFs of ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QAEJ_K@Z @ 0x10014C71
 * Callers:
 *     ?Release@ResourceSetClientProxy@@UAGKXZ @ 0x100149D0 (-Release@ResourceSetClientProxy@@UAGKXZ.c)
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z @ 0x10014B4D (-ReleaseResourcesImpl@ResourceSetClientProxy@@IAEJK@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@ABEXU?$integral_constant@_N$0A@@1@AB_KAAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@1@2AAI@Z @ 0x1001394A (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2.c)
 *     ?erase@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QAE?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@2@0@Z @ 0x100151A1 (-erase@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to@_K.c)
 */

int __thiscall ResourceManagerClientProxy::RemoveProxyResourceSet(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // edi
  int v3; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // esi
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h] BYREF
  void *Block; // [esp+14h] [ebp-4h] BYREF

  v2 = this;
  v3 = 0;
  v4 = this + 23;
  EnterCriticalSection(this + 23);
  Block = 0;
  v2 += 24;
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    v2,
    v6,
    (int)&a2,
    &Block,
    &v6,
    &v7);
  if ( Block == v2 )
    v3 = -2147023728;
  else
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::erase(
      (int)&v6,
      Block,
      *(_DWORD *)Block);
  LeaveCriticalSection(v4);
  return v3;
}
