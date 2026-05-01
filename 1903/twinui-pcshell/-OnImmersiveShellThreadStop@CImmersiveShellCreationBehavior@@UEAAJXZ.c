/*
 * XREFs of ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801D5EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1801D665C (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStop(CImmersiveShellCreationBehavior *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v5 )
      (**v5)(v5, 1LL);
    if ( *((_BYTE *)this + 16) )
    {
      OleUninitialize();
      *((_BYTE *)this + 16) = 0;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21A,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
