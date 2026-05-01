/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180131440
 * Callers:
 *     _lambda_d724fd238306415e4865b10bdd74c2f1_::operator() @ 0x18005E000 (_lambda_d724fd238306415e4865b10bdd74c2f1_--operator().c)
 *     _lambda_9024690539981ae791e8a4389c3f5331_::operator() @ 0x1801301DC (_lambda_9024690539981ae791e8a4389c3f5331_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18004D3F8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18011910C (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18011B3F0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x180131B60 (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 *     ?IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z @ 0x180131FAC (-IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z.c)
 */

__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, LPVOID *a2, unsigned __int16 **a3)
{
  unsigned int v5; // edx
  bool IsLocalOrRemoteDebuggerPresent; // al
  int ContextForWindow; // esi
  unsigned __int16 **v9; // r8
  int ProcessImageName; // eax
  void *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r14
  DWORD LastError; // edi
  char *v16; // rdx
  _BYTE v17[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  DWORD dwProcessId; // [rsp+78h] [rbp+38h] BYREF
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  IsLocalOrRemoteDebuggerPresent = EdpHelpers::IsLocalOrRemoteDebuggerPresent(dwProcessId, v5);
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v17, IsLocalOrRemoteDebuggerPresent ? -1 : 5000);
  v20 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v20);
  if ( ContextForWindow == -2147024891 )
  {
    ContextForWindow = 0;
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    ProcessImageName = EdpHelpers::GetProcessImageName(dwProcessId, (unsigned int)&pv, v9);
    v11 = pv;
    v12 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v13 = 189LL;
      goto LABEL_10;
    }
    v14 = v20;
    if ( v20 )
    {
      LastError = GetLastError();
      EdpFreeContext(v14);
      SetLastError(LastError);
    }
    v20 = 0LL;
    ProcessImageName = EdpGetContextForBinaryPath(v11, &v20);
    v12 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v13 = 191LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
        (const char *)(unsigned int)ProcessImageName);
      if ( v11 )
        CoTaskMemFree(v11);
      goto LABEL_21;
    }
    if ( !v11 )
    {
LABEL_16:
      v16 = *(char **)(v20 + 8);
      if ( v16 )
      {
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
          &pv,
          v16,
          0xFFFFFFFFFFFFFFFFuLL);
        if ( !pv )
        {
          v12 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC9,
            (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
            (const char *)0x8007000ELL);
          goto LABEL_21;
        }
        *a2 = pv;
      }
      v12 = 0;
      goto LABEL_21;
    }
    CoTaskMemFree(v11);
  }
  if ( ContextForWindow >= 0 )
    goto LABEL_16;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC1,
    (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
    (const char *)(unsigned int)ContextForWindow);
  v12 = ContextForWindow;
LABEL_21:
  if ( v20 )
    EdpFreeContext(v20);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v17);
  return v12;
}
