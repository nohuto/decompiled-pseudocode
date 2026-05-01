/*
 * XREFs of ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x1801D4DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x1801D4B18 (-CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NAEBUIMMERSIVE_SHELL_COMPONENT@@A.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1801D665C (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreatePerMonitorComponent(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  void ***v5; // rbp
  __int64 v6; // rbx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v13; // rdx
  int ComponentWithSxs; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (void ***)((char *)this - 32);
  v6 = a3;
  *a5 = 0LL;
  v9 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BE,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  if ( a2 )
  {
    if ( (unsigned int)v6 >= 9 )
    {
      v13 = 705LL;
LABEL_6:
      ComponentWithSxs = -2147483637;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)ComponentWithSxs);
      return (unsigned int)ComponentWithSxs;
    }
    ComponentWithSxs = CImmersiveShellCreationBehavior::CreateComponentWithSxs(
                         v5,
                         v10,
                         (const struct IMMERSIVE_SHELL_COMPONENT *)(&off_18058F1D0 + 3 * v6),
                         a4,
                         a5);
    if ( ComponentWithSxs < 0 )
    {
      v13 = 706LL;
      goto LABEL_7;
    }
  }
  else
  {
    if ( (unsigned int)v6 >= 2 )
    {
      v13 = 710LL;
      goto LABEL_6;
    }
    ComponentWithSxs = CImmersiveShellCreationBehavior::CreateComponentWithSxs(
                         v5,
                         3 * v6,
                         (const struct IMMERSIVE_SHELL_COMPONENT *)(&off_18058F1A0 + 3 * v6),
                         a4,
                         a5);
    if ( ComponentWithSxs < 0 )
    {
      v13 = 711LL;
      goto LABEL_7;
    }
  }
  return 0LL;
}
