/*
 * XREFs of ??0CTranslateTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18019DDAC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CTranslateTransform3D *__fastcall CTranslateTransform3D::CTranslateTransform3D(
        CTranslateTransform3D *this,
        struct CComposition *a2)
{
  CTranslateTransform3D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTranslateTransform3D::`vftable';
  result = this;
  *((_BYTE *)this + 148) = 0;
  return result;
}
