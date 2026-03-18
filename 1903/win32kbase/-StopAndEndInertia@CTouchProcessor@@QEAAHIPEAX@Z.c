/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0174CAC
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1C011CE40 (NtUserStopAndEndInertia.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017DE58 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C017E100 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, void *a3)
{
  CTouchProcessor *v3; // rbx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // r9
  unsigned int v8; // esi
  unsigned int v9; // r8d
  __int64 v10; // rbx
  int v11; // edx
  PVOID DeviceExtension; // rcx
  int v13; // r9d
  struct tagPOINT v15; // rdi
  struct tagPOINT v16; // rbx
  struct CInertiaManager *Instance; // rbp
  CInertiaManager *v18; // rcx
  bool v19; // al
  char v20; // [rsp+28h] [rbp-30h]
  CInpLockGuard *v21; // [rsp+30h] [rbp-28h] BYREF
  int v22; // [rsp+38h] [rbp-20h]

  v3 = gpTouchProcessor;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, a2, 7, 305, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids, v20);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v21,
    (CTouchProcessor *)((char *)v3 + 48));
  v6 = *((_QWORD *)v3 + 14);
  v7 = (char *)v3 + 104;
  if ( (CTouchProcessor *)v6 == (CTouchProcessor *)((char *)v3 + 104) )
    goto LABEL_9;
  v8 = 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v6 + 40);
    v5 = 0LL;
    if ( v9 )
      break;
LABEL_8:
    v6 = *(_QWORD *)(v6 + 8);
    if ( (char *)v6 == v7 )
      goto LABEL_9;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v6 + 120) + 496LL * (unsigned int)v5;
    if ( *(unsigned __int16 *)(v10 + 180) == v4 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v9 )
      goto LABEL_8;
  }
  if ( !v10 )
  {
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 7, 306, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    UserSetLastError(1168LL, v5);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_15;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    v13 = 307;
    LOBYTE(v11) = 5;
    goto LABEL_14;
  }
  v15 = *(struct tagPOINT *)(v10 + 216);
  v16 = *(struct tagPOINT *)(v10 + 208);
  Instance = CInertiaManager::GetInstance();
  if ( ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(Instance, v16, 3LL) )
    v19 = CInertiaManager::PostInertiaMessage(v18, 0x23Cu, (struct CInertiaManager *)((char *)Instance + 8), v16, v15);
  else
    v19 = 0;
  if ( v19 )
    goto LABEL_16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceExtension) = (_DWORD)gBaseLog;
    v13 = 308;
    LOBYTE(v11) = 2;
LABEL_14:
    WPP_RECORDER_SF_((_DWORD)DeviceExtension, v11, 7, v13, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
LABEL_15:
  v8 = 0;
LABEL_16:
  if ( !v22 )
    CInpLockGuard::UnLock(v21);
  return v8;
}
