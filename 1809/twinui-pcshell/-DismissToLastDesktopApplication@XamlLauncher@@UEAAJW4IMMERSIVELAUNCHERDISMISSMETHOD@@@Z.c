/*
 * XREFs of ?DismissToLastDesktopApplication@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18029A960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::DismissToLastDesktopApplication(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 224);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  return 0LL;
}
