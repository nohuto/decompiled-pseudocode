/*
 * XREFs of ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18013C294
 * Callers:
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013C0AC (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18002D194 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::UnregisterAppDeploymentNotifications(AtmosCheck *this)
{
  int v2; // edi
  __int64 v3; // rcx
  AtmosCheck *v4; // rcx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 32), &v7);
  v2 = 0;
  if ( *((_QWORD *)this + 15) )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, *((_QWORD *)this + 15));
      if ( v2 < 0 )
        goto LABEL_11;
      *((_QWORD *)this + 15) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 16) )
  {
    v5 = *((_QWORD *)this + 3);
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 104LL))(v5, *((_QWORD *)this + 16));
      if ( v2 < 0 )
        goto LABEL_11;
      *((_QWORD *)this + 16) = 0LL;
    }
  }
  v4 = (AtmosCheck *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v4 + 16LL))(v4);
  }
LABEL_11:
  AtmosCheck::Trace(v4, "UnregAppDepNotification result", v2);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v7);
  return (unsigned int)v2;
}
