/*
 * XREFs of BgpRasInitializeRasterizer @ 0x140A40BD0
 * Callers:
 *     FopInitializeFonts @ 0x140A405F4 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140184800 (FioFwReadBytesAtOffset.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     FopGetTableOffsetAndSize @ 0x140A40F60 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall BgpRasInitializeRasterizer(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rdi
  int TableOffsetAndSize; // edx
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v7; // ax
  bool v8; // zf
  _WORD v10[20]; // [rsp+30h] [rbp-19h] BYREF
  _WORD v11[28]; // [rsp+58h] [rbp+Fh] BYREF
  unsigned int v12; // [rsp+B0h] [rbp+67h] BYREF
  char v13; // [rsp+B8h] [rbp+6Fh] BYREF

  memset(v11, 0, 0x36uLL);
  memset(v10, 0, 0x24uLL);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v2, 1751474532, (int)a1 + 64, (__int64)&v12);
  if ( TableOffsetAndSize >= 0 )
  {
    TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v2, 1735162214, (int)a1 + 60, (__int64)&v12);
    if ( TableOffsetAndSize >= 0 )
    {
      TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v2, 1819239265, (int)a1 + 72, (__int64)&v12);
      if ( TableOffsetAndSize >= 0 )
      {
        TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v2, 1752003704, (int)a1 + 68, (__int64)&v12);
        if ( TableOffsetAndSize >= 0 )
        {
          TableOffsetAndSize = FioFwReadBytesAtOffset(v3, *(_DWORD *)(a1 + 64), 0x36u, v11);
          if ( TableOffsetAndSize >= 0 )
          {
            *(_WORD *)(a1 + 76) = __ROR2__(v11[25], 8);
            *(_WORD *)(a1 + 120) = __ROR2__(v11[9], 8);
            TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v2, 1751672161, (unsigned int)&v12, (__int64)&v13);
            if ( TableOffsetAndSize >= 0 )
            {
              TableOffsetAndSize = FioFwReadBytesAtOffset(v3, v12, 0x24u, v10);
              if ( TableOffsetAndSize >= 0 )
              {
                v5 = v10[2];
                *(_WORD *)(a1 + 88) = __ROR2__(v10[17], 8);
                *(_WORD *)(a1 + 78) = __ROR2__(v10[5], 8);
                v6 = __ROR2__(v5, 8);
                *(_WORD *)(a1 + 84) = __ROR2__(v10[3], 8);
                v7 = __ROR2__(v10[8], 8);
                v8 = RasterizerInitialized == 0;
                *(_WORD *)(a1 + 82) = v6;
                *(_WORD *)(a1 + 80) = v7;
                *(_WORD *)(a1 + 86) = v6;
                *(_DWORD *)(a1 + 96) = 96;
                if ( v8 )
                {
                  dword_14042BF14 = 0;
                  qword_14042BEE8 = (__int64)&RaspBitmapCache;
                  RaspBitmapCache = (__int64)&RaspBitmapCache;
                  dword_14042BF10 = 100;
                  RasterizerInitialized = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)TableOffsetAndSize;
}
