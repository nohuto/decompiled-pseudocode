/*
 * XREFs of _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd____::_1_::dtor$0 @ 0x1801CEFE3
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____ @ 0x1801D52C8 (Microsoft--WRL--ComPtr_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a453c259c1c666423c.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____(*(_QWORD *)(a2 + 80));
  }
  return result;
}
