/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8
 * Callers:
 *     cjCopyFontDataW @ 0x1C0091E70 (cjCopyFontDataW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009C2B8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C00A8858 (GreGetCharSet.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FAD70 (NtGdiQueryFontAssocInfo.c)
 *     GreMarkDeletableFont @ 0x1C013E3A8 (GreMarkDeletableFont.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C013E408 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C013E618 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C013EDEC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C013F5A0 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     FinishStockFontInit @ 0x1C0140790 (FinishStockFontInit.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C015743C (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0287884 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A0F34 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, struct PDEVOBJ *a3)
{
  struct HLFONT__ *v3; // rsi
  struct HLFONT__ *v5; // rcx
  __int64 v7; // rax
  __int64 HDEV; // rbx
  int v10; // edi
  __int64 v11; // rdx
  struct PDEVOBJ *v12; // rax
  _QWORD *v13; // rcx
  int v14; // edi
  int v15; // edi
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  v5 = a2;
  LOBYTE(a2) = 10;
  v7 = HmgShareLock(v5, a2);
  *(_QWORD *)this = v7;
  if ( v7 && (*(_DWORD *)(v7 + 28) & 1) != 0 )
  {
    HDEV = UserGetHDEV();
    v10 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)this);
    *(_QWORD *)this = 0LL;
    v12 = (struct PDEVOBJ *)&v16;
    v16 = HDEV;
    if ( a3 )
      v12 = a3;
    v13 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 )
    {
      v14 = v10 - 4;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            v3 = (struct HLFONT__ *)v13[181];
        }
        else
        {
          v3 = (struct HLFONT__ *)v13[180];
        }
      }
      else
      {
        v3 = (struct HLFONT__ *)v13[179];
      }
      LOBYTE(v11) = 10;
      *(_QWORD *)this = HmgShareLock(v3, v11);
    }
  }
  return this;
}
