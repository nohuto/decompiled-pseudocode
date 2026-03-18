/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C00FBED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v3; // rdi
  int v4; // edx
  _QWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  int v9; // [rsp+38h] [rbp-8h]
  struct LFONT *v10; // [rsp+50h] [rbp+10h] BYREF

  if ( !a1 )
    return fFontAssocStatus;
  MDCOBJ::MDCOBJ((MDCOBJ *)v7, a1);
  if ( !v7[0] )
  {
    EngSetLastError(6u);
    v1 = 0;
    goto LABEL_17;
  }
  v9 = 0;
  v8 = 0LL;
  v1 = 2;
  v2 = RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v7, 0, 2u);
  v3 = v8;
  if ( v2 )
    GreAcquireSemaphore(*(_QWORD *)(v8 + 496));
  if ( v3 )
  {
    v4 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v3 + 104) + 32LL) + 44LL);
    if ( v4 == 128 || v4 == 129 || v4 == 136 || v4 == 134 )
      goto LABEL_16;
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 104) + 32LL) + 44LL) && (fFontAssocStatus & 2) != 0
      || v4 == 255 && (fFontAssocStatus & 1) != 0
      || v4 == 2 && (fFontAssocStatus & 4) != 0 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v10, *(struct HLFONT__ **)(v7[0] + 2136LL), 0LL);
      if ( v10 )
      {
        if ( (*((_BYTE *)v10 + 301) & 0x40) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
          v1 = 1;
          goto LABEL_16;
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
      }
    }
  }
  v1 = 0;
LABEL_16:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
LABEL_17:
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v1;
}
