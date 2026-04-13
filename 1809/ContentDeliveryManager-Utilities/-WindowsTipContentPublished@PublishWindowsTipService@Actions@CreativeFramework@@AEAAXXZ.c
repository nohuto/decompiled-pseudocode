/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009250C
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x180092500 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049B00 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  _WORD *v5; // rcx
  signed __int64 v6; // rdx
  __int16 v7; // ax
  _WORD *v8; // rax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  char *v11; // rcx
  _WORD *v12; // rdx
  signed __int64 v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v23[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v24[32]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v25[512]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[512]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]

  v23[1] = (const WCHAR *)-2LL;
  v23[0] = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
  memset_0(v25, 0, 0x400uLL);
  v2 = (char *)this + 8;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(char **)v2;
  v3 = 256LL;
  v4 = 256LL;
  v5 = v25;
  v6 = v2 - v25;
  do
  {
    if ( v4 == -2147483390 )
      break;
    v7 = *(_WORD *)((char *)v5 + v6);
    if ( !v7 )
      break;
    *v5++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = v5 - 1;
  if ( v4 )
    v8 = v5;
  *v8 = 0;
  v9 = v4 == 0 ? (const char *)0x8007007ALL : 0LL;
  v10 = retaddr;
  if ( !v4 )
  {
LABEL_27:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      v9);
    __debugbreak();
  }
  v11 = (char *)this + 40;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v11 = *(char **)v11;
  v12 = v26;
  v13 = v11 - v26;
  do
  {
    if ( v3 == -2147483390 )
      break;
    v14 = *(_WORD *)((char *)v12 + v13);
    if ( !v14 )
      break;
    *v12++ = v14;
    --v3;
  }
  while ( v3 );
  v15 = v12 - 1;
  if ( v3 )
    v15 = v12;
  *v15 = 0;
  if ( !v3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x8007007ALL);
    goto LABEL_29;
  }
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v22);
  v21 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 112LL))(v22, &v21);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18009275FLL);
  }
  v18 = v21;
  v19 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, v23) + 24);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v18 + 48LL))(v18, v19, 1024LL, v25);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_27;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
}
