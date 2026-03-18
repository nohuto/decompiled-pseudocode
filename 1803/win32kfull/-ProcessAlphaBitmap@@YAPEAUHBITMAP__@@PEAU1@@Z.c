/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0017110
 * Callers:
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C001770C (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C00A60BC (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBITMAP a1)
{
  int v1; // edi
  LONG v2; // ebx
  LONG v3; // esi
  HDC v4; // rcx
  int v5; // edx
  __int64 DIBitmapReal; // r14
  __int64 v7; // rcx
  unsigned int *v8; // rbx
  int DIBitsInternal; // edi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v16; // [rsp+38h] [rbp-61h]
  __int64 v17[5]; // [rsp+70h] [rbp-29h] BYREF
  tagBITMAPINFO v18; // [rsp+98h] [rbp-1h] BYREF

  v1 = (int)a1;
  if ( !a1 )
    return 0LL;
  memset(&v17[1], 0, 0x20uLL);
  if ( !(unsigned int)GreExtGetObjectW(v1) || LODWORD(v17[3]) != 2097153 )
    return 0LL;
  memset(&v18, 0, sizeof(v18));
  v2 = HIDWORD(v17[1]);
  v3 = v17[2];
  v18.bmiHeader.biSize = 40;
  v4 = *(HDC *)(gpDispInfo + 56LL);
  v18.bmiHeader.biWidth = HIDWORD(v17[1]);
  v18.bmiHeader.biHeight = v17[2];
  *(_QWORD *)&v18.bmiHeader.biPlanes = 2097153LL;
  v17[0] = 0LL;
  DIBitmapReal = GreCreateDIBitmapReal(v4, v5, 0LL, &v18.bmiHeader.biSize, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, v17);
  if ( DIBitmapReal )
  {
    memset(&v18, 0, sizeof(v18));
    v18.bmiHeader.biWidth = v2;
    v18.bmiHeader.biSize = 40;
    v7 = *(_QWORD *)(gpDispInfo + 56LL);
    v18.bmiHeader.biHeight = v3;
    *(_QWORD *)&v18.bmiHeader.biPlanes = 2097153LL;
    v16 = v3 * (((32 * v2) >> 3) & 0xFFFFFFFC);
    v8 = (unsigned int *)v17[0];
    DIBitsInternal = GreGetDIBitsInternal(v7, v1, 0, v3, v17[0], &v18, 0, v16, 0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v10 = v18.bmiHeader.biWidth * v18.bmiHeader.biHeight;
      v11 = 0;
      if ( v18.bmiHeader.biWidth * v18.bmiHeader.biHeight )
      {
        v12 = (char *)v8 + 3;
        while ( !*v12 )
        {
          ++v11;
          v12 += 4;
          if ( v11 >= v10 )
            goto LABEL_12;
        }
        DIBitsInternal = 1;
      }
LABEL_12:
      if ( DIBitsInternal && v10 )
      {
        v13 = v10;
        do
        {
          v14 = *v8++;
          *((_BYTE *)v8 - 2) = HIBYTE(v14) * BYTE2(v14) / 0xFFu;
          *((_BYTE *)v8 - 3) = HIBYTE(v14) * BYTE1(v14) / 0xFFu;
          *((_BYTE *)v8 - 4) = HIBYTE(v14) * (unsigned __int8)v14 / 0xFFu;
          --v13;
        }
        while ( v13 );
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
