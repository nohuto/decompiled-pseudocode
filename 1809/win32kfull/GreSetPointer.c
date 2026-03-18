/*
 * XREFs of GreSetPointer @ 0x1C0018BB8
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     GreHidePointer @ 0x1C00A2650 (GreHidePointer.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C0257394 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0053A60 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rsi
  int v7; // r15d
  int v10; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 HDEV; // rax
  HDEV v14; // rdi
  __int64 v15; // r15
  int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  __int64 ***v19; // rcx
  __int64 **v20; // r14
  int v21; // r13d
  __int64 *v22; // rdi
  char v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  _QWORD v29[8]; // [rsp+58h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v27 = 0LL;
  v7 = a3;
  v10 = 0;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v5 = *ThreadWin32Thread;
      v27 = *ThreadWin32Thread;
    }
  }
  v12 = ghsemDynamicModeChange;
  v28 = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v14 = (HDEV)HDEV;
  if ( HDEV )
  {
    v25 = HDEV;
    if ( v5 )
    {
      v24 = *(_BYTE *)(v5 + 328);
      v7 = a3;
      *(_BYTE *)(v5 + 328) = 0;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v25) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v29[0] = *(_QWORD *)(v25 + 64);
    GreAcquireSemaphore(v29[0]);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C0316A5C = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C0316A5C = 0;
    }
    dword_1C0316A50 = a2;
    dword_1C0316A54 = v7;
    dword_1C0316A58 = a4;
    if ( gulCachedPointerRefs )
    {
      v15 = 0LL;
      v26 = 1LL;
      bCachedSetPointerRefs = 1;
      v16 = 1;
      v17 = 1LL;
      if ( (a2 & 0x20) != 0 )
      {
        v10 = 1;
        a2 |= 0x40u;
        v15 = 1LL;
      }
    }
    else
    {
      v17 = 0LL;
      v16 = 0;
      v26 = 0LL;
      v15 = 0LL;
    }
    v18 = *(_DWORD *)(v25 + 40);
    if ( (v18 & 0x20000) != 0 )
    {
      v19 = *(__int64 ****)(v25 + 1800);
      v20 = *v19;
      v21 = *((_DWORD *)v19 + 4);
      do
      {
        v22 = v20[6];
        if ( !v17 || (v22[266] & 0x2000) != 0 || (v22[5] & 4) != 0 || v15 )
        {
          GreAcquireSemaphore(v22[8]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v22[8], 4LL);
          vSetPointer((HDEV)v20[6], a1, a2, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v22[8]);
          GreReleaseSemaphoreInternal(v22[8]);
          v17 = v26;
        }
        v20 = (__int64 **)*v20;
        --v21;
      }
      while ( v21 );
      v12 = v28;
      v5 = v27;
    }
    else if ( !v16 || (*(_DWORD *)(v25 + 2128) & 0x2000) != 0 || (v18 & 4) != 0 || v10 )
    {
      vSetPointer(v14, a1, a2, a3, a4);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v25) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    SEMOBJ::vUnlock((SEMOBJ *)v29);
    if ( v5 )
      *(_BYTE *)(v5 + 328) = v24;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v12);
  return GreReleaseSemaphoreInternal(v12);
}
