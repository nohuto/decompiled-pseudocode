/*
 * XREFs of ?SetDehydrationPolicyForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180234A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetDehydrationPolicyForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v4; // r8d
  unsigned int v5; // ebx
  const wchar_t *v6; // rax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 145) )
  {
    if ( a3 )
    {
      v4 = a3 - 1;
      if ( !v4 )
      {
        v5 = 1;
        goto LABEL_8;
      }
      if ( v4 == 1 )
      {
        v5 = 2;
        goto LABEL_8;
      }
    }
    v5 = 0;
LABEL_8:
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    (**a2)(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v12);
    v6 = L"DehydrationPolicy";
    v10 = L"DehydrationPolicy";
    v7 = 0;
    do
    {
      ++v6;
      ++v7;
    }
    while ( *v6 );
    v9 = v7 | 0x80000000;
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v12 + 720LL))(v12, &v9, v5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        288LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
}
