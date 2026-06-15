/*
 * XREFs of ??_E?$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x1400408A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400407A4 (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CVpoContext>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CVpoContext>::~CComAggObject<CVpoContext>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
