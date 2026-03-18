/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0042CE4
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0042B10 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032FFC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     RtlStringCopyWorkerW @ 0x1C00457A0 (RtlStringCopyWorkerW.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(unsigned int a1, __int64 a2)
{
  int v3; // edi
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rcx
  wchar_t *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  struct DirectComposition::CConnection *DefaultConnection; // r15
  bool v13; // bl
  char v14; // r11
  struct PDEV *i; // rbx
  int v16; // eax
  BOOL v17; // ecx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  unsigned int v21; // eax
  size_t *v22; // r8
  struct tagSIZE v24; // rax
  int v25; // r9d
  struct tagSIZE v26; // rax
  int v27; // r10d
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  struct PDEV *v41; // [rsp+68h] [rbp+38h] BYREF
  __int64 v42; // [rsp+70h] [rbp+40h] BYREF
  __int64 v43; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *(_DWORD *)(a2 + 2040) = 0;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C01A1A90)(
         *(_QWORD *)(a2 + 8),
         *(unsigned int *)(a2 + 16),
         a1);
  v6 = v4;
  if ( v4 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError();
    v32[3] = *(int *)(a2 + 12);
    v32[4] = *(unsigned int *)(a2 + 8);
    v32[5] = *(unsigned int *)(a2 + 16);
    v32[6] = v6;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v6;
  }
  v7 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v7 == -1 )
    return 0LL;
  v8 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_59;
  v9 = *(unsigned int *)(a2 + 8);
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v8 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v9 == *((_DWORD *)v8 + 62) )
    {
      v11 = *((_DWORD *)v8 + 63);
      goto LABEL_8;
    }
LABEL_37:
    v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    if ( !v8 )
      goto LABEL_10;
  }
  if ( (_DWORD)v9 != *((_DWORD *)v8 + 74) )
    goto LABEL_37;
  v11 = *((_DWORD *)v8 + 75);
LABEL_8:
  if ( *(_DWORD *)(a2 + 12) != v11 || *((_DWORD *)v8 + 64) != (_DWORD)v7 )
    goto LABEL_37;
