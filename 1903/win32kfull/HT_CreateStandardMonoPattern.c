/*
 * XREFs of HT_CreateStandardMonoPattern @ 0x1C003A4B0
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003A8C0 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     pDCIAdjClr @ 0x1C00390BC (pDCIAdjClr.c)
 *     GetCachedSMP @ 0x1C003A558 (GetCachedSMP.c)
 *     ComputeBytesPerScanLine @ 0x1C003A6D8 (ComputeBytesPerScanLine.c)
 *     HT_CreateHalftoneBrush @ 0x1C025DA70 (HT_CreateHalftoneBrush.c)
 */

__int64 __fastcall HT_CreateStandardMonoPattern(__int64 a1, __int16 *a2)
{
  unsigned __int8 v2; // si
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int HalftoneBrush; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int16 v12; // r10
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdx
  char v17; // cl
  __int16 v18; // ax
  _DWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  int *v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+A8h] [rbp+48h] BYREF
  int v23; // [rsp+B0h] [rbp+50h]
  unsigned int v24; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *((_BYTE *)a2 + 3);
  v23 = 0;
  v4 = a1;
  if ( v2 > 0x76u )
    return 4294967269LL;
  v22 = 0;
  v5 = pDCIAdjClr(a1, 0LL, 0LL, 0, 0, 0, &v24);
  v6 = v5;
  if ( v5 )
  {
    if ( v2 >= 0x12u )
    {
      v11 = *(unsigned __int16 *)(v5 + 166);
      v12 = *(_WORD *)(v5 + 170);
      BYTE2(v23) = *((_BYTE *)a2 + 2);
      v10 = BYTE2(v23);
      a2[4] = v11;
      a2[5] = v12;
      v13 = ComputeBytesPerScanLine(1LL, v10, v11);
      v16 = *((_QWORD *)a2 + 2);
      a2[3] = v13;
      if ( !v16 )
      {
        v8 = v14 * v13;
        goto LABEL_6;
      }
      v17 = v15;
      v20 = v15;
      v21 = &v22;
      v18 = *a2;
      BYTE1(v22) = 118 - v2;
      LOBYTE(v22) = 118 - v2;
      if ( (v18 & 2) != 0 )
        v17 = v15 + 2;
      v19[0] = 196864;
      LOBYTE(v23) = v17;
      v19[1] = 100;
      if ( ((unsigned __int8)v18 & (unsigned __int8)v15) == 0 )
        LOBYTE(v23) = v17 | 8;
      BYTE1(v23) = v15;
      HIBYTE(v23) = 0;
      HalftoneBrush = HT_CreateHalftoneBrush(v4, 0, (unsigned int)v19, v23, v16);
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
  return v24;
}
