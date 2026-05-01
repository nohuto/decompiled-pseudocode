/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4670f1fe28d3ae663a52e8c2dbdc3392_____lambda_4670f1fe28d3ae663a52e8c2dbdc3392___ @ 0x180244C64
 * Callers:
 *     _anonymous_namespace_::ActivateFromShellItem @ 0x18024B248 (_anonymous_namespace_--ActivateFromShellItem.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4670f1fe28d3ae663a52e8c2dbdc3392_____lambda_4670f1fe28d3ae663a52e8c2dbdc3392___(
        __int64 *a1,
        __int64 a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rax

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[16] = *(_BYTE *)a2;
    *((_QWORD *)v5 + 3) = *(_QWORD *)(a2 + 8);
    *((_OWORD *)v5 + 2) = *(_OWORD *)(a2 + 16);
    v7 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = 0LL;
    *((_QWORD *)v5 + 6) = v7;
    *(_QWORD *)v5 = off_180465B90;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
