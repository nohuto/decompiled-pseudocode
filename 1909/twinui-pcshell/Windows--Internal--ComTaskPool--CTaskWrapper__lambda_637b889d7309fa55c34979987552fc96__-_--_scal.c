/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&_::_scalar_deleting_destructor_ @ 0x18036B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x18007AFC8 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     _lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_ @ 0x18036B5F8 (_lambda_637b889d7309fa55c34979987552fc96_--__lambda_637b889d7309fa55c34979987552fc96_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96____::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_((__int64 *)(a1 + 16));
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
