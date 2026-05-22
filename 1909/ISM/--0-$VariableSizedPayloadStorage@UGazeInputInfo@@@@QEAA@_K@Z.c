/*
 * XREFs of ??0?$VariableSizedPayloadStorage@UGazeInputInfo@@@@QEAA@_K@Z @ 0x1800A62F4
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800A6614 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall VariableSizedPayloadStorage<GazeInputInfo>::VariableSizedPayloadStorage<GazeInputInfo>(
        void **a1,
        size_t a2,
        __int64 a3,
        const char *a4)
{
  void *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  if ( a2 < 0x60 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      448LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
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
