/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00E4C80
 * Callers:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00E4F1C (GreDecBitmapExclusiveRefCnt.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HSURF a1)
{
  LONG v2; // ebx
  unsigned int v3; // esi
  HDC v4; // rcx
  int v5; // edx
  __int64 v6; // r14
  HDC v7; // rcx
  unsigned int *v8; // rbx
  int DIBitsInternal; // edi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v16; // [rsp+38h] [rbp-61h]
  __int64 v17; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v18[8]; // [rsp+78h] [rbp-21h] BYREF
  tagBITMAPINFO v19; // [rsp+98h] [rbp-1h] BYREF

  if ( !a1 )
    return 0LL;
  memset(v18, 0, sizeof(v18));
  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, (char *)v18) || v18[4] != 2097153 )
    return 0LL;
  memset(&v19, 0, sizeof(v19));
  v2 = v18[1];
  v3 = v18[2];
  v19.bmiHeader.biSize = 40;
  v4 = *(HDC *)(gpDispInfo + 56LL);
  v19.bmiHeader.biWidth = v18[1];
  v19.bmiHeader.biHeight = v18[2];
  *(_QWORD *)&v19.bmiHeader.biPlanes = 2097153LL;
  v17 = 0LL;
  v6 = GreCreateDIBitmapReal(v4, v5, 0LL, &v19.bmiHeader.biSize, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v17);
  if ( v6 )
  {
    memset(&v19, 0, sizeof(v19));
    v19.bmiHeader.biWidth = v2;
    v19.bmiHeader.biSize = 40;
    v7 = *(HDC *)(gpDispInfo + 56LL);
    v19.bmiHeader.biHeight = v3;
    *(_QWORD *)&v19.bmiHeader.biPlanes = 2097153LL;
    v16 = v3 * (((32 * v2) >> 3) & 0xFFFFFFFC);
    v8 = (unsigned int *)v17;
    DIBitsInternal = GreGetDIBitsInternal(v7, a1, 0, v3, v17, &v19, 0, v16, 0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v10 = v19.bmiHeader.biWidth * v19.bmiHeader.biHeight;
      v11 = 0;
      if ( v19.bmiHeader.biWidth * v19.bmiHeader.biHeight )
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
    GreDecBitmapExclusiveRefCnt(v6);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(v6);
      return 0LL;
    }
  }
  return v6;
}
