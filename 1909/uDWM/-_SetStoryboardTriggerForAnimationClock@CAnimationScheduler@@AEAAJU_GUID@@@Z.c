/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005754
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005630 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x1800050E4 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800051F0 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 *     ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x180005934 (-UseDComposition@CStoryboard@@QEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18003B988 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040AB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800B3278 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int SynchronizationCommitHandle; // edi
  struct CAnimationTriggerProxy *v3; // rbx
  __int64 v4; // r15
  struct _GUID *v7; // rsi
  __int64 v8; // rax
  struct _GUID v10; // xmm0
  __int64 i; // r14
  CAnimationClockCoordinator *v12; // rdi
  DWORD CurrentProcessId; // eax
  HANDLE v14; // [rsp+20h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+28h] [rbp-28h] BYREF
  struct _GUID v16; // [rsp+30h] [rbp-20h] BYREF

  SynchronizationCommitHandle = 0;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      if ( SynchronizationCommitHandle < 0 )
        break;
      v7 = *(struct _GUID **)(*((_QWORD *)this + 2) + 8 * v4);
      v16 = v7[3];
      v8 = *(_QWORD *)&v16.Data1 - *(_QWORD *)&a2->Data1;
      if ( *(_QWORD *)&v16.Data1 == *(_QWORD *)&a2->Data1 )
        v8 = *(_QWORD *)v16.Data4 - *(_QWORD *)a2->Data4;
      if ( !v8
        && *(_DWORD *)v7[1].Data4 != 4
        && (CStoryboard::UseDComposition((CStoryboard *)v7)
         || (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v7->Data1 + 48LL))(v7)) )
      {
        if ( (((unsigned __int64)v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
          && (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v7->Data1 + 48LL))(v7) )
        {
          v12 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &v14,
            0LL);
          CurrentProcessId = GetCurrentProcessId();
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                          v12,
                                          a2,
                                          CurrentProcessId,
                                          &v14);
        }
        if ( v3 )
          goto LABEL_30;
        if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
        {
          v10 = *a2;
          hObject = 0LL;
          v16 = v10;
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(
                                          *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                          + 24),
                                          &v16,
                                          &hObject);
          if ( SynchronizationCommitHandle >= 0 )
          {
            *(_QWORD *)&v16.Data1 = 0LL;
            SynchronizationCommitHandle = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
                                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                            hObject,
                                            &v16);
            CloseHandle(hObject);
            v3 = *(struct CAnimationTriggerProxy **)&v16.Data1;
            if ( *(_QWORD *)&v16.Data1 )
            {
LABEL_30:
              if ( CStoryboard::UseDComposition((CStoryboard *)v7) )
              {
                for ( i = 0LL; (unsigned int)i < v7[7].Data1; i = (unsigned int)(i + 1) )
                  CAnimatedTransitionVisual::SetStartTrigger(
                    *(CAnimatedTransitionVisual **)(*(_QWORD *)(*(_QWORD *)v7[5].Data4 + 8 * i) + 40LL),
                    v3);
              }
            }
          }
        }
        if ( (char *)v14 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
          && (*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&v7->Data1 + 48LL))(v7) )
        {
          (*(void (__fastcall **)(struct _GUID *, HANDLE))(*(_QWORD *)&v7->Data1 + 56LL))(v7, v14);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 10) );
    if ( v3 )
      CBaseObject::Release(v3);
    if ( (char *)v14 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v14);
  }
  return (unsigned int)SynchronizationCommitHandle;
}
