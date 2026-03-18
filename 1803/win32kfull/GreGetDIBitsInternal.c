/*
 * XREFs of GreGetDIBitsInternal @ 0x1C00A60BC
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0017110 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00A57D0 (NtGdiGetDIBitsInternal.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0131160 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0286218 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00A6594 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  struct tagBITMAPINFO *v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int DIBitsInternalWorker; // esi
  unsigned __int8 *v13; // r12
  DC *v14; // rbx
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rax
  _DWORD *v20; // rbx
  unsigned int biSize; // r14d
  LONG v22; // r8d
  LONG v23; // r9d
  WORD v24; // dx
  DWORD v25; // eax
  __int64 v27; // rcx
  _DWORD *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rbx
  unsigned __int16 v31; // ax
  HDC v32; // [rsp+30h] [rbp-99h]
  HBITMAP v33; // [rsp+38h] [rbp-91h]
  int v34; // [rsp+78h] [rbp-51h] BYREF
  BOOL v35; // [rsp+7Ch] [rbp-4Dh]
  _DWORD *v36; // [rsp+80h] [rbp-49h] BYREF
  __int64 v37; // [rsp+88h] [rbp-41h] BYREF
  __int64 v38; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v39[8]; // [rsp+98h] [rbp-31h] BYREF
  __int64 *v40; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-21h]
  DC *v42; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-11h]
  __int64 v45; // [rsp+120h] [rbp+57h]

  v45 = a2;
  v9 = a6;
  if ( !a6 || (v10 = a7, a7 > 2) || (v11 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v43 = 0LL;
  DIBitsInternalWorker = 1;
  v35 = 1;
  v13 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
  LOBYTE(a2) = 1;
  v42 = (DC *)HmgLockEx(a1, a2);
  v14 = v42;
  if ( !v42 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
      goto LABEL_8;
    }
LABEL_12:
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    goto LABEL_13;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v42) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
    goto LABEL_12;
  }
  v14 = v42;
  if ( (*((_DWORD *)v42 + 132) & 4) != 0 )
    DC::vMarkTransformDirty(v42);
LABEL_8:
  if ( !v14 )
    goto LABEL_12;
  v15 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 40LL);
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v42);
  LODWORD(a6) = 0;
  v16 = *(_QWORD *)v42;
  HmgDecrementExclusiveReferenceCountEx(v42, HIDWORD(v43), &a6);
  v18 = v15 & 0x8000;
  v35 = v18 == 0;
  if ( (_DWORD)a6 )
    bDeleteDCInternalEx(v16, 0LL);
  if ( !v18 )
    goto LABEL_12;
LABEL_13:
  LOBYTE(v17) = 5;
  v19 = HmgShareLockCheck(v45, v17);
  v36 = (_DWORD *)v19;
  v20 = (_DWORD *)v19;
  if ( !v19 )
    goto LABEL_53;
  biSize = v9->bmiHeader.biSize;
  if ( v13 )
  {
LABEL_28:
    if ( biSize >= 0x28 && v9->bmiHeader.biCompression - 4 <= 1 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      v40 = 0LL;
      v41 = 0LL;
      XDCOBJ::vLock((XDCOBJ *)&v40, a1);
      if ( v40 )
      {
        v27 = v40[12];
        v38 = v40[6];
        v37 = v27;
        if ( (*(_DWORD *)(v38 + 40) & 0x8000) != 0 )
        {
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   (struct DCOBJ *)&v40,
                                   (struct PDEVOBJ *)&v38,
                                   (struct SURFREF *)&v36,
                                   (struct XEPALOBJ *)&v37,
                                   v32,
                                   v33,
                                   a3,
                                   a4,
                                   v13,
                                   v9,
                                   v10,
                                   a8,
                                   v11);
        }
        else
        {
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v39, (struct XDCOBJ *)&v40);
          v28 = v20 + 6;
          v29 = 0LL;
          if ( v28
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x200) == 0 )
          {
            v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v28);
            GreLockDisplayDevice(*(_QWORD *)(v29 + 48));
          }
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   (struct DCOBJ *)&v40,
                                   (struct PDEVOBJ *)&v38,
                                   (struct SURFREF *)&v36,
                                   (struct XEPALOBJ *)&v37,
                                   v32,
                                   v33,
                                   a3,
                                   a4,
                                   v13,
                                   v9,
                                   v10,
                                   a8,
                                   v11);
          if ( v29 )
            GreUnlockDisplayDevice(*(_QWORD *)(v29 + 48));
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v39);
        }
        if ( v40 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v40);
          v34 = 0;
          v30 = *v40;
          HmgDecrementExclusiveReferenceCountEx(v40, HIDWORD(v41), &v34);
          if ( v34 )
            bDeleteDCInternalEx(v30, 0LL);
        }
        v20 = v36;
        goto LABEL_23;
      }
    }
    goto LABEL_53;
  }
  if ( biSize == 12 )
  {
    if ( !HIWORD(v9->bmiHeader.biHeight) )
    {
      LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v19 + 56);
      HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v19 + 60);
      LOWORD(v9->bmiHeader.biHeight) = 1;
      v31 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v19 + 96));
      HIWORD(v9->bmiHeader.biHeight) = v31;
      if ( v31 >= 0x10u )
        HIWORD(v9->bmiHeader.biHeight) = 24;
      goto LABEL_23;
    }
    goto LABEL_28;
  }
  if ( v11 >= 0x28 )
  {
    if ( !v9->bmiHeader.biBitCount )
    {
      if ( biSize > 0x28 )
        memset(v9, 0, v9->bmiHeader.biSize);
      v9->bmiHeader.biSize = 40;
      v22 = v20[14];
      v9->bmiHeader.biWidth = v22;
      v23 = v20[15];
      v9->bmiHeader.biHeight = v23;
      v9->bmiHeader.biPlanes = 1;
      v9->bmiHeader.biCompression = 0;
      v24 = *((_WORD *)&galBitsPerPixel + 2 * (unsigned int)v20[24]);
      v9->bmiHeader.biBitCount = v24;
      if ( v24 == 32 || v24 == 16 )
        v9->bmiHeader.biCompression = 3;
      *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
      v9->bmiHeader.biSizeImage = v23 * (((v22 * v24 + 31) >> 3) & 0xFFFFFFFC);
      v25 = *((_DWORD *)&gacPalEntries + (unsigned int)v20[24]);
      v9->bmiHeader.biClrImportant = v25;
      v9->bmiHeader.biClrUsed = v25;
      goto LABEL_23;
    }
    goto LABEL_28;
  }
LABEL_53:
  DIBitsInternalWorker = 0;
LABEL_23:
  if ( v20 )
    DEC_SHARE_REF_CNT(v20);
  if ( v35 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
