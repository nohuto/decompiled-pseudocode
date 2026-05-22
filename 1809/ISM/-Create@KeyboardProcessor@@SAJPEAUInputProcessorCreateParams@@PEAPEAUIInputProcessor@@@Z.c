/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800ED450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180103F00 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = malloc(0x40uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x40uLL);
  if ( v5 )
  {
    v6 = *(_QWORD *)a1;
    v7 = *((_QWORD *)a1 + 1);
    *((_QWORD *)v5 + 1) = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 4) = 1;
    *((_QWORD *)v5 + 4) = v6;
    *(_QWORD *)v5 = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v5 + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v5 + 3) = v7;
    *((_DWORD *)v5 + 10) = 0;
    *((_DWORD *)v5 + 11) = 300;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_DWORD *)v5 + 14) = 0;
    v9 = *((_QWORD *)v5 + 6);
    if ( v9 )
    {
      *((_QWORD *)v5 + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = KeyboardModifierState::Create((struct KeyboardModifierState **)v5 + 6);
    v11 = v10;
    if ( v10 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v10);
    if ( v11 >= 0 )
    {
      *a2 = (struct IInputProcessor *)v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
