/*
 * XREFs of GreSetPointer @ 0x1C004DA58
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0138C00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     GreHidePointer @ 0x1C013AA70 (GreHidePointer.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C0270434 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C004DE54 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdi
  __int64 HDEV; // rax
  HDEV v12; // rsi
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // ecx
  __int64 v17; // r9
  int v18; // r8d
  int v19; // edx
  __int64 ***v20; // rcx
  __int64 **v21; // r12
  __int64 *v22; // rsi
  bool v23; // zf
  char v25; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+34h] [rbp-64h]
  __int64 v27; // [rsp+38h] [rbp-60h] BYREF
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+B0h] [rbp+18h]

  v33 = a3;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v29 = 0LL;
  v7 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v4 = *ThreadWin32Thread;
      v29 = *ThreadWin32Thread;
    }
  }
  v10 = ghsemDynamicModeChange;
  v31 = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v12 = (HDEV)HDEV;
  if ( HDEV )
  {
    v27 = HDEV;
    if ( v4 )
    {
      v13 = -(*(_DWORD *)(v4 + 328) & 1);
      *(_DWORD *)(v4 + 328) &= ~1u;
    }
    else
    {
      LOBYTE(v13) = v25;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v14 = *(_QWORD *)(v27 + 64);
    v30 = v14;
    GreAcquireSemaphore(v14);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C0329A7C = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C0329A7C = 0;
    }
    dword_1C0329A74 = v33;
    dword_1C0329A70 = v7;
    dword_1C0329A78 = a4;
    if ( gulCachedPointerRefs )
    {
      v15 = 0LL;
      v28 = 1LL;
      bCachedSetPointerRefs = 1;
      v16 = 1;
      v17 = 1LL;
      if ( (v7 & 0x20) != 0 )
      {
        v18 = 1;
        v7 |= 0x40u;
        v15 = 1LL;
LABEL_18:
        v19 = *(_DWORD *)(v27 + 40);
        if ( (v19 & 0x20000) != 0 )
        {
          v20 = *(__int64 ****)(v27 + 1800);
          v21 = *v20;
          v26 = *((_DWORD *)v20 + 4);
          do
          {
            v22 = v21[6];
            if ( !v17 || (v22[266] & 0x2000) != 0 || (v22[5] & 4) != 0 || v15 )
            {
              GreAcquireSemaphore(v22[8]);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v22[8], 4LL);
              vSetPointer((HDEV)v21[6], a1, v7, v33, a4);
              EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v22[8]);
              GreReleaseSemaphoreInternal(v22[8]);
              v17 = v28;
            }
            v23 = v26-- == 1;
            v21 = (__int64 **)*v21;
          }
          while ( !v23 );
          v14 = v30;
          v10 = v31;
          v4 = v29;
        }
        else if ( !v16 || (*(_DWORD *)(v27 + 2128) & 0x2000) != 0 || (v19 & 4) != 0 || v18 )
        {
          vSetPointer(v12, a1, v7, v33, a4);
        }
        if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v27) )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        if ( v14 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsem", v14);
          GreReleaseSemaphoreInternal(v14);
        }
        if ( v4 )
          *(_DWORD *)(v4 + 328) ^= (*(_DWORD *)(v4 + 328) ^ (unsigned __int8)v13) & 1;
        goto LABEL_38;
      }
    }
    else
    {
      v17 = 0LL;
      v16 = 0;
      v28 = 0LL;
      v15 = 0LL;
    }
    v18 = 0;
    goto LABEL_18;
  }
LABEL_38:
  EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
  return GreReleaseSemaphoreInternal(v10);
}
