/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800150B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180014E0C (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardProcessor::Create(struct InputProcessorCreateParams *a1, struct KeyboardModifierState ***a2)
{
  struct KeyboardModifierState **v4; // rax
  struct KeyboardModifierState **v5; // rbx
  struct KeyboardModifierState *v6; // r8
  struct KeyboardModifierState *v7; // rcx
  struct KeyboardModifierState *v8; // rcx
  int v9; // eax
  int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct KeyboardModifierState **)RefCountedObject::operator new(0x58uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct KeyboardModifierState *)*((_QWORD *)a1 + 1);
    v7 = *(struct KeyboardModifierState **)a1;
    v4[2] = (struct KeyboardModifierState *)&RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    v4[6] = 0LL;
    *v4 = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `IInputProcessor'};
    v4[1] = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `IInputFocusListener'};
    v4[2] = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `RefCountedObject'};
    *((_BYTE *)v4 + 56) = 0;
    v4[5] = v7;
    v4[4] = v6;
    *((_DWORD *)v4 + 16) = 0;
    *((_DWORD *)v4 + 17) = 300;
    v4[9] = 0LL;
    *((_DWORD *)v4 + 20) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v8 = v5[9];
    if ( v8 )
    {
      v5[9] = 0LL;
      (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = KeyboardModifierState::Create(v5 + 9);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v9);
    else
      v10 = 0;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    else
    {
      *a2 = v5;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
