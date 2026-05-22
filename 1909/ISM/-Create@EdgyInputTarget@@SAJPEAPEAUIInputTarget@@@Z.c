/*
 * XREFs of ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x180104264
 * Callers:
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801043AC (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

__int64 __fastcall EdgyInputTarget::Create(struct IInputTarget **a1)
{
  _QWORD *v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = RefCountedObject::operator new(0x28uLL);
  if ( v2 )
  {
    v2[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v2 + 6) = 1;
    *((_DWORD *)v2 + 8) = 0;
    *v2 = &EdgyInputTarget::`vftable'{for `IInputTarget'};
    v2[1] = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
    v2[2] = &EdgyInputTarget::`vftable'{for `RefCountedObject'};
    *a1 = (struct IInputTarget *)v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
