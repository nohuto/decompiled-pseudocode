/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x18039110C
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x1803914E4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecdeabd___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180080580.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x180391C94 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeab.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____lambda_01897aac42b7dc25bdb9079eaecdeabd___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
