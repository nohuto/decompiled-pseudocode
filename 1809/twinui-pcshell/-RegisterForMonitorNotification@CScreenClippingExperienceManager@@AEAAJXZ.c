/*
 * XREFs of ?RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801818E8
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x180181D24 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForMonitorNotification(
        CScreenClippingExperienceManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = *((_QWORD *)this + 38);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v3 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v8 + 24LL))(
           v8,
           (char *)this + 24,
           (char *)this + 336);
    v4 = v3;
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v8)(
             v8,
             &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
             (char *)this + 328);
      v4 = v3;
      if ( v3 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v5 = 1036LL;
    }
    else
    {
      v5 = 1035LL;
    }
  }
  else
  {
    v5 = 1033LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