LABEL_10:
  if ( v8 && (*((_QWORD *)v8 + 18) || *((_QWORD *)v8 + 38)) )
  {
    if ( (*((_DWORD *)v8 + 40) & 0x800000) == 0 && !*((_DWORD *)v8 + 74) && !*((_DWORD *)v8 + 75) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v7, v9, 0x800000LL, v5);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( (*((_DWORD *)v8 + 41) & 1) == 0 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      if ( !UserIsCurrentProcessDwm()
        && ((DefaultConnection = DirectComposition::CConnection::GetDefaultConnection()) == 0LL
         || (v13 = PsGetCurrentProcess() == *((_QWORD *)DefaultConnection + 29),
             DirectComposition::CConnection::Release(DefaultConnection),
             !v13))
        || (v14 = 1, gProtocolType) )
      {
        v14 = 0;
      }
      for ( i = gppdevList; i; i = *(struct PDEV **)i )
      {
        v41 = i;
        v16 = *((_DWORD *)i + 10);
        if ( (v16 & 1) != 0 && (v16 & 0x400) == 0 )
        {
          if ( v14 )
          {
            if ( (v16 & 0x20000) == 0 )
            {
              if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v41) )
              {
                if ( *(_DWORD *)(a2 + 1644) == *((_DWORD *)i + 644) && *(_DWORD *)(a2 + 1648) == *((_DWORD *)i + 645) )
                {
                  v24 = PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42);
                  if ( *(_DWORD *)(a2 + 1652) == v25 + *(_DWORD *)v24.cx )
                  {
                    v26 = PDEVOBJ::sizl((PDEVOBJ *)&v41, &v43);
                    if ( *(_DWORD *)(a2 + 1656) == v27 + *(_DWORD *)(*(_QWORD *)&v26 + 4LL) )
                    {
                      v28 = *(_DWORD *)(a2 + 2040) & 0xFFFFFFFE;
                      *(_DWORD *)(a2 + 2040) = v28;
                      if ( *((_DWORD *)i + 644) || (v29 = 2, *((_DWORD *)i + 645)) )
                        v29 = 0;
                      v30 = 0;
                      v31 = v29 | v28 & 0xFFFFFFFD;
                      *(_DWORD *)(a2 + 2040) = v31;
                      if ( *((wchar_t **)i + 321) == v8 )
                        v30 = 4;
                      v21 = v31 & 0xFFFFFFFB | v30;
                      goto LABEL_29;
                    }
                  }
                }
              }
            }
          }
          else if ( *((wchar_t **)i + 321) == v8 )
          {
            v17 = gProtocolType == 0;
            *(_DWORD *)(a2 + 1644) = *((_DWORD *)i + 644);
            *(_DWORD *)(a2 + 1648) = *((_DWORD *)i + 645);
            if ( v17 )
            {
              *(_DWORD *)(a2 + 1652) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42).cx + *((_DWORD *)i + 644);
              v18 = *((_DWORD *)i + 645) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42) + 4LL);
              v19 = *(_DWORD *)(a2 + 2040) & 0xFFFFFFFE;
              *(_DWORD *)(a2 + 1656) = v18;
              *(_DWORD *)(a2 + 2040) = v19;
              if ( *((_DWORD *)i + 644) || (v20 = 2, *((_DWORD *)i + 645)) )
                v20 = 0;
              v21 = v20 | v19 & 0xFFFFFFFD | 4;
            }
            else
            {
              *(_DWORD *)(a2 + 1652) = *((_DWORD *)i + 644) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42).cx;
              v36 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42) + 4LL);
              v37 = *(_DWORD *)(a2 + 16);
              *(_DWORD *)(a2 + 1656) = *((_DWORD *)i + 645) + v36;
              *(_DWORD *)(a2 + 1916) = v37;
              *(_DWORD *)(a2 + 1920) = 0;
              *(_DWORD *)(a2 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42).cx;
              *(_DWORD *)(a2 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42) + 4LL);
              *(_QWORD *)(a2 + 1952) = 0LL;
              *(_DWORD *)(a2 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42).cx;
              v38 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v41, &v42) + 4LL);
              v39 = *(_DWORD *)(a2 + 2040) | 1;
              *(_DWORD *)(a2 + 1964) = v38;
              *(_DWORD *)(a2 + 2040) = v39;
              *(_DWORD *)(a2 + 1932) = 4;
              *(_DWORD *)(a2 + 1936) = 60000;
              *(_DWORD *)(a2 + 1940) = 1000;
              *(_QWORD *)(a2 + 1944) = 1LL;
              if ( *((_DWORD *)i + 644) || (v40 = 2, *((_DWORD *)i + 645)) )
                v40 = 0;
              v21 = v40 | v39 & 0xFFFFFFFD | 4;
            }
LABEL_29:
            *(_DWORD *)(a2 + 2040) = v21;
            break;
          }
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      if ( !i && (!*(_DWORD *)(a2 + 2028) || gProtocolType) )
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
        *(_DWORD *)(a2 + 2040) = v3 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 2040) & 0xFFFFFFF8;
      }
      RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)(a2 + 1660), 0x80uLL, v22, v8 + 32, 0x20uLL);
      return 0LL;
    }
    v33 = WdLogNewEntry5_WdEvent(v7, v9, v10);
    LODWORD(v6) = -1073741130;
    *(_QWORD *)(v33 + 24) = -1073741130LL;
    WdLogEvent5_WdEvent(v33);
    return (unsigned int)v6;
  }
LABEL_59:
  v34 = WdLogNewEntry5_WdWarning(v7);
  WdLogEvent5_WdWarning(v34);
  return 3221226021LL;
}
