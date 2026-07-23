/*
 * XREFs of FopGetTableOffsetAndSize @ 0x1409FC2E8
 * Callers:
 *     FopInitializeFonts @ 0x1409FB994 (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x1409FBC8C (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x1409FBF80 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FopGetTableOffsetAndSize(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int32 *a4,
        unsigned __int32 *a5)
{
  int v9; // r10d
  unsigned __int16 v10; // ax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // eax
  unsigned __int32 v15; // ecx
  unsigned __int32 v16; // edx
  unsigned __int32 v17; // r8d
  unsigned int v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-Ch]
  unsigned int v21; // [rsp+28h] [rbp-8h]
  unsigned int v22; // [rsp+2Ch] [rbp-4h]

  v9 = FioFwReadBytesAtOffset(a1, a2, 0xCu, &v19);
  if ( v9 < 0 )
  {
    v10 = v20;
  }
  else
  {
    if ( _byteswap_ulong(v19) != 0x10000 )
      return (unsigned int)-1073741637;
    v10 = __ROR2__(v20, 8);
    v9 = 0;
  }
  if ( v9 >= 0 )
  {
    v11 = 0;
    v12 = v10;
    v13 = a2 + 12;
    if ( v10 )
    {
      while ( 1 )
      {
        v14 = FioFwReadBytesAtOffset(a1, v13, 0x10u, &v19);
        v15 = v22;
        v9 = v14;
        v16 = v21;
        v17 = v19;
        if ( v14 >= 0 )
        {
          v9 = 0;
          v17 = _byteswap_ulong(v19);
          v16 = _byteswap_ulong(v21);
          v15 = _byteswap_ulong(v22);
          v20 = _byteswap_ulong(v20);
          v19 = v17;
          v21 = v16;
          v22 = v15;
        }
        if ( v9 < 0 )
          break;
        if ( v17 == a3 )
        {
          *a4 = v16;
          *a5 = v15;
          return (unsigned int)v9;
        }
        ++v11;
        v13 += 16;
        if ( v11 >= v12 )
          return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)v9;
}
