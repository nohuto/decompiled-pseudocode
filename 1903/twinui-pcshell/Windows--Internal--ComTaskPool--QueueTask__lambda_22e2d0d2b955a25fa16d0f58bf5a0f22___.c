/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x18013B030
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18013BAD0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  unsigned int v9; // ebx

  v4 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v4 = v8;
    v8[2] = *a4;
    v7 = v8;
    *v8 = off_180435660;
  }
  v9 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v4, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v9;
}
