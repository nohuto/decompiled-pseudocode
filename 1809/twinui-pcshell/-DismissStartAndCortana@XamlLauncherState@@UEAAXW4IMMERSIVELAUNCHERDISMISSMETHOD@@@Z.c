/*
 * XREFs of ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180076D10
 * Callers:
 *     <none>
 * Callees:
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180076D90 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180076E60 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall XamlLauncherState::DismissStartAndCortana(__int64 a1, unsigned int a2)
{
  char result; // al
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = XamlLauncherState::IsStartVisible((XamlLauncherState *)a1);
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 && ((*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 24LL))(v5, &v6) < 0 || v6) )
    {
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 128LL))(*(_QWORD *)(a1 + 56));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 3LL);
      return XamlLauncherState::HideStartAndCortana(a1, a2);
    }
  }
  return result;
}
