/*
 * XREFs of ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14003F130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14003F058 (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
