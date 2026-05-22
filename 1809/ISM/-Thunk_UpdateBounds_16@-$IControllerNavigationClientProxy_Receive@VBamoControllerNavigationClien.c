/*
 * XREFs of ?Thunk_UpdateBounds_16@?$IControllerNavigationClientProxy_Receive@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18002B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IControllerNavigationClientProxy_Receive<BamoImpl::BamoControllerNavigationClientProxyImpl>::Thunk_UpdateBounds_16(
        __int64 a1,
        _OWORD **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  const char *v6; // r9
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)(a1 + 40) = **a2;
  if ( !*(_BYTE *)(a1 + 28) )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
  v4 = 0LL;
  if ( !*(_DWORD *)(v3 + 140) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
    CurrentThreadId = GetCurrentThreadId();
    v7 = retaddr;
    if ( *(_DWORD *)(v3 + 136) != CurrentThreadId )
    {
LABEL_10:
      wil::details::in1diag3::_FailFast_Unexpected(
        v7,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v6);
      JUMPOUT(0x18002BAB2LL);
    }
    *(_DWORD *)(v3 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9981,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
    goto LABEL_10;
  }
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
