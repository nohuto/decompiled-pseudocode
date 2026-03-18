/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0069C68
 * Callers:
 *     EngCreateDeviceSurface @ 0x1C0069B90 (EngCreateDeviceSurface.c)
 *     EngCreateBitmap @ 0x1C0069BF0 (EngCreateBitmap.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1C0069C30 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateDeviceBitmap @ 0x1C00D91A0 (EngCreateDeviceBitmap.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  LONG v12; // r14d
  __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+68h] [rbp-11h] BYREF
  char v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+74h] [rbp-5h]
  _QWORD v20[4]; // [rsp+78h] [rbp-1h] BYREF
  LONG cy; // [rsp+DCh] [rbp+63h]

  cy = a3.cy;
  v7 = 0LL;
  v8 = a4;
  if ( a3.cx < 0 )
    return 0LL;
  v12 = a3.cy;
  if ( a3.cy < 0 )
    return 0LL;
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[0]) = a5 & 0xFFFF7FFF;
  HIDWORD(v20[0]) = a3.cx;
  LODWORD(v20[1]) = v12;
  v20[2] = 0LL;
  LODWORD(v20[3]) = a6;
  if ( !a7 || !(_DWORD)v8 )
    goto LABEL_13;
  switch ( a5 & 0xFFFF7FFF )
  {
    case 1u:
      v15 = 8 * v8;
LABEL_28:
      v16 = -1;
      if ( v15 <= 0xFFFFFFFF )
        v16 = v15;
      HIDWORD(v20[0]) = v16;
      if ( v15 <= 0xFFFFFFFF )
        break;
      return 0LL;
    case 2u:
      v15 = 2 * v8;
      goto LABEL_28;
    case 3u:
LABEL_12:
      HIDWORD(v20[0]) = v8;
      break;
    case 4u:
      LODWORD(v8) = (unsigned int)v8 >> 1;
      goto LABEL_12;
    case 5u:
      HIDWORD(v20[0]) = (unsigned int)v8 / 3;
      break;
    case 6u:
      LODWORD(v8) = (unsigned int)v8 >> 2;
      goto LABEL_12;
  }
LABEL_13:
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v17,
    (struct _DEVBITMAPINFO *)v20,
    a7,
    0LL,
    0,
    0LL,
    0LL,
    (a5 & 0x8000) == 0,
    a7 == 0LL,
    0,
    0);
  v13 = v17;
  if ( v17 )
  {
    if ( a1 == 3 )
      *(_DWORD *)(v17 + 112) |= 0x400000u;
    if ( a1 )
    {
      *(_DWORD *)(v13 + 88) = 0;
      *(_QWORD *)(v13 + 80) = 0LL;
      *(_QWORD *)(v13 + 72) = 0LL;
    }
    *(_DWORD *)(v13 + 112) |= 0x200000u;
    if ( a3.cx <= *(_DWORD *)(v13 + 56) && cy <= *(_DWORD *)(v13 + 60) )
      *(struct tagSIZE *)(v13 + 56) = a3;
    v18 |= 1u;
    *(_QWORD *)(v13 + 24) = a2;
    *(_WORD *)(v13 + 100) = a1;
    if ( (a5 & 0x8000) != 0 )
      *(_DWORD *)(v13 + 112) |= 0x40000u;
    v7 = *(_QWORD *)(v13 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v17);
  return v7;
}
