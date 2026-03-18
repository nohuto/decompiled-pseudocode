/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C014F360
 * Callers:
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00EE510 (NtUserCreatePalmRejectionDelayZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006E920 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0156D4C (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
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
  char *v15; // rbx
  struct tagRECT *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  struct tagRECT v26; // [rsp+40h] [rbp-78h] BYREF
  CInpLockGuard *v27[8]; // [rsp+50h] [rbp-68h] BYREF
  struct CompositionInputObject *v28; // [rsp+C0h] [rbp+8h] BYREF
  struct CompositionInputObject *v29; // [rsp+C8h] [rbp+10h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v27,
    (DelayZonePalmRejection *)((char *)this + 120),
    0LL);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v28 = 0LL;
  v29 = 0LL;
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a2, 1LL, v10, &v28);
    if ( v14 < 0 )
      goto LABEL_9;
    v11 = v28;
  }
  if ( !a4 )
    goto LABEL_7;
  LOBYTE(v10) = 1;
  v14 = CompositionInputObject::ResolveHandle(a4, 1LL, v10, &v29);
  if ( v14 < 0 )
  {
LABEL_9:
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 14),
      2u,
      0xDu,
      0x1Au,
      (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
      v14);
    goto LABEL_23;
  }
  v12 = v29;
LABEL_7:
  v15 = (char *)Win32AllocPoolZInit(0x68uLL, 0x7A647355u);
  if ( !v15 )
  {
    v14 = -1073741801;
    goto LABEL_9;
  }
  if ( v11 )
    ObReferenceObjectByPointer(v11, 3u, ExCompositionObjectType, 0);
  if ( v12 )
    ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  v16 = a5;
  *(struct tagRECT *)(v15 + 24) = *a3;
  *((_QWORD *)v15 + 9) = v11;
  *(struct tagRECT *)(v15 + 40) = *v16;
  *((_QWORD *)v15 + 10) = v12;
  *((_QWORD *)v15 + 2) = KeGetCurrentThread();
  if ( a6 )
    v17 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 53) + 56LL);
  else
    v17 = 0;
  *((_DWORD *)v15 + 16) = v17;
  v13 = *((_DWORD *)this + 22);
  v18 = v13 + 1;
  if ( v13 == -1 )
    v18 = 1;
  *((_DWORD *)this + 22) = v18;
  *((_DWORD *)v15 + 14) = v13;
  *((_DWORD *)v15 + 23) = 3;
  v19 = *((_DWORD *)this + 26);
  *((_QWORD *)v15 + 12) = 0LL;
  *((_DWORD *)v15 + 22) = v19;
  v20 = (_QWORD *)((char *)this + 72);
  v15[60] = 0;
  v21 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v21 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *(_QWORD *)v15 = v21;
  *((_QWORD *)v15 + 1) = v20;
  *(_QWORD *)(v21 + 8) = v15;
  *v20 = v15;
  WPP_RECORDER_SF_dd(
    *((_QWORD *)this + 14),
    4u,
    0xDu,
    0x19u,
    (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
    v13,
    ++*((_DWORD *)this + 23));
  v23 = *((_QWORD *)this + 17);
  if ( v23 )
  {
    v24 = *((unsigned int *)this + 1);
    v26 = *a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v23, v24, v22, 3LL, &v26);
  }
LABEL_23:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v27);
  return v13;
}
