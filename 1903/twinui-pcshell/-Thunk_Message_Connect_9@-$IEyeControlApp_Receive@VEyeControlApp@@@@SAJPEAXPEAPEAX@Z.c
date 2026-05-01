/*
 * XREFs of ?Thunk_Message_Connect_9@?$IEyeControlApp_Receive@VEyeControlApp@@@@SAJPEAXPEAPEAX@Z @ 0x180415F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IEyeControlApp_Receive<EyeControlApp>::Thunk_Message_Connect_9(__int64 a1, _QWORD *a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 104LL))(*(_QWORD *)(a1 + 8), *a2, a1 + 48);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56));
  return 0LL;
}
