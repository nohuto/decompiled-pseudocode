/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0014A58
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     DCompositionIsShellProcess @ 0x1C0013398 (DCompositionIsShellProcess.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00137F0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     RtlStringCopyWorkerW @ 0x1C0013D60 (RtlStringCopyWorkerW.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(unsigned int a1, __int64 a2)
{
  int v3; // edi
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  wchar_t *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  char v11; // r11
  struct PDEV *i; // r14
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // edx
  unsigned int v18; // eax
  size_t *v19; // r8
  int IsWddmConnectedSession; // eax
  struct tagSIZE v22; // rax
  int v23; // r9d
  struct tagSIZE v24; // rax
  int v25; // r10d
  unsigned int v26; // ecx
  int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct PDEV *v39; // [rsp+68h] [rbp+38h] BYREF
  __int64 v40; // [rsp+70h] [rbp+40h] BYREF
  __int64 v41; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *(_DWORD *)(a2 + 2044) = 0;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C01CD930)(
         *(_QWORD *)(a2 + 8),
         *(unsigned int *)(a2 + 16),
         a1,
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError();
    v35[3] = *(int *)(a2 + 12);
    v35[4] = *(unsigned int *)(a2 + 8);
    v35[5] = *(unsigned int *)(a2 + 16);
    v35[6] = v5;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v5;
  }
  v6 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v6 == -1 )
    return 0LL;
  v7 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_69;
  v8 = *(unsigned int *)(a2 + 8);
  v9 = 0x800000LL;
  while ( (*((_DWORD *)v7 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v8 == *((_DWORD *)v7 + 62) )
    {
      v10 = *((_DWORD *)v7 + 63);
      goto LABEL_8;
    }
LABEL_36:
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
    if ( !v7 )
      goto LABEL_10;
  }
  if ( (_DWORD)v8 != *((_DWORD *)v7 + 74) )
    goto LABEL_36;
  v10 = *((_DWORD *)v7 + 75);
LABEL_8:
  if ( *(_DWORD *)(a2 + 12) != v10 || *((_DWORD *)v7 + 64) != (_DWORD)v6 )
    goto LABEL_36;
LABEL_10:
  if ( v7 && (*((_QWORD *)v7 + 18) || *((_QWORD *)v7 + 38)) )
  {
    if ( (*((_DWORD *)v7 + 40) & 0x800000) == 0 && !*((_DWORD *)v7 + 74) && !*((_DWORD *)v7 + 75) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v6, v8, 0x800000LL);
      WdLogEvent5_WdAssertion(v36);
    }
    if ( (*((_DWORD *)v7 + 41) & 1) != 0 )
    {
      v37 = WdLogNewEntry5_WdEvent(v6, v8, v9);
      *(_QWORD *)(v37 + 24) = -1073741130LL;
      WdLogEvent5_WdEvent(v37);
      return 3221226166LL;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    if ( !(unsigned int)UserIsCurrentProcessDwm() && !DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v11 = 1, !IsWddmConnectedSession) )
    {
      v11 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v39 = i;
      v13 = *((_DWORD *)i + 10);
      if ( (v13 & 1) != 0 && (v13 & 0x400) == 0 )
      {
        if ( v11 )
        {
          if ( (v13 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v39) )
            {
              if ( *(_DWORD *)(a2 + 1644) == *((_DWORD *)i + 646) && *(_DWORD *)(a2 + 1648) == *((_DWORD *)i + 647) )
              {
                v22 = PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40);
                if ( *(_DWORD *)(a2 + 1652) == v23 + *(_DWORD *)v22.cx )
                {
                  v24 = PDEVOBJ::sizl((PDEVOBJ *)&v39, &v41);
                  if ( *(_DWORD *)(a2 + 1656) == v25 + *(_DWORD *)(*(_QWORD *)&v24 + 4LL) )
                  {
                    v26 = *(_DWORD *)(a2 + 2044) & 0xFFFFFFFE;
                    *(_DWORD *)(a2 + 2044) = v26;
                    if ( *((_DWORD *)i + 646) || (v27 = 2, *((_DWORD *)i + 647)) )
                      v27 = 0;
                    v28 = 0;
                    v29 = v27 | v26 & 0xFFFFFFFD;
                    *(_DWORD *)(a2 + 2044) = v29;
                    if ( *((wchar_t **)i + 322) == v7 )
                      v28 = 4;
                    v18 = v29 & 0xFFFFFFFB | v28;
                    goto LABEL_28;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 322) == v7 )
        {
          v14 = UserIsWddmConnectedSession();
          *(_DWORD *)(a2 + 1644) = *((_DWORD *)i + 646);
          *(_DWORD *)(a2 + 1648) = *((_DWORD *)i + 647);
          if ( v14 )
          {
            *(_DWORD *)(a2 + 1652) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40).cx + *((_DWORD *)i + 646);
            v15 = *((_DWORD *)i + 647) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40) + 4LL);
            v16 = *(_DWORD *)(a2 + 2044) & 0xFFFFFFFE;
            *(_DWORD *)(a2 + 1656) = v15;
            *(_DWORD *)(a2 + 2044) = v16;
            if ( *((_DWORD *)i + 646) || (v17 = 2, *((_DWORD *)i + 647)) )
              v17 = 0;
            v18 = v17 | v16 & 0xFFFFFFFD | 4;
          }
          else
          {
            *(_DWORD *)(a2 + 1652) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40).cx + *((_DWORD *)i + 646);
            v30 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40) + 4LL);
            v31 = *(_DWORD *)(a2 + 16);
            *(_DWORD *)(a2 + 1656) = *((_DWORD *)i + 647) + v30;
            *(_DWORD *)(a2 + 1916) = v31;
            *(_DWORD *)(a2 + 1920) = 0;
            *(_DWORD *)(a2 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40).cx;
            *(_DWORD *)(a2 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40) + 4LL);
            *(_QWORD *)(a2 + 1952) = 0LL;
            *(_DWORD *)(a2 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40).cx;
            v32 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v39, &v40) + 4LL);
            v33 = *(_DWORD *)(a2 + 2044) | 1;
            *(_DWORD *)(a2 + 1964) = v32;
            *(_DWORD *)(a2 + 2044) = v33;
            *(_DWORD *)(a2 + 1932) = 4;
            *(_DWORD *)(a2 + 1936) = 60000;
            *(_DWORD *)(a2 + 1940) = 1000;
            *(_QWORD *)(a2 + 1944) = 1LL;
            if ( *((_DWORD *)i + 646) || (v34 = 2, *((_DWORD *)i + 647)) )
              v34 = 0;
            v18 = v34 | v33 & 0xFFFFFFFD | 4;
          }
LABEL_28:
          *(_DWORD *)(a2 + 2044) = v18;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( !i && (!*(_DWORD *)(a2 + 2028) || !(unsigned int)UserIsWddmConnectedSession()) )
    {
      *(_QWORD *)(a2 + 1924) = 0LL;
      *(_QWORD *)(a2 + 1932) = 5LL;
      *(_DWORD *)(a2 + 1940) = 1;
      *(_QWORD *)(a2 + 1944) = 1LL;
      *(_QWORD *)(a2 + 1644) = 0LL;
      *(_QWORD *)(a2 + 1652) = 0LL;
      *(_QWORD *)(a2 + 1952) = 0LL;
      *(_QWORD *)(a2 + 1960) = 0LL;
      LOBYTE(v3) = gProtocolType != 0;
      *(_DWORD *)(a2 + 2044) = v3 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 2044) & 0xFFFFFFF8;
    }
    RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)(a2 + 1660), 0x80uLL, v19, v7 + 32, 0x20uLL);
    return 0LL;
  }
LABEL_69:
  v38 = WdLogNewEntry5_WdWarning(v6);
  WdLogEvent5_WdWarning(v38);
  return 3221226021LL;
}
