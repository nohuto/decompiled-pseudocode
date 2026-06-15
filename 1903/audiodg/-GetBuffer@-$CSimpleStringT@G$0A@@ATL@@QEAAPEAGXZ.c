/*
 * XREFs of ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x14005DB30
 * Callers:
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DE50 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14000F068 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

_DWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::GetBuffer(const void **a1)
{
  _DWORD *result; // rax

  result = *a1;
  if ( *((int *)*a1 - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork(a1, *(result - 4));
    return *a1;
  }
  return result;
}
