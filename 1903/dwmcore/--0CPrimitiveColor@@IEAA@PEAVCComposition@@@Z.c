/*
 * XREFs of ??0CPrimitiveColor@@IEAA@PEAVCComposition@@@Z @ 0x18019D850
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CPrimitiveColor *__fastcall CPrimitiveColor::CPrimitiveColor(CPrimitiveColor *this, struct CComposition *a2)
{
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = (char *)this + 96;
  *((_QWORD *)this + 9) = (char *)this + 96;
  *((_DWORD *)this + 20) = 2;
  *(_QWORD *)((char *)this + 84) = 2LL;
  return this;
}
