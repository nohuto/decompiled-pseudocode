/*
 * XREFs of ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x180173164
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGenericInk *__fastcall CGenericInk::CGenericInk(CGenericInk *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGenericInk::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 9) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`vftable';
  *((_QWORD *)this + 10) = this;
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 2;
  *(_QWORD *)((char *)this + 108) = 2LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 232;
  *((_DWORD *)this + 58) = 0;
  **((_DWORD **)this + 28) = 0;
  return this;
}
