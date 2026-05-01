/*
 * XREFs of ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18011EC9C
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCFullScreenManager@@$0A@@12@@Z @ 0x18018EC78 (--$MakeAndInitialize@V-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Det.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@12@@Z @ 0x1801F335C (--$MakeAndInitialize@V-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@12@@Z @ 0x18030EF54 (--$MakeAndInitialize@V-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x18030F36C (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@12@@Z @ 0x18035EBDC (--$MakeAndInitialize@V-$SimpleClassFactory@VCMultitaskingViewServiceProvider@@$0A@@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@12@@Z @ 0x180361ACC (--$MakeAndInitialize@V-$SimpleClassFactory@VAllUpViewUriHandler@@$0A@@WRL@Microsoft@@V123@$$V@De.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCAppTransitionManager@@$0A@@12@@Z @ 0x1803A5A7C (--$MakeAndInitialize@V-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@12@@Z @ 0x1803C749C (--$MakeAndInitialize@V-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@V12.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VTabletModePositioner@@$0A@@12@@Z @ 0x1803C81CC (--$MakeAndInitialize@V-$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@V123@$$V@D.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VTabletModeViewManager@@$0A@@12@@Z @ 0x1803D59CC (--$MakeAndInitialize@V-$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VJointResize@@$0A@@12@@Z @ 0x1803EE540 (--$MakeAndInitialize@V-$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@V123@$$V@Details@WR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(
        __int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 20) = 4;
  return result;
}
