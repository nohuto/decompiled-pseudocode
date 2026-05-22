/*
 * XREFs of ?SetBootstrapProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18001223C
 * Callers:
 *     ?Thunk_SetBootstrapProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800191D0 (-Thunk_SetBootstrapProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBam.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // r9
  signed int v9; // edi
  __int64 v10; // r8
  unsigned int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v2 + 40) + 56LL))(
         *(_QWORD *)(v2 + 40),
         *((unsigned int *)this + 9),
         a2,
         &v14) < 0 )
  {
    v9 = -2018375668;
    goto LABEL_11;
  }
  v3 = v14;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  v5 = *(_QWORD *)(v2 + 16);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  v7 = 0LL;
  v15 = 0LL;
  if ( !*(_DWORD *)(v6 + 140) )
  {
    v7 = v6;
    v15 = v6;
    if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v8);
      JUMPOUT(0x1800123A4LL);
    }
    *(_DWORD *)(v7 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v4);
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  if ( v9 >= 0 )
  {
    if ( !*(_BYTE *)(v3 + 29) )
    {
      LOBYTE(v10) = *(_DWORD *)(v3 + 8) > 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v3 + 16) + 56LL))(
        *(_QWORD *)(v3 + 16),
        *(unsigned int *)(v3 + 24),
        v10);
    }
LABEL_11:
    if ( v9 >= 0 )
      return (unsigned int)v9;
  }
  if ( v9 != -2018375668 )
  {
    v12 = wil::verify_hresult<long>(v9);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x41A,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)v12);
    __debugbreak();
  }
  return (unsigned int)v9;
}
