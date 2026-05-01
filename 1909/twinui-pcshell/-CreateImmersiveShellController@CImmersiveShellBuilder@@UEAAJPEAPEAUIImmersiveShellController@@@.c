/*
 * XREFs of ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1801F4290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDis.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1801F3ABC (--$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveSh.c)
 */

__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController(
        CImmersiveShellBuilder *this,
        struct IImmersiveShellController **a2)
{
  HRESULT v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  volatile int *v9; // rdx
  struct IImmersiveShellController *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_23650f94_13b8_4f39_b2c3_817e6564a756,
         0LL,
         1u,
         &GUID_d6948331_eaf5_4365_86ac_d8d1d03b4600,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E0,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior,>(&v14);
  v5 = v14;
  if ( v14 )
  {
    v8 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 40LL))(ppv, v14 + 32);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v10 = (struct IImmersiveShellController *)ppv;
      if ( ppv )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
        v10 = (struct IImmersiveShellController *)ppv;
      }
      *a2 = v10;
      v4 = 0;
      goto LABEL_11;
    }
    v7 = (unsigned int)v8;
    v6 = 740LL;
  }
  else
  {
    v4 = -2147024882;
    v6 = 738LL;
    v7 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)v7);
LABEL_11:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::Release(
      v5,
      v9);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v4;
}
