/*
 * XREFs of ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x180042780
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800F6294 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::SetInFocusAppView(
        RTL_SRWLOCK *this,
        void *a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rsi
  const char *v6; // r9
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  void *v13[5]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13[1] = (void *)-2LL;
  v4 = this + 9;
  AcquireSRWLockExclusive(this + 9);
  v13[0] = v4;
  this[10].Ptr = a2;
  try
  {
    v5 = (*((__int64 (**)(void))this[-3].Ptr + 9))();
    v7 = (char *)&this[11];
    if ( v7 != (char *)v5 )
    {
      v8 = *((_QWORD *)v7 + 3);
      if ( v8 >= 8 )
      {
        v9 = *(void **)v7;
        v10 = (const struct std::nothrow_t *)(2 * v8 + 2);
        v12 = (unsigned __int64)v10;
        v13[0] = v9;
        if ( (unsigned __int64)v10 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(v13, &v12);
          v10 = (const struct std::nothrow_t *)v12;
          v9 = v13[0];
        }
        operator delete(v9, v10);
      }
      *((_QWORD *)v7 + 2) = 0LL;
      *((_QWORD *)v7 + 3) = 7LL;
      *(_WORD *)v7 = 0;
      *(_OWORD *)v7 = *(_OWORD *)v5;
      *((_OWORD *)v7 + 1) = *(_OWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v5 + 24) = 7LL;
      *(_WORD *)v5 = 0;
    }
    if ( v14 >= 8 )
      std::_Deallocate<16,0>(v13[2], 2 * v14 + 2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4B,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                           v6);
  }
  return result;
}
