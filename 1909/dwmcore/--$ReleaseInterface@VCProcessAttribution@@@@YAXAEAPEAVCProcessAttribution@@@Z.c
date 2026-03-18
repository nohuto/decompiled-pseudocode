/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18004C7A8
 * Callers:
 *     ??1CChannelContext@@UEAA@XZ @ 0x18004B180 (--1CChannelContext@@UEAA@XZ.c)
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18004B2A0 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18004B9E0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18004C5D4 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x18004C6C0 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180054148 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x180055338 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCBD8 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800CD50C (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
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
