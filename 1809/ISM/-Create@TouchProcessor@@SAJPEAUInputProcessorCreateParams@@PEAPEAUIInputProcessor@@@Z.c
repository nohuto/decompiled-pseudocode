/*
 * XREFs of ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180103A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TouchProcessor@@IEAAJXZ @ 0x180103AF8 (-Initialize@TouchProcessor@@IEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall TouchProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = malloc(0x48uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x48uLL);
  if ( v5 )
  {
    v6 = *(_QWORD *)a1;
    v7 = *((_QWORD *)a1 + 1);
    v5[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 4) = 1;
    v5[4] = v6;
    *v5 = &TouchProcessor::`vftable'{for `IInputProcessor'};
    v5[1] = &TouchProcessor::`vftable'{for `RefCountedObject'};
    v5[5] = &TouchProcessor::`vftable';
    v5[3] = v7;
    v5[6] = 0LL;
    *((_DWORD *)v5 + 14) = 0;
    v5[8] = 0LL;
    v9 = TouchProcessor::Initialize((TouchProcessor *)v5);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a2 = (struct IInputProcessor *)v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
