/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0018CD4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00F65E0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01034B0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C011E850 (NtGdiFONTOBJ_pifi.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C011FF2C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C012C030 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0264130 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0279920 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0279F30 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C027A5F0 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C027B210 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C027B3D0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C027B7C0 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C027BB60 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C027CCD8 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C0281F90 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C0282C80 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0284CD0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C0285130 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02857B0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0018844 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C011FFF8 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C01200D8 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  size_t v5; // rbx
  char *v6; // rdi
  __int64 v7; // rdx
  UMPDOBJ *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  char *KernelPtr; // rax
  __int64 ThreadWin32Thread; // rdi
  __int64 v15; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax

  if ( a2 + 7 < a2 )
    return 0LL;
  v5 = (a2 + 7) & 0xFFFFFFF8;
  v6 = 0LL;
  if ( *((_DWORD *)this + 106) )
  {
    if ( *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v11 = *((_QWORD *)this + 49);
      if ( v11 )
      {
        v12 = *(unsigned int *)(v11 + 56);
        if ( (int)v12 + (int)v5 >= (unsigned int)v12
          && (unsigned __int64)(unsigned int)(v12 + v5) <= *(_QWORD *)(v11 + 32) )
        {
          v6 = (char *)(v12 + *(_QWORD *)(v11 + 24) + *(_QWORD *)(v11 + 48));
          *(_DWORD *)(v11 + 56) = v12 + v5;
        }
      }
      goto LABEL_7;
    }
    if ( *((_DWORD *)this + 106) && !*((_QWORD *)this + 7) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v15 = *(_QWORD *)(ThreadWin32Thread + 56);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 24) = 0;
        *((_QWORD *)this + 7) = v15;
      }
      else
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
        *((_QWORD *)this + 7) = UMPDHeap;
        *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
      }
    }
  }
  v7 = *((_QWORD *)this + 7);
  if ( !v7 )
    return 0LL;
  if ( !*(_QWORD *)v7 )
    return 0LL;
  v8 = (UMPDOBJ *)(*(_QWORD *)(v7 + 16) - *(unsigned int *)(v7 + 24));
  if ( (unsigned int)v5 > (unsigned __int64)v8 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v8, (struct _UMPDHEAP *)v7, v5) )
    return 0LL;
  v9 = *((_QWORD *)this + 7);
  v6 = (char *)(*(_QWORD *)v9 + *(unsigned int *)(v9 + 24));
  *(_DWORD *)(v9 + 24) += v5;
LABEL_7:
  if ( v6 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(this, v6);
      memset(KernelPtr, 0, v5);
    }
  }
  return v6;
}
