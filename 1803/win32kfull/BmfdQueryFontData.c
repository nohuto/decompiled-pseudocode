/*
 * XREFs of BmfdQueryFontData @ 0x1C0224E6C
 * Callers:
 *     BmfdQueryFontDataTE @ 0x1C0224AF0 (BmfdQueryFontDataTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     vBmfdMarkFontGone @ 0x1C0224C00 (vBmfdMarkFontGone.c)
 *     bReconnectBmfdFont @ 0x1C0225320 (bReconnectBmfdFont.c)
 *     cjBmfdDeviceMetrics @ 0x1C02253AC (cjBmfdDeviceMetrics.c)
 *     vBmfdScrubGLYPHBITS @ 0x1C0225698 (vBmfdScrubGLYPHBITS.c)
 *     vFill_RotateGLYPHDATA @ 0x1C02256EC (vFill_RotateGLYPHDATA.c)
 *     pjRawBitmap @ 0x1C02266E8 (pjRawBitmap.c)
 *     BmfdOpenFontContext @ 0x1C0227158 (BmfdOpenFontContext.c)
 *     cjGlyphDataSimulated @ 0x1C02278E4 (cjGlyphDataSimulated.c)
 *     vComputeSimulatedGLYPHDATA @ 0x1C022796C (vComputeSimulatedGLYPHDATA.c)
 *     vCvtToBmp @ 0x1C0227A8C (vCvtToBmp.c)
 *     vCvtToBoldBmp @ 0x1C0227B2C (vCvtToBoldBmp.c)
 *     vCvtToBoldItalicBmp @ 0x1C0227C04 (vCvtToBoldItalicBmp.c)
 *     vCvtToItalicBmp @ 0x1C0227D8C (vCvtToItalicBmp.c)
 *     vStretchCvtToBitmap @ 0x1C0227FE4 (vStretchCvtToBitmap.c)
 */

