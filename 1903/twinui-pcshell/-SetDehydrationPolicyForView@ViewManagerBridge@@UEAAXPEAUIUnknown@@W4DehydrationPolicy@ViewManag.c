/*
 * XREFs of ?SetDehydrationPolicyForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180289E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::in1diag3 **__fastcall ViewManagerBridge::SetDehydrationPolicyForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 **),
        int a3)
{
  wil::details::in1diag3 **result; // rax
  int v5; // r8d
  unsigned int v6; // edi
  void (__fastcall *v7)(_QWORD, GUID *, __int64 **); // rbx
  __int64 v8; // rax
  const wchar_t *v9; // r8
  int v10; // edx
  int v11; // eax
  unsigned int v12; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 145) )
  {
    if ( a3 )
    {
      v5 = a3 - 1;
      if ( !v5 )
      {
        v6 = 1;
        goto LABEL_8;
      }
      if ( v5 == 1 )
      {
        v6 = 2;
        goto LABEL_8;
      }
    }
    v6 = 0;
LABEL_8:
    v15 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v7(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v15);
    v8 = *v15;
    v9 = L"DehydrationPolicy";
    v13 = L"DehydrationPolicy";
    v10 = 0;
    do
    {
      ++v9;
      ++v10;
    }
    while ( *v9 );
    v12 = v10 | 0x80000000;
    v11 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, _QWORD))(v8 + 720))(v15, &v12, v6);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    return (wil::details::in1diag3 **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  return result;
}
