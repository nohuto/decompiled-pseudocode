/*
 * XREFs of McTemplateU0qqq @ 0x180149014
 * Callers:
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18007A800 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800AAF20 (-PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800C8D00 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qqq(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-50h] BYREF
  int *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v7 = &v13;
  v9 = &v14;
  v11 = &a5;
  v8 = 4LL;
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWrite(a1, a2, a3, 4u, &v6);
}
