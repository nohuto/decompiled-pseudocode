/*
 * XREFs of ?GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z @ 0x180041F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetStreamGroup(CBaseStreamGroupProxy *this, struct IStreamGroup **a2)
{
  struct IStreamGroup *v4; // rcx
  __int64 result; // rax

  v4 = (struct IStreamGroup *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IStreamGroup *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IStreamGroup *)*((_QWORD *)this + 10);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
