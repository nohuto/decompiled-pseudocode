/*
 * XREFs of ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180029990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x180018750 (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180029A10 (-Initialize@MouseProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  MouseProcessor *v4; // rax
  MouseProcessor *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (MouseProcessor *)RefCountedObject::operator new(0x6C0uLL);
  if ( v4 )
    v5 = MouseProcessor::MouseProcessor(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = MouseProcessor::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    else
    {
      *a2 = (MouseProcessor *)((char *)v5 + 16);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
