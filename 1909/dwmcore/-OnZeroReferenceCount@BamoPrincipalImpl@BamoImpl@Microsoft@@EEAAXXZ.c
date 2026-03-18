/*
 * XREFs of ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801951D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180188A98 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1801954F4 (-RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v1; // rax
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rdx
  _QWORD *v7; // rsi
  _QWORD *i; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v3 = *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v1 + 24);
  if ( *((_QWORD *)v3 + 5) )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::RemovePrincipal(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v1 + 24),
      *((_DWORD *)this + 6));
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    while ( 2 )
    {
      v5 = v4[5];
      v6 = 0LL;
      v7 = (_QWORD *)v4[6];
      for ( i = *(_QWORD **)(v5 + 48); i; i = (_QWORD *)i[7] )
      {
        if ( i == v4 )
        {
          v9 = v4[7];
          if ( v6 )
            v6[7] = v9;
          else
            *(_QWORD *)(v5 + 48) = v9;
          v4[7] = 0LL;
          break;
        }
        v6 = i;
      }
      if ( !i )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xD9,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPeer.inl",
          (const char *)v5);
        __debugbreak();
      }
      v10 = *((_QWORD *)this + 4);
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_BYTE *)(v10 + 32) = 0;
      (***((void (__fastcall ****)(_QWORD, _QWORD *))this + 4))(*((_QWORD *)this + 4), v6);
      *((_QWORD *)this + 4) = v7;
      if ( v7 )
      {
        v4 = v7;
        continue;
      }
      break;
    }
  }
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v14,
    v3);
  v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  v12 = v14;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
}
