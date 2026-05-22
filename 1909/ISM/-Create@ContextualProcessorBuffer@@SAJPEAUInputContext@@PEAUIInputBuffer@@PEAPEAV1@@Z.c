/*
 * XREFs of ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800F9FBC
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800F93EC (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0ContextualProcessorBuffer@@IEAA@PEAUInputContext@@PEAUIInputTarget@@PEAUIInputBuffer@@@Z @ 0x1800F9C64 (--0ContextualProcessorBuffer@@IEAA@PEAUInputContext@@PEAUIInputTarget@@PEAUIInputBuffer@@@Z.c)
 */

__int64 __fastcall ContextualProcessorBuffer::Create(
        struct InputContext *a1,
        struct IInputBuffer *a2,
        struct ContextualProcessorBuffer **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ContextualProcessorBuffer *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)v6);
    return v6;
  }
  v9 = (ContextualProcessorBuffer *)RefCountedObject::operator new(0x70uLL);
  if ( v9 )
    v9 = ContextualProcessorBuffer::ContextualProcessorBuffer(v9, a1, *(struct IInputTarget **)a1, a2);
  if ( !v9 )
  {
    v6 = -2147024882;
    v7 = 47LL;
    goto LABEL_3;
  }
  *a3 = v9;
  return 0LL;
}
