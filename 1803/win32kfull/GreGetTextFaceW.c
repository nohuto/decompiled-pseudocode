/*
 * XREFs of GreGetTextFaceW @ 0x1C00834B0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C00833B0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0083A20 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00CEA9C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013D1C8 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, __int64 a2, void *a3, int a4)
{
  int v4; // r13d
  unsigned int v6; // esi
  DC *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  int v14; // edi
  int SessionTextStackStatus; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // di
  struct PFE *v19; // rax
  int v20; // ecx
  const wchar_t *v21; // r15
  __int64 v22; // rcx
  void *v23; // r14
  __int64 v24; // rsi
  const wchar_t *v25; // r14
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rsi
  const wchar_t *v29; // r14
  int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rbx
  int v34; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-15h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-11h] BYREF
  __int64 v37; // [rsp+48h] [rbp-9h] BYREF
  __int64 v38; // [rsp+50h] [rbp-1h] BYREF
  __int64 v39; // [rsp+58h] [rbp+7h] BYREF
  struct _POINTL v40; // [rsp+60h] [rbp+Fh] BYREF
  DC *v41; // [rsp+68h] [rbp+17h] BYREF
  __int64 v42; // [rsp+70h] [rbp+1Fh]
  int v43; // [rsp+C0h] [rbp+6Fh]

  v43 = a2;
  v4 = a2;
  LOBYTE(a2) = 1;
  v42 = 0LL;
  v6 = 0;
  v7 = (DC *)HmgLockEx(a1, a2);
  v41 = v7;
  if ( !v7 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
LABEL_9:
    if ( !v41 )
      goto LABEL_72;
    v38 = *((_QWORD *)v41 + 6);
    if ( (*(_DWORD *)(v38 + 40) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v38);
    LOBYTE(v8) = 10;
    v9 = *(_QWORD *)(*((_QWORD *)v41 + 10) + 176LL);
    v10 = HmgShareLock(v9, v8);
    v37 = v10;
    v11 = v10;
    if ( !v10 )
      goto LABEL_70;
    if ( (*(_DWORD *)(v10 + 28) & 1) != 0 )
    {
      UserGetHDEV();
      v12 = *(_DWORD *)(v11 + 24);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
      v11 = 0LL;
      if ( !v38 )
        goto LABEL_70;
      if ( v12 == 6 )
      {
        v9 = *(_QWORD *)(v38 + 1440);
      }
      else
      {
        v14 = v12 - 4;
        if ( v14 )
        {
          if ( v14 == 1 )
            v9 = *(_QWORD *)(v38 + 1432);
        }
        else
        {
          v9 = *(_QWORD *)(v38 + 1424);
        }
      }
      LOBYTE(v13) = 10;
      v11 = HmgShareLock(v9, v13);
      v37 = v11;
    }
    if ( !v11 )
      goto LABEL_72;
    SessionTextStackStatus = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
    if ( SessionTextStackStatus != 259 )
    {
      if ( SessionTextStackStatus < 0 )
        goto LABEL_70;
      goto LABEL_34;
    }
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    v18 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(v17, v16);
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    if ( !v18 )
    {
      if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
      {
        if ( (unsigned int)UserIsUserCritSecIn()
          || KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) < 0
          || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
        {
          v11 = v37;
          goto LABEL_70;
        }
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        v11 = v37;
        goto LABEL_34;
      }
      v11 = v37;
    }
    KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
LABEL_34:
    v39 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v19 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v37, (struct XDCOBJ *)&v41, &v36, &v40, &v35, 0);
    if ( !v19 )
    {
      SEMOBJ::vUnlock((SEMOBJ *)&v39);
      goto LABEL_71;
    }
    v20 = 0;
    if ( (v35 & 2) == 0 || (v21 = (const wchar_t *)(v11 + 304), !*(_WORD *)(v11 + 304)) )
    {
      v22 = *((_QWORD *)v19 + 4);
      v21 = (const wchar_t *)(v22 + *(int *)(v22 + 8));
      v20 = (*(_DWORD *)(v22 + 48) >> 27) & 1;
    }
    v23 = a3;
    if ( a3 )
    {
      if ( v4 >= 1 )
      {
        v24 = -1LL;
        if ( a4 && v20 )
        {
          v25 = v21;
          v26 = 0;
          if ( *v21 )
          {
            while ( _wcsicmp((const wchar_t *)(v11 + 304), v25) )
            {
              v27 = -1LL;
              do
                ++v27;
              while ( v25[v27] );
              v26 += v27 + 1;
              v25 = &v21[v26];
              if ( !*v25 )
                goto LABEL_51;
            }
          }
          if ( *v25 )
            v21 = v25;
LABEL_51:
          v23 = a3;
        }
        do
          ++v24;
        while ( v21[v24] );
        v6 = v24 + 1;
        if ( v43 < (int)v6 )
          v6 = v43;
        memmove(v23, v21, 2LL * (int)v6);
        *((_WORD *)v23 + (int)(v6 - 1)) = 0;
      }
    }
    else
    {
      v28 = -1LL;
      if ( a4 && v20 )
      {
        v29 = v21;
        v30 = 0;
        if ( *v21 )
        {
          while ( _wcsicmp((const wchar_t *)(v11 + 304), v29) )
          {
            v31 = -1LL;
            do
              ++v31;
            while ( v29[v31] );
            v30 += v31 + 1;
            v29 = &v21[v30];
            if ( !*v29 )
              goto LABEL_66;
          }
        }
        if ( *v29 )
          v21 = v29;
      }
      do
LABEL_66:
        ++v28;
      while ( v21[v28] );
      v6 = v28 + 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
LABEL_70:
    if ( !v11 )
      goto LABEL_72;
LABEL_71:
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
    goto LABEL_72;
  }
  if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v41) )
  {
    if ( (*((_DWORD *)v41 + 132) & 4) != 0 )
      DC::vMarkTransformDirty(v41);
    goto LABEL_9;
  }
  _InterlockedDecrement((volatile signed __int32 *)v41 + 3);
  v41 = 0LL;
LABEL_72:
  if ( v41 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v41);
    v34 = 0;
    v32 = *(_QWORD *)v41;
    HmgDecrementExclusiveReferenceCountEx(v41, HIDWORD(v42), &v34);
    if ( v34 )
      bDeleteDCInternalEx(v32, 0LL);
  }
  return v6;
}
