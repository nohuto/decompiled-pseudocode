/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_9334db2e415983af27a6cf1666dbaf4b_____lambda_9334db2e415983af27a6cf1666dbaf4b___ @ 0x180225668
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666dbaf4b___ @ 0x1802260A8 (ShellPositionerHelpers--PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666dbaf4b___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800679FC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180080580.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_9334db2e415983af27a6cf1666dbaf4b_____lambda_9334db2e415983af27a6cf1666dbaf4b___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx
  __int64 v6; // xmm0_8

  *a1 = 0LL;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v5[3] = *(_OWORD *)a2;
    v5[4] = *(_OWORD *)(a2 + 16);
    v6 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)v5 = off_180446280;
    *((_QWORD *)v5 + 1) = off_180434FB0;
    *((_QWORD *)v5 + 10) = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
