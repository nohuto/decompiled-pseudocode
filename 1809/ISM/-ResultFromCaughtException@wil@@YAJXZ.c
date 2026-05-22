/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180108AC0
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$19 @ 0x180135C3B (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--catch$19.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$20 @ 0x180135C5E (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--catch$20.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = g_pfnResultFromCaughtExceptionInternal(0LL, 0LL, &v3), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xABE, (__int64)"wil", (const char *)0x8007023ELL);
    JUMPOUT(0x180108B09LL);
  }
  return result;
}
