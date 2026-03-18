/*
 * XREFs of GreGetDIBitsInternal @ 0x1C00BE2FC
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00266F0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00BD390 (NtGdiGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015D5C8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AE65C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00BCB48 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
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
  __int64 v10; // r13
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int DIBitsInternalWorker; // esi
  DC *v14; // r9
  struct _DC_ATTR *UserAttr; // rax
  int v16; // r14d
  struct _DC_ATTR *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int8 *v22; // r13
  unsigned int biSize; // r14d
  LONG v24; // r8d
  LONG v25; // r9d
  WORD v26; // dx
  DWORD v27; // eax
  __int64 v29; // rcx
  DC *v30; // r9
  struct _DC_ATTR *v31; // rax
  __int64 v32; // rbx
  unsigned __int16 v33; // ax
  HDC v34; // [rsp+30h] [rbp-A1h]
  HBITMAP v35; // [rsp+38h] [rbp-99h]
  DC *v36; // [rsp+78h] [rbp-59h] BYREF
  __int64 v37; // [rsp+80h] [rbp-51h]
  DC *v38; // [rsp+88h] [rbp-49h] BYREF
  __int64 v39; // [rsp+90h] [rbp-41h]
  int v40; // [rsp+98h] [rbp-39h] BYREF
  BOOL v41; // [rsp+9Ch] [rbp-35h]
  __int64 v42; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int8 *v45; // [rsp+B8h] [rbp-19h]
  __int64 v46; // [rsp+C0h] [rbp-11h] BYREF
  _BYTE v47[64]; // [rsp+C8h] [rbp-9h] BYREF

  v9 = a6;
  v10 = a2;
  if ( !a6 || (v11 = a7, a7 > 2) || (v12 = a9, a9 < 0xC) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v37 = 0LL;
  DIBitsInternalWorker = 1;
  v41 = 1;
  LOBYTE(a2) = 1;
  v45 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
  v36 = (DC *)HmgLockEx(a1, a2, 0LL);
  v14 = v36;
  if ( !v36 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_39;
  }
  if ( (*((_DWORD *)v36 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v36);
    if ( UserAttr && !DC::SaveAttributes(v36, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
      v36 = 0LL;
LABEL_21:
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      goto LABEL_22;
    }
    *((_DWORD *)v36 + 11) |= 2u;
    v14 = v36;
    LODWORD(v37) = 1;
  }
  if ( (*((_DWORD *)v14 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v14);
LABEL_39:
    v14 = v36;
  }
  if ( !v14 )
    goto LABEL_21;
  v16 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 40LL) & 0x8000;
  v41 = v16 == 0;
  if ( (_DWORD)v37 && (*((_DWORD *)v14 + 11) & 2) != 0 )
  {
    if ( !HIDWORD(v37) )
    {
      v17 = XDCOBJ::GetUserAttr((XDCOBJ *)&v36);
      if ( v17 )
        DC::RestoreAttributes(v36, v17);
      v14 = v36;
    }
    *((_DWORD *)v14 + 11) &= ~2u;
    v14 = v36;
    LODWORD(v37) = 0;
  }
  LODWORD(a6) = 0;
  v18 = *(_QWORD *)v14;
  HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v37), &a6);
  if ( (_DWORD)a6 )
    bDeleteDCInternalEx(v18, 0LL);
  if ( !v16 )
    goto LABEL_21;
LABEL_22:
  LOBYTE(v19) = 5;
  v20 = HmgShareLockCheck(v10, v19);
  v42 = v20;
  v21 = v20;
  if ( !v20 )
    goto LABEL_67;
  v22 = v45;
  biSize = v9->bmiHeader.biSize;
  if ( v45 )
  {
LABEL_40:
    if ( biSize >= 0x28 && v9->bmiHeader.biCompression - 4 <= 1 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      v38 = 0LL;
      v39 = 0LL;
      XDCOBJ::vLock((XDCOBJ *)&v38, a1);
      if ( v38 )
      {
        v29 = *((_QWORD *)v38 + 11);
        v44 = *((_QWORD *)v38 + 6);
        v43 = v29;
        if ( (*(_DWORD *)(v44 + 40) & 0x8000) != 0 )
        {
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   &v38,
                                   (struct PDEVOBJ *)&v44,
                                   (struct SURFREF *)&v42,
                                   (struct XEPALOBJ *)&v43,
                                   v34,
                                   v35,
                                   a3,
                                   a4,
                                   v22,
                                   v9,
                                   v11,
                                   a8,
                                   v12);
        }
        else
        {
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v47, (struct XDCOBJ *)&v38);
          NEEDDDILOCK::vLock((NEEDDDILOCK *)&v46, (struct _SURFOBJ *)(v21 + 24));
          DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                   biSize,
                                   &v38,
                                   (struct PDEVOBJ *)&v44,
                                   (struct SURFREF *)&v42,
                                   (struct XEPALOBJ *)&v43,
                                   v34,
                                   v35,
                                   a3,
                                   a4,
                                   v22,
                                   v9,
                                   v11,
                                   a8,
                                   v12);
          if ( v46 )
            GreUnlockDisplayDevice(*(_QWORD *)(v46 + 48));
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v47);
        }
        v30 = v38;
        if ( v38 )
        {
          if ( (_DWORD)v39 && (*((_DWORD *)v38 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v39) )
            {
              v31 = XDCOBJ::GetUserAttr((XDCOBJ *)&v38);
              if ( v31 )
                DC::RestoreAttributes(v38, v31);
              v30 = v38;
            }
            *((_DWORD *)v30 + 11) &= ~2u;
            v30 = v38;
            LODWORD(v39) = 0;
          }
          v40 = 0;
          v32 = *(_QWORD *)v30;
          HmgDecrementExclusiveReferenceCountEx(v30, HIDWORD(v39), &v40);
          if ( v40 )
            bDeleteDCInternalEx(v32, 0LL);
        }
        v21 = v42;
        goto LABEL_32;
      }
    }
    goto LABEL_67;
  }
  if ( biSize == 12 )
  {
    if ( !HIWORD(v9->bmiHeader.biHeight) )
    {
      LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v20 + 56);
      HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v20 + 60);
      LOWORD(v9->bmiHeader.biHeight) = 1;
      v33 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v20 + 96));
      HIWORD(v9->bmiHeader.biHeight) = v33;
      if ( v33 >= 0x10u )
        HIWORD(v9->bmiHeader.biHeight) = 24;
      goto LABEL_32;
    }
    goto LABEL_40;
  }
  if ( v12 >= 0x28 )
  {
    if ( !v9->bmiHeader.biBitCount )
    {
      if ( biSize > 0x28 )
        memset(v9, 0, v9->bmiHeader.biSize);
      v9->bmiHeader.biSize = 40;
      v24 = *(_DWORD *)(v21 + 56);
      v9->bmiHeader.biWidth = v24;
      v25 = *(_DWORD *)(v21 + 60);
      v9->bmiHeader.biCompression = 0;
      v9->bmiHeader.biHeight = v25;
      v9->bmiHeader.biPlanes = 1;
      v26 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v21 + 96));
      v9->bmiHeader.biBitCount = v26;
      if ( v26 == 32 || v26 == 16 )
        v9->bmiHeader.biCompression = 3;
      *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
      v9->bmiHeader.biSizeImage = v25 * (((v24 * v26 + 31) >> 3) & 0xFFFFFFFC);
      v27 = *((_DWORD *)&gacPalEntries + *(unsigned int *)(v21 + 96));
      v9->bmiHeader.biClrImportant = v27;
      v9->bmiHeader.biClrUsed = v27;
      goto LABEL_32;
    }
    goto LABEL_40;
  }
LABEL_67:
  DIBitsInternalWorker = 0;
LABEL_32:
  if ( v21 )
    DEC_SHARE_REF_CNT(v21);
  if ( v41 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return DIBitsInternalWorker;
}
