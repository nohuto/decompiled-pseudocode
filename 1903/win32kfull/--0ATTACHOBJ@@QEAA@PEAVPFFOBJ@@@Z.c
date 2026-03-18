/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00537CC
 * Callers:
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0052F30 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0053010 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0053720 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0075D00 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C014F378 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C0165D94 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BAD20 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02BADD4 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02BAE4C (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C007F900 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  void *v11[3]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 88LL) + 40LL) & 0x2000) != 0 && *(_DWORD *)(v4 + 36) <= 3u )
  {
    if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      v4 = *(_QWORD *)a2;
    }
    if ( (*(_DWORD *)(v4 + 52) & 0x2000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      v4 = *(_QWORD *)a2;
    }
    v5 = *(_DWORD *)(v4 + 36);
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 200) + 8 * v6);
        if ( (*(_DWORD *)(v7 + 40) & 0x18) == 8 && !*(_QWORD *)(v7 + 48) )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v5 )
          return this;
      }
      memset(v11, 0, sizeof(v11));
      *(_QWORD *)v9 = 0LL;
      v10 = 0;
      if ( MapFontFiles(v5, *(struct _FONTFILEVIEW ***)(*(_QWORD *)a2 + 200LL), v11, v9) )
      {
        *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 200LL);
        *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
      }
    }
  }
  return this;
}
