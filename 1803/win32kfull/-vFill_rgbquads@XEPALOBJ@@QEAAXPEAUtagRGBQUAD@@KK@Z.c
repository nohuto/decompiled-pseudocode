/*
 * XREFs of ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0017C7C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00A6594 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreGetDIBColorTable @ 0x1C00ACDC0 (GreGetDIBColorTable.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_rgbquads(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, int a4)
{
  __int64 v4; // r11
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // ecx
  struct tagRGBQUAD v11; // [rsp+8h] [rbp+8h]

  v4 = *(_QWORD *)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v6 & 8) != 0 )
  {
    *a2 = (struct tagRGBQUAD)16711680;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)255;
  }
  else if ( (v6 & 2) != 0 && a4 == 3 )
  {
    *a2 = **(struct tagRGBQUAD **)(v4 + 112);
    a2[1] = *(struct tagRGBQUAD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL);
    a2[2] = *(struct tagRGBQUAD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
  }
  else if ( (v6 & 4) != 0 )
  {
    *a2 = (struct tagRGBQUAD)255;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)16711680;
  }
  else
  {
    v7 = a3 + a4;
    if ( a3 + a4 >= *(_DWORD *)(v4 + 28) )
      v7 = *(_DWORD *)(v4 + 28);
    if ( a3 < v7 )
    {
      v8 = 4LL * a3;
      v11.rgbReserved = 0;
      v9 = v7 - a3;
      do
      {
        v10 = *(_DWORD *)(v8 + *(_QWORD *)(*(_QWORD *)this + 112LL));
        v11.rgbRed = v10;
        v8 += 4LL;
        v11.rgbBlue = BYTE2(v10);
        v11.rgbGreen = BYTE1(v10);
        *a2++ = v11;
        --v9;
      }
      while ( v9 );
    }
  }
}
