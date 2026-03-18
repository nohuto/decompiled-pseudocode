/*
 * XREFs of GreGetCharSet @ 0x1C00241A4
 * Callers:
 *     NtGdiGetCharSet @ 0x1C0023EF0 (NtGdiGetCharSet.c)
 *     GreGetTextCharsetInfo @ 0x1C0024074 (GreGetTextCharsetInfo.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C002431C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0027330 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C015F1B0 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // rbx
  unsigned int v4; // ebx
  struct LFONT *v6; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  _BYTE v11[32]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v11);
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v2 = v8;
  if ( !v8 )
  {
    EngSetLastError(6u);
LABEL_14:
    v4 = 0x10000;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 976) + 152LL) & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(v8 + 48);
    if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v14) )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v14);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(*(_QWORD *)(v8 + 976) + 296LL), (struct PDEVOBJ *)&v14);
    v3 = v6;
    if ( !v6 )
      goto LABEL_14;
    if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    {
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
      goto LABEL_14;
    }
    GreAcquireSemaphore(ghsemPublicPFT);
    LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v6, (struct XDCOBJ *)&v8, &v13, &v7, &v12, 0);
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
    v2 = v8;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 976) + 4LL);
LABEL_12:
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  return v4;
}
