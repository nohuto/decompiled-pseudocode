/*
 * XREFs of ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180295330
 * Callers:
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180293978 (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromFrameOrWindow(
        ViewEventDispatcher *this,
        HWND a2,
        struct IViewWrapperInternal **a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 45) )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 44);
      if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8 * v7) + 736LL))(*(_QWORD *)(v8 + 8 * v7)) == a2
        || (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8 * v7) + 744LL))(*(_QWORD *)(v8 + 8 * v7)) == a2 )
      {
        break;
      }
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 45) )
        goto LABEL_5;
    }
    v6 = v7;
    v9 = 0;
  }
  else
  {
LABEL_5:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( v9 >= 0 )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 44) + 8 * v6);
    v11 = (**v10)(v10, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a3);
    v9 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
  }
  return (unsigned int)v9;
}
