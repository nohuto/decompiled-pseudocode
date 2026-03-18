/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00C66B4
 * Callers:
 *     EngHTBlt @ 0x1C00C0A94 (EngHTBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     HT_Get8BPPMaskPalette @ 0x1C0154F50 (HT_Get8BPPMaskPalette.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  ULONG ulPrimaryOrder; // r10d
  unsigned int v6; // r8d
  int v7; // ecx
  int v8; // r9d
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v12; // r12d
  const unsigned int *p_peRed; // rdi
  LONG v14; // r15d
  int v15; // edx
  int v16; // edx
  struct tagPALETTEENTRY *v17; // rax
  ULONG v18; // r8d
  __int64 i; // rdx
  char v20; // cl
  __int64 j; // rdx
  char v22; // cl
  __int64 k; // rdx
  char v24; // cl
  __int64 m; // rax
  _OWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF

  if ( (unsigned int)(a2 - 5) <= 2 )
  {
    ulPrimaryOrder = a3->ulPrimaryOrder;
    v6 = 31;
    if ( a2 != 5 )
      v6 = 255;
    v7 = 992;
    v8 = 31744;
    if ( a2 != 5 )
    {
      v7 = 65280;
      v8 = 16711680;
    }
    v9 = v7;
    if ( (ulPrimaryOrder & 1) == 0 )
    {
      v9 = v6;
      v6 = v7;
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      v10 = v6;
      v6 = v8;
    }
    else
    {
      v10 = v8;
      if ( (ulPrimaryOrder & 4) != 0 )
      {
        v10 = v9;
        v9 = v8;
      }
    }
    return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v10, v6, v9, 0x100200u, 1) != 0;
  }
  v12 = 0;
  if ( !a2 )
  {
    p_peRed = (const unsigned int *)&apalMono;
    v14 = 2;
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      p_peRed = (const unsigned int *)v26;
      *(_QWORD *)&v26[0] = 0xFFFFFFLL;
    }
    goto LABEL_16;
  }
  v15 = a2 - 2;
  if ( !v15 )
  {
LABEL_29:
    v18 = a3->ulPrimaryOrder;
    v14 = 8;
    p_peRed = (const unsigned int *)v26;
    v26[0] = *(_OWORD *)&apal3BPP;
    v26[1] = xmmword_1C03255C0;
    if ( (v18 & 1) != 0 )
    {
      for ( i = 1LL; i < 7; ++i )
      {
        v20 = *((_BYTE *)v26 + 4 * i + 1);
        *((_BYTE *)v26 + 4 * i + 1) = *((_BYTE *)v26 + 4 * i + 2);
        *((_BYTE *)v26 + 4 * i + 2) = v20;
      }
    }
    if ( (v18 & 2) != 0 )
    {
      for ( j = 1LL; j < 7; ++j )
      {
        v22 = *((_BYTE *)v26 + 4 * j);
        *((_BYTE *)v26 + 4 * j) = *((_BYTE *)v26 + 4 * j + 1);
        *((_BYTE *)v26 + 4 * j + 1) = v22;
      }
    }
    else if ( (v18 & 4) != 0 )
    {
      for ( k = 1LL; k < 7; ++k )
      {
        v24 = *((_BYTE *)v26 + 4 * k);
        *((_BYTE *)v26 + 4 * k) = *((_BYTE *)v26 + 4 * k + 2);
        *((_BYTE *)v26 + 4 * k + 2) = v24;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      for ( m = 0LL; m < 2; ++m )
        v26[m] = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v26[m]), (__m128i)_xmm);
    }
    goto LABEL_16;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v14 = HT_Get8BPPMaskPalette(
              0LL,
              a3->flHTFlags & 8,
              HIBYTE(a3->flHTFlags),
              a3->ciDevice.RedGamma,
              a3->ciDevice.GreenGamma,
              a3->ciDevice.BlueGamma);
      v17 = (struct tagPALETTEENTRY *)PALLOCMEM2((unsigned int)(4 * v14), 1818316871LL, 0);
      p_peRed = (const unsigned int *)&v17->peRed;
      if ( !v17 )
        return 0LL;
      if ( (a3->flHTFlags & 0x400) != 0 )
        *v17 = (struct tagPALETTEENTRY)809650002;
      else
        *v17 = 0;
      HT_Get8BPPMaskPalette(
        v17,
        a3->flHTFlags & 8,
        HIBYTE(a3->flHTFlags),
        a3->ciDevice.RedGamma,
        a3->ciDevice.GreenGamma,
        a3->ciDevice.BlueGamma);
      v12 = 1;
      goto LABEL_16;
    }
    goto LABEL_29;
  }
  v14 = 16;
  p_peRed = (const unsigned int *)&apalVGA;
LABEL_16:
  if ( PALMEMOBJ::bCreatePalette(this, 1u, v14, p_peRed, 0, 0, 0, 0x100400u, 1) )
  {
    if ( v12 )
      Win32FreePool(p_peRed);
    return 1LL;
  }
  if ( v12 )
    Win32FreePool(p_peRed);
  return 0LL;
}
