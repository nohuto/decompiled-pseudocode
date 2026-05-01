/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256___::_scalar_deleting_destructor_ @ 0x18038EE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x18007AFC8 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     _lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_ @ 0x18038EDD4 (_lambda_4f7e66b8cf68c224e991614d9a353a90_--__lambda_4f7e66b8cf68c224e991614d9a353a90_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256___::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  lambda_4f7e66b8cf68c224e991614d9a353a90_::__lambda_4f7e66b8cf68c224e991614d9a353a90_((__int64 *)(a1 + 16));
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
