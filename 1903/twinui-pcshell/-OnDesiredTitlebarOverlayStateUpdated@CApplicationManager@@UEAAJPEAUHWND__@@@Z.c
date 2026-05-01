/*
 * XREFs of ?OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180115150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180070304 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnDesiredTitlebarOverlayStateUpdated(CApplicationManager *this, __int64 a2)
{
  CApplicationManager *v3; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rbx
  __int64 (__fastcall *v6)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v3, a2, &v12);
  if ( FrameByHwnd >= 0 )
  {
    v11 = 0LL;
    v5 = v12;
    v6 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v12 + 144LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v7 = v6(v5, &v11);
    FrameByHwnd = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 160LL))(v11);
      FrameByHwnd = v7;
      if ( v7 >= 0 )
      {
        FrameByHwnd = 0;
        goto LABEL_8;
      }
      v8 = 8482LL;
    }
    else
    {
      v8 = 8481LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)FrameByHwnd;
}
