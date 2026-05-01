/*
 * XREFs of ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x180037EE0
 * Callers:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180007100 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddRef(ExecutionModel::BaseResourceSet *this)
{
  unsigned __int32 v1; // ebx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 39);
  if ( v1 < 2 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return v1;
}
