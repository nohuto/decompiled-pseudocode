/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0082DD0 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C002431C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0027330 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C0081D4C (cjIFIMetricsToOTMW.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00847AC (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C015F1B0 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  size_t v5; // rsi
  unsigned int v9; // r15d
  struct LFONT *v11; // rbx
  int v12; // eax
  struct _POINTL v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // eax
  int v16; // esi
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  struct _POINTL v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  struct LFONT *v21; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Src[60]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = (unsigned int)Size;
  v9 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v22[0] = 0LL;
  v22[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v23);
  XDCOBJ::vLock((XDCOBJ *)v22, a1);
  if ( v22[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 152LL) & 0x10) != 0 )
    {
      v18 = *(_QWORD *)(v22[0] + 48LL);
      if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v18) )
        PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v18);
      LFONTOBJ::LFONTOBJ(
        (LFONTOBJ *)&v21,
        *(struct HLFONT__ **)(*(_QWORD *)(v22[0] + 976LL) + 296LL),
        (struct PDEVOBJ *)&v18);
      v11 = v21;
      if ( !v21 )
        goto LABEL_29;
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
        goto LABEL_29;
      }
      v25 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v21, (struct XDCOBJ *)v22, &v24, &v19, &v17, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v25);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v11);
    }
    v20 = 0;
    v19 = 0LL;
    v12 = RFONTOBJ::bInit((RFONTOBJ *)&v19, (struct XDCOBJ *)v22, 0, 2u);
    v13 = v19;
    if ( v12 )
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v19 + 504LL));
    if ( *(_QWORD *)&v13 && (v14 = *(_QWORD *)(*(_QWORD *)&v13 + 120LL)) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v13 + 96LL) + 3080LL) )
      {
        *(_DWORD *)a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v14 + 32), &v17);
        if ( a3 )
        {
          if ( (unsigned int)v5 <= 0xE8 )
          {
            memset(Src, 0, 0xE8uLL);
            if ( (unsigned int)cjIFIMetricsToOTMW(
                                 a4,
                                 Src,
                                 (struct RFONTOBJ *)&v19,
                                 (struct DCOBJ *)v22,
                                 *(struct _IFIMETRICS **)(v14 + 32),
                                 0) )
            {
              memmove(a3, Src, v5);
              v4 = v5;
            }
            goto LABEL_28;
          }
          if ( (unsigned int)v5 >= v17 )
          {
            v15 = cjIFIMetricsToOTMW(
                    a4,
                    (unsigned int *)a3,
                    (struct RFONTOBJ *)&v19,
                    (struct DCOBJ *)v22,
                    *(struct _IFIMETRICS **)(v14 + 32),
                    1);
            v16 = v5 - v15;
            v9 = v15;
            if ( v16 > 0 )
              memset(&a3[v15], 0, v16);
          }
        }
        else
        {
          v9 = v17;
        }
      }
      v4 = v9;
    }
    else
    {
      EngSetLastError(6u);
    }
LABEL_28:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    goto LABEL_29;
  }
  EngSetLastError(6u);
LABEL_29:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v22);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v23);
  return v4;
}
