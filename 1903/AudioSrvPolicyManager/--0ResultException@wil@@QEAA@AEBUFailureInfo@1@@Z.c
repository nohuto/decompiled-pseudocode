/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180002208
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800024C0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001EDC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::FailureInfo *a2)
{
  wil::StoredFailureInfo *v3; // rcx
  wil::ResultException *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &wil::ResultException::`vftable';
  v3 = (wil::ResultException *)((char *)this + 24);
  *((_QWORD *)v3 + 18) = 0LL;
  *((_QWORD *)v3 + 19) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(v3, a2);
  *((_QWORD *)this + 23) = 0LL;
  result = this;
  *((_QWORD *)this + 24) = 0LL;
  return result;
}
