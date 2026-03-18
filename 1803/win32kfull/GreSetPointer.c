/*
 * XREFs of GreSetPointer @ 0x1C0020CE4
 * Callers:
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C006A0F8 (UpdateCursorImageForMonitorDpi.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C023FD14 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00DC69C (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r13
  int v6; // r12d
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned int v10; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 HDEV; // rax
  HDEV v14; // rbx
  int v15; // ecx
  int v16; // edx
  __int64 ***v17; // rcx
  __int64 **v18; // r14
  int v19; // r15d
  __int64 *v20; // rbx
  char v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  __int64 v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v26[9]; // [rsp+50h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0;
  v24 = 0LL;
  v7 = 0LL;
  v8 = a4;
  v10 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v7 = *ThreadWin32Thread;
      v24 = *ThreadWin32Thread;
    }
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v25, ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v14 = (HDEV)HDEV;
  if ( HDEV )
  {
    v23 = HDEV;
    if ( v7 )
    {
      v22 = *(_BYTE *)(v7 + 328);
      v8 = a4;
      *(_BYTE *)(v7 + 328) = 0;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v23) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    }
    v26[0] = *(_QWORD *)(v23 + 56);
    GreAcquireSemaphore(v26[0]);
    if ( a1 )
    {
      gCachedSetPointerState = a1;
      byte_1C03263BC = 1;
    }
    else
    {
      gCachedSetPointerState = 0LL;
      byte_1C03263BC = 0;
    }
    dword_1C03263B0 = v10;
    dword_1C03263B4 = a3;
    dword_1C03263B8 = v8;
    if ( gulCachedPointerRefs )
    {
      bCachedSetPointerRefs = 1;
      v15 = 1;
      v5 = 1LL;
      if ( (v10 & 0x20) != 0 )
      {
        v6 = 1;
        v10 |= 0x40u;
      }
    }
    else
    {
      v15 = 0;
    }
    v16 = *(_DWORD *)(v23 + 40);
    if ( (v16 & 0x20000) != 0 )
    {
      v17 = *(__int64 ****)(v23 + 1792);
      v18 = *v17;
      v19 = *((_DWORD *)v17 + 4);
      do
      {
        v20 = v18[6];
        if ( !v5 || (v20[265] & 0x2000) != 0 || (v20[5] & 4) != 0 || v6 )
        {
          GreAcquireSemaphore(v20[7]);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", v20[7], 4LL);
          vSetPointer((HDEV)v18[6], a1, v10, a3, a4);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", v20[7]);
          GreReleaseSemaphoreInternal(v20[7]);
        }
        v18 = (__int64 **)*v18;
        --v19;
      }
      while ( v19 );
      v7 = v24;
    }
    else if ( !v15 || (*(_DWORD *)(v23 + 2120) & 0x2000) != 0 || (v16 & 4) != 0 || v6 )
    {
      vSetPointer(v14, a1, v10, a3, v8);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v23) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    SEMOBJ::vUnlock((SEMOBJ *)v26);
    if ( v7 )
      *(_BYTE *)(v7 + 328) = v22;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v25);
  return GreReleaseSemaphoreInternal(v25);
}
