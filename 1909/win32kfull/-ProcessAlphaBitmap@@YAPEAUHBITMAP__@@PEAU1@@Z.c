/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00266F0
 * Callers:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00271A0 (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C00BE2FC (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBITMAP a1)
{
  int v1; // edi
  int v2; // edx
  LONG v3; // ebx
  LONG v4; // esi
  HDC v5; // rcx
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
  v3 = HIDWORD(v17[1]);
  v4 = v17[2];
  v5 = *(HDC *)(gpDispInfo + 56LL);
  memset(&v18.bmiHeader.biSizeImage, 0, 24);
  v18.bmiHeader.biSize = 40;
  v18.bmiHeader.biWidth = HIDWORD(v17[1]);
  v18.bmiHeader.biHeight = v17[2];
  *(_QWORD *)&v18.bmiHeader.biPlanes = 2097153LL;
  v17[0] = 0LL;
  DIBitmapReal = GreCreateDIBitmapReal(v5, v2, 0LL, &v18.bmiHeader.biSize, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, v17);
  if ( DIBitmapReal )
  {
    v18.bmiHeader.biWidth = v3;
    v7 = *(_QWORD *)(gpDispInfo + 56LL);
    memset(&v18.bmiHeader.biSizeImage, 0, 24);
    v18.bmiHeader.biSize = 40;
    v18.bmiHeader.biHeight = v4;
    v16 = v4 * (((32 * v3) >> 3) & 0xFFFFFFFC);
    v8 = (unsigned int *)v17[0];
    *(_QWORD *)&v18.bmiHeader.biPlanes = 2097153LL;
    DIBitsInternal = GreGetDIBitsInternal(v7, v1, 0, v4, v17[0], &v18, 0, v16, 0x28u);
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
