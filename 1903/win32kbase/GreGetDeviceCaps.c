/*
 * XREFs of GreGetDeviceCaps @ 0x1C0018CC0
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x1C0018CA0 (NtGdiGetDeviceCaps.c)
 *     xxxSetSysColors @ 0x1C0051FD4 (xxxSetSysColors.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006494C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 *     EnforceColorDependentSettings @ 0x1C0065760 (EnforceColorDependentSettings.c)
 * Callees:
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0011660 (GreAcquireSemaphoreSharedInternal.c)
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C00182C0 (GreReleaseSemaphoreInternal.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     EngMulDiv @ 0x1C003D2E0 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003D578 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C003FC30 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C00BDAB4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0122994 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDeviceCaps(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  DC *v6; // rsi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // r12
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  struct _ENTRY *v11; // rax
  struct _ENTRY *v12; // rcx
  unsigned int v13; // edx
  char v14; // al
  struct OBJECT *EntryObject; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v17; // ax
  int v18; // ebx
  DC *v19; // rbx
  int v21; // r12d
  int v22; // ecx
  int v23; // eax
  int v24; // edi
  __int64 v25; // rcx
  char CurrentThreadDpiAwarenessContext; // r15
  INT v27; // esi
  int v28; // r15d
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int16 v30; // ax
  int v31; // eax
  __int64 v32; // rcx
  DC *v33; // [rsp+20h] [rbp-30h] BYREF
  __int64 v34; // [rsp+28h] [rbp-28h]
  struct _ENTRY *v35; // [rsp+30h] [rbp-20h] BYREF
  int v36; // [rsp+38h] [rbp-18h]
  int v37; // [rsp+3Ch] [rbp-14h]
  int v38; // [rsp+90h] [rbp+40h] BYREF
  __int64 v39; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == -589410304 )
  {
    v5 = *(_QWORD *)(gpDispInfo + 40);
    goto LABEL_45;
  }
  v34 = 0LL;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v38)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v8 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = gpHandleManager;
  v36 = 1;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  v11 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v9 + 2), v10, 0);
  v35 = v11;
  v12 = v11;
  if ( !v11 )
  {
    v36 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_28;
  }
  _m_prefetchw((char *)v11 + 8);
  v37 = *((_DWORD *)v11 + 2);
  v13 = v37 & 0xFFFFFFFE;
  if ( (v37 & 0xFFFFFFFE) != (v38 & 0xFFFFFFFC) && v13 && (!v8 || v13 != *(_DWORD *)(v8 + 8)) )
    goto LABEL_19;
  v14 = *((_BYTE *)v11 + 15);
  if ( (v14 & 0x20) != 0 )
    goto LABEL_19;
  if ( (v14 & 0x40) == 0 )
    goto LABEL_21;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v12 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_19:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v35);
    if ( !v36 )
      goto LABEL_28;
  }
  v12 = v35;
LABEL_21:
  if ( *((_BYTE *)v12 + 14) == 1 && *((_WORD *)v12 + 6) == WORD1(a1) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v35 & 0xFFFFFF);
    v17 = *((_WORD *)v6 + 6);
    if ( !v17 || *((struct _KTHREAD **)v6 + 2) == CurrentThread )
    {
      *((_QWORD *)v6 + 2) = CurrentThread;
      *((_WORD *)v6 + 6) = v17 + 1;
    }
    else
    {
      v6 = 0LL;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v35);
LABEL_28:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v35);
  v33 = v6;
  if ( !v6 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_41;
  }
  if ( HIDWORD(v34) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_33:
      _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
      v33 = 0LL;
      return 0LL;
    }
    v18 = *((_DWORD *)v6 + 524);
    if ( v18 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v6 = v33;
      goto LABEL_33;
    }
  }
  if ( !(unsigned int)XDCOBJ::SaveAttributes((XDCOBJ *)&v33) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v33 + 3);
    v33 = 0LL;
    return 0LL;
  }
  v19 = v33;
  if ( (*((_DWORD *)v33 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v33);
LABEL_41:
    v19 = v33;
  }
  if ( !v19 )
    return 0LL;
  v5 = *((_QWORD *)v19 + 6);
  XDCOBJ::vUnlockFast((XDCOBJ *)&v33);
LABEL_45:
  if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
  {
    v21 = 0;
  }
  else
  {
    v21 = 1;
    GreAcquireSemaphoreSharedInternal((__int64)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  }
  v39 = v5;
  if ( !v5 )
    goto LABEL_119;
  if ( a2 == 88 )
  {
    v4 = *(_DWORD *)(v5 + 2176);
    goto LABEL_104;
  }
  if ( a2 == 90 )
  {
    v4 = *(_DWORD *)(v5 + 2180);
    goto LABEL_104;
  }
  if ( a2 > 0 )
  {
    switch ( a2 )
    {
      case 2:
        v4 = *(_DWORD *)(v5 + 2140);
        break;
      case 4:
        v22 = *(_DWORD *)(v5 + 2144);
        goto LABEL_61;
      case 6:
        v22 = *(_DWORD *)(v5 + 2148);
LABEL_61:
        v4 = (v22 + 500) / 0x3E8u;
        break;
      case 8:
      case 118:
        v4 = *(_DWORD *)(v5 + 2152);
        break;
      case 10:
      case 117:
        v4 = *(_DWORD *)(v5 + 2156);
        break;
      case 12:
        v4 = *(_DWORD *)(v5 + 2160);
        if ( v4 == 15 )
          v4 = 16;
        break;
      case 14:
        v4 = *(_DWORD *)(v5 + 2164);
        break;
      case 16:
        goto LABEL_69;
      case 18:
        v23 = *(_DWORD *)(v5 + 2168);
        if ( v23 == -1 )
LABEL_69:
          v4 = -1;
        else
          v4 = 5 * v23;
        break;
      case 22:
        v4 = PDEVOBJ::cFonts((PDEVOBJ *)&v39);
        break;
      case 24:
        v4 = *(_DWORD *)(v5 + 2168);
        break;
      case 28:
        v4 = 511;
        break;
      case 30:
        v4 = 254;
        break;
      case 32:
        v4 = 255;
        break;
      case 34:
        v24 = *(_DWORD *)(v5 + 2184) | 0x4000;
        if ( !*(_DWORD *)(v5 + 2140) )
          v24 = *(_DWORD *)(v5 + 2184);
        v4 = v24 | 0x1800;
        break;
      case 36:
        v4 = 1;
        break;
      case 38:
        v4 = *(_DWORD *)(v5 + 2172);
        break;
      case 40:
        v4 = *(_DWORD *)(v5 + 2200);
        break;
      case 42:
        v4 = *(_DWORD *)(v5 + 2204);
        break;
      case 44:
        v4 = *(_DWORD *)(v5 + 2208);
        break;
      case 94:
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v25 = *(_QWORD *)(v5 + 2576);
        if ( ((v25 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        {
          v4 = (*(_DWORD *)(v25 + 160) & 8) << 11;
          if ( (*(_DWORD *)(v25 + 160) & 0x2000000) != 0 )
            v4 = ((*(_DWORD *)(v25 + 160) & 8) << 11) | 0x8000;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        break;
      case 104:
        v4 = *(_DWORD *)(v5 + 2240);
        break;
      case 106:
        v4 = 20;
        break;
      case 108:
        v4 = *(_DWORD *)(v5 + 2188) + *(_DWORD *)(v5 + 2192) + *(_DWORD *)(v5 + 2196);
        break;
      case 110:
        v4 = *(_DWORD *)(v5 + 2232);
        break;
      case 111:
        v4 = *(_DWORD *)(v5 + 2236);
        break;
      case 112:
        v4 = *(_DWORD *)(v5 + 2224);
        break;
      case 113:
        v4 = *(_DWORD *)(v5 + 2228);
        break;
      case 116:
        v4 = *(_DWORD *)(v5 + 2384);
        break;
      case 119:
        v4 = *(_DWORD *)(v5 + 2388);
        break;
      case 120:
        v4 = *(_DWORD *)(v5 + 2440);
        break;
      case 121:
        if ( (int)IsGetColorManagementCapsSupported() >= 0 )
          GetColorManagementCapsWrap(v5);
        break;
      default:
        break;
    }
LABEL_100:
    if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
      goto LABEL_119;
LABEL_104:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
    {
      v27 = 96;
      v28 = CurrentThreadDpiAwarenessContext & 0xF;
      if ( v28 )
      {
        v27 = *(_DWORD *)(v5 + 2180);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( CurrentProcessWin32Process )
        {
          v30 = *(_WORD *)(CurrentProcessWin32Process + 284);
          if ( v30 )
            v27 = v30;
        }
      }
      if ( ((a2 - 88) & 0xFFFFFFFD) != 0 )
      {
        if ( v28 != 2 )
        {
          v31 = *(_DWORD *)(v5 + 2464);
          if ( !v31
            && ((*(_DWORD *)(v5 + 40) & 0x20000) == 0
             || (v32 = *(_QWORD *)(*(_QWORD *)(v5 + 1800) + 40LL)) == 0
             || (*(_DWORD *)(v32 + 40) & 1) == 0
             || (v31 = *(_DWORD *)(v32 + 2464)) == 0) )
          {
            v31 = 100;
          }
          v4 = EngMulDiv(v4, v27, (96 * v31 + 50) / 0x64u);
        }
      }
      else
      {
        v4 = v27;
      }
    }
    goto LABEL_119;
  }
  if ( !a2 )
  {
    v4 = *(_DWORD *)(v5 + 2136);
    goto LABEL_119;
  }
  if ( a2 == 0x80000000 )
  {
    v4 = *(_DWORD *)(v5 + 2144);
    goto LABEL_119;
  }
  if ( a2 != -2147483646 )
    goto LABEL_100;
  v4 = *(_DWORD *)(v5 + 2148);
LABEL_119:
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return v4;
}
