/*
 * XREFs of ??0CSectionBitmapSubRectRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_NAEBUtagRECT@@@Z @ 0x180256D40
 * Callers:
 *     ?CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAVCBitmapRealization@@@Z @ 0x180256DFC (-CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DX.c)
 * Callees:
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1800CDB18 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 */

CSectionBitmapSubRectRealization *__fastcall CSectionBitmapSubRectRealization::CSectionBitmapSubRectRealization(
        CSectionBitmapSubRectRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        bool a5,
        const struct tagRECT *a6)
{
  CSectionBitmapSubRectRealization *result; // rax

  CSectionBitmapRealization::CSectionBitmapRealization(this, a2, a3, a4, 0);
  *(_QWORD *)this = &CSectionBitmapSubRectRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSectionBitmapSubRectRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CSectionBitmapSubRectRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CSectionBitmapSubRectRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CSectionBitmapSubRectRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 52) = &CSectionBitmapSubRectRealization::`vftable';
  result = this;
  *(struct tagRECT *)((char *)this + 472) = *a6;
  return result;
}
