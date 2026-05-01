/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f1269a7c57e44cc5260e529113cd150_____lambda_9f1269a7c57e44cc5260e529113cd150___ @ 0x1801D9504
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_5b1b722630a514c3e73ae779736a2814___ @ 0x1801D9914 (CreationThreadDispatcher--RunAsync__lambda_5b1b722630a514c3e73ae779736a2814___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f1269a7c57e44cc5260e529113cd150_____lambda_9f1269a7c57e44cc5260e529113cd150___(
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
    *(_QWORD *)v5 = off_18045D350;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
