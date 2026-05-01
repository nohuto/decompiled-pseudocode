/*
 * XREFs of ?OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z @ 0x1800F0C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18006B5A0 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnTitleBarIconUpdated(
        CApplicationManager *this,
        __int64 a2,
        void *a3,
        unsigned int a4)
{
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  struct IApplicationFrameProxy *v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v13[1] = (struct IApplicationFrameProxy *)-2LL;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd((CApplicationManager *)((char *)this - 344), a2, v13);
  if ( FrameByHwnd >= 0 )
  {
    v15 = 0LL;
    v9 = v13[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v10 = (*(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v9 + 144LL))(v9, &v15);
    FrameByHwnd = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v15 + 168LL))(v15, a3, a4);
      FrameByHwnd = v10;
      if ( v10 >= 0 )
      {
        FrameByHwnd = 0;
        goto LABEL_8;
      }
      v11 = 8280LL;
    }
    else
    {
      v11 = 8279LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return (unsigned int)FrameByHwnd;
}
