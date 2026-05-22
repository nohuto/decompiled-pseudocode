/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x180094728
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x180094360 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800940F0 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  void **v2; // rcx
  char *v3; // rbx
  char *v4; // r14
  char *i; // rsi
  int v6; // eax
  char *v8; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D8h]
  struct _RTL_CRITICAL_SECTION *v10[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v11[2032]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+870h] [rbp+768h]

  v10[1] = (struct _RTL_CRITICAL_SECTION *)-2LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_BYTE *)this + 80) )
  {
    MPCRawInputProvider::FlushQueuedDeviceChanges(this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v10[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
    v2 = (void **)((char *)this + 184);
    if ( &v8 == (char **)((char *)this + 184) )
    {
      v4 = (char *)v9;
      v3 = v8;
    }
    else
    {
      v3 = (char *)*v2;
      v8 = (char *)*v2;
      *v2 = 0LL;
      v4 = (char *)*((_QWORD *)this + 24);
      *(_QWORD *)&v9 = v4;
      *((_QWORD *)this + 24) = 0LL;
      *((_QWORD *)&v9 + 1) = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = 0LL;
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v10);
    for ( i = v3; i != v4; i += 2032 )
    {
      memcpy_0(v11, i, sizeof(v11));
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v11);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          191LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
    }
  }
  else
  {
    v3 = v8;
  }
  if ( v3 )
    std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(2032 * ((*((_QWORD *)&v9 + 1) - (_QWORD)v3) / 2032LL)));
  return 0LL;
}