__int64 __fastcall BmfdQueryFontData(__int64 a1, int a2, unsigned int a3, __int64 a4, _DWORD *pv, size_t Size)
{
  _DWORD *v10; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r13
  __int16 v17; // si
  unsigned int v18; // r15d
  int v19; // edx
  int v20; // r9d
  int v21; // r10d
  ULONG v22; // r11d
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  __int64 v26; // r9
  void *v27; // rsi
  ULONG v28; // [rsp+50h] [rbp-188h]
  __int64 v29; // [rsp+58h] [rbp-180h]
  unsigned int v30; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-174h]
  __int64 v32; // [rsp+68h] [rbp-170h]
  PVOID v33; // [rsp+70h] [rbp-168h]
  void *v34; // [rsp+78h] [rbp-160h]
  __int64 v35; // [rsp+80h] [rbp-158h]
  _BYTE v36[256]; // [rsp+90h] [rbp-148h] BYREF

  v31 = a3;
  v35 = a4;
  v10 = pv;
  v33 = pv;
  v28 = 0;
  v34 = 0LL;
  if ( !(unsigned int)bReconnectBmfdFont(*(_QWORD *)(a1 + 24)) )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 56);
  v32 = v12;
  if ( !v12 )
  {
    v13 = BmfdOpenFontContext(a1);
    *(_QWORD *)(a1 + 56) = v13;
    v12 = v13;
    v32 = v13;
    if ( !v13 )
      return 0xFFFFFFFFLL;
  }
  v14 = a2 - 1;
  if ( v14 )
  {
    if ( v14 == 2 )
    {
      if ( pv )
        return cjBmfdDeviceMetrics(v12, pv);
      else
        return 124LL;
    }
    return 0xFFFFFFFFLL;
  }
  v15 = *(_QWORD *)(v12 + 24);
  v16 = v15 + 36;
  v17 = *(_WORD *)(*(_QWORD *)(v15 + 80) + 60LL);
  v29 = pjRawBitmap(a3, v15 + 36, v15, &v30);
  v18 = v30;
  v22 = cjGlyphDataSimulated(
          a1,
          v30 * *(_DWORD *)(v12 + 36),
          *(_DWORD *)(v12 + 40) * (unsigned int)*(unsigned __int16 *)(v16 + 8),
          0,
          0);
  v23 = *(_DWORD *)(v12 + 16);
  switch ( v23 )
  {
    case 0:
      goto LABEL_15;
    case 900:
LABEL_14:
      v28 = cjGlyphDataSimulated(
              a1,
              v18 * *(_DWORD *)(v12 + 36),
              *(_DWORD *)(v12 + 40) * (unsigned int)*(unsigned __int16 *)(v16 + 8),
              v20,
              v23);
      v23 = *(_DWORD *)(v12 + 16);
      break;
    case 1800:
LABEL_15:
      v28 = v22;
      break;
    case 2700:
      goto LABEL_14;
  }
  if ( v23 && pv )
  {
    v34 = pv;
    v10 = EngAllocMem(0, v22, 0x64666D42u);
    v33 = v10;
    if ( !v10 )
      return 0xFFFFFFFFLL;
    v21 = v29;
  }
  if ( a4 )
  {
    vComputeSimulatedGLYPHDATA(
      a4,
      v21,
      v18,
      *(unsigned __int16 *)(v16 + 8),
      v17,
      *(_DWORD *)(v12 + 36),
      *(_DWORD *)(v12 + 40),
      a1);
    *(_DWORD *)(a4 + 8) = v31;
  }
  if ( v10 )
  {
    if ( v18 )
    {
      v24 = *(_DWORD *)(v12 + 52);
      if ( (v24 & 1) != 0 )
      {
        if ( (v24 & 2) != 0 )
        {
          EngAcquireSemaphore(ghsemBMFD);
          vStretchCvtToBitmap(
            v10,
            v29,
            v18,
            *(unsigned __int16 *)(v16 + 8),
            v17,
            v12 + 56,
            *(_DWORD *)(v12 + 36),
            *(_DWORD *)(v12 + 40),
            *(_DWORD *)(a1 + 12) & 0x6000);
          EngReleaseSemaphore(ghsemBMFD);
        }
        else
        {
          vStretchCvtToBitmap(
            v10,
            v29,
            v18,
            *(unsigned __int16 *)(v16 + 8),
            v17,
            v36,
            *(_DWORD *)(v12 + 36),
            *(_DWORD *)(v12 + 40),
            *(_DWORD *)(a1 + 12) & 0x6000);
        }
      }
      else
      {
        v25 = *(_DWORD *)(a1 + 12) & 0x6000;
        if ( v25 )
        {
          switch ( v25 )
          {
            case 8192:
              vCvtToBoldBmp((_DWORD)v10, v19, v29, v18, *(unsigned __int16 *)(v16 + 8), v17);
              break;
            case 16384:
              vCvtToItalicBmp((_DWORD)v10, v19, v29, v18, *(unsigned __int16 *)(v16 + 8), v17);
              break;
            case 24576:
              vCvtToBoldItalicBmp((_DWORD)v10, v19, v29, v18, *(unsigned __int16 *)(v16 + 8), v17);
              break;
          }
        }
        else
        {
          vCvtToBmp((_DWORD)v10, v19, v29, v18, *(unsigned __int16 *)(v16 + 8), v17);
        }
      }
    }
    else
    {
      *v10 = 0;
      v10[1] = -v17;
      v10[2] = 1;
      v10[3] = 1;
      v10[4] = 0;
    }
    if ( a4 )
      *(_QWORD *)a4 = v10;
    vBmfdScrubGLYPHBITS(v10);
  }
  v26 = *(unsigned int *)(v12 + 16);
  if ( (_DWORD)v26 )
  {
    v27 = v34;
    if ( v34 )
    {
      memset(v34, 0, (unsigned int)Size);
      v26 = *(unsigned int *)(v12 + 16);
    }
    vFill_RotateGLYPHDATA(a4, v10, v27, v26);
    if ( v10 )
      EngFreeMem(v10);
  }
  return v28;
}
