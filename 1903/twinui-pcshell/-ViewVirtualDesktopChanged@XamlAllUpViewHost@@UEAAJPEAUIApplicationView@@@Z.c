/*
 * XREFs of ?ViewVirtualDesktopChanged@XamlAllUpViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1802D0550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802B3A08 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewHost::ViewVirtualDesktopChanged(XamlAllUpViewHost *this, struct IApplicationView *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  int v6; // r14d
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v14)(_QWORD, __int64, __int64 *); // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 120) & -(__int64)(this != (XamlAllUpViewHost *)144));
  try
  {
    v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    if ( !*((_BYTE *)this + 556) )
    {
      v14 = 0LL;
      v7 = *((_QWORD *)this + 14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v8 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, GUID *, __int64 (__fastcall ****)(_QWORD, __int64, __int64 *)))(*(_QWORD *)v7 + 32LL))(
             v7,
             a2,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v14);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        if ( v6 >= 0 )
          LeaveCriticalSection(v4);
        return v9;
      }
      v11 = __abi_winrt_cast_to(
              0,
              v14,
              (__int64)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__);
      v15 = v11;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4), v11);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    }
    if ( v6 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x199,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v5);
  }
  return result;
}
