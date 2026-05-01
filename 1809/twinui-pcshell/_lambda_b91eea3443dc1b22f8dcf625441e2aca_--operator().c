/*
 * XREFs of _lambda_b91eea3443dc1b22f8dcf625441e2aca_::operator() @ 0x1801C22DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b91eea3443dc1b22f8dcf625441e2aca__&___ptr64_::Run @ 0x1801C33E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b91eea3443dc1b22f8dcf625441e2aca__-___ptr64.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1801C5400 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180129038 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b91eea3443dc1b22f8dcf625441e2aca_::operator()(__int64 a1)
{
  int v2; // ebx
  HRESULT v3; // eax
  LPVOID v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  v2 = WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
         (Microsoft::WRL::WeakRef *)(a1 + 8),
         &v11);
  if ( v2 >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v3 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
    v2 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v3);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      goto LABEL_12;
    }
    v9 = 0LL;
    v4 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v5 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &IID_IImmersiveApplicationManager,
           &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
           &v9);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 24LL))(
             v9,
             *(_QWORD *)(*(_QWORD *)a1 + 112LL),
             0LL,
             2050LL);
      v2 = v5;
      if ( v5 >= 0 )
      {
        v2 = 0;
        goto LABEL_10;
      }
      v6 = 173LL;
    }
    else
    {
      v6 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
LABEL_10:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v2;
}
