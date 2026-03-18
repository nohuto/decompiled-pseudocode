/*
 * XREFs of GreMovePointer @ 0x1C00C5F10
 * Callers:
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C010DF30 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     HideMouseTrails @ 0x1C01A26E0 (HideMouseTrails.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01A7CA8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00C546C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 */

void __fastcall GreMovePointer(_DWORD *a1, __int64 a2, int a3, int a4)
{
  int v7; // r14d
  unsigned int v8; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // r8
  HDEV v13; // rax
  char v14; // r9
  __int64 **v15; // rcx
  int v16; // eax
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rbx
  char v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-20h]
  __int64 v25; // [rsp+28h] [rbp-18h]
  _BYTE v26[16]; // [rsp+30h] [rbp-10h] BYREF
  HDEV v27; // [rsp+80h] [rbp+40h] BYREF
  char v28; // [rsp+88h] [rbp+48h]
  int v29; // [rsp+90h] [rbp+50h]

  v27 = (HDEV)a1;
  v7 = a2;
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v28 = 0;
  v10 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    v28 = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphore(*((_QWORD *)v27 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *((_QWORD *)v27 + 7), 4LL);
  gCachedMovePointerState = a1;
  dword_1C032AE60 = v7;
  dword_1C032AE64 = a3;
  dword_1C032AE68 = a4;
  if ( gulCachedPointerRefs )
  {
    v11 = 1;
    v12 = 1LL;
    bCachedMovePointerRefs = 1;
    if ( gbForceSoftwareCursor )
      v8 = 1;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  v13 = v27;
  v24 = v12;
  if ( ((_DWORD)v27[10] & 0x20000) != 0 )
  {
    v15 = (__int64 **)*((_QWORD *)v27 + 224);
    v16 = *((_DWORD *)v15 + 4);
    v17 = *v15;
    v18 = v8;
    v25 = v8;
    v29 = v16;
    while ( 1 )
    {
      v19 = v17[6];
      if ( v7 < *((_DWORD *)v17 + 7)
        || v7 >= *((_DWORD *)v17 + 9)
        || a3 < *((_DWORD *)v17 + 8)
        || a3 >= *((_DWORD *)v17 + 10) )
      {
        if ( v12 && (*(_DWORD *)(v19 + 2120) & 0x2000) == 0 )
          goto LABEL_39;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 56), 4LL);
        v20 = a4;
        v21 = 0xFFFFFFFFLL;
        v22 = 0xFFFFFFFFLL;
      }
      else
      {
        if ( v12 && (*(_DWORD *)(v19 + 2120) & 0x2000) == 0 && !v18 )
          goto LABEL_39;
        GreAcquireSemaphore(*(_QWORD *)(v19 + 56));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 56), 4LL);
        v20 = a4 | 4;
        if ( !v25 )
          v20 = a4;
        v21 = (unsigned int)(a3 - *((_DWORD *)v17 + 8));
        v22 = (unsigned int)(v7 - *((_DWORD *)v17 + 7));
      }
      vMovePointer((_DWORD *)v17[6], v22, v21, v20);
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_QWORD *)(v19 + 56));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 56));
      v18 = v25;
      v12 = v24;
LABEL_39:
      v23 = v29-- == 1;
      v17 = (__int64 *)*v17;
      if ( v23 )
        goto LABEL_12;
    }
  }
  if ( !v11 || ((_DWORD)v27[530] & 0x2000) != 0 || v8 )
  {
    v14 = a4 | 4;
    if ( !v8 )
      v14 = a4;
    vMovePointer(a1, (unsigned int)v7, (unsigned int)a3, v14);
LABEL_12:
    v13 = v27;
  }
  *((_DWORD *)v13 + 16) = v7;
  *((_DWORD *)v27 + 17) = a3;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *((_QWORD *)v27 + 7));
  GreReleaseSemaphoreInternal(*((_QWORD *)v27 + 7));
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( v10 )
    *(_BYTE *)(v10 + 328) = v28;
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
}
