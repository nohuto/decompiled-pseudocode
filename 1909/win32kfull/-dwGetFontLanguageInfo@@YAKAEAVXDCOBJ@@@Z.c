/*
 * XREFs of ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C0287884
 * Callers:
 *     NtGdiGetDCDword @ 0x1C00D7D70 (NtGdiGetDCDword.c)
 * Callees:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00497A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0114B4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall dwGetFontLanguageInfo(struct XDCOBJ *a1)
{
  __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  struct PFE *v5; // rax
  __int64 v6; // rcx
  struct _POINTL v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+28h] BYREF
  struct LFONT *v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 0x8000;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v13 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v13);
      v1 = *(_QWORD *)a1;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v12, *(struct HLFONT__ **)(*(_QWORD *)(v1 + 976) + 296LL), (struct PDEVOBJ *)&v13);
    if ( v12 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v9 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v8 = 0LL;
        v5 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v12, a1, &v11, &v8, &v10, 0);
        if ( v5 )
        {
          v6 = *((_QWORD *)v5 + 4);
          v3 = *(_DWORD *)(v6 + 164) != 0 ? 8 : 0;
          if ( (*(_DWORD *)(v6 + 48) & 0x80000001) != 0 )
            v3 |= 0x40000u;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
    }
  }
  return v3;
}
