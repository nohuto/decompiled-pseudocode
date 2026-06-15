/*
 * XREFs of ??_E?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x140038970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x140038704 (--1-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vector deleting destructor'(
        CSystemAudioDeviceOffloadGraph *Block,
        char a2)
{
  ATL::CComObject<CSystemAudioDeviceOffloadGraph>::~CComObject<CSystemAudioDeviceOffloadGraph>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
