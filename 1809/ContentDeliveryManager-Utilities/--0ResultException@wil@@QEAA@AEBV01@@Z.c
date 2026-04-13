/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x180002ABC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx

  exception::exception(this, a2);
  *(_QWORD *)this = &wil::ResultException::`vftable';
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)((char *)a2 + 56);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 88);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)a2 + 136);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a2 + 152);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v4 = (volatile signed __int32 *)*((_QWORD *)a2 + 21);
  v5 = *((_QWORD *)a2 + 22);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = v4;
    *((_QWORD *)this + 22) = v5;
    _InterlockedIncrement(v4);
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  v6 = (volatile signed __int32 *)*((_QWORD *)a2 + 23);
  v7 = *((_QWORD *)a2 + 24);
  if ( v6 )
  {
    *((_QWORD *)this + 23) = v6;
    *((_QWORD *)this + 24) = v7;
    _InterlockedIncrement(v6);
  }
  return this;
}
