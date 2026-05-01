/*
 * XREFs of Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____ @ 0x1801D52C8
 * Callers:
 *     _Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd____::_1_::dtor$0 @ 0x1801CEFE3 (_Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a453c259c1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 */

int __fastcall Microsoft::WRL::ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____::_ComPtr_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v2) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
                    v2,
                    a2);
  }
  return v2;
}
