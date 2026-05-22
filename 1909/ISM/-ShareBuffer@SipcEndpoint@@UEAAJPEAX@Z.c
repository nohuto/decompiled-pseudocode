/*
 * XREFs of ?ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800D6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3D50 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcEndpoint::ShareBuffer(SipcEndpoint *this, void *a2)
{
  if ( *((_DWORD *)this + 33) == 2 )
    return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), a2);
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070005LL);
  return 2147942405LL;
}
