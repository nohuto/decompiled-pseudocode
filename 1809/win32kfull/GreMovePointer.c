/*
 * XREFs of GreMovePointer @ 0x1C00A1790
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreHidePointer @ 0x1C00A2650 (GreHidePointer.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C012F6A0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     HideMouseTrails @ 0x1C01C4050 (HideMouseTrails.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C9F74 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00A1BB8 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreMovePointer(HDEV a1, __int64 a2, int a3, int a4)
{
  int v6; // r14d
  int v7; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rsi
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // r13
  HDEV v13; // rax
  int v14; // r9d
  __int64 **v15; // rcx
  int v16; // esi
  __int64 *v17; // rdi
  __int64 v18; // rbx
  int v19; // r9d
  int v20; // r8d
  int v21; // edx
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-20h]
  __int64 v24; // [rsp+28h] [rbp-18h]
  _BYTE v25[16]; // [rsp+30h] [rbp-10h] BYREF
  HDEV v26; // [rsp+80h] [rbp+40h] BYREF
  char v27; // [rsp+88h] [rbp+48h]
  int v28; // [rsp+90h] [rbp+50h]
  int v29; // [rsp+98h] [rbp+58h]

  v29 = a4;
  v26 = a1;
  v6 = a2;
  v7 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v24 = ThreadWin32Thread;
  v9 = ThreadWin32Thread;
  v27 = 0;
  if ( ThreadWin32Thread )
  {
    v27 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v26) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v26 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v26 + 8), 4LL);
  dword_1C0319AC0 = v29;
  gCachedMovePointerState = a1;
  dword_1C0319AB8 = v6;
  dword_1C0319ABC = a3;
  if ( gulCachedPointerRefs )
  {
    v12 = 0LL;
    v23 = 1LL;
    v11 = 1;
    v10 = 1LL;
    bCachedMovePointerRefs = 1;
    if ( gbForceSoftwareCursor )
    {
      v7 = 1;
      v12 = 1LL;
    }
  }
  else
  {
    v10 = 0LL;
    v11 = 0;
    v23 = 0LL;
    v12 = 0LL;
  }
  v13 = v26;
  if ( ((_DWORD)v26[10] & 0x20000) != 0 )
  {
    v15 = (__int64 **)*((_QWORD *)v26 + 225);
    v16 = v29;
    v17 = *v15;
    v28 = *((_DWORD *)v15 + 4);
    while ( 1 )
    {
      v18 = v17[6];
      if ( v6 < *((_DWORD *)v17 + 7)
        || v6 >= *((_DWORD *)v17 + 9)
        || a3 < *((_DWORD *)v17 + 8)
        || a3 >= *((_DWORD *)v17 + 10) )
      {
        if ( v10 && (*(_DWORD *)(v18 + 2128) & 0x2000) == 0 )
          goto LABEL_38;
        GreAcquireSemaphore(*(_QWORD *)(v18 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 64), 4LL);
        v19 = v16;
        v20 = -1;
        v21 = -1;
      }
      else
      {
        if ( v10 && (*(_DWORD *)(v18 + 2128) & 0x2000) == 0 && !v12 )
          goto LABEL_38;
        GreAcquireSemaphore(*(_QWORD *)(v18 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 64), 4LL);
        v19 = v16 | 4;
        if ( !v12 )
          v19 = v16;
        v20 = a3 - *((_DWORD *)v17 + 8);
        v21 = v6 - *((_DWORD *)v17 + 7);
      }
      vMovePointer((HDEV)v17[6], v21, v20, v19);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v18 + 64));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v18 + 64));
      v10 = v23;
LABEL_38:
      v22 = v28-- == 1;
      v17 = (__int64 *)*v17;
      if ( v22 )
      {
        v9 = v24;
        goto LABEL_12;
      }
    }
  }
  if ( !v11 || ((_DWORD)v26[532] & 0x2000) != 0 || v7 )
  {
    v14 = v29 | 4;
    if ( !v7 )
      v14 = v29;
    vMovePointer(a1, v6, a3, v14);
LABEL_12:
    v13 = v26;
  }
  *((_DWORD *)v13 + 18) = v6;
  *((_DWORD *)v26 + 19) = a3;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *((_QWORD *)v26 + 8));
  GreReleaseSemaphoreInternal(*((_QWORD *)v26 + 8));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v26) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( v9 )
    *(_BYTE *)(v9 + 328) = v27;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
}
