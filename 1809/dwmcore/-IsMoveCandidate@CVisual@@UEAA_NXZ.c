/*
 * XREFs of ?IsMoveCandidate@CVisual@@UEAA_NXZ @ 0x1800EA8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsMoveCandidate(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    v5 = *((_QWORD *)this + 9);
    if ( (v5 & 2) != 0 )
      v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v6 = *((_QWORD *)this + 9) & 1LL;
    if ( !v6
      && ((*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 37LL)
       || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(
            *((_QWORD *)this + 32),
            109LL)) )
    {
      return 1;
    }
  }
  return v2;
}
