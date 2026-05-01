/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c7541866efa4a354417130f6a4e71992____long_&___ptr64__lambda_c7541866efa4a354417130f6a4e71992___ @ 0x18006A178
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c7541866efa4a354417130f6a4e71992___ @ 0x18006A0C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_c7541866efa4a354417130f6a4e71992.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c7541866efa4a354417130f6a4e71992____long_____ptr64__lambda_c7541866efa4a354417130f6a4e71992___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rbx
  volatile int *v8; // rdx

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7[1] = *(_OWORD *)a3;
    *((_QWORD *)v7 + 4) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)v7 = off_1803C8168;
    *((_QWORD *)v7 + 5) = a2;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v8);
    *a1 = (__int64)v7;
  }
  return a1;
}
