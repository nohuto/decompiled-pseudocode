/*
 * XREFs of ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x1800E4A10
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x1800E48AC (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMit::InitializeCoreMessagingIocp(void *a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)CMit::s_pMessageSession + 40LL))(
    CMit::s_pMessageSession,
    &v2);
  (*(void (__fastcall **)(__int64, void *, __int64 (__fastcall *)(void *, void *, void *), _QWORD))(*(_QWORD *)v2 + 64LL))(
    v2,
    a1,
    CMit::CompletionHandler,
    0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
