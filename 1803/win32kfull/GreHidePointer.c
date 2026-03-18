/*
 * XREFs of GreHidePointer @ 0x1C000A6D0
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C000A69C (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A7E90 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01A81B8 (-xxxSwitchCursors@@YAXH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C01F64B0 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C0007B54 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreSetPointer @ 0x1C0020CE4 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // ebp
  __int64 HDEV; // rax
  HDEV v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // edx
  struct _CURSINFO *v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v15 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
      GreAcquireSemaphore(ghsemGreLock);
    v16 = *(_QWORD *)(v15 + 56);
    GreAcquireSemaphore(v16);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( a1 )
    {
      if ( CurrentProcessWin32Process )
      {
        v14 = *(_DWORD *)(CurrentProcessWin32Process + 12);
        if ( (v14 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v4);
            v14 = *(_DWORD *)(v7 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v7 + 12) = v14 | 0x40000000;
        }
      }
    }
    else if ( CurrentProcessWin32Process )
    {
      v8 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v8 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v7 + 12) = v8 & 0xBFFFFFFF;
        v10 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v10 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C03263BC )
              {
                v11 = dword_1C03263B4;
                v12 = dword_1C03263B0;
                v13 = gCachedSetPointerState;
              }
              else
              {
                v11 = 0;
                v12 = 0;
                v13 = 0LL;
              }
              GreSetPointer(v13, v12, v11);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4, dword_1C032AE60, dword_1C032AE64, dword_1C032AE68);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
  }
  else
  {
    v2 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v2;
}
