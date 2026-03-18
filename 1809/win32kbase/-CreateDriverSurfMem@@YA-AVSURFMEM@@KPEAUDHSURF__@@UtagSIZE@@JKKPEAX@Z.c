/*
 * XREFs of ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00ABEDC
 * Callers:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0086BD4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     EngCreateLockedBitmap @ 0x1C00AC0E0 (EngCreateLockedBitmap.c)
 *     EngCreateLockedDeviceBitmap @ 0x1C00AC150 (EngCreateLockedDeviceBitmap.c)
 *     EngCreateLockedRedirectionDeviceBitmap @ 0x1C00AC1C0 (EngCreateLockedRedirectionDeviceBitmap.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall CreateDriverSurfMem(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        void *a8)
{
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // eax
  char v18; // al
  __int64 v19; // [rsp+68h] [rbp-19h] BYREF
  char v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+74h] [rbp-Dh]
  _QWORD v22[4]; // [rsp+78h] [rbp-9h] BYREF
  int v23; // [rsp+E4h] [rbp+63h]

  v23 = HIDWORD(a4);
  if ( (a4 & 0x80000000) != 0LL )
    goto LABEL_22;
  v12 = HIDWORD(a4);
  if ( (a4 & 0x8000000000000000uLL) != 0LL )
    goto LABEL_22;
  memset(v22, 0, sizeof(v22));
  LODWORD(v22[0]) = a6 & 0xFFFF7FFF;
  HIDWORD(v22[0]) = a4;
  LODWORD(v22[1]) = v12;
  v22[2] = 0LL;
  LODWORD(v22[3]) = a7;
  if ( !a8 )
    goto LABEL_13;
  v13 = a5;
  if ( !a5 )
    goto LABEL_13;
  switch ( a6 & 0xFFFF7FFF )
  {
    case 1u:
      v15 = 8LL * a5;
LABEL_19:
      v16 = -1;
      if ( v15 <= 0xFFFFFFFF )
        v16 = v15;
      HIDWORD(v22[0]) = v16;
      if ( v15 <= 0xFFFFFFFF )
        break;
LABEL_22:
      *(_QWORD *)a1 = 0LL;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    case 2u:
      v15 = 2LL * a5;
      goto LABEL_19;
    case 3u:
LABEL_12:
      HIDWORD(v22[0]) = v13;
      break;
    case 4u:
LABEL_17:
      v13 >>= 1;
      goto LABEL_12;
    case 5u:
      v13 = (2863311531u * (unsigned __int64)a5) >> 32;
      goto LABEL_17;
    case 6u:
      v13 = a5 >> 2;
      goto LABEL_12;
  }
LABEL_13:
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v19,
    (struct _DEVBITMAPINFO *)v22,
    a8,
    0LL,
    0,
    0LL,
    0LL,
    (a6 & 0x8000) == 0,
    a8 == 0LL,
    0,
    0);
  v14 = v19;
  if ( v19 )
  {
    if ( a2 == 3 )
      *(_DWORD *)(v19 + 112) |= 0x400000u;
    if ( a2 )
    {
      *(_DWORD *)(v14 + 88) = 0;
      *(_QWORD *)(v14 + 80) = 0LL;
      *(_QWORD *)(v14 + 72) = 0LL;
    }
    *(_DWORD *)(v14 + 112) |= 0x200000u;
    if ( (int)a4 <= *(_DWORD *)(v14 + 56) && v23 <= *(_DWORD *)(v14 + 60) )
      *(_QWORD *)(v14 + 56) = a4;
    v18 = v20 | 1;
    *(_QWORD *)(v14 + 24) = a3;
    *(_WORD *)(v14 + 100) = a2;
    if ( (a6 & 0x8000) != 0 )
      *(_DWORD *)(v14 + 112) |= 0x40000u;
    *(_BYTE *)(a1 + 8) = v18;
    *(_DWORD *)(a1 + 12) = v21;
    v21 = 0;
    *(_QWORD *)a1 = v14;
    v19 = 0LL;
    v20 = 0;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v19);
  return a1;
}
