/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_da9ca9c5cbe2ebf305b53c7e4a21d9d4___ @ 0x18008CC14
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18000E55C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_da9ca9c5cbe2ebf305b53c7e4a21d9d4___(
        __int64 a1,
        _BYTE *a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  _BYTE *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx

  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v3);
    v4 = v5;
    v5[16] = *a2;
    *(_QWORD *)v5 = off_1803C9D30;
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
