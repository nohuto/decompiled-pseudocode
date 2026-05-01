/*
 * XREFs of ?GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z @ 0x1801D5A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1801D665C (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::GetMaximumComponentCount(
        CImmersiveShellCreationBehavior *this,
        unsigned int *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v3 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = 133;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
