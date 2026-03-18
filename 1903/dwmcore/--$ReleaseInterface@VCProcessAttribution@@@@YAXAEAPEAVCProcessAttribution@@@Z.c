/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180040280
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180027F30 (--1CWindowNode@@MEAA@XZ.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18003F580 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800401F8 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18004545C (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180045548 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCCF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800CD61C (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x1800CF7E0 (--1CChannelContext@@UEAA@XZ.c)
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x1800D1360 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CProcessAttribution>(CDirtyRegion **a1)
{
  CDirtyRegion *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CDirtyRegion::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
