/*
 * XREFs of ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x180142AD8
 * Callers:
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C6B80 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C6D00 (-DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputEventPayloadBuffer::InputEventPayloadBuffer(__int64 a1, int a2, int *a3, const char *a4)
{
  size_t v7; // rsi
  void *v8; // rax
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rcx
  _DWORD *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = a3[2];
  if ( !(_DWORD)v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\lib\\helpers.cpp",
      a4);
    __debugbreak();
  }
  *(_DWORD *)a1 = v7 + 28;
  v8 = operator new[]((int)v7 + 28);
  v10 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8;
  if ( v10 )
    operator delete(v10, v9);
  v11 = *(_DWORD **)(a1 + 8);
  *v11 = a2;
  memcpy_0(v11 + 2, a3, v7);
  return a1;
}
