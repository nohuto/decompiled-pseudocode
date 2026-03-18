/*
 * XREFs of GreHidePointer @ 0x1C0031C10
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C00811E4 (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DDA10 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DDD2C (-xxxSwitchCursors@@YAXHH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0236230 (NtUserShowSystemCursor.c)
 * Callees:
 *     GreMovePointer @ 0x1C00467C0 (GreMovePointer.c)
 *     GreSetPointer @ 0x1C00ACC38 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C014049C (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // ebp
  __int64 HDEV; // rax
  HDEV v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v11; // eax
  struct _CURSINFO *v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v13 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
      GreAcquireSemaphore(ghsemGreLock);
    v14 = *(_QWORD *)(v13 + 64);
    GreAcquireSemaphore(v14);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( a1 )
      {
        if ( (v9 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v4);
            v9 = *(_DWORD *)(v8 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v8 + 12) = v9 | 0x40000000;
        }
      }
      else if ( (v9 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v8 + 12) = v9 & 0xBFFFFFFF;
        v11 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v11 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C032BA84 )
                v12 = gCachedSetPointerState;
              else
                v12 = 0LL;
              GreSetPointer(v12);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
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
