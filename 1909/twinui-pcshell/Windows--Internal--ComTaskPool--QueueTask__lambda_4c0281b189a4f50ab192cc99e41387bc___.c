/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x1802FB4E8
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc_____lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x1802FB194 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc_____lambda_4c0281b189a4f50ab192cc99e41387bc___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
