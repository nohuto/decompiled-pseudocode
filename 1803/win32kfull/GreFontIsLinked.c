/*
 * XREFs of GreFontIsLinked @ 0x1C00F9624
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C00F9610 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00CB7B4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // edi
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rbx
  char v6; // cl
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+28h] [rbp-58h]
  _QWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v9, a1);
  if ( !v9[0] )
    return v1;
  v8 = 0;
  v7 = 0LL;
  v2 = RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v9, 0, 2u);
  v3 = v7;
  if ( v2 )
    GreAcquireSemaphore(*(_QWORD *)(v7 + 496));
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 104);
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( !v4 || (*(_DWORD *)(v4 + 12) & 8) != 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(v3 + 692) )
    {
      if ( !gbSystemDBCSFontEnabled )
        goto LABEL_12;
    }
    else if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
    {
      if ( !bFinallyInitializeFontAssocDefault
        || (IFIOBJR::IFIOBJR(
              (IFIOBJR *)v10,
              *(const struct _IFIMETRICS **)(v4 + 32),
              (struct RFONTOBJ *)&v7,
              (struct DCOBJ *)v9),
            v6 = *(_BYTE *)(v10[0] + 44LL),
            v6 == 1)
        || (unsigned __int8)(v6 - 3) <= 0xFBu
        || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v6 + 2) & 0xF) == 0 )
      {
        if ( *(_QWORD *)(v4 + 120) )
          v1 = 1;
        goto LABEL_12;
      }
    }
    v1 = 1;
LABEL_12:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v1;
}
