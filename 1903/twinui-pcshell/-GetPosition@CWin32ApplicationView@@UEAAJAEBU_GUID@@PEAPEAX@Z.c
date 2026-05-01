/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067760
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x18006780C (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc___ @ 0x180067874 (ShellPositionerHelpers--PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  volatile signed __int32 *v4; // rbx
  int v5; // ebx
  IUnknown *punk; // [rsp+80h] [rbp+30h] BYREF
  volatile signed __int32 *v8; // [rsp+88h] [rbp+38h] BYREF
  IUnknown **p_punk; // [rsp+90h] [rbp+40h] BYREF

  v3 = 0;
  *a3 = 0LL;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v8);
  v4 = v8;
  if ( v8 )
  {
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()(&p_punk, v8);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v4);
  }
  v5 = ShellPositionerHelpers::PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc___(punk);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v3;
}
