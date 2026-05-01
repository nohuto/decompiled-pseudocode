/*
 * XREFs of ?CreateSwitchItem@SwitchItemFactory@@UEAAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x1803526E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x180360354 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall SwitchItemFactory::CreateSwitchItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int Instance; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = SwitchItem_CreateInstance(a2, a3, a4, a5);
  v6 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfactory.cpp",
      (const char *)(unsigned int)Instance);
  return v6;
}
