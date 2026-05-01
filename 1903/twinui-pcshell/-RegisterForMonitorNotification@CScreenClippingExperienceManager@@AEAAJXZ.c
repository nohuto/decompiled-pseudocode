/*
 * XREFs of ?RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1890
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801B1CDC (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveMonitorNotificationService@@@?$ComPtr@UIImmersiveMonitorNotificationService@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitorNotificationService@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AB338 (--$As@UIImmersiveMonitorNotificationService@@@-$ComPtr@UIImmersiveMonitorNotificationService@@@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForMonitorNotification(
        CScreenClippingExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = *((_QWORD *)this + 38);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v4 = v3(v2, &SID_IImmersiveMonitorService, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*v9)[3](v9, (GUID *)((char *)this + 24), (__int64 *)this + 42);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v4 = Microsoft::WRL::ComPtr<IImmersiveMonitorNotificationService>::As<IImmersiveMonitorNotificationService>(
             &v9,
             (__int64 *)this + 41);
      v5 = v4;
      if ( v4 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 1127LL;
    }
    else
    {
      v6 = 1126LL;
    }
  }
  else
  {
    v6 = 1124LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return v5;
}
