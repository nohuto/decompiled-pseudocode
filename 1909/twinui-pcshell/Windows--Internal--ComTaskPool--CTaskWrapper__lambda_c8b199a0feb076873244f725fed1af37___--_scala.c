/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8b199a0feb076873244f725fed1af37___::_scalar_deleting_destructor_ @ 0x18007AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x18007AFC8 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8b199a0feb076873244f725fed1af37___::_scalar_deleting_destructor_(
        __int64 a1)
{
  void *v2; // rcx
  char v3; // dl

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  if ( (v3 & 1) != 0 )
    operator delete(v2);
  return a1;
}
