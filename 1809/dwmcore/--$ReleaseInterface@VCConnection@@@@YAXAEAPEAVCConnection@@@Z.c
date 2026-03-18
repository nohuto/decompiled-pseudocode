/*
 * XREFs of ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00
 * Callers:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800719F0 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180094640 (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x1800949F0 (--1CChannelContext@@UEAA@XZ.c)
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x180094B00 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180095D68 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x180096288 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180099328 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800996F8 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18009CD38 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801458D0 (--1CChannel@@AEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18014A94C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CConnection>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
