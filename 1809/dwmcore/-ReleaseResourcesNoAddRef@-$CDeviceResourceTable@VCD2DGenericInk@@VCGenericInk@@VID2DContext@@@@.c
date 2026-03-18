/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@IEAAXXZ @ 0x180175C5C
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x180173638 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180175B80 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEA.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx

  if ( *((_DWORD *)a1 + 10) )
  {
    v2 = *((unsigned int *)a1 + 10);
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)a1 + 2));
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v4 + 16), a1);
      CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)a1 + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a1 + 16, 8u);
}
