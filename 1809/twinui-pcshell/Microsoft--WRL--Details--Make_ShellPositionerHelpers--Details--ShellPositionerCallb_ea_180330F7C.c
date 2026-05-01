/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x180330F7C
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x180331444 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ee995d2f67f50fc64c926f6b83f9afbf___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x180331BE0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afb.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf_____lambda_ee995d2f67f50fc64c926f6b83f9afbf___(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v5);
    *a1 = v6;
  }
  return a1;
}
