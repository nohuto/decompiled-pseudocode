/*
 * XREFs of ?NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z @ 0x18006EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceAttachCallback(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 )
  {
    v2 = 1082LL;
LABEL_7:
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x80070057LL);
    goto LABEL_10;
  }
  v3 = *a1;
  if ( !v3 )
  {
    v2 = 1083LL;
    goto LABEL_7;
  }
  if ( !a1[1] )
  {
    v2 = 1084LL;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, a1[2]);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18006EE83LL);
  }
  v4 = 0;
LABEL_10:
  if ( a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      a1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  }
  return v4;
}
