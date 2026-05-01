/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_19af0c8ab1f68b63f4b99317d577a47b_____lambda_19af0c8ab1f68b63f4b99317d577a47b___ @ 0x1801D93E4
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_ab13a00bb5b75b8a31c661f236ba037d___ @ 0x1801D99D4 (CreationThreadDispatcher--RunAsync__lambda_ab13a00bb5b75b8a31c661f236ba037d___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_19af0c8ab1f68b63f4b99317d577a47b_____lambda_19af0c8ab1f68b63f4b99317d577a47b___(
        __int64 *a1,
        _OWORD *a2)
{
  char *v4; // rax
  char *v5; // rbx
  volatile int *v6; // rdx
  _QWORD *v7; // rcx

  *a1 = 0LL;
  v4 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = (volatile int *)(v5 + 32);
    v7 = a2 + 1;
    *((_OWORD *)v5 + 1) = *a2;
    *((_QWORD *)v5 + 4) = 0LL;
    if ( v5 + 32 != (char *)(a2 + 1) )
    {
      *(_QWORD *)v6 = *v7;
      *v7 = 0LL;
    }
    *(_QWORD *)v5 = off_18045D328;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
