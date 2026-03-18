/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00394CC
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BC484 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003A6DC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DCompositionIsShellProcess @ 0x1C003AB88 (DCompositionIsShellProcess.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1)
{
  int v1; // r12d
  int v3; // r15d
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  wchar_t *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // r11
  struct PDEV *i; // rsi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _WORD *v22; // rcx
  __int64 v23; // rdx
  char *v24; // rdi
  __int16 v25; // ax
  _WORD *v26; // rax
  int IsWddmConnectedSession; // eax
  struct tagSIZE v29; // rax
  int v30; // r9d
  struct tagSIZE v31; // rax
  int v32; // r10d
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct PDEV *v48; // [rsp+70h] [rbp+40h] BYREF

  v1 = *a1;
  v3 = 0;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    LODWORD(v6) = -1073741789;
    if ( v1 == -21 )
    {
      v3 = 1144084225;
      v42 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
      v42[3] = (unsigned int)a1[1];
      v42[4] = 2056LL;
      v42[5] = 1144084225LL;
      goto LABEL_72;
    }
    return (unsigned int)v6;
  }
  v4 = (unsigned int)a1[4];
  a1[513] = 0;
  v5 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, int *))qword_1C0212110)(*((_QWORD *)a1 + 1), v4, 0LL, a1);
  v6 = v5;
  if ( v5 < 0 && v1 == -21 )
  {
    v43 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v43[3] = a1[3];
    v43[4] = (unsigned int)a1[2];
    v43[5] = (unsigned int)a1[4];
    v43[6] = v6;
    WdLogEvent5_WdError(v43);
    v3 = a1[506];
    goto LABEL_44;
  }
  v7 = (unsigned int)a1[4];
  if ( (_DWORD)v7 == -1 )
    goto LABEL_44;
  v8 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_87;
  v9 = (unsigned int)a1[2];
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v8 + 40) & 0x800000) != 0 )
  {
    if ( (_DWORD)v9 == *((_DWORD *)v8 + 62) )
    {
      v11 = *((_DWORD *)v8 + 63);
      goto LABEL_9;
    }
LABEL_25:
    v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    if ( !v8 )
      goto LABEL_11;
  }
  if ( (_DWORD)v9 != *((_DWORD *)v8 + 74) )
    goto LABEL_25;
  v11 = *((_DWORD *)v8 + 75);
LABEL_9:
  if ( a1[3] != v11 || *((_DWORD *)v8 + 64) != (_DWORD)v7 )
    goto LABEL_25;
