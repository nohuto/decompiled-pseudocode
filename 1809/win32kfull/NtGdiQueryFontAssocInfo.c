/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C0112710
 * Callers:
 *     <none>
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rdi
  char v5; // dl
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h]
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-20h] BYREF
  struct LFONT *v10; // [rsp+70h] [rbp+10h] BYREF

  v1 = 0;
  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( v8[0] )
  {
    v7 = 0;
    v6 = 0LL;
    v3 = RFONTOBJ::bInit((RFONTOBJ *)&v6, (struct XDCOBJ *)v8, 0, 2u);
    v4 = v6;
    if ( v3 )
      GreAcquireSemaphore(*(_QWORD *)(v6 + 504));
    if ( v4 )
    {
      v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 32LL) + 44LL);
      if ( (((v5 + 0x80) & 0xF6) != 0 || v5 == -119) && v5 != -122 )
      {
        if ( !v5 && (fFontAssocStatus & 2) != 0
          || v5 == -1 && (fFontAssocStatus & 1) != 0
          || v5 == 2 && (fFontAssocStatus & 4) != 0 )
        {
          LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v10, *(struct HLFONT__ **)(v8[0] + 1752LL), 0LL);
          if ( v10 )
          {
            if ( (*((_BYTE *)v10 + 301) & 0x40) != 0 )
            {
              DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
            }
            else
            {
              DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
              v1 = 1;
            }
          }
        }
      }
      else
      {
        v1 = 2;
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
  return v1;
}
