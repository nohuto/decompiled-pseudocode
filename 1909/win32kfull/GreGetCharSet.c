/*
 * XREFs of GreGetCharSet @ 0x1C00A8858
 * Callers:
 *     GreGetTextCharsetInfo @ 0x1C00E0F34 (GreGetTextCharsetInfo.c)
 *     NtGdiGetCharSet @ 0x1C00F96E0 (NtGdiGetCharSet.c)
 * Callees:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00497A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0114B4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01233D4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  DC *v1; // r9
  unsigned int v2; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v4; // rdi
  struct LFONT *v6; // rbx
  struct LFONT *v7; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTL v8; // [rsp+38h] [rbp-18h] BYREF
  DC *v9; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+48h] [rbp-8h]
  unsigned int v11; // [rsp+4Ch] [rbp-4h]
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+38h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  v1 = v9;
  if ( v9 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 152LL) & 0x10) == 0 )
    {
LABEL_3:
      v2 = *(_DWORD *)(*((_QWORD *)v1 + 122) + 4LL);
      goto LABEL_4;
    }
    v12 = *((_QWORD *)v9 + 6);
    if ( (*(_DWORD *)(v12 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
      v1 = v9;
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v7, *(struct HLFONT__ **)(*((_QWORD *)v1 + 122) + 296LL), (struct PDEVOBJ *)&v12);
    v6 = v7;
    if ( v7 )
    {
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v7, (struct XDCOBJ *)&v9, &v14, &v8, &v13, 0);
        if ( ghsemPublicPFT )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
          GreReleaseSemaphoreInternal(ghsemPublicPFT);
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
        v1 = v9;
        goto LABEL_3;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  v1 = v9;
  v2 = 0x10000;
LABEL_4:
  if ( v1 )
  {
    if ( v10 && (*((_DWORD *)v1 + 11) & 2) != 0 )
    {
      if ( !v11 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v9);
        if ( UserAttr )
          DC::RestoreAttributes(v9, UserAttr);
        v1 = v9;
      }
      *((_DWORD *)v1 + 11) &= ~2u;
      v10 = 0;
      v1 = v9;
    }
    LODWORD(v12) = 0;
    v4 = *(_QWORD *)v1;
    HmgDecrementExclusiveReferenceCountEx(v1, v11, &v12);
    if ( (_DWORD)v12 )
      bDeleteDCInternalEx(v4, 0LL);
  }
  return v2;
}
