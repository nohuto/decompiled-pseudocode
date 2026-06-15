/*
 * XREFs of ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140026370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14002611C (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 */

_DWORD *__fastcall ATL::CComAggObject<CAudioDeviceGraph>::`scalar deleting destructor'(_DWORD *Block, char a2)
{
  ATL::CComAggObject<CAudioDeviceGraph>::~CComAggObject<CAudioDeviceGraph>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
