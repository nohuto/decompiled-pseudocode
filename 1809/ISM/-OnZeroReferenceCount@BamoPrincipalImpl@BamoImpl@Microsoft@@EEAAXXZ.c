/*
 * XREFs of ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18001B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180010E5C (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *i; // rcx
  __int64 v15; // r8
  wil::details::in1diag3 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 24);
  if ( *(_QWORD *)(v6 + 40) )
  {
    v7 = *((_DWORD *)this + 6);
    if ( *(_DWORD *)(v6 + 140) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2D6,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        a4);
      JUMPOUT(0x18001B55FLL);
    }
    Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
      (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v21,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v5 + 24));
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(v6 + 40) + 48LL))(
           *(_QWORD *)(v6 + 40),
           *(unsigned int *)(v6 + 28),
           v7,
           0LL,
           &v22);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E3,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v8);
      goto LABEL_24;
    }
    v9 = v21;
    if ( v21 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v21 + 96));
      *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
    }
  }
  v10 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)v10[6];
      v12 = v10[5];
      v13 = 0LL;
      for ( i = *(_QWORD **)(v12 + 48); i; i = (_QWORD *)i[7] )
      {
        if ( i == v10 )
        {
          v15 = v10[7];
          if ( v13 )
            v13[7] = v15;
          else
            *(_QWORD *)(v12 + 48) = v15;
          v10[7] = 0LL;
          break;
        }
        v13 = i;
      }
      v16 = retaddr;
      if ( !i )
        break;
      v17 = *((_QWORD *)this + 4);
      *(_BYTE *)(v17 + 32) = 0;
      *(_QWORD *)(v17 + 24) = 0LL;
      (***((void (__fastcall ****)(_QWORD, _QWORD *))this + 4))(*((_QWORD *)this + 4), v13);
      *((_QWORD *)this + 4) = v11;
      v10 = v11;
      if ( !v11 )
        goto LABEL_18;
    }
LABEL_24:
    wil::details::in1diag3::_FailFast_Unexpected(
      v16,
      (void *)0xD9,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamopeer.inl",
      (const char *)v12);
    __debugbreak();
  }
LABEL_18:
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v21,
    (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)v6);
  v18 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  if ( v18 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
  v19 = v21;
  if ( v21 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v21 + 96));
    *(_DWORD *)(v19 + 136) = GetCurrentThreadId();
  }
}
