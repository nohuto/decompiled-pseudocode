/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::_scalar_deleting_destructor_ @ 0x18036F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180078A58 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x18012D9F8 (_lambda_eb7347f801496dc1bb0f8fceb055189e_--__lambda_eb7347f801496dc1bb0f8fceb055189e_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_((__int64 *)(a1 + 16));
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
