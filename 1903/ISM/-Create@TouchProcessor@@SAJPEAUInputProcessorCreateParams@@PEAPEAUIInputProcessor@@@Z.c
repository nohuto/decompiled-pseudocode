/*
 * XREFs of ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180141010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@TouchProcessor@@IEAAJXZ @ 0x1801410FC (-Initialize@TouchProcessor@@IEAAJXZ.c)
 */

__int64 __fastcall TouchProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  TouchProcessor *v4; // rax
  TouchProcessor *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (TouchProcessor *)RefCountedObject::operator new(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = *(_QWORD *)a1;
    *((_QWORD *)v4 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    *((_QWORD *)v4 + 6) = 0LL;
    *(_QWORD *)v4 = &TouchProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v4 + 1) = &TouchProcessor::`vftable'{for `IInputFocusListener'};
    *((_QWORD *)v4 + 2) = &TouchProcessor::`vftable'{for `RefCountedObject'};
    *((_BYTE *)v4 + 56) = 0;
    *((_QWORD *)v4 + 5) = v7;
    *((_QWORD *)v4 + 4) = v6;
    *((_QWORD *)v4 + 8) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v9 = TouchProcessor::Initialize(v5);
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
        (void *)0x35,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
