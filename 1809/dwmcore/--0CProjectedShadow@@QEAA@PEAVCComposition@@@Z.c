/*
 * XREFs of ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x1801C8224
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801AFC78 (-CreateShadow@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiv.c)
 *     ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8848 (-CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

CProjectedShadow *__fastcall CProjectedShadow::CProjectedShadow(CProjectedShadow *this, struct CComposition *a2)
{
  CProjectedShadow *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CProjectedShadow::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CTextBrush::`vftable'{for `IVisualListenerInfoProvider'};
  result = this;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 1065353216;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  return result;
}
