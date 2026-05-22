/*
 * XREFs of ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180010354
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180010164 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800104BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18001E8E8 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::Create(struct ISystemInputRouter *a1, struct IRawInputClient **a2)
{
  InputStateManager *v4; // rax
  InputStateManager *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 || !a2 )
  {
    v9 = -2147024809;
    v10 = 199LL;
    goto LABEL_12;
  }
  v4 = (InputStateManager *)RefCountedObject::operator new(0xC0uLL);
  if ( v4 )
    v5 = InputStateManager::InputStateManager(v4, a1);
  else
    v5 = 0LL;
  if ( !v5 )
  {
    v9 = -2147024882;
    v10 = 206LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v9,
      -2);
    return v9;
  }
  v6 = InputStateManager::Initialize(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v6,
      -2);
    return v7;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
