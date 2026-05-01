/*
 * XREFs of ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018F460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsOleInitializePresent @ 0x1800866D4 (IsOleInitializePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z @ 0x18018FBF4 (-SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018FDB0 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStart(CImmersiveShellCreationBehavior *this)
{
  HRESULT v2; // ebx
  __int64 v3; // rdx
  void *v5; // rsi
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v2 < 0 )
  {
    v3 = 470LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( !*((_BYTE *)this + 16) && IsOleInitializePresent() )
  {
    v2 = OleInitialize(0LL);
    if ( v2 < 0 )
    {
      v3 = 477LL;
      goto LABEL_3;
    }
    *((_BYTE *)this + 16) = 1;
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      *(_QWORD *)v5 = &CThreadRefHost::`vftable';
      *((_DWORD *)v5 + 2) = 0;
      *((_QWORD *)v5 + 2) = 0LL;
      SHCreateDUIThreadRef((int *)v5 + 2, (struct IUnknown **)v5 + 2);
      SHSetThreadRef(*((IUnknown **)v5 + 2));
    }
    else
    {
      v5 = 0LL;
    }
    v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v6 )
      (**v6)(v6, 1LL);
    *((_QWORD *)this + 3) = v5;
    if ( !v5 )
    {
      v2 = -2147024882;
      v3 = 489LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
