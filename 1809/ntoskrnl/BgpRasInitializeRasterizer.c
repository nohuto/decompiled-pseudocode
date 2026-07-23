/*
 * XREFs of BgpRasInitializeRasterizer @ 0x1409FBF80
 * Callers:
 *     FopInitializeFonts @ 0x1409FB994 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     FopGetTableOffsetAndSize @ 0x1409FC2E8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall BgpRasInitializeRasterizer(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rdi
  int TableOffsetAndSize; // edx
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v7; // ax
  bool v8; // zf
  _BYTE v10[4]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v11; // [rsp+34h] [rbp-3Ch]
  __int16 v12; // [rsp+36h] [rbp-3Ah]
  __int16 v13; // [rsp+3Ah] [rbp-36h]
  __int16 v14; // [rsp+40h] [rbp-30h]
  __int16 v15; // [rsp+42h] [rbp-2Eh]
  __int16 v16; // [rsp+52h] [rbp-1Eh]
  __int16 v17; // [rsp+62h] [rbp-Eh]
  unsigned int v18; // [rsp+90h] [rbp+20h] BYREF
  char v19; // [rsp+98h] [rbp+28h] BYREF

  v1 = *(_DWORD *)(a1 + 44);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v1, 1751474532, (int)a1 + 64, (__int64)&v18);
  if ( TableOffsetAndSize >= 0 )
  {
    TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v1, 1735162214, (int)a1 + 60, (__int64)&v18);
    if ( TableOffsetAndSize >= 0 )
    {
      TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v1, 1819239265, (int)a1 + 72, (__int64)&v18);
      if ( TableOffsetAndSize >= 0 )
      {
        TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v1, 1752003704, (int)a1 + 68, (__int64)&v18);
        if ( TableOffsetAndSize >= 0 )
        {
          TableOffsetAndSize = FioFwReadBytesAtOffset(v3, *(_DWORD *)(a1 + 64), 0x36u, v10);
          if ( TableOffsetAndSize >= 0 )
          {
            *(_WORD *)(a1 + 76) = __ROR2__(v17, 8);
            *(_WORD *)(a1 + 120) = __ROR2__(v15, 8);
            TableOffsetAndSize = FopGetTableOffsetAndSize(v3, v1, 1751672161, (unsigned int)&v18, (__int64)&v19);
            if ( TableOffsetAndSize >= 0 )
            {
              TableOffsetAndSize = FioFwReadBytesAtOffset(v3, v18, 0x24u, v10);
              if ( TableOffsetAndSize >= 0 )
              {
                v5 = v11;
                *(_WORD *)(a1 + 88) = __ROR2__(v16, 8);
                *(_WORD *)(a1 + 78) = __ROR2__(v13, 8);
                v6 = __ROR2__(v5, 8);
                *(_WORD *)(a1 + 84) = __ROR2__(v12, 8);
                v7 = __ROR2__(v14, 8);
                v8 = RasterizerInitialized == 0;
                *(_WORD *)(a1 + 82) = v6;
                *(_WORD *)(a1 + 80) = v7;
                *(_WORD *)(a1 + 86) = v6;
                *(_DWORD *)(a1 + 96) = 96;
                if ( v8 )
                {
                  dword_1404069D4 = 0;
                  qword_1404069A8 = (__int64)&RaspBitmapCache;
                  RaspBitmapCache = (__int64)&RaspBitmapCache;
                  dword_1404069D0 = 100;
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
