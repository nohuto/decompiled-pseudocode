/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45_____lambda_d064192a2b953b8de01ade2ddfeadb45___ @ 0x180294D8C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___ @ 0x1802952A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45_____lambda_d064192a2b953b8de01ade2ddfeadb45___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *((_QWORD *)v5 + 2) = *a2;
    v6 = a2 + 1;
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 6 != (volatile signed __int32 *)(a2 + 1) )
    {
      *((_QWORD *)v5 + 3) = *v6;
      *v6 = 0LL;
    }
    *(_QWORD *)v5 = off_18044D258;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
