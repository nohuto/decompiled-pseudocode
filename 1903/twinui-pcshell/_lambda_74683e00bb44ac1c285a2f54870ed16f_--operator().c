/*
 * XREFs of _lambda_74683e00bb44ac1c285a2f54870ed16f_::operator() @ 0x18025CCEC
 * Callers:
 *     _lambda_74683e00bb44ac1c285a2f54870ed16f_::_lambda_invoker_cdecl_ @ 0x18025C060 (_lambda_74683e00bb44ac1c285a2f54870ed16f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801AB7B4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_74683e00bb44ac1c285a2f54870ed16f_::operator()(__int64 a1, __int64 a2)
{
  int v3; // ebx
  volatile signed __int32 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a2;
  v3 = RoInitialize(0LL);
  if ( v3 >= 0 )
  {
    v4 = *(volatile signed __int32 **)(a2 + 120);
    *(_QWORD *)(a2 + 120) = 0LL;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(v4);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)(a2 + 120));
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        70LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v9 = *(_QWORD *)(a2 + 112);
    CoWaitForMultipleObjects(3LL, 0xFFFFFFFFLL, 1LL, &v9, &v8);
  }
  if ( v3 >= 0 )
    RoUninitialize();
  if ( a2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release((volatile signed __int64 *)a2);
  return 0LL;
}
