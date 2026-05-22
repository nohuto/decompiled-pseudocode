/*
 * XREFs of std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call @ 0x18002A930
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002AB70 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_97290a49cf3d7d8156e8fc9e8009460d__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        HWND **a2)
{
  __int64 v2; // rbx
  unsigned int PropW; // eax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  PropW = *(_DWORD *)(v2 + 96);
  if ( !PropW )
    PropW = (unsigned int)GetPropW(**a2, L"Microsoft.Windows.WindowFactory.ViewId");
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v2 + 64), PropW);
  v4 = *(_QWORD *)(v2 + 232);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, 4LL, 0LL);
}
