/*
 * XREFs of MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266F18
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18026E4EC (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266930 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103.c)
 */

__int64 __fastcall MakeXamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_(
        __int64 *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a1 = 0LL;
  XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877 = Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877___(&v9, a2);
  if ( *XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877 )
    v5 = *XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877
       + 32LL;
  else
    v5 = 0LL;
  *XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877 = 0LL;
  v6 = v9;
  v10 = v5;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v3;
}
