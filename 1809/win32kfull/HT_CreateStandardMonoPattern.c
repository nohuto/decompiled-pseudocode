/*
 * XREFs of HT_CreateStandardMonoPattern @ 0x1C00114C8
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0012028 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     GetCachedSMP @ 0x1C0011578 (GetCachedSMP.c)
 *     ComputeBytesPerScanLine @ 0x1C00116F8 (ComputeBytesPerScanLine.c)
 *     pDCIAdjClr @ 0x1C00141A0 (pDCIAdjClr.c)
 *     HT_CreateHalftoneBrush @ 0x1C0244BD0 (HT_CreateHalftoneBrush.c)
 */

__int64 __fastcall HT_CreateStandardMonoPattern(int a1, __int16 *a2)
{
  unsigned __int8 v2; // si
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int HalftoneBrush; // eax
  unsigned int v8; // ebx
  __int16 v10; // r8
  __int16 v11; // r10
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r10
  int v14; // r11d
  __int64 v15; // rdx
  char v16; // cl
  __int16 v17; // ax
  _DWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF
  int *v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *((_BYTE *)a2 + 3);
  if ( v2 > 0x76u )
    return 4294967269LL;
  v20 = 0;
  v5 = pDCIAdjClr(a1, 0, 0, 0, 0, 0, (__int64)&v21);
  v6 = v5;
  if ( v5 )
  {
    if ( v2 >= 0x12u )
    {
      v10 = *(_WORD *)(v5 + 166);
      v11 = *(_WORD *)(v5 + 170);
      BYTE2(v21) = *((_BYTE *)a2 + 2);
      a2[4] = v10;
      a2[5] = v11;
      v12 = ComputeBytesPerScanLine(1LL);
      v15 = *((_QWORD *)a2 + 2);
      a2[3] = v12;
      if ( !v15 )
      {
        v8 = v13 * v12;
        goto LABEL_6;
      }
      v16 = v14;
      BYTE1(v20) = 118 - v2;
      v19 = &v20;
      v17 = *a2;
      LOBYTE(v20) = 118 - v2;
      v18[0] = 196864;
      if ( (v17 & 2) != 0 )
        v16 = v14 + 2;
      v18[1] = 100;
      LOBYTE(v21) = v16;
      v18[2] = v14;
      if ( ((unsigned __int8)v17 & (unsigned __int8)v14) == 0 )
        LOBYTE(v21) = v16 | 8;
      BYTE1(v21) = v14;
      HIBYTE(v21) = 0;
      HalftoneBrush = HT_CreateHalftoneBrush(a1, 0, (unsigned int)v18, v21, v15);
    }
    else
    {
      HalftoneBrush = GetCachedSMP(v5, a2);
    }
    v8 = HalftoneBrush;
LABEL_6:
    EngReleaseSemaphore(*(HSEMAPHORE *)(v6 + 8));
    return v8;
  }
  return v21;
}
