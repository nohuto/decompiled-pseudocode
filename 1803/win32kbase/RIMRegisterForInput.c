/*
 * XREFs of RIMRegisterForInput @ 0x1C00E4790
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 */

__int64 __fastcall RIMRegisterForInput(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return RIMRegisterForInputWithCallbacks(
           a1,
           0,
           0,
           0,
           (__int64)gpWin32kDriverObject,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           0LL,
           0,
           a8);
}
