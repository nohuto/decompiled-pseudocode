/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002EAE0
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180026990 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z @ 0x180006360 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180006A60 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x18002ECF8 (-UseDComposition@CStoryboard@@QEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180043E08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800AF314 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int SynchronizationCommitHandle; // edi
  struct CResource *v3; // rbx
  __int64 v4; // r15
  _DWORD *v7; // rsi
  char *v8; // rax
  struct _GUID v10; // xmm0
  CAnimationClockCoordinator *v11; // rcx
  int v12; // eax
  __int64 i; // r14
  CAnimationClockCoordinator *v14; // rdi
  DWORD CurrentProcessId; // eax
  HANDLE v16; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-48h] BYREF
  struct CResource *v18; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-30h] BYREF
  HANDLE hObject[2]; // [rsp+60h] [rbp-20h] BYREF

  SynchronizationCommitHandle = 0;
  v3 = 0LL;
  v16 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      if ( SynchronizationCommitHandle < 0 )
        break;
      v7 = *(_DWORD **)(*((_QWORD *)this + 2) + 8 * v4);
      *(_OWORD *)hObject = *((_OWORD *)v7 + 3);
      v8 = (char *)hObject[0] - *(_QWORD *)&a2->Data1;
      if ( hObject[0] == *(HANDLE *)&a2->Data1 )
        v8 = (char *)hObject[1] - *(_QWORD *)a2->Data4;
      if ( !v8
        && v7[6] != 4
        && (CStoryboard::UseDComposition((CStoryboard *)v7)
         || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 48LL))(v7)) )
      {
        if ( (((unsigned __int64)v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
          && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 48LL))(v7) )
        {
          v14 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &v16,
            0LL);
          CurrentProcessId = GetCurrentProcessId();
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                          v14,
                                          a2,
                                          CurrentProcessId,
                                          &v16);
        }
        if ( v3 )
          goto LABEL_31;
        if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
        {
          v10 = *a2;
          v17 = 0;
          hObject[0] = 0LL;
          v11 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
          v19 = v10;
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(v11, &v19, hObject);
          if ( SynchronizationCommitHandle >= 0 )
          {
            SynchronizationCommitHandle = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 120LL))(
                                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                            hObject[0],
                                            1LL,
                                            &v17);
            CloseHandle(hObject[0]);
            if ( SynchronizationCommitHandle >= 0 )
            {
              v12 = CResource::WrapExistingResource(
                      *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                      v17,
                      &v18);
              v3 = v18;
              SynchronizationCommitHandle = v12;
              if ( v18 )
              {
LABEL_31:
                if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
                {
                  for ( i = 0LL; (unsigned int)i < v7[28]; i = (unsigned int)(i + 1) )
                    CAnimatedTransitionVisual::SetStartTrigger(
                      *(CAnimatedTransitionVisual **)(*(_QWORD *)(*((_QWORD *)v7 + 11) + 8 * i) + 40LL),
                      v3);
                }
              }
            }
          }
        }
        if ( (char *)v16 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
          && (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 48LL))(v7) )
        {
          (*(void (__fastcall **)(_DWORD *, HANDLE))(*(_QWORD *)v7 + 56LL))(v7, v16);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 10) );
    if ( v3 )
      CBaseObject::Release(v3);
    if ( (char *)v16 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v16);
  }
  return (unsigned int)SynchronizationCommitHandle;
}
