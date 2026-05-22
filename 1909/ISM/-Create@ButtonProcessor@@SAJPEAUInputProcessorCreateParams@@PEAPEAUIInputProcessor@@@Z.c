/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180124D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180124E78 (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 */

__int64 __fastcall ButtonProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  ButtonProcessor *v4; // rax
  ButtonProcessor *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (ButtonProcessor *)RefCountedObject::operator new(0x60uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = *(_QWORD *)a1;
    *((_QWORD *)v4 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    *((_QWORD *)v4 + 6) = 0LL;
    *(_QWORD *)v4 = &ButtonProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v4 + 1) = &KeyboardProcessor::`vftable'{for `IInputFocusListener'};
    *((_QWORD *)v4 + 2) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
    *((_BYTE *)v4 + 56) = 0;
    *((_QWORD *)v4 + 5) = v7;
    *((_QWORD *)v4 + 4) = v6;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    *((_QWORD *)v4 + 11) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v9 = ButtonProcessor::Initialize(v5);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
