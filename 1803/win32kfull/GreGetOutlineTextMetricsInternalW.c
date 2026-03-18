/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C007EA60
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C007E920 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C007ECD0 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0083A20 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00CEA9C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C00CFEA8 (cjIFIMetricsToOTMW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  size_t v5; // rdi
  __int64 v8; // rdx
  int v9; // eax
  struct _POINTL v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // edi
  struct LFONT *v15; // rbx
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h]
  int v19; // [rsp+44h] [rbp-BCh]
  struct _POINTL v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct LFONT *v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE Src[240]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v17, a1);
  v8 = v17;
  if ( !v17 )
  {
    EngSetLastError(6u);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v17 + 80) + 8LL) & 0x10) == 0 )
    goto LABEL_5;
  v22 = *(_QWORD *)(v17 + 48);
  if ( (*(_DWORD *)(v22 + 40) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v22);
    v8 = v17;
  }
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v23, *(struct HLFONT__ **)(*(_QWORD *)(v8 + 80) + 176LL), (struct PDEVOBJ *)&v22);
  v15 = v23;
  if ( !v23 )
  {
LABEL_32:
    LODWORD(v5) = 0;
    goto LABEL_17;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15);
    goto LABEL_32;
  }
  v25 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v23, (struct XDCOBJ *)&v17, &v24, &v20, &v16, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15);
LABEL_5:
  v21 = 0;
  v20 = 0LL;
  v9 = RFONTOBJ::bInit((RFONTOBJ *)&v20, (struct XDCOBJ *)&v17, 0, 2u);
  v10 = v20;
  if ( v9 )
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v20 + 496LL));
  if ( !*(_QWORD *)&v10 || (v11 = *(_QWORD *)(*(_QWORD *)&v10 + 104LL)) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_28;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v10 + 80LL) + 3072LL) )
  {
    *a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v11 + 32), &v16);
    if ( a3 )
    {
      if ( (unsigned int)v5 > 0xE8 )
      {
        if ( (unsigned int)v5 >= v16 )
        {
          v12 = cjIFIMetricsToOTMW(a4, a3, &v20, &v17, *(_QWORD *)(v11 + 32), 1);
          v13 = v5 - v12;
          v4 = v12;
          if ( v13 > 0 )
            memset(&a3[v12], 0, v13);
        }
        goto LABEL_15;
      }
      memset(Src, 0, 0xE8uLL);
      if ( (unsigned int)cjIFIMetricsToOTMW(a4, Src, &v20, &v17, *(_QWORD *)(v11 + 32), 0) )
      {
        memmove(a3, Src, v5);
        goto LABEL_16;
      }
LABEL_28:
      LODWORD(v5) = 0;
      goto LABEL_16;
    }
    v4 = v16;
  }
LABEL_15:
  LODWORD(v5) = v4;
LABEL_16:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
LABEL_17:
  if ( v17 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v17);
  return (unsigned int)v5;
}
