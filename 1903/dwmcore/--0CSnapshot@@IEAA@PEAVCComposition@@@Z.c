/*
 * XREFs of ??0CSnapshot@@IEAA@PEAVCComposition@@@Z @ 0x180217FC0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CSnapshot *__fastcall CSnapshot::CSnapshot(CSnapshot *this, struct CComposition *a2)
{
  CSnapshot *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSnapshot::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  return result;
}
