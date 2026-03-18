/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x18019E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18019DF3C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 */

struct IDeviceResourceNotify *__fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::`scalar deleting destructor'(
        struct IDeviceResourceNotify *a1,
        char a2)
{
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
