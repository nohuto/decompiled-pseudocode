/*
 * XREFs of ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A2F8
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x180015A3C (--0Win32kInterop@@QEAA@XZ.c)
 *     ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x180076360 (-InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x18008DC80 (-InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBB40 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BC664 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@_N@Z @ 0x1800BD274 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180125A40 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18012B480 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ @ 0x18012B81C (-OnMouseAsTouchAutoRepeat@MouseProcessor@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
        void **a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4)
{
  void *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  if ( a2 < 0x20 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      a4);
    __debugbreak();
  }
  v6 = operator new[](a2);
  v8 = *a1;
  *a1 = v6;
  if ( v8 )
    operator delete(v8, v7);
  memset_0(*a1, 0, a2);
  *((_DWORD *)*a1 + 6) = a2;
  return a1;
}
