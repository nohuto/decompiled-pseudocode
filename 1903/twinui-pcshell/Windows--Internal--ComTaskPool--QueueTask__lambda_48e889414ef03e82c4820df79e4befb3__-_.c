/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_48e889414ef03e82c4820df79e4befb3__&_ @ 0x18013AF6C
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180013C38 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_48e889414ef03e82c4820df79e4befb3____(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _OWORD *v4; // rbx
  _OWORD *v7; // rax
  _OWORD *v8; // rbp
  _OWORD *v9; // rdi
  unsigned int v10; // edi

  v4 = 0LL;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v4 = v9;
    v8 = v9;
    v9[1] = *(_OWORD *)a4;
    v9[2] = *(_OWORD *)(a4 + 16);
    *((_QWORD *)v9 + 6) = *(_QWORD *)(a4 + 32);
    *(_QWORD *)v9 = off_180435620;
  }
  v10 = SHTaskPoolQueueTask(3LL, 64LL, a3, 0LL, v4, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
