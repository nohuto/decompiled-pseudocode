/*
 * XREFs of ??0CD2DBitmapCacheSourceRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1800CB434
 * Callers:
 *     ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CB31C (-Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealizatio.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18003DCB0 (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 */

CD2DBitmapCacheSourceRealization *__fastcall CD2DBitmapCacheSourceRealization::CD2DBitmapCacheSourceRealization(
        CD2DBitmapCacheSourceRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  CBitmapRealization::CBitmapRealization((__int64)this, 0, (__int64)a2, a3, 0LL);
  *(_QWORD *)this = &CD2DBitmapCacheSourceRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CD2DBitmapCacheSourceRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IBitmapRealization'};
  return this;
}
