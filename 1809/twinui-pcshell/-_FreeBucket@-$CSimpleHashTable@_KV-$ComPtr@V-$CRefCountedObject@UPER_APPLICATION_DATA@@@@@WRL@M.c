/*
 * XREFs of ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1800F7194
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1800EB4B4 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1800F6938 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_BOOL8 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
        _DWORD *a1,
        __int64 a2)
{
  BOOL v3; // edi

  v3 = *(_DWORD *)a2 == 1;
  if ( *(_DWORD *)a2 == 1 )
  {
    *(_DWORD *)a2 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a2 + 16));
    ++a1[2];
    --*a1;
  }
  return v3;
}
