/*
 * XREFs of shell::TaskScheduler::AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802DE0E8
 * Callers:
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x1802DF2A0 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802DE428 (shell--TaskScheduler--CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___--CSimpleRu.c)
 */

__int64 __fastcall shell::TaskScheduler::AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___(__int64 a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // ebx

  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___(
           v4,
           a2);
  else
    v5 = 0LL;
  v6 = v5 == 0 ? 0x8007000E : 0;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int))(**(_QWORD **)(a1 + 16) + 24LL))(
           *(_QWORD *)(a1 + 16),
           v5,
           a1,
           a1,
           0x10000000);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v6;
}
