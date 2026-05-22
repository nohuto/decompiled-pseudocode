/*
 * XREFs of ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180011B80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180011DB0 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        char a4)
{
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  const char *v10; // r9
  int v11; // ebp
  const char *v12; // r9
  Microsoft::BamoImpl::BaseBamoPeerImpl *v13; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *i; // rax
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v18; // [rsp+60h] [rbp+18h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v18,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v7 = *((_QWORD *)this + 1);
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(a3, 0);
  v9 = 0LL;
  if ( !*(_DWORD *)(v7 + 140) )
  {
    v9 = v7;
    if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v10);
      __debugbreak();
    }
    *(_DWORD *)(v7 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
  }
  LOBYTE(v8) = a4;
  v11 = (*(__int64 (__fastcall **)(__int64, Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v7 + 40LL))(
          v7,
          a3,
          v8);
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4C6,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180011CDALL);
  }
  v13 = 0LL;
  for ( i = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v7 + 72);
        i;
        i = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)i + 7) )
  {
    if ( i == a3 )
    {
      v15 = *((_QWORD *)a3 + 7);
      if ( v13 )
        *((_QWORD *)v13 + 7) = v15;
      else
        *(_QWORD *)(v7 + 72) = v15;
      *((_QWORD *)a3 + 7) = 0LL;
      break;
    }
    v13 = i;
  }
  if ( !i )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x546,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v12);
    __debugbreak();
  }
  (**(void (__fastcall ***)(Microsoft::BamoImpl::BaseBamoPeerImpl *))a3)(a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v18);
  return 0LL;
}
