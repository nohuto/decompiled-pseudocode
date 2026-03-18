/*
 * XREFs of bInitOneStockFontInternal @ 0x1C0382640
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00E6F48 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitOneStockFont @ 0x1C0382768 (bInitOneStockFont.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C004A19C (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     hfontCreate @ 0x1C004BDC0 (hfontCreate.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00E725C (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00E7294 (vIFIMetricsToEnumLogFontExDvW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  struct HOBJ__ *v10; // rax
  unsigned int v12; // [rsp+40h] [rbp-1F8h] BYREF
  struct _FONTHASH **v13; // [rsp+48h] [rbp-1F0h] BYREF
  struct PFF *v14; // [rsp+50h] [rbp-1E8h] BYREF
  _DWORD Src[108]; // [rsp+60h] [rbp-1D8h] BYREF

  v13 = gpPFTPublic;
  v8 = 0;
  memset(Src, 0, 0x1A4uLL);
  if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v13, a1, &v12, 2u, &v14, 0LL, 0) )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        v9 = *((_QWORD *)v14 + 27);
        if ( v9 )
        {
          vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v9 + 32));
          if ( a3 == 13 )
          {
            gppfeMapperDefault = (struct PFE *)v9;
            HIBYTE(Src[5]) = gjCurCharset;
          }
          BYTE2(Src[6]) = 2;
          v10 = hfontCreate(Src, a2, 2, 0LL, 0x48u);
          return (unsigned int)bSetStockFont(v10, a3, a4);
        }
      }
    }
  }
  return v8;
}
