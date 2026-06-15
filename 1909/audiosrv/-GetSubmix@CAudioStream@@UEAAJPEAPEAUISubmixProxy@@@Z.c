/*
 * XREFs of ?GetSubmix@CAudioStream@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1800DA230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetSubmix(CAudioStream *this, struct ISubmixProxy **a2)
{
  struct ISubmixProxy *v2; // rcx

  v2 = (struct ISubmixProxy *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
