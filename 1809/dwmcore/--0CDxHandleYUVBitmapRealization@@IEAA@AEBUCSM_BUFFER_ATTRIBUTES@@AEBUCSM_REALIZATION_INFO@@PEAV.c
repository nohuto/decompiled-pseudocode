/*
 * XREFs of ??0CDxHandleYUVBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802286D0
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228918 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228A00 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18009B044 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18009B088 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct CDecodeBitmap *a4)
{
  CDisplaySet *v6; // rcx
  int v7; // ecx
  CDxHandleYUVBitmapRealization *result; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  CBitmapRealization::CBitmapRealization((__int64)this, 0, (__int64)a2, a3, (__int64)a4);
  *((_QWORD *)this + 53) = 0LL;
  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSectionBitmapSubRectRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 52) = &CDxHandleYUVBitmapRealization::`vftable';
  *((_DWORD *)this + 108) = 0;
  v7 = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(
                    v6,
                    (struct DisplayId *)&v9,
                    *((_DWORD *)a2 + 29) & 1,
                    *((HMONITOR *)a2 + 1));
  result = this;
  *((_DWORD *)this + 108) = v7;
  return result;
}
