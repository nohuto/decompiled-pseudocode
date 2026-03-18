/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C0182468
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C01838C0 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char *v8; // rax
  char *v9; // r10
  unsigned int v10; // ebx
  int v11; // edx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  CInpLockGuard *v18; // [rsp+50h] [rbp-18h] BYREF
  int v19; // [rsp+58h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v18,
    (DelayZonePalmRejection *)((char *)this + 112));
  v8 = (char *)Win32AllocPoolZInit(0x68uLL, 2053403477LL);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 9) = 0LL;
    v11 = 1;
    *((_QWORD *)v8 + 10) = 0LL;
    *(struct tagRECT *)(v8 + 24) = *a4;
    *(_OWORD *)(v8 + 40) = 0uLL;
    CurrentThread = KeGetCurrentThread();
    *((_DWORD *)v9 + 16) = 0;
    *((_QWORD *)v9 + 2) = CurrentThread;
    v10 = *((_DWORD *)this + 22);
    v13 = v10 + 1;
    if ( v10 == -1 )
      v13 = 1;
    *((_DWORD *)this + 22) = v13;
    v14 = (_QWORD *)((char *)this + 72);
    *((_DWORD *)v9 + 22) = 0;
    *((_DWORD *)v9 + 14) = v10;
    *((_DWORD *)v9 + 23) = a3;
    *((_QWORD *)v9 + 12) = a2;
    v9[60] = 1;
    v15 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v15 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *((_QWORD *)v9 + 1) = v14;
    *(_QWORD *)v9 = v15;
    *(_QWORD *)(v15 + 8) = v9;
    *v14 = v9;
    v16 = *((_DWORD *)this + 23) + 1;
    *((_DWORD *)this + 23) = v16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gBaseLog,
        v11,
        8,
        26,
        (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
        v10,
        v16);
    }
  }
  else
  {
    v10 = 0;
  }
  if ( !v19 )
    CInpLockGuard::UnLock(v18);
  return v10;
}
