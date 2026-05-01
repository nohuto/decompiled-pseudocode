/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x180086B98
 * Callers:
 *     Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800E9810 (Windows--Internal--Details--_dynamic_atexit_destructor_for___git__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  __int64 v1; // rcx

  v1 = qword_1805C27E8;
  if ( qword_1805C27E8 )
  {
    qword_1805C27E8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
