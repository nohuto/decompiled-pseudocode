/*
 * XREFs of ?Commit@JointResize@@AEAAJXZ @ 0x1803EEFAC
 * Callers:
 *     ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x1803EFC10 (-OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::Commit(JointResize *this)
{
  int v1; // edi
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  void *ppvOut; // [rsp+30h] [rbp-28h] BYREF
  int v12[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *((_DWORD *)this + 72);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v3 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &GUID_fff59320_db70_4865_8fed_8b502d692f12,
         &GUID_fff59320_db70_4865_8fed_8b502d692f12,
         &ppvOut);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = *((_QWORD *)this + 25);
    *(_OWORD *)v12 = 0LL;
    v3 = (*(__int64 (__fastcall **)(void *, __int64, bool, __int64, int *))(*(_QWORD *)ppvOut + 24LL))(
           ppvOut,
           v6,
           v1 != 10,
           3LL,
           v12);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 16);
      v8 = *v7;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 112LL))(*((_QWORD *)this + 22));
      v3 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v8 + 40))(v7, *((_QWORD *)this + 30), v9);
      v4 = v3;
      if ( v3 >= 0 )
      {
        v4 = 0;
        *(_OWORD *)((char *)this + 248) = *(_OWORD *)v12;
        goto LABEL_9;
      }
      v5 = 651LL;
    }
    else
    {
      v5 = 647LL;
    }
  }
  else
  {
    v5 = 644LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v4;
}
