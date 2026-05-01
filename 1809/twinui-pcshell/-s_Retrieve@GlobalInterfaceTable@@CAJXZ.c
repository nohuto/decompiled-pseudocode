/*
 * XREFs of ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x1800E7F94
 * Callers:
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1800E65DC (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1800E71AC (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x1800E7554 (-Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 GlobalInterfaceTable::s_Retrieve(void)
{
  HRESULT v0; // ebx
  void *v1; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !GlobalInterfaceTable::s_pGlobalInterfaceTable )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v0 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v0 >= 0 )
    {
      v1 = ppv;
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)&GlobalInterfaceTable::s_pGlobalInterfaceTable,
              (signed __int64)ppv,
              0LL) )
        v1 = 0LL;
      ppv = v1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v0;
}
