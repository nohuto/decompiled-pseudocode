/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___ @ 0x180245E0C
 * Callers:
 *     ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180252A28 (-OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_49c0b2fb711056d9762ca69f307c87f4___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  unsigned int v4; // r14d
  _OWORD *v5; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rsi
  _OWORD *v9; // rbx
  __int128 v10; // xmm0
  unsigned int v11; // ebx

  v4 = dword_1805C3BA8;
  v5 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v10 = *a4;
    v5 = v9;
    *(_QWORD *)v9 = off_180465B18;
    v8 = v9;
    v9[1] = v10;
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, v4);
  if ( v8 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  return v11;
}
