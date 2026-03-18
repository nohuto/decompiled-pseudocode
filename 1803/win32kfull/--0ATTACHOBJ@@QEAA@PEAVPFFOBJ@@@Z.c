/*
 * XREFs of ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080754 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C008094C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0080AD4 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0084AD4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0125B38 (-QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYG.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0290480 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C0290550 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C0290614 (-QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00BF4A4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(PRKAPC_STATE ApcState, unsigned __int64 a2)
{
  struct PFFOBJ *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // r10d
  struct _FONTFILEVIEW **v7; // r11
  struct _FONTFILEVIEW *v8; // rcx
  int v9; // eax
  __int64 ProcessServerSilo; // rax
  unsigned int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  void *v14[3]; // [rsp+30h] [rbp-28h] BYREF

  ApcState[1].ApcListHead[0].Blink = 0LL;
  LODWORD(ApcState[1].ApcListHead[1].Flink) = 0;
  v3 = (struct PFFOBJ *)a2;
  BYTE4(ApcState[1].ApcListHead[1].Flink) = 0;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 88LL);
  if ( (*(_DWORD *)(v5 + 40) & 0x2000) != 0 )
  {
    if ( (struct PDEV *)v5 == qword_1C032FD38 )
    {
      v6 = *(_DWORD *)(v4 + 36);
      if ( v6 <= 3 )
      {
        a2 = 0LL;
        if ( v6 )
        {
          v7 = *(struct _FONTFILEVIEW ***)(v4 + 200);
          while ( 1 )
          {
            v8 = v7[a2];
            v9 = *((_DWORD *)v8 + 10);
            if ( (v9 & 0x10) == 0 && (v9 & 8) != 0 && !*((_QWORD *)v8 + 6) )
              break;
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= v6 )
              goto LABEL_8;
          }
          memset(v14, 0, sizeof(v14));
          *(_QWORD *)v12 = 0LL;
          v13 = 0;
          if ( MapFontFiles(v6, v7, v14, v12) )
          {
            ApcState[1].ApcListHead[0].Blink = *(struct _LIST_ENTRY **)(*(_QWORD *)v3 + 200LL);
            LODWORD(ApcState[1].ApcListHead[1].Flink) = *(_DWORD *)(*(_QWORD *)v3 + 36LL);
          }
        }
      }
    }
LABEL_8:
    if ( (*(_DWORD *)(v5 + 40) & 0x2000) != 0 && (struct PDEV *)v5 != qword_1C032FD38 )
    {
      BYTE4(ApcState[1].ApcListHead[1].Flink) = 1;
      ProcessServerSilo = PsGetProcessServerSilo(gpepCSRSS, a2);
      ApcState[1].ApcListHead[0].Flink = (struct _LIST_ENTRY *)PsAttachSiloToCurrentThread(ProcessServerSilo);
      KeStackAttachProcess(gpepCSRSS, ApcState);
    }
  }
  return (ATTACHOBJ *)ApcState;
}
