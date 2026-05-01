/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa4892268e0364aa795347ae8a8bf43d____long_&__lambda_aa4892268e0364aa795347ae8a8bf43d___ @ 0x1802AAD5C
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aa4892268e0364aa795347ae8a8bf43d___ @ 0x1802AB200 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_aa4892268e0364aa795347ae8a8bf43d.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa4892268e0364aa795347ae8a8bf43d____long____lambda_aa4892268e0364aa795347ae8a8bf43d___(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rbx

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7[1] = *(_OWORD *)a3;
    *((_QWORD *)v7 + 4) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)v7 = off_18044F7A0;
    *((_QWORD *)v7 + 5) = a2;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v7;
  }
  return a1;
}
