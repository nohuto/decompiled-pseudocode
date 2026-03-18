/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC
 * Callers:
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C004FDF4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C0050D40 (NtGdiFONTOBJ_pifi.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00785F0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C011CB60 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C0122330 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C028DD90 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02A2DC0 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A33B0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C02A3A00 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A4610 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02A47D0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02A4B90 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02A4F40 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A60B0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AA824 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02AB570 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02AD3A0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AD4E0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AD950 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AE020 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C010F830 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C013C938 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  size_t v6; // rbx
  char *v7; // rdi
  __int64 v8; // rdx
  UMPDOBJ *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int v14; // edx
  char *KernelPtr; // rax
  __int64 ThreadWin32Thread; // rdi
  __int64 v17; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax

  v4 = a3;
  if ( (int)a2 + 7 < (unsigned int)a2 )
    return 0LL;
  v6 = ((_DWORD)a2 + 7) & 0xFFFFFFF8;
  v7 = 0LL;
  if ( *((_DWORD *)this + 106) && *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    v12 = *((_QWORD *)this + 49);
    if ( v12 )
    {
      v13 = *(unsigned int *)(v12 + 56);
      v14 = v13 + v6;
      if ( (int)v13 + (int)v6 >= (unsigned int)v13 && (unsigned __int64)v14 <= *(_QWORD *)(v12 + 32) )
      {
        v7 = (char *)(v13 + *(_QWORD *)(v12 + 24) + *(_QWORD *)(v12 + 48));
        *(_DWORD *)(v12 + 56) = v14;
      }
    }
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 106) && !*((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v17 = *(_QWORD *)(ThreadWin32Thread + 56);
    if ( v17 )
    {
      *(_DWORD *)(v17 + 24) = 0;
      *((_QWORD *)this + 7) = v17;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
      *((_QWORD *)this + 7) = UMPDHeap;
      *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
    }
  }
  v8 = *((_QWORD *)this + 7);
  if ( !v8 )
    return 0LL;
  if ( !*(_QWORD *)v8 )
    return 0LL;
  v9 = (UMPDOBJ *)(*(_QWORD *)(v8 + 16) - *(unsigned int *)(v8 + 24));
  if ( (unsigned int)v6 > (unsigned __int64)v9 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v9, (struct _UMPDHEAP *)v8, v6) )
    return 0LL;
  v10 = *((_QWORD *)this + 7);
  v7 = (char *)(*(_QWORD *)v10 + *(unsigned int *)(v10 + 24));
  *(_DWORD *)(v10 + 24) += v6;
LABEL_8:
  if ( v7 )
  {
    if ( v4 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(this, v7);
      memset(KernelPtr, 0, v6);
    }
  }
  return v7;
}
