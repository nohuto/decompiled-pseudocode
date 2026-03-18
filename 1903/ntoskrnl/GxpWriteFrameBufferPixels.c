/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x1401786D0
 * Callers:
 *     BgpGxDrawRectangle @ 0x140178640 (BgpGxDrawRectangle.c)
 * Callees:
 *     GxpAdjustRectangleToFrameBuffer @ 0x14017890C (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x140178BD0 (BgpGxConvertRectangleEx.c)
 *     BgfxGrowDirtyRect @ 0x1401923F8 (BgfxGrowDirtyRect.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     GxpGetRotatedPixelOffset @ 0x1403491A0 (GxpGetRotatedPixelOffset.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(unsigned __int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned int BitsPerPixel; // r15d
  __int64 result; // rax
  int v6; // r11d
  int v7; // esi
  unsigned int v8; // r15d
  unsigned int v9; // r10d
  __int64 v10; // rsi
  char *v11; // rsi
  unsigned int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  char *v18; // rdi
  size_t v19; // r12
  __int64 v20; // r13
  __int64 v21; // r14
  int RotatedPixelOffset; // ebx
  _BYTE *v23; // rsi
  __int64 v24; // r9
  unsigned int v25; // esi
  unsigned int v26; // r13d
  char *v27; // r12
  _BYTE *v28; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  unsigned __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+A8h] [rbp-58h]
  _DWORD *v42; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  _BYTE v46[80]; // [rsp+E0h] [rbp-20h] BYREF

  v42 = a2;
  v2 = a2;
  v40 = a1;
  v3 = a1;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  v31 = 0LL;
  v32 = 0;
  memset(v46, 0, 0x48uLL);
  v35 = 0LL;
  v28 = 0LL;
  v36 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v29 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v30 = HIDWORD(BgInternal);
  if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)v3 || *(_DWORD *)(v3 + 8) != BitsPerPixel || !v2 )
    return 3221225485LL;
  if ( (dword_14042C030 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(v3, (_DWORD)v2, (unsigned int)&v29, (unsigned int)&v36, (__int64)&v35, 1);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)BgInternal )
    {
      v6 = v30;
      v7 = v30 * v2[1];
      v8 = BitsPerPixel >> 3;
      v9 = v8 * v36;
      Src = *(void **)(v3 + 24);
      v10 = v8 * (*v2 + v7);
      v34 = v8 * v36;
      v11 = (char *)qword_14042BFE0 + v10;
      if ( !BYTE2(BgInternal) )
      {
LABEL_10:
        v12 = *(_DWORD *)(v3 + 4);
        v13 = v12;
        v14 = *(_DWORD *)v3;
        v15 = *(_DWORD *)v3;
LABEL_11:
        v16 = v8 * v13;
        v17 = v8 * v30;
        v31 = __PAIR64__(v14, v16);
        v32 = v8 * v30;
        if ( BYTE2(BgInternal) )
        {
          v25 = 0;
          v44 = __PAIR64__(v15, v12);
          HIDWORD(v28) = 0;
          if ( v15 )
          {
            while ( 1 )
            {
              v26 = 0;
              LODWORD(v28) = 0;
              v27 = (char *)(*(_QWORD *)(v3 + 24) + v9 * v25);
              if ( *(_DWORD *)(v3 + 4) )
                break;
LABEL_45:
              HIDWORD(v28) = ++v25;
              if ( v25 >= *(_DWORD *)v3 )
                goto LABEL_16;
            }
            v42 = (_DWORD *)v29;
            v40 = v44;
            v43 = v6;
            v41 = v45;
            while ( 1 )
            {
              RotatedPixelOffset = GxpGetRotatedPixelOffset(
                                     (_DWORD)v28,
                                     (unsigned int)&v40,
                                     (_DWORD)v2,
                                     (unsigned int)&v42,
                                     (__int64)&Src);
              if ( RotatedPixelOffset < 0 )
                goto LABEL_19;
              memmove((char *)qword_14042BFE0 + v8 * (unsigned int)Src, v27, v8);
              ++v26;
              v27 += v8;
              LODWORD(v28) = v26;
              if ( v26 >= *(_DWORD *)(v3 + 4) )
              {
                v9 = v34;
                v6 = v30;
                goto LABEL_45;
              }
            }
          }
        }
        else if ( v14 )
        {
          v18 = (char *)Src;
          v19 = v16;
          v28 = (_BYTE *)v17;
          v20 = v9;
          v21 = v17;
          do
          {
            memmove(v11, v18, v19);
            v18 += v20;
            v11 += v21;
            --v14;
          }
          while ( v14 );
          v3 = v40;
          v2 = v42;
        }
LABEL_16:
        if ( qword_14042C190 )
          BgfxGrowDirtyRect(&v31, v2, v8);
LABEL_18:
        RotatedPixelOffset = 0;
LABEL_19:
        *(_DWORD *)v3 = HIDWORD(v36);
        *(_DWORD *)(v3 + 4) = v36;
        *(_QWORD *)v2 = v35;
        return (unsigned int)RotatedPixelOffset;
      }
      if ( BYTE2(BgInternal) != 1 )
      {
        if ( BYTE2(BgInternal) == 2 )
          goto LABEL_10;
        if ( BYTE2(BgInternal) != 3 )
        {
          RotatedPixelOffset = -1073741811;
          goto LABEL_19;
        }
      }
      v15 = *(_DWORD *)v3;
      v13 = *(_DWORD *)v3;
      v14 = *(_DWORD *)(v3 + 4);
      v12 = v14;
      goto LABEL_11;
    }
    v23 = 0LL;
    v37 = *(_QWORD *)v3;
    v28 = 0LL;
    if ( (dword_14042C030 & 8) == 0 )
    {
      HIDWORD(v38) = *(_DWORD *)(v3 + 12);
      v39 = *(_QWORD *)(v3 + 24);
      LODWORD(v38) = xmmword_14042BFD0;
      goto LABEL_29;
    }
    if ( (dword_14042C030 & 0xC00) != 0 )
    {
      v24 = 1LL;
      v28 = v46;
    }
    else
    {
      v24 = 0LL;
    }
    result = BgpGxConvertRectangleEx(v3, 4LL, &v28, v24);
    if ( (int)result >= 0 )
    {
      v23 = v28;
      HIDWORD(v38) = *((_DWORD *)v28 + 3);
      v39 = *((_QWORD *)v28 + 3);
      LODWORD(v38) = 1;
LABEL_29:
      RotatedPixelOffset = ((__int64 (__fastcall *)(__int64 *, _DWORD *, _QWORD))qword_14042BFE0)(&v37, v2, 0LL);
      if ( v23 && v23 != v46 )
        BgpGxRectangleDestroy(v23);
      if ( RotatedPixelOffset < 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  return result;
}
