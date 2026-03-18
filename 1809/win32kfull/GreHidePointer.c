/*
 * XREFs of GreHidePointer @ 0x1C00A2650
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C00BD124 (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C9F74 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01CA2D0 (-xxxSwitchCursors@@YAXH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C021DF70 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C0008454 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     GreSetPointer @ 0x1C0018BB8 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x1C00A1790 (GreMovePointer.c)
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
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  struct _CURSINFO *v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v16 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
      GreAcquireSemaphore(ghsemGreLock);
    v17 = *(_QWORD *)(v16 + 64);
    GreAcquireSemaphore(v17);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( a1 )
    {
      if ( CurrentProcessWin32Process )
      {
        v15 = *(_DWORD *)(CurrentProcessWin32Process + 12);
        if ( (v15 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v4);
            v15 = *(_DWORD *)(v7 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v7 + 12) = v15 | 0x40000000;
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
              if ( byte_1C0316A5C )
              {
                v11 = dword_1C0316A58;
                v12 = dword_1C0316A54;
                v13 = dword_1C0316A50;
                v14 = gCachedSetPointerState;
              }
              else
              {
                v11 = 0;
                v12 = 0;
                v13 = 0;
                v14 = 0LL;
              }
              GreSetPointer(v14, v13, v12, v11);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4, (unsigned int)dword_1C0319AB8, dword_1C0319ABC, dword_1C0319AC0);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
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
