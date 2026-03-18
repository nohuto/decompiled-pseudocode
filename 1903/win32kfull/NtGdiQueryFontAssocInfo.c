/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C0120500
 * Callers:
 *     <none>
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C004EEA0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // edi
  int v2; // eax
  __int64 v3; // rbx
  char v4; // dl
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+10h] BYREF
  struct LFONT *v8; // [rsp+48h] [rbp+18h] BYREF

  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( !v6[0] )
  {
    EngSetLastError(6u);
    v1 = 0;
    goto LABEL_14;
  }
  v7 = 0LL;
  v1 = 2;
  v2 = RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v6, 0, 2u);
  v3 = v7;
  if ( v2 )
    GreAcquireSemaphore(*(_QWORD *)(v7 + 504));
  if ( v3 )
  {
    v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 120) + 32LL) + 44LL);
    if ( ((v4 + 0x80) & 0xF6) == 0 && v4 != -119 || v4 == -122 )
      goto LABEL_13;
    if ( !v4 && (fFontAssocStatus & 2) != 0
      || v4 == -1 && (fFontAssocStatus & 1) != 0
      || v4 == 2 && (fFontAssocStatus & 4) != 0 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v8, *(struct HLFONT__ **)(v6[0] + 1728LL), 0LL);
      if ( v8 )
      {
        if ( (*((_BYTE *)v8 + 301) & 0x40) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v8);
          v1 = 1;
          goto LABEL_13;
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v8);
      }
    }
  }
  v1 = 0;
LABEL_13:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
LABEL_14:
  if ( v6[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v1;
}
