/*
 * XREFs of ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1800605E8
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180060700 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800277C0 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18005F900 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        const char *a4)
{
  char v4; // bl
  __int64 v7; // r8
  int v8; // ebp
  const char *v9; // r9
  __int64 v10; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rdx
  Microsoft::BamoImpl::BaseBamoPeerImpl *i; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char)a4;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(a3, 0, (__int64)a3, a4);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v16,
    (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)this);
  LOBYTE(v7) = v4;
  v8 = (*((__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl **, Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))*this
        + 5))(
         this,
         a3,
         v7);
  v10 = v16;
  if ( v16 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v16 + 96));
    *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1222LL,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v11 = 0LL;
  for ( i = this[9]; ; i = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)i + 7) )
  {
    if ( !i )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1350LL,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v9);
      __debugbreak();
    }
    if ( i == a3 )
      break;
    v11 = i;
  }
  v13 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 7);
  if ( v11 )
    *((_QWORD *)v11 + 7) = v13;
  else
    this[9] = v13;
  *((_QWORD *)a3 + 7) = 0LL;
  (**(void (__fastcall ***)(Microsoft::BamoImpl::BaseBamoPeerImpl *))a3)(a3);
  return 0LL;
}
