/*
 * XREFs of ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x1803CFBC8
 * Callers:
 *     _lambda_2c3efae7d26e0e657137d3ad3e752f20_::operator() @ 0x1803CF4D4 (_lambda_2c3efae7d26e0e657137d3ad3e752f20_--operator().c)
 *     ?ObservedKeyUp@JointResize@@UEAAJI@Z @ 0x1803D0350 (-ObservedKeyUp@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1803D04C0 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@AEBU_GUID@@PEAPEAX@Z @ 0x1803D297C (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDivide.c)
 */

__int64 __fastcall JointResize::CreateGhostDivider(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  int Instance; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1 + 21;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 21);
  Instance = GhostDivider_CreateInstance(a1[16], a1[24], a3);
  if ( Instance < 0 )
  {
    v8 = 504LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, a2);
  if ( Instance < 0 )
  {
    v8 = 505LL;
    goto LABEL_5;
  }
  return (unsigned int)Instance;
}
