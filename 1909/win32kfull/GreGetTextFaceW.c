/*
 * XREFs of GreGetTextFaceW @ 0x1C00491C0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C00490B0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00497A0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0114B4C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012397C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, __int64 a2, void *a3, int a4)
{
  int v6; // r14d
  __int64 v7; // rdx
  DC *v8; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rdx
  int v15; // edi
  bool v16; // di
  struct PFE *v17; // rax
  int v18; // ecx
  const wchar_t *v19; // r15
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // r14
  int v23; // r12d
  const wchar_t *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r14
  const wchar_t *v27; // rsi
  int v28; // r12d
  __int64 v29; // rax
  struct _DC_ATTR *v30; // rax
  __int64 v31; // rbx
  int v33; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-15h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-11h] BYREF
  __int64 v36; // [rsp+40h] [rbp-9h] BYREF
  __int64 v37; // [rsp+48h] [rbp-1h] BYREF
  struct _POINTL v38; // [rsp+50h] [rbp+7h] BYREF
  __int64 v39; // [rsp+58h] [rbp+Fh] BYREF
  DC *v40; // [rsp+60h] [rbp+17h] BYREF
  __int64 v41; // [rsp+68h] [rbp+1Fh]
  int v42; // [rsp+B8h] [rbp+6Fh]

  v42 = a2;
  LOBYTE(a2) = 1;
  v41 = 0LL;
  v6 = 0;
  v40 = (DC *)HmgLockEx(a1, a2, 0LL);
  v8 = v40;
  if ( !v40 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_12;
  }
  if ( (*((_DWORD *)v40 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v40);
    if ( UserAttr && !DC::SaveAttributes(v40, UserAttr) )
    {
      v8 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)v40 + 3);
      v40 = 0LL;
      goto LABEL_80;
    }
    *((_DWORD *)v40 + 11) |= 2u;
    v8 = v40;
    LODWORD(v41) = 1;
  }
  if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v8);
LABEL_12:
    v8 = v40;
  }
  if ( !v8 )
    goto LABEL_80;
  v37 = *((_QWORD *)v8 + 6);
  if ( (*(_DWORD *)(v37 + 40) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v37);
    v8 = v40;
  }
  LOBYTE(v7) = 10;
  v10 = *(_QWORD *)(*((_QWORD *)v8 + 122) + 296LL);
  v11 = HmgShareLock(v10, v7);
  v36 = v11;
  v12 = v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 28) & 1) != 0 )
    {
      UserGetHDEV();
      v13 = *(_DWORD *)(v12 + 24);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
      v12 = 0LL;
      if ( !v37 )
        goto LABEL_77;
      if ( v13 == 6 )
      {
        v10 = *(_QWORD *)(v37 + 1448);
      }
      else
      {
        v15 = v13 - 4;
        if ( v15 )
        {
          if ( v15 == 1 )
            v10 = *(_QWORD *)(v37 + 1440);
        }
        else
        {
          v10 = *(_QWORD *)(v37 + 1432);
        }
      }
      LOBYTE(v14) = 10;
      v12 = HmgShareLock(v10, v14);
      v36 = v12;
    }
    if ( !v12 )
      goto LABEL_79;
    if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
      && UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
    {
      if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
        && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
      {
        goto LABEL_40;
      }
      v16 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
      if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
        goto LABEL_40;
      if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
      {
LABEL_39:
        v12 = v36;
LABEL_40:
        v39 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v38 = 0LL;
        v17 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v36, (struct XDCOBJ *)&v40, &v35, &v38, &v34, 0);
        if ( !v17 )
        {
          SEMOBJ::vUnlock((SEMOBJ *)&v39);
LABEL_78:
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
          goto LABEL_79;
        }
        v18 = 0;
        if ( (v34 & 2) == 0 || (v19 = (const wchar_t *)(v12 + 304), !*(_WORD *)(v12 + 304)) )
        {
          v20 = *((_QWORD *)v17 + 4);
          v19 = (const wchar_t *)(v20 + *(int *)(v20 + 8));
          v18 = (*(_DWORD *)(v20 + 48) >> 27) & 1;
        }
        if ( a3 )
        {
          v21 = v42;
          if ( v42 >= 1 )
          {
            v22 = -1LL;
            if ( a4 && v18 )
            {
              v23 = 0;
              v24 = v19;
              if ( *v19 )
              {
                while ( _wcsicmp((const wchar_t *)(v12 + 304), v24) )
                {
                  v25 = -1LL;
                  do
                    ++v25;
                  while ( v24[v25] );
                  v23 += v25 + 1;
                  v24 = &v19[v23];
                  if ( !*v24 )
                    goto LABEL_58;
                }
              }
              if ( *v24 )
                v19 = v24;
LABEL_58:
              v21 = v42;
            }
            do
              ++v22;
            while ( v19[v22] );
            v6 = v22 + 1;
            if ( v21 < v6 )
              v6 = v21;
            memmove(a3, v19, 2LL * v6);
            *((_WORD *)a3 + v6 - 1) = 0;
          }
        }
        else
        {
          v26 = -1LL;
          if ( a4 && v18 )
          {
            v27 = v19;
            v28 = 0;
            if ( *v19 )
            {
              while ( _wcsicmp((const wchar_t *)(v12 + 304), v27) )
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( v27[v29] );
                v28 += v29 + 1;
                v27 = &v19[v28];
                if ( !*v27 )
                  goto LABEL_73;
              }
            }
            if ( *v27 )
              v19 = v27;
          }
          do
LABEL_73:
            ++v26;
          while ( v19[v26] );
          v6 = v26 + 1;
        }
        if ( ghsemPublicPFT )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
          GreReleaseSemaphoreInternal(ghsemPublicPFT);
        }
        goto LABEL_77;
      }
      if ( (v16 || !(unsigned int)UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_39;
      }
      v12 = v36;
    }
  }
LABEL_77:
  if ( v12 )
    goto LABEL_78;
LABEL_79:
  v8 = v40;
LABEL_80:
  if ( v8 )
  {
    if ( (_DWORD)v41 && (*((_DWORD *)v8 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v41) )
      {
        v30 = XDCOBJ::GetUserAttr((XDCOBJ *)&v40);
        if ( v30 )
          DC::RestoreAttributes(v40, v30);
        v8 = v40;
      }
      *((_DWORD *)v8 + 11) &= ~2u;
      v8 = v40;
      LODWORD(v41) = 0;
    }
    v33 = 0;
    v31 = *(_QWORD *)v8;
    HmgDecrementExclusiveReferenceCountEx(v8, HIDWORD(v41), &v33);
    if ( v33 )
      bDeleteDCInternalEx(v31, 0LL);
  }
  return (unsigned int)v6;
}
