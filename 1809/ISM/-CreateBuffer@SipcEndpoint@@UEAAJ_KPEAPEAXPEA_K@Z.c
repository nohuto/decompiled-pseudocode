/*
 * XREFs of ?CreateBuffer@SipcEndpoint@@UEAAJ_KPEAPEAXPEA_K@Z @ 0x1800A1730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SipcEndpoint::CreateBuffer(SipcEndpoint *this, __int64 a2, void **a3, unsigned __int64 *a4)
{
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, void **, unsigned __int64 *))(**((_QWORD **)this + 10) + 32LL))(
             *((_QWORD *)this + 10),
             a2,
             a3,
             a4);
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL);
  return 2147942487LL;
}
