/*
 * XREFs of ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x180189374
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180189480 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800E3760 (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180189184 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        const char *a4)
{
  char v5; // bl
  __int64 v7; // r8
  int v8; // eax
  const char *v9; // r9
  __int64 v10; // rbx
  int v11; // ebp
  Microsoft::BamoImpl::BaseBamoPeerImpl *v12; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v13; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v5 = (char)a4;
  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(a3, 0, (__int64)a3, a4);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v17,
    (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)this);
  LOBYTE(v7) = v5;
  v8 = (*((__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl **, Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))*this
        + 5))(
         this,
         a3,
         v7);
  v10 = v17;
  v11 = v8;
  if ( v17 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v17 + 96));
    *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4C6,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = this[9];
  v13 = 0LL;
  while ( 1 )
  {
    if ( !v12 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x546,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v9);
      __debugbreak();
    }
    if ( v12 == a3 )
      break;
    v13 = v12;
    v12 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)v12 + 7);
  }
  v14 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 7);
  if ( v13 )
    *((_QWORD *)v13 + 7) = v14;
  else
    this[9] = v14;
  *((_QWORD *)a3 + 7) = 0LL;
  (**(void (__fastcall ***)(Microsoft::BamoImpl::BaseBamoPeerImpl *))a3)(a3);
  return 0LL;
}
