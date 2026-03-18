/*
 * XREFs of GreGetTextFaceW @ 0x1C0026ED0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C0026DC0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0027330 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CC74 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C015F1B0 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall GreGetTextFaceW(HDC a1, int a2, void *a3, int a4)
{
  unsigned int v4; // r12d
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  int v14; // edi
  int v15; // edi
  struct PFE *v16; // rax
  int v17; // ecx
  const wchar_t *v18; // r15
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // r14
  const wchar_t *v22; // rsi
  int v23; // r13d
  const wchar_t *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  const wchar_t *v27; // rsi
  __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-21h] BYREF
  __int64 v34; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v36[32]; // [rsp+68h] [rbp-1h] BYREF
  struct _POINTL v37; // [rsp+88h] [rbp+1Fh] BYREF

  v4 = 0;
  v35[0] = 0LL;
  v6 = 0;
  v35[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v36);
  XDCOBJ::vLock((XDCOBJ *)v35, a1);
  if ( !v35[0] )
    goto LABEL_68;
  v32 = *(_QWORD **)(v35[0] + 48LL);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v32) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v32);
  LOBYTE(v8) = 10;
  v9 = *(_QWORD *)(*(_QWORD *)(v35[0] + 976LL) + 296LL);
  v10 = HmgShareLock(v9, v8);
  v30 = v10;
  v11 = v10;
  if ( !v10 )
    goto LABEL_66;
  if ( (*(_DWORD *)(v10 + 28) & 1) != 0 )
  {
    UserGetHDEV();
    v12 = *(_DWORD *)(v11 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
    v11 = 0LL;
    if ( !v32 )
      goto LABEL_66;
    v14 = v12 - 4;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          v9 = v32[181];
      }
      else
      {
        v9 = v32[180];
      }
    }
    else
    {
      v9 = v32[179];
    }
    LOBYTE(v13) = 10;
    v11 = HmgShareLock(v9, v13);
    v30 = v11;
  }
  if ( !v11 )
  {
LABEL_68:
    v4 = v6;
    goto LABEL_69;
  }
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
LABEL_66:
    if ( v11 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
    goto LABEL_68;
  }
  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
      {
        if ( !(unsigned int)UserIsUserCritSecIn()
          && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
          && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
        {
          KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
          v11 = v30;
          goto LABEL_29;
        }
        v11 = v30;
        goto LABEL_66;
      }
      v11 = v30;
    }
    KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
  }
LABEL_29:
  v34 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v16 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v30, (struct XDCOBJ *)v35, &v33, &v37, &v31, 0);
  if ( v16 )
  {
    v17 = 0;
    if ( (v31 & 2) == 0 || (v18 = (const wchar_t *)(v11 + 304), !*(_WORD *)(v11 + 304)) )
    {
      v19 = *((_QWORD *)v16 + 4);
      v18 = (const wchar_t *)(v19 + *(int *)(v19 + 8));
      v17 = (*(_DWORD *)(v19 + 48) >> 27) & 1;
    }
    if ( a3 )
    {
      v20 = a2;
      if ( a2 >= 1 )
      {
        v21 = -1LL;
        if ( a4 && v17 )
        {
          v22 = v18;
          v23 = 0;
          if ( *v18 )
          {
            v24 = (const wchar_t *)(v11 + 304);
            while ( _wcsicmp(v24, v22) )
            {
              v25 = -1LL;
              do
                ++v25;
              while ( v22[v25] );
              v23 += v25 + 1;
              v22 = &v18[v23];
              v24 = (const wchar_t *)(v11 + 304);
              if ( !*v22 )
                goto LABEL_47;
            }
          }
          if ( *v22 )
            v18 = v22;
LABEL_47:
          v20 = a2;
        }
        do
          ++v21;
        while ( v18[v21] );
        v6 = v21 + 1;
        if ( v20 < v6 )
          v6 = v20;
        memmove(a3, v18, 2LL * v6);
        *((_WORD *)a3 + v6 - 1) = 0;
      }
    }
    else
    {
      v26 = -1LL;
      if ( a4 && v17 )
      {
        v27 = v18;
        if ( *v18 )
        {
          while ( _wcsicmp((const wchar_t *)(v11 + 304), v27) )
          {
            v28 = -1LL;
            do
              ++v28;
            while ( v27[v28] );
            v4 += v28 + 1;
            v27 = &v18[v4];
            if ( !*v27 )
              goto LABEL_62;
          }
        }
        if ( *v27 )
          v18 = v27;
      }
      do
LABEL_62:
        ++v26;
      while ( v18[v26] );
      v6 = v26 + 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    goto LABEL_66;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
LABEL_69:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v35);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v36);
  return v4;
}
