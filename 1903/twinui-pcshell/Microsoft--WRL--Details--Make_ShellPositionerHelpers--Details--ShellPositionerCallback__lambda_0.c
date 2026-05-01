/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_07b9f11f8de93b612f17f3c1dda448fc_____lambda_07b9f11f8de93b612f17f3c1dda448fc___ @ 0x180067970
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc___ @ 0x180067874 (ShellPositionerHelpers--PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800679FC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180080580.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_07b9f11f8de93b612f17f3c1dda448fc_____lambda_07b9f11f8de93b612f17f3c1dda448fc___(
        _QWORD *a1,
        _OWORD *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx
  __int128 v6; // xmm1

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(v4);
    v5[3] = *a2;
    v6 = a2[1];
    *(_QWORD *)v5 = off_18042A590;
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5[4] = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
