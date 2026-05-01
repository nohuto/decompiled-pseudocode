/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___ @ 0x1801D04B0
 * Callers:
 *     ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1801DFF5C (-OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  unsigned int v4; // ebp
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  _OWORD *v8; // rbx
  __int128 v9; // xmm0
  unsigned int v10; // ebx

  v4 = dword_1805111A4;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v9 = *a4;
    v7 = v8;
    *(_QWORD *)v8 = off_1803DDD18;
    v8[1] = v9;
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v4, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
