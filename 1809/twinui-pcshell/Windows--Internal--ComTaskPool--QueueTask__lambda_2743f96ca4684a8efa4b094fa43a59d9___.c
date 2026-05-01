/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x18006A96C
 * Callers:
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18006A898 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  unsigned int v10; // ebx

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v9[2] = *(_QWORD *)a4;
    v9[3] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    v8 = v9;
    *((_DWORD *)v9 + 8) = *(_DWORD *)(a4 + 16);
    *v9 = off_1803C81B8;
  }
  v10 = SHTaskPoolQueueTask(3LL, a2, a3, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return v10;
}
