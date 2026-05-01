/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_fbc78532fd0fd9b1042c65c7016d56c9___ @ 0x180094918
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1802D33C0 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_fbc78532fd0fd9b1042c65c7016d56c9___()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ebx

  v0 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v1 = 0LL;
  v2 = v0;
  if ( v0 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v0);
    v1 = v2;
    *v2 = off_1803CB698;
  }
  CurrentThreadId = GetCurrentThreadId();
  v4 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v1, 0LL);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
  return v4;
}
