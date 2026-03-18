/*
 * XREFs of GreHidePointer @ 0x1C013AA70
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C013AA38 (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD890 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DDBAC (-xxxSwitchCursors@@YAXHH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0235C10 (NtUserShowSystemCursor.c)
 * Callees:
 *     GreSetPointer @ 0x1C004DA58 (GreSetPointer.c)
 *     GreMovePointer @ 0x1C008B190 (GreMovePointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C011A9AC (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
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
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rdx
  struct _CURSINFO *v15; // rcx
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
              if ( byte_1C0329A7C )
              {
                v12 = dword_1C0329A78;
                v13 = (unsigned int)dword_1C0329A74;
                v14 = (unsigned int)dword_1C0329A70;
                v15 = gCachedSetPointerState;
              }
              else
              {
                v12 = 0;
                v13 = 0LL;
                v14 = 0LL;
                v15 = 0LL;
              }
              GreSetPointer(v15, v14, v13, v12);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4, dword_1C032C018, dword_1C032C01C, dword_1C032C020);
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
