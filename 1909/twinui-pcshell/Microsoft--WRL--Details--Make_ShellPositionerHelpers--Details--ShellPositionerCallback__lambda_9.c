/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454_____lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___ @ 0x18017B978
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___ @ 0x18017BA00 (ShellPositionerHelpers--PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180069B3C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454_____lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454___(
        __int64 *a1,
        _OWORD *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx
  volatile int *v6; // rdx
  __int128 v7; // xmm1

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v5[3] = *a2;
    v7 = a2[1];
    *(_QWORD *)v5 = off_180457628;
    *((_QWORD *)v5 + 1) = off_180455268;
    v5[4] = v7;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
