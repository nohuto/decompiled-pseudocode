/*
 * XREFs of ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18008C014
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180089E30 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_61c4b1ef6c1727f04a15d7ac99fb15e3__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const_____ptr64_::_Do_call @ 0x18008D890 (std--_Func_impl_no_alloc__lambda_61c4b1ef6c1727f04a15d7ac99fb15e3__void__MIT_POINTE_ea_18008D890.c)
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002AB70 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::OnPointerInputDown(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 384) + 40LL))(
    *(_QWORD *)(a1 + 384),
    a4,
    (unsigned int)a6,
    HIDWORD(a6));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(*(_QWORD *)(a1 + 392) + 64LL), a2);
  result = 1LL << gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x1C000) == 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64, unsigned __int64))(*(_QWORD *)a1 + 88LL))(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  return result;
}