LABEL_11:
  if ( v8 && (*((_QWORD *)v8 + 18) || *((_QWORD *)v8 + 38)) )
  {
    if ( (*((_DWORD *)v8 + 40) & 0x800000) == 0 && !*((_DWORD *)v8 + 74) && !*((_DWORD *)v8 + 75) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v7, v9, 0x800000LL);
      WdLogEvent5_WdAssertion(v44);
    }
    if ( (*((_DWORD *)v8 + 41) & 1) != 0 )
    {
      LODWORD(v6) = -1073741130;
      if ( v1 == -21 )
      {
        v3 = 1144084228;
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v7, v9, v10);
        v45[3] = a1[3];
        v45[4] = (unsigned int)a1[2];
        v45[5] = (unsigned int)a1[4];
        v45[6] = *((unsigned int *)v8 + 40);
        v45[7] = 1144084228LL;
        WdLogEvent5_WdError(v45);
      }
      else
      {
        v46 = WdLogNewEntry5_WdEvent(v7, v9, v10);
        *(_QWORD *)(v46 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v46);
      }
      goto LABEL_79;
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    if ( !UserIsCurrentProcessDwm(v13, v12) && !(unsigned __int8)DCompositionIsShellProcess()
      || (IsWddmConnectedSession = UserIsWddmConnectedSession(), v14 = 1, !IsWddmConnectedSession) )
    {
      v14 = 0;
    }
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      v48 = i;
      v16 = *((_DWORD *)i + 10);
      if ( (v16 & 1) != 0 && (v16 & 0x400) == 0 )
      {
        if ( v14 )
        {
          if ( (v16 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v48) )
            {
              if ( a1[411] == *((_DWORD *)i + 646) && a1[412] == *((_DWORD *)i + 647) )
              {
                v29 = PDEVOBJ::sizl((PDEVOBJ *)&v48);
                if ( a1[413] == v30 + *(_DWORD *)v29.cx )
                {
                  v31 = PDEVOBJ::sizl((PDEVOBJ *)&v48);
                  if ( a1[414] == v32 + *(_DWORD *)(*(_QWORD *)&v31 + 4LL) )
                  {
                    v33 = a1[513] & 0xFFFFFFFE;
                    a1[513] = v33;
                    if ( *((_DWORD *)i + 646) || (v34 = 2, *((_DWORD *)i + 647)) )
                      v34 = 0;
                    v35 = v34 | v33 & 0xFFFFFFFD;
                    v36 = 0;
                    a1[513] = v35;
                    if ( *((wchar_t **)i + 322) == v8 )
                      v36 = 4;
                    v21 = v35 & 0xFFFFFFFB | v36;
                    goto LABEL_31;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 322) == v8 )
        {
          v17 = UserIsWddmConnectedSession();
          a1[411] = *((_DWORD *)i + 646);
          a1[412] = *((_DWORD *)i + 647);
          if ( v17 )
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            v18 = *((_DWORD *)i + 647) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            v19 = a1[513] & 0xFFFFFFFE;
            a1[414] = v18;
            a1[513] = v19;
            if ( *((_DWORD *)i + 646) || (v20 = 2, *((_DWORD *)i + 647)) )
              v20 = 0;
            v21 = v20 | v19 & 0xFFFFFFFD | 4;
          }
          else
          {
            a1[413] = *((_DWORD *)i + 646) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            v37 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            v38 = a1[4];
            a1[414] = *((_DWORD *)i + 647) + v37;
            a1[479] = v38;
            a1[480] = 0;
            a1[481] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            a1[482] = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            *((_QWORD *)a1 + 244) = 0LL;
            a1[490] = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v48).cx;
            v39 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v48) + 4LL);
            v40 = a1[513] | 1;
            a1[491] = v39;
            a1[513] = v40;
            a1[483] = 4;
            a1[484] = 60000;
            a1[485] = 1000;
            *((_QWORD *)a1 + 243) = 1LL;
            if ( *((_DWORD *)i + 646) || (v41 = 2, *((_DWORD *)i + 647)) )
              v41 = 0;
            v21 = v41 | v40 & 0xFFFFFFFD | 4;
          }
LABEL_31:
          a1[513] = v21;
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
    if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession()) )
    {
      *(_QWORD *)(a1 + 481) = 0LL;
      *(_QWORD *)(a1 + 483) = 5LL;
      a1[485] = 1;
      *((_QWORD *)a1 + 243) = 1LL;
      *(_QWORD *)(a1 + 411) = 0LL;
      *(_QWORD *)(a1 + 413) = 0LL;
      *((_QWORD *)a1 + 244) = 0LL;
      *((_QWORD *)a1 + 245) = 0LL;
      a1[513] = (gProtocolType != 0) | a1[513] & 0xFFFFFFF8;
    }
    v22 = a1 + 415;
    v23 = 128LL;
    v24 = (char *)((char *)v8 - (char *)(a1 + 415));
    do
    {
      if ( v23 == 96 )
        break;
      v25 = *(_WORD *)((char *)v22 + (_QWORD)v24 + 64);
      if ( !v25 )
        break;
      *v22++ = v25;
      --v23;
    }
    while ( v23 );
    v26 = v22 - 1;
    if ( v23 )
      v26 = v22;
    *v26 = 0;
LABEL_44:
    if ( (int)v6 >= 0 )
      return 0LL;
LABEL_79:
    if ( v1 == -21 )
      goto LABEL_80;
    return (unsigned int)v6;
  }
LABEL_87:
  LODWORD(v6) = -1073741275;
  if ( v1 != -21 )
  {
    v47 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v47);
    goto LABEL_44;
  }
  if ( v8 )
  {
    v3 = 1144084227;
    v42 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v42[3] = a1[3];
    v42[4] = (unsigned int)a1[2];
    v42[5] = (unsigned int)a1[4];
    v42[6] = *((unsigned int *)v8 + 40);
    v42[7] = 1144084227LL;
  }
  else
  {
    v3 = 1144084226;
    v42 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdError)();
    v42[3] = a1[3];
    v42[4] = (unsigned int)a1[2];
    v42[5] = (unsigned int)a1[4];
    v42[6] = 1144084226LL;
  }
LABEL_72:
  WdLogEvent5_WdError(v42);
LABEL_80:
  a1[506] = v3;
  return (unsigned int)v6;
}
