/*
 * XREFs of ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1800CA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800CA438 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800CA470 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CD3DDeviceManager::UnusedNotification(CD3DDeviceManager *this, struct CMILPoolResource *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 CurrentFrameId; // rax
  __int64 v7; // r8
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  LODWORD(v4) = *((_DWORD *)this + 38);
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v4 = (unsigned int)(v4 - 1);
      v5 = *(_QWORD *)(*((_QWORD *)this + 16) + 24 * v4);
      if ( v5 == (((unsigned __int64)a2 - 496) & -(__int64)(a2 != 0LL)) )
        break;
      if ( !(_DWORD)v4 )
        goto LABEL_5;
    }
    if ( *(int *)(v5 + 880) >= 0 )
    {
      CurrentFrameId = GetCurrentFrameId();
      *(_QWORD *)(v7 + 1136) = CurrentFrameId + 1;
      ScheduleCompositionPass(1000LL, 0x20000LL);
    }
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
}
