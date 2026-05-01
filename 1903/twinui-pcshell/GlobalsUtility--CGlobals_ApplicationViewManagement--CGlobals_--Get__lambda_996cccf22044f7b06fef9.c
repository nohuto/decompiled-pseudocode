/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___ @ 0x18015339C
 * Callers:
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180155340 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 *__fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___(
        LPCWSTR *a1)
{
  __int64 *result; // rax
  volatile signed __int32 *v3; // rbx
  HKEY v4; // rcx
  LSTATUS v5; // eax
  unsigned __int64 v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  result = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  v3 = (volatile signed __int32 *)v8;
  if ( v8 )
  {
    v4 = *(HKEY *)(v8 + 40);
    if ( v4 )
    {
      v5 = RegDeleteKeyW(v4, *a1);
      v6 = (unsigned int)v5;
      if ( v5 > 0 )
        v6 = (unsigned __int16)v5 | 0x80070000;
      if ( (int)(v6 + 0x80000000) >= 0 && (_DWORD)v6 != -2147024894 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
          (const char *)v6);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        (const char *)0x80270257LL);
    }
    return (__int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v3);
  }
  return result;
}
