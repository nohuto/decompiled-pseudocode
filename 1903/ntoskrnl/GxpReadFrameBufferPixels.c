/*
 * XREFs of GxpReadFrameBufferPixels @ 0x14098EA14
 * Callers:
 *     BgpGxReadRectangle @ 0x14098E9A4 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetResolution @ 0x14013D4FC (BgpGetResolution.c)
 *     GxpAdjustRectangleToFrameBuffer @ 0x14017890C (GxpAdjustRectangleToFrameBuffer.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     GxpGetRotatedPixelOffset @ 0x1403491A0 (GxpGetRotatedPixelOffset.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rsi
  unsigned int v5; // r15d
  _DWORD *Resolution; // rax
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // r13d
  char *v14; // r12
  unsigned int v15; // ebx
  char *v16; // r14
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
  __int64 v30; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+88h] [rbp-1h]
  __int64 v32; // [rsp+90h] [rbp+7h]
  int RotatedPixelOffset; // [rsp+F0h] [rbp+67h]
  int v35; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int64 v36; // [rsp+108h] [rbp+7Fh]

  v2 = 0;
  v30 = 0LL;
  v3 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v20 = 0LL;
  v5 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  Resolution = BgpGetResolution(&v28);
  v8 = Resolution[2];
  v22 = *(_QWORD *)Resolution;
  v23 = v8;
  if ( !a1 )
    return 3221225485LL;
  v9 = *((_DWORD *)a1 + 1);
  if ( !v9 )
    return 3221225485LL;
  v10 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1
    || *((_DWORD *)a1 + 2) != v7
    || !v3
    || v9 + *(_DWORD *)v3 > (unsigned int)v22
    || v10 + *(_DWORD *)(v3 + 4) > HIDWORD(v22) )
  {
    return 3221225485LL;
  }
  if ( (dword_14042C030 & 8) != 0 )
    return 3221225659LL;
  if ( *((_DWORD *)a1 + 3) < v5 * v9 * v10 )
    return 3221225507LL;
  if ( (dword_14042C030 & 2) == 0 )
    return 3221225473LL;
  result = GxpAdjustRectangleToFrameBuffer(
             (unsigned int *)a1,
             (__int64 *)v3,
             (unsigned int *)&v22,
             (unsigned int *)&v24,
             &v20,
             0);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    RotatedPixelOffset = 0;
    if ( !(_BYTE)BgInternal )
    {
      v30 = *a1;
      LOBYTE(v12) = 1;
      HIDWORD(v31) = *((_DWORD *)a1 + 3);
      LODWORD(v31) = xmmword_14042BFD0;
      v32 = a1[3];
      v13 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))qword_14042BFE0)(&v30, v3, v12);
      goto LABEL_19;
    }
    v14 = (char *)a1[3];
    v15 = *(_DWORD *)a1;
    v21 = (char *)qword_14042BFE0;
    if ( BYTE2(BgInternal) )
    {
      HIDWORD(v36) = 0;
      if ( !v15 )
        goto LABEL_19;
      while ( 1 )
      {
        v19 = 0;
        LODWORD(v36) = 0;
        if ( *((_DWORD *)a1 + 1) )
          break;
LABEL_30:
        HIDWORD(v36) = ++v2;
        if ( v2 >= *(_DWORD *)a1 )
          goto LABEL_18;
      }
      v26 = v22;
      v27 = v23;
      v28 = v24;
      v29 = v25;
      while ( 1 )
      {
        RotatedPixelOffset = GxpGetRotatedPixelOffset(v36, (int *)&v28, (_DWORD *)v3, (__int64)&v26, &v35);
        if ( RotatedPixelOffset < 0 )
          break;
        memmove(v14, &v21[v5 * v35], v5);
        ++v19;
        v14 += v5;
        LODWORD(v36) = v19;
        if ( v19 >= *((_DWORD *)a1 + 1) )
          goto LABEL_30;
      }
    }
    else
    {
      v16 = (char *)qword_14042BFE0 + v5 * (*(_DWORD *)v3 + v23 * *(_DWORD *)(v3 + 4));
      if ( !v15 )
      {
LABEL_19:
        *(_DWORD *)a1 = HIDWORD(v24);
        *((_DWORD *)a1 + 1) = v24;
        *(_QWORD *)v3 = v20;
        return v13;
      }
      v17 = v5 * *((_DWORD *)a1 + 1);
      v18 = v5 * v23;
      do
      {
        memmove(v14, v16, v17);
        v16 += v18;
        v14 += v5 * *((_DWORD *)a1 + 1);
        --v15;
      }
      while ( v15 );
      v3 = a2;
    }
LABEL_18:
    v13 = RotatedPixelOffset;
    goto LABEL_19;
  }
  return result;
}
