/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_090b60ecbc000c40c228d38e9a1199bb_____lambda_090b60ecbc000c40c228d38e9a1199bb___ @ 0x18023EA50
 * Callers:
 *     ?NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z @ 0x180242A74 (-NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_090b60ecbc000c40c228d38e9a1199bb_____lambda_090b60ecbc000c40c228d38e9a1199bb___(
        __int64 *a1,
        __int64 a2)
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
    v6 = (volatile int *)(v5 + 24);
    *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
    v7 = (_QWORD *)(a2 + 8);
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 24 != (char *)(a2 + 8) )
    {
      *(_QWORD *)v6 = *v7;
      *v7 = 0LL;
    }
    v5[32] = *(_BYTE *)(a2 + 16);
    *(_QWORD *)v5 = off_1803E5C30;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
