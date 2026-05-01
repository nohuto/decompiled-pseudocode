/*
 * XREFs of ?GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x180080550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180073C84 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 */

__int64 __fastcall CApplicationManager::GetPerHostIdApplicationData(__int64 a1, __int64 a2, __int64 *a3)
{
  int Item; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *a3 = 0LL;
  v7 = 0LL;
  Item = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
           a1 + 752,
           &v8,
           &v7);
  if ( Item >= 0 )
  {
    v5 = v7;
    v7 = 0LL;
    *a3 = v5;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return (unsigned int)Item;
}
