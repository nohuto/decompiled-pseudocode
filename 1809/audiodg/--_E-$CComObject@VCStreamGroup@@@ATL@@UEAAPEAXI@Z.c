/*
 * XREFs of ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140013390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140013258 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall ATL::CComObject<CStreamGroup>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
