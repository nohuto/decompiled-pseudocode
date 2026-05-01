/*
 * XREFs of ?SetCallback@CSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x1803700D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISnapAssistViewController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISnapAssistViewController@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036F268 (--$As@UISnapAssistViewController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CSnapAssistViewHost::SetCallback(CSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISnapAssistViewController>((_QWORD *)this + 22, &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, struct ISnapAssistCallback *))(*(_QWORD *)v7 + 32LL))(v7, a2);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
