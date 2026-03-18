/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x180173F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ @ 0x18017360C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void *__fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::`scalar deleting destructor'(void *a1, char a2)
{
  CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::~CDeviceResourceTable<CD2DInk,CInk,ID2DContext>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
