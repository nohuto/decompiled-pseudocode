/*
 * XREFs of ?IsEmpty@CMultitaskingViewElementBase@@UEAA_NXZ @ 0x1803846C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMultitaskingViewElementBase::IsEmpty(CMultitaskingViewElementBase *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi

  if ( !(*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 608LL))(this) )
    return 0;
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = &v2[*((_QWORD *)this + 3)];
  while ( v2 != v3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 408LL))(*v2) )
      return 0;
    ++v2;
  }
  return 1;
}
