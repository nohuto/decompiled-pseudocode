/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C006C6BC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(XEPALOBJ *this)
{
  __int64 v1; // rdx
  struct OBJECT *v3; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(struct OBJECT **)(*(_QWORD *)this + 120LL);
  if ( v3 != (struct OBJECT *)v1 )
  {
    HmgDecrementShareReferenceCountEx(v3, 0LL);
    v1 = *(_QWORD *)this;
  }
  *(_QWORD *)(v1 + 112) = *(_QWORD *)(v1 + 128);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = *(_QWORD *)this;
}
