/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x1802EA3F0
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802EA9F4 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___ @ 0x1802EA308 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___--CTaskW.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x1802EA5C0 (_lambda_f100e3a3eb499b75a430141e91e776cf_--_lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x1802EA7E8 (_lambda_f100e3a3eb499b75a430141e91e776cf_--__lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  _BYTE v8[24]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_(v8, a2);
  v9 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___(
           v4,
           (__int64)v8);
  v6 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v9);
  lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(a2);
  return v6;
}
