/*
 * XREFs of _lambda_74683e00bb44ac1c285a2f54870ed16f_::operator() @ 0x18027C284
 * Callers:
 *     _lambda_74683e00bb44ac1c285a2f54870ed16f_::_lambda_invoker_cdecl_ @ 0x18027B5E0 (_lambda_74683e00bb44ac1c285a2f54870ed16f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F6B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801CA6E4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D0E20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_74683e00bb44ac1c285a2f54870ed16f_::operator()(__int64 a1, __int64 a2)
{
  volatile int *v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a2;
  v4 = RoInitialize(0LL);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 120);
    *(_QWORD *)(a2 + 120) = 0LL;
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
        v5,
        v3);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)(a2 + 120));
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        70LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v10 = *(_QWORD *)(a2 + 112);
    CoWaitForMultipleObjects(3LL, 0xFFFFFFFFLL, 1LL, &v10, &v9);
  }
  if ( v4 >= 0 )
    RoUninitialize();
  if ( a2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(a2);
  return 0LL;
}
