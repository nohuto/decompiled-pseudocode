/*
 * XREFs of GreFontIsLinked @ 0x1C01103C4
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C01103B0 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00853D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // edi
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rbx
  char v6; // cl
  __int64 v7; // [rsp+28h] [rbp-29h] BYREF
  int v8; // [rsp+30h] [rbp-21h]
  _QWORD v9[2]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v10[32]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v11[8]; // [rsp+68h] [rbp+17h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v8 = 0;
    v7 = 0LL;
    v2 = RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v9, 0, 2u);
    v3 = v7;
    if ( v2 )
      GreAcquireSemaphore(*(_QWORD *)(v7 + 504));
    if ( !v3 )
      goto LABEL_11;
    v4 = *(_QWORD *)(v3 + 120);
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v4 && (*(_DWORD *)(v4 + 12) & 8) == 0 )
    {
      if ( !*(_DWORD *)(v3 + 708) )
      {
        if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
        {
          if ( !bFinallyInitializeFontAssocDefault
            || (IFIOBJR::IFIOBJR(
                  (IFIOBJR *)v11,
                  *(const struct _IFIMETRICS **)(v4 + 32),
                  (struct RFONTOBJ *)&v7,
                  (struct DCOBJ *)v9),
                v6 = *(_BYTE *)(v11[0] + 44LL),
                v6 == 1)
            || (unsigned __int8)(v6 - 3) <= 0xFBu
            || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v6 + 2) & 0xF) == 0 )
          {
            if ( *(_QWORD *)(v4 + 120) )
              v1 = 1;
            goto LABEL_10;
          }
        }
        goto LABEL_9;
      }
      if ( gbSystemDBCSFontEnabled )
LABEL_9:
        v1 = 1;
    }
LABEL_10:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
  return v1;
}
