/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18019D150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18019C6A8 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 */

struct IDeviceResourceNotify *__fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`scalar deleting destructor'(
        struct IDeviceResourceNotify *a1,
        char a2)
{
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
