/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24847edcb696616e06d886fb92d2466e_____lambda_24847edcb696616e06d886fb92d2466e___ @ 0x1801F4CA8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24847edcb696616e06d886fb92d2466e___ @ 0x1801F5268 (Windows--Internal--ComTaskPool--QueueTask__lambda_24847edcb696616e06d886fb92d2466e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24847edcb696616e06d886fb92d2466e_____lambda_24847edcb696616e06d886fb92d2466e___(
        __int64 *a1,
        __int64 a2)
{
  char *v4; // rax
  char *v5; // rbx
  volatile int *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  *a1 = 0LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *((_QWORD *)v5 + 3) = v7;
    v8 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *((_QWORD *)v5 + 4) = v8;
    *(_OWORD *)(v5 + 40) = *(_OWORD *)(a2 + 24);
    *(_QWORD *)v5 = off_1803DF218;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
