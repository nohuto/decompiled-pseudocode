/*
 * XREFs of ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011584C
 * Callers:
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115434 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011A8FC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800058A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Add@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAHAEBQEAUtWAVEFORMATEX@@@Z @ 0x180115718 (-Add@-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int v3; // eax
  void *v4; // rbx
  unsigned int v5; // edi
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF

  pv = 0LL;
  v3 = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)&pv);
  v4 = pv;
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( (unsigned int)ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::Add(
                         (__int64)this + 32,
                         &pv) )
      v4 = 0LL;
    else
      v5 = -2147024882;
  }
  CoTaskMemFree(v4);
  return v5;
}
