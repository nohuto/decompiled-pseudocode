/*
 * XREFs of GreGetOutlineTextMetricsInternalW @ 0x1C009C2B8
 * Callers:
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C009C170 (NtGdiGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00497A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C009A7D8 (cjIFIMetricsToOTMW.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C009C648 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0114B4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GreGetOutlineTextMetricsInternalW(HDC a1, size_t Size, unsigned int *a3, _BYTE *a4)
{
  size_t v4; // rsi
  unsigned int v7; // r14d
  DC *v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // esi
  DC *v14; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v16; // rbx
  struct LFONT *v18; // rbx
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  DC *v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  unsigned int v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  struct LFONT *v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned int Src[60]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned int)Size;
  v7 = 0;
  if ( !(_DWORD)Size && a3 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v20 = 0LL;
  v21 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  v8 = v20;
  if ( !v20 )
  {
    EngSetLastError(6u);
    goto LABEL_39;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v20 + 122) + 152LL) & 0x10) == 0 )
    goto LABEL_5;
  v25 = 0LL;
  v23 = *((_QWORD *)v20 + 6);
  if ( (*(_DWORD *)(v23 + 40) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v23);
    v8 = v20;
  }
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v24, *(struct HLFONT__ **)(*((_QWORD *)v8 + 122) + 296LL), (struct PDEVOBJ *)&v23);
  v18 = v24;
  if ( !v24 )
  {
LABEL_39:
    LODWORD(v4) = 0;
    goto LABEL_17;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v18);
    goto LABEL_39;
  }
  v26 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v24, (struct XDCOBJ *)&v20, v22, &v25, &v19, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v18);
LABEL_5:
  *(_QWORD *)v22 = 0LL;
  v9 = RFONTOBJ::bInit((RFONTOBJ *)v22, (struct XDCOBJ *)&v20, 0, 2u);
  v10 = *(_QWORD *)v22;
  if ( v9 )
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v22 + 504LL));
  if ( !v10 || (v11 = *(_QWORD *)(v10 + 120)) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_35;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 96) + 3080LL) )
  {
    *(_DWORD *)a4 = cjOTMAWSize(*(struct _IFIMETRICS **)(v11 + 32), &v19);
    if ( a3 )
    {
      if ( (unsigned int)v4 > 0xE8 )
      {
        if ( (unsigned int)v4 >= v19 )
        {
          v12 = cjIFIMetricsToOTMW(
                  a4,
                  a3,
                  (struct RFONTOBJ *)v22,
                  (struct DCOBJ *)&v20,
                  *(struct _IFIMETRICS **)(v11 + 32),
                  1);
          v13 = v4 - v12;
          v7 = v12;
          if ( v13 > 0 )
            memset((char *)a3 + v12, 0, v13);
        }
        goto LABEL_15;
      }
      memset(Src, 0, 0xE8uLL);
      if ( (unsigned int)cjIFIMetricsToOTMW(
                           a4,
                           Src,
                           (struct RFONTOBJ *)v22,
                           (struct DCOBJ *)&v20,
                           *(struct _IFIMETRICS **)(v11 + 32),
                           0) )
      {
        memmove(a3, Src, v4);
        goto LABEL_16;
      }
LABEL_35:
      LODWORD(v4) = 0;
      goto LABEL_16;
    }
    v7 = v19;
  }
LABEL_15:
  LODWORD(v4) = v7;
LABEL_16:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v22);
LABEL_17:
  v14 = v20;
  if ( v20 )
  {
    if ( (_DWORD)v21 && (*((_DWORD *)v20 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v21) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v20);
        v14 = v20;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v20, UserAttr);
          v14 = v20;
        }
      }
      *((_DWORD *)v14 + 11) &= ~2u;
      v14 = v20;
      LODWORD(v21) = 0;
    }
    v19 = 0;
    v16 = *(_QWORD *)v14;
    HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v21), &v19);
    if ( v19 )
      bDeleteDCInternalEx(v16, 0LL);
  }
  return (unsigned int)v4;
}
