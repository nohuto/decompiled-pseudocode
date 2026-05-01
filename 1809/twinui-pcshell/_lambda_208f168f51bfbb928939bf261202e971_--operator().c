/*
 * XREFs of _lambda_208f168f51bfbb928939bf261202e971_::operator() @ 0x180132EB8
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_208f168f51bfbb928939bf261202e971___::Invoke @ 0x180133F70 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_208f168f51bfbb928939bf261202e97.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_208f168f51bfbb928939bf261202e971_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = *(_QWORD *)(*a1 + 208LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         5LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             v11,
             a1 + 1,
             a1[3]);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 248LL;
    }
    else
    {
      v7 = 246LL;
    }
  }
  else
  {
    v7 = 243LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
