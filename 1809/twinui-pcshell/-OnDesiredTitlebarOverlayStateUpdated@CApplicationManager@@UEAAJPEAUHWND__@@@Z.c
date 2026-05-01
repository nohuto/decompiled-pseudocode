/*
 * XREFs of ?OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1800F07C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18006B5A0 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnDesiredTitlebarOverlayStateUpdated(CApplicationManager *this, __int64 a2)
{
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd((CApplicationManager *)((char *)this - 344), a2, &v11);
  if ( FrameByHwnd >= 0 )
  {
    v10 = 0LL;
    v5 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (*(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v5 + 144LL))(v5, &v10);
    FrameByHwnd = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 160LL))(v10);
      FrameByHwnd = v6;
      if ( v6 >= 0 )
      {
        FrameByHwnd = 0;
        goto LABEL_8;
      }
      v7 = 8267LL;
    }
    else
    {
      v7 = 8266LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)FrameByHwnd;
}
