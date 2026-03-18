/*
 * XREFs of FinishStockFontInit @ 0x1C0055700
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C004EA98 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     FinishStockFontReinit @ 0x1C0055360 (FinishStockFontReinit.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C003EBC0 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00558B0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C0055B84 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0081584 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     GreCreateFontIndirectW @ 0x1C00CA7E0 (GreCreateFontIndirectW.c)
 */

void __fastcall FinishStockFontInit(unsigned int c)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // edx
  struct PFF *v9; // r15
  __int64 i; // rsi
  __int64 v11; // rdi
  struct PFF *v12; // [rsp+30h] [rbp-39h] BYREF
  INT a[4]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+50h] [rbp-19h]
  __int128 v15; // [rsp+60h] [rbp-9h]
  __int128 v16; // [rsp+70h] [rbp+7h]
  __int128 v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  unsigned int v20; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  struct _FONTHASH **v22; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v21, (struct HLFONT__ *)gahStockObjects[17], 0LL);
    v2 = v21;
    if ( v21 )
    {
      *(_DWORD *)(v21 + 276) = -((c * *(_DWORD *)(v21 + 276) + 36) / 0x48);
      v3 = *(_OWORD *)(v2 + 292);
      v4 = *(_OWORD *)(v2 + 308);
      v19 = *(_DWORD *)(v2 + 364);
      v5 = *(__m128i *)(v2 + 276);
      v14 = v3;
      v6 = *(_OWORD *)(v2 + 324);
      v15 = v4;
      v7 = *(_OWORD *)(v2 + 340);
      v16 = v6;
      v18 = *(_QWORD *)(v2 + 356);
      *(_QWORD *)&a[2] = v5.m128i_i64[1];
      v17 = v7;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v5), 96, c);
      a[1] = EngMulDiv(v5.m128i_i32[1], 96, c);
      gahStockObjects96[17] = (void *)GreCreateFontIndirectW(a, 8LL);
    }
    if ( c > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
      v8 = 1;
    }
    else
    {
      if ( (dword_1C0326C50 & 2) != 0 )
        FinishStockFontInitInternal(
          L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
          0);
      v8 = 0;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v8);
    v22 = gpPFTPublic;
    if ( !gppfeMapperDefault )
    {
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v22,
                           L"\\SystemRoot\\System32\\winsrv.dll",
                           &v20,
                           2u,
                           &v12,
                           0LL) )
      {
        if ( v20 )
        {
          v9 = v12;
          if ( v12 )
          {
            for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
            {
              if ( gppfeMapperDefault )
                break;
              v11 = *((_QWORD *)v9 + i + 28);
              if ( v11
                && !_wcsicmp(
                      (const wchar_t *)(*(_QWORD *)(v11 + 32) + *(int *)(*(_QWORD *)(v11 + 32) + 16LL)),
                      L"SYSTEM") )
              {
                gppfeMapperDefault = (struct PFE *)v11;
              }
            }
          }
        }
      }
    }
    if ( !gahStockObjects[16] )
      bSetStockFont(gahStockObjects[13], 16, 0);
    DcAttrDefault[22] = gahStockObjects[13];
    if ( v2 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v2);
  }
}
