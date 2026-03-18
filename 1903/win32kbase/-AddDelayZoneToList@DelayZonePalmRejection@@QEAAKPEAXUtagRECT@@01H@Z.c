/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01821E0
 * Callers:
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C01169A0 (NtUserCreatePalmRejectionDelayZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00806F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C018F8F0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  __int64 v10; // r8
  struct CompositionInputObject *v11; // rbp
  struct CompositionInputObject *v12; // rsi
  unsigned int v13; // r14d
  int v14; // eax
  int v15; // edx
  char *v16; // rbx
  __int64 v17; // r8
  struct tagRECT *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  CInpLockGuard *v28; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+48h] [rbp-40h]
  struct tagRECT v30; // [rsp+50h] [rbp-38h] BYREF
  struct CompositionInputObject *v31; // [rsp+90h] [rbp+8h] BYREF
  struct CompositionInputObject *v32; // [rsp+98h] [rbp+10h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v28,
    (DelayZonePalmRejection *)((char *)this + 112));
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a2, 1LL, v10, &v31);
    if ( v14 < 0 )
      goto LABEL_9;
    v11 = v31;
  }
  if ( a4 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a4, 1LL, v10, &v32);
    if ( v14 < 0 )
      goto LABEL_9;
    v12 = v32;
  }
  v16 = (char *)Win32AllocPoolZInit(0x68uLL, 2053403477LL);
  if ( !v16 )
  {
    LOBYTE(v14) = 23;
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 8, 25, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids, v14);
    }
    goto LABEL_26;
  }
  if ( v11 )
    ObReferenceObjectByPointer(v11, 3u, ExCompositionObjectType, 0);
  if ( v12 )
    ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  v18 = a5;
  *(struct tagRECT *)(v16 + 24) = *a3;
  *((_QWORD *)v16 + 9) = v11;
  *(struct tagRECT *)(v16 + 40) = *v18;
  *((_QWORD *)v16 + 10) = v12;
  *((_QWORD *)v16 + 2) = KeGetCurrentThread();
  if ( a6 )
    v19 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 52) + 56LL);
  else
    v19 = 0;
  *((_DWORD *)v16 + 16) = v19;
  v13 = *((_DWORD *)this + 22);
  v20 = v13 + 1;
  if ( v13 == -1 )
    v20 = 1;
  *((_DWORD *)this + 22) = v20;
  *((_DWORD *)v16 + 14) = v13;
  *((_DWORD *)v16 + 23) = 3;
  v21 = *((_DWORD *)this + 26);
  *((_QWORD *)v16 + 12) = 0LL;
  *((_DWORD *)v16 + 22) = v21;
  v22 = (_QWORD *)((char *)this + 72);
  v16[60] = 0;
  v23 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v23 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *((_QWORD *)v16 + 1) = v22;
  *(_QWORD *)v16 = v23;
  *(_QWORD *)(v23 + 8) = v16;
  *v22 = v16;
  v24 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v23,
      8,
      24,
      (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids,
      v13,
      v24);
  }
  v25 = *((_QWORD *)this + 20);
  if ( v25 )
  {
    v26 = *((unsigned int *)this + 1);
    v30 = *a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v25, v26, v17, 3LL, &v30);
  }
LABEL_26:
  if ( !v29 )
    CInpLockGuard::UnLock(v28);
  return v13;
}
