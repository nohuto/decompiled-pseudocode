/*
 * XREFs of ?OnDisconnected@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180109340
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteTextInputProcessor@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010922C (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteTextInputProcessor@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 */

__int64 __fastcall InputServiceProxy::OnDisconnected(InputServiceProxy *this, struct IMessageProxy *a2)
{
  int v4; // eax
  struct IMessageProxy *v5; // rcx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMessageProxy *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      228LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( *((_QWORD *)this + 3) )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IRemoteTextInputProcessor>::As<IMessageProxy>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3,
      (__int64 *)&v9);
    v5 = v9;
    if ( v9 == a2 )
    {
      v6 = *((_QWORD *)this + 3);
      if ( v6 )
      {
        *((_QWORD *)this + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v5 = v9;
      }
    }
    if ( v5 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return 0LL;
}
