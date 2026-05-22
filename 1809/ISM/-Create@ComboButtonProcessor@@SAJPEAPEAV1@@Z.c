/*
 * XREFs of ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800C5430
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1800C5230 (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ComboButtonProcessor::Create(struct ComboButtonProcessor **a1)
{
  _QWORD *v2; // rbx
  unsigned int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  if ( a1 )
  {
    v4 = malloc(0x128uLL);
    v5 = v4;
    if ( v4 )
      memset_0(v4, 0, 0x128uLL);
    if ( v5 )
    {
      memset_0(v5, 0, 0x128uLL);
      v5[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v5 + 4) = 1;
      *v5 = &ComboButtonProcessor::`vftable'{for `IContextualProcessor'};
      v5[1] = &ComboButtonProcessor::`vftable'{for `RefCountedObject'};
      v5[3] = 0LL;
      v5[4] = 0LL;
      v5[5] = 0LL;
      v5[6] = 0LL;
    }
    v2 = v5;
    if ( v5 )
    {
      v8 = ComboButtonProcessor::Initialize((ComboButtonProcessor *)v5);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v2 = 0LL;
        *a1 = (struct ComboButtonProcessor *)v5;
        v3 = 0;
        goto LABEL_13;
      }
      v6 = (unsigned int)v8;
      v7 = 39LL;
    }
    else
    {
      v3 = -2147024882;
      v6 = 2147942414LL;
      v7 = 36LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)v6);
    goto LABEL_14;
  }
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\combo"
             "buttonprocessor.cpp",
    (const char *)0x80070057LL);
LABEL_13:
  v5 = 0LL;
LABEL_14:
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(v2[1] + 24LL))(v2 + 1, 1LL);
  return v3;
}
