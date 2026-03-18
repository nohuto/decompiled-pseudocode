/*
 * XREFs of ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x18019D164
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
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
  *((_QWORD *)this + 8) = &CGenericInk::`vftable'{for `ISuperWetSource'};
  *((_QWORD *)this + 10) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`vftable';
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 12) = (char *)this + 128;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_DWORD *)this + 28) = 2;
  *(_QWORD *)((char *)this + 116) = 2LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = (char *)this + 240;
  *((_DWORD *)this + 60) = 0;
  **((_DWORD **)this + 29) = 0;
  return this;
}
