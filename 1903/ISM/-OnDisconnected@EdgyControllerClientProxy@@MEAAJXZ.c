/*
 * XREFs of ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18006ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102504 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnDisconnected(EdgyControllerClientProxy *this)
{
  __int64 *v2; // rbx
  const unsigned __int16 *v3; // rdx
  bool v4; // cf
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 128);
  v3 = (const unsigned __int16 *)((char *)this + 88);
  v4 = *((_QWORD *)this + 14) < 8uLL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 16) + 56LL);
  if ( !v4 )
    v3 = *(const unsigned __int16 **)v3;
  v6 = Edges::Remove((Edges *)(v5 + 72), v3, this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      229LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v2);
  return 0LL;
}
