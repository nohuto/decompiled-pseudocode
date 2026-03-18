/*
 * XREFs of ??_G?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAPEAXI@Z @ 0x180173FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x180173638 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 */

void *__fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
