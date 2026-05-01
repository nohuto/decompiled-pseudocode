/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_9334db2e415983af27a6cf1666dbaf4b_____lambda_9334db2e415983af27a6cf1666dbaf4b___ @ 0x180244CF4
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666dbaf4b___ @ 0x180245734 (ShellPositionerHelpers--PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666dbaf4b___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180069B3C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_9334db2e415983af27a6cf1666dbaf4b_____lambda_9334db2e415983af27a6cf1666dbaf4b___(
        __int64 *a1,
        __int64 a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // xmm0_8

  *a1 = 0LL;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v5[3] = *(_OWORD *)a2;
    v5[4] = *(_OWORD *)(a2 + 16);
    v7 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)v5 = off_1804664D8;
    *((_QWORD *)v5 + 1) = off_180455268;
    *((_QWORD *)v5 + 10) = v7;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
