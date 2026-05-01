/*
 * XREFs of ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x18011C538
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18010E2D8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18011BC04 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
        _DWORD *a1,
        __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( *(_DWORD *)a2 == 1 )
  {
    *(_DWORD *)a2 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a2 + 16));
    ++a1[2];
    --*a1;
  }
  else
  {
    return 0;
  }
  return v2;
}
