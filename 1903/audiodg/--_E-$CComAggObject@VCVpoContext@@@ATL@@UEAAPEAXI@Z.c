/*
 * XREFs of ??_E?$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x14003CEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x14003CDE0 (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CVpoContext>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CVpoContext>::~CComAggObject<CVpoContext>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
