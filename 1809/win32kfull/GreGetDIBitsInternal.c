/*
 * XREFs of GreGetDIBitsInternal @ 0x1C0054DA4
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C00542A0 (NtGdiGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00E4C80 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01553AC (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0299C58 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0046908 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0055198 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C025133C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C0261AC0 (--1NEEDDDILOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  struct tagBITMAPINFO *v9; // rdi
  unsigned int DIBitsInternalWorker; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  BOOL v14; // esi
  unsigned __int8 *v15; // r12
  __int64 v16; // rsi
  unsigned int biSize; // r14d
  unsigned __int16 v18; // ax
  LONG v19; // r8d
  LONG v20; // r9d
  WORD v21; // dx
  DWORD v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rsi
  HDC v26; // [rsp+30h] [rbp-D8h]
  HBITMAP v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v31[8]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v32[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-50h]
  DC *v34[6]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v35[13]; // [rsp+F0h] [rbp-18h] BYREF

  v9 = a6;
  DIBitsInternalWorker = 0;
  if ( a6 )
  {
    v12 = a7;
    if ( a7 <= 2 )
    {
      v13 = a9;
      if ( a9 >= 0xC )
      {
        v14 = 1;
        v15 = (unsigned __int8 *)(a5 & -(__int64)(a4 != 0));
        DCOBJ::DCOBJ((DCOBJ *)v35, a1);
        if ( v35[0] )
          v14 = (*(_DWORD *)(*(_QWORD *)(v35[0] + 48LL) + 40LL) & 0x8000) == 0;
        DCOBJ::~DCOBJ((DCOBJ *)v35);
        LODWORD(a6) = v14;
        if ( v14 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        }
        SURFREF::SURFREF((SURFREF *)v32, a2);
        v16 = v33;
        if ( !v33 )
          goto LABEL_37;
        biSize = v9->bmiHeader.biSize;
        if ( !v15 )
        {
          if ( biSize == 12 )
          {
            if ( !HIWORD(v9->bmiHeader.biHeight) )
            {
              LOWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v33 + 56);
              HIWORD(v9->bmiHeader.biWidth) = *(_WORD *)(v16 + 60);
              LOWORD(v9->bmiHeader.biHeight) = 1;
              v18 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v16 + 96));
              HIWORD(v9->bmiHeader.biHeight) = v18;
              if ( v18 >= 0x10u )
                HIWORD(v9->bmiHeader.biHeight) = 24;
LABEL_22:
              DIBitsInternalWorker = 1;
              goto LABEL_37;
            }
          }
          else
          {
            if ( v13 < 0x28 )
            {
LABEL_37:
              SURFREF::~SURFREF((SURFREF *)v32);
              NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&a6);
              return DIBitsInternalWorker;
            }
            if ( !v9->bmiHeader.biBitCount )
            {
              if ( biSize > 0x28 )
                memset(v9, 0, v9->bmiHeader.biSize);
              v9->bmiHeader.biSize = 40;
              v19 = *(_DWORD *)(v16 + 56);
              v9->bmiHeader.biWidth = v19;
              v20 = *(_DWORD *)(v16 + 60);
              v9->bmiHeader.biHeight = v20;
              v9->bmiHeader.biPlanes = 1;
              v9->bmiHeader.biCompression = 0;
              v21 = *((_WORD *)&galBitsPerPixel + 2 * *(unsigned int *)(v16 + 96));
              v9->bmiHeader.biBitCount = v21;
              if ( v21 == 16 || v21 == 32 )
                v9->bmiHeader.biCompression = 3;
              *(_QWORD *)&v9->bmiHeader.biXPelsPerMeter = 0LL;
              v9->bmiHeader.biSizeImage = v20 * (((v19 * v21 + 31) >> 3) & 0xFFFFFFFC);
              v22 = *((_DWORD *)&gacPalEntries + *(unsigned int *)(v16 + 96));
              v9->bmiHeader.biClrImportant = v22;
              v9->bmiHeader.biClrUsed = v22;
              goto LABEL_22;
            }
          }
        }
        if ( biSize < 0x28 || v9->bmiHeader.biCompression - 4 > 1 )
        {
          DCOBJ::DCOBJ((DCOBJ *)v34, a1);
          if ( v34[0] )
          {
            v23 = *((_QWORD *)v34[0] + 11);
            v30 = *((_QWORD *)v34[0] + 6);
            v29 = v23;
            if ( (*(_DWORD *)(v30 + 40) & 0x8000) != 0 )
            {
              DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                       biSize,
                                       v34,
                                       (struct PDEVOBJ *)&v30,
                                       (struct SURFREF *)v32,
                                       (struct XEPALOBJ *)&v29,
                                       v26,
                                       v27,
                                       a3,
                                       a4,
                                       v15,
                                       v9,
                                       v12,
                                       a8,
                                       v13);
            }
            else
            {
              NEEDGRELOCK::vLock((NEEDGRELOCK *)v31, (struct XDCOBJ *)v34);
              v28 = 0LL;
              if ( v33 )
              {
                v24 = v33 + 24;
                if ( v33 != -24
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 112) & 0x200) == 0 )
                {
                  v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v24);
                  GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
                }
              }
              DIBitsInternalWorker = GreGetDIBitsInternalWorker(
                                       biSize,
                                       v34,
                                       (struct PDEVOBJ *)&v30,
                                       (struct SURFREF *)v32,
                                       (struct XEPALOBJ *)&v29,
                                       v26,
                                       v27,
                                       a3,
                                       a4,
                                       v15,
                                       v9,
                                       v12,
                                       a8,
                                       v13);
              NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v28);
              NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v31);
            }
          }
          DCOBJ::~DCOBJ((DCOBJ *)v34);
        }
        else
        {
          EngSetLastError(0x57u);
        }
        goto LABEL_37;
      }
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
