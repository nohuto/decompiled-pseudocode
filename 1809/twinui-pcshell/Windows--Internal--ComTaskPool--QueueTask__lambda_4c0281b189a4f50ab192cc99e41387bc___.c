/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x180282A0C
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180283590 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___::CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc_____lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x1802826AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c0281b189a4f50ab192cc99e41387bc___--CTaskW.c)
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
  v6 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
