/*
 * XREFs of ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180045588
 * Callers:
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18015041C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180152D3C (-OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?Close@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAXXZ @ 0x1801F1434 (-Close@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@I.c)
 *     ??$swap@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1802C140C (--$swap@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0.c)
 *     ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x180361D18 (--$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ITaskWindow>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return a1;
}
