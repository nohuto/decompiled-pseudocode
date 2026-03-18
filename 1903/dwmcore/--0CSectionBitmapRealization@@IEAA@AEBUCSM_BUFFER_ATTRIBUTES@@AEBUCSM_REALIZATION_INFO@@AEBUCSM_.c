/*
 * XREFs of ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1800CDB18
 * Callers:
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CDA10 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180256490 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ??0CSectionBitmapSubRectRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_NAEBUtagRECT@@@Z @ 0x180256D40 (--0CSectionBitmapSubRectRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@A.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18003DCB0 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        bool a5)
{
  CSectionBitmapRealization *result; // rax
  __int64 v8; // xmm1_8

  CBitmapRealization::CBitmapRealization((__int64)this, 0, (__int64)a2, a3, 0LL);
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CSectionBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 52) = &CSectionBitmapRealization::`vftable';
  *((_BYTE *)this + 424) = a5;
  result = this;
  *((_OWORD *)this + 27) = *(_OWORD *)a4;
  v8 = *((_QWORD *)a4 + 2);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 56) = v8;
  return result;
}
