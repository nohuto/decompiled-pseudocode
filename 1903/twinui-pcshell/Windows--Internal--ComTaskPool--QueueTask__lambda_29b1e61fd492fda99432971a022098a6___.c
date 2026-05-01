/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_29b1e61fd492fda99432971a022098a6___ @ 0x180255938
 * Callers:
 *     ?CancelTabTransfer@TabTransferManager@@UEAAJUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180256F90 (-CancelTabTransfer@TabTransferManager@@UEAAJUShellTabId@Tabs@ComposableShell@Internal@Windows@@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_29b1e61fd492fda99432971a022098a6___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // edi

  v4 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    v8 = v9;
    v9[2] = *a4;
    v10 = a4[1];
    a4[1] = 0LL;
    v4 = v9;
    v9[3] = v10;
    *v9 = off_180447980;
  }
  v11 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v4, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v11;
}
