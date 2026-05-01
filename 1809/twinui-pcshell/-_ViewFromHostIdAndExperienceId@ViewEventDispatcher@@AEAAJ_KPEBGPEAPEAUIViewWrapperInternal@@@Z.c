/*
 * XREFs of ?_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z @ 0x180220BD4
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18021C878 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromHostIdAndExperienceId(
        ViewEventDispatcher *this,
        __int64 a2,
        const unsigned __int16 *a3,
        struct IViewWrapperInternal **a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // ebx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 46);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10 + 8 * v9) + 704LL))(
             *(_QWORD *)(v10 + 8 * v9),
             a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const unsigned __int16 *))(**(_QWORD **)(v10 + 8 * v9) + 696LL))(
               *(_QWORD *)(v10 + 8 * v9),
               a3) )
        {
          break;
        }
      }
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 47) )
        goto LABEL_5;
    }
    v8 = v9;
    v11 = 0;
  }
  else
  {
LABEL_5:
    v11 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v11 >= 0 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 46) + 8 * v8);
    v13 = (**v12)(v12, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a4);
    v11 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
  }
  return (unsigned int)v11;
}
