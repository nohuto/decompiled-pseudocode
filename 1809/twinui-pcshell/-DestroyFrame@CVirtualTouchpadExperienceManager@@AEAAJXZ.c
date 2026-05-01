/*
 * XREFs of ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180178CC8
 * Callers:
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x180178400 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180179CA0 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::DestroyFrame(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 89) )
  {
    v2 = RevokeScaleChangeNotificationsForWindow(*((_QWORD *)this + 42));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        783LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 89) = 0;
  }
  if ( *((_DWORD *)this + 88) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 48LL))(*((_QWORD *)this + 40));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        789LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    *((_DWORD *)this + 88) = 0;
  }
  v4 = (__int64 *)((char *)this + 328);
  v10 = 0LL;
  v5 = 0LL;
  if ( &v10 != (__int64 *)((char *)this + 328) )
  {
    v10 = *v4;
    v6 = v10;
    *v4 = 0LL;
    v5 = v6;
  }
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        797LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  *((_DWORD *)this + 184) = 4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return 0LL;
}
