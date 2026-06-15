/*
 * XREFs of ??_E?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14003F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14003EFB8 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CProcessSubmix>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CProcessSubmix>::~CComAggObject<CProcessSubmix>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
