/*
 * XREFs of ?CompareKey@CStringCompare@@SAHQEBG0@Z @ 0x18012F384
 * Callers:
 *     ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x18012FC18 (-DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CStringCompare::CompareKey(const WCHAR *a1, const WCHAR *a2)
{
  return CompareStringOrdinal(a1, -1, a2, -1, 0) == 2;
}
