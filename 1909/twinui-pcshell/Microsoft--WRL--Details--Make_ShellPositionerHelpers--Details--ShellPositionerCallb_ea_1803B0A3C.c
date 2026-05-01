/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x1803B0A3C
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x1803B0E14 (ShellPositionerHelpers--PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecdeabd___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x1803B15C4 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeab.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____lambda_01897aac42b7dc25bdb9079eaecdeabd___(
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
    v6 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___(
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
