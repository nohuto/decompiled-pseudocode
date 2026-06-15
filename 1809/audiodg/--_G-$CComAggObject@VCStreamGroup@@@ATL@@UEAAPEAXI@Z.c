/*
 * XREFs of ??_G?$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140031810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140031674 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CStreamGroup>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CStreamGroup>::~CComAggObject<CStreamGroup>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
