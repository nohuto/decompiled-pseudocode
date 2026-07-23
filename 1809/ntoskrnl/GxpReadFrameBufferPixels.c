/*
 * XREFs of GxpReadFrameBufferPixels @ 0x14094F9FC
 * Callers:
 *     BgpGxReadRectangle @ 0x14094F98C (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetResolution @ 0x14013B9C0 (BgpGetResolution.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x14016F1B0 (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x140327B1C (GxpGetRotatedPixelOffset.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rsi
  unsigned int v4; // r14d
  _DWORD *Resolution; // rax
  int v6; // r9d
  unsigned int v7; // r15d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // r13d
  char *v14; // r12
  unsigned int v15; // ebx
  char *v16; // r15
  size_t v17; // r13
  __int64 v18; // rsi
  unsigned int v19; // r13d
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  char *v21; // [rsp+38h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  int v23; // [rsp+48h] [rbp-41h]
  __int64 v24; // [rsp+50h] [rbp-39h] BYREF
  int v25; // [rsp+58h] [rbp-31h]
  __int64 v26; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+68h] [rbp-21h]
  __int64 v28; // [rsp+70h] [rbp-19h] BYREF
  int v29; // [rsp+78h] [rbp-11h]
  _DWORD v30[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+90h] [rbp+7h]
  int RotatedPixelOffset; // [rsp+F0h] [rbp+67h]
  int v34; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+108h] [rbp+7Fh]

  v2 = a2;
  v4 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  Resolution = BgpGetResolution(&v28);
  v7 = 0;
  v8 = Resolution[2];
  v22 = *(_QWORD *)Resolution;
  v23 = v8;
  if ( !a1 )
    return 3221225485LL;
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 )
    return 3221225485LL;
  v10 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 || *(_DWORD *)(a1 + 8) != v6 || !v2 || v9 + *v2 > (unsigned int)v22 || v10 + v2[1] > HIDWORD(v22) )
    return 3221225485LL;
  if ( (dword_140406AD0 & 8) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 12) < v4 * v9 * v10 )
    return 3221225507LL;
  if ( (dword_140406AD0 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer((unsigned int *)a1, v2, &v22, (unsigned int *)&v24, &v20, 0);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    RotatedPixelOffset = 0;
    if ( !(_BYTE)BgInternal )
    {
      v30[0] = *(_DWORD *)a1;
      LOBYTE(v12) = 1;
      v30[1] = *(_DWORD *)(a1 + 4);
      v30[3] = *(_DWORD *)(a1 + 12);
      v30[2] = xmmword_140406A70;
      v31 = *(_QWORD *)(a1 + 24);
      v13 = ((__int64 (__fastcall *)(_DWORD *, unsigned int *, __int64))qword_140406A80)(v30, v2, v12);
      goto LABEL_19;
    }
    v14 = *(char **)(a1 + 24);
    v15 = *(_DWORD *)a1;
    v21 = (char *)qword_140406A80;
    if ( BYTE2(BgInternal) )
    {
      HIDWORD(v35) = 0;
      if ( !v15 )
        goto LABEL_19;
      while ( 1 )
      {
        v19 = 0;
        LODWORD(v35) = 0;
        if ( *(_DWORD *)(a1 + 4) )
          break;
LABEL_30:
        HIDWORD(v35) = ++v7;
        if ( v7 >= *(_DWORD *)a1 )
          goto LABEL_18;
      }
      v26 = v22;
      v27 = v23;
      v28 = v24;
      v29 = v25;
      while ( 1 )
      {
        RotatedPixelOffset = GxpGetRotatedPixelOffset(v35, (int *)&v28, v2, (__int64)&v26, &v34);
        if ( RotatedPixelOffset < 0 )
          break;
        memmove(v14, &v21[v4 * v34], v4);
        ++v19;
        v14 += v4;
        LODWORD(v35) = v19;
        if ( v19 >= *(_DWORD *)(a1 + 4) )
          goto LABEL_30;
      }
    }
    else
    {
      v16 = (char *)qword_140406A80 + v4 * (*v2 + v23 * v2[1]);
      if ( !v15 )
      {
LABEL_19:
        *(_DWORD *)a1 = HIDWORD(v24);
        *(_DWORD *)(a1 + 4) = v24;
        *(_QWORD *)v2 = v20;
        return v13;
      }
      v17 = v4 * *(_DWORD *)(a1 + 4);
      v18 = v4 * v23;
      do
      {
        memmove(v14, v16, v17);
        v16 += v18;
        v14 += v4 * *(_DWORD *)(a1 + 4);
        --v15;
      }
      while ( v15 );
      v2 = a2;
    }
LABEL_18:
    v13 = RotatedPixelOffset;
    goto LABEL_19;
  }
  return result;
}
