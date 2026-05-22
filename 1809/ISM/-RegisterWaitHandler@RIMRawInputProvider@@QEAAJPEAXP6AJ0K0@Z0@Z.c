/*
 * XREFs of ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18005C86C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::RegisterWaitHandler(
        RIMRawInputProvider *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
  {
    v5 = -2147418113;
    v6 = 209LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64 (__fastcall *)(void *, unsigned int, void *), void *))(*(_QWORD *)v4 + 264LL))(
         v4,
         a2,
         RIMDeviceCollection::OnReadCallbackStatic,
         a4);
  if ( v5 < 0 )
  {
    v6 = 212LL;
    goto LABEL_3;
  }
  return 0LL;
}
