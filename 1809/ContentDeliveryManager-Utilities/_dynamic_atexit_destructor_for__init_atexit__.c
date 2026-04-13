/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit__ @ 0x1800D1BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__init_atexit__()
{
  void *v0; // rcx
  void (*v1)(void); // rax
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_180184188;
    if ( (unsigned __int64)qword_180184188 >= 0xA )
      break;
    v0 = (void *)qword_180184440[qword_180184188++];
    v1 = (void (*)(void))DecodePointer(v0);
    if ( v1 )
      v1();
  }
  return result;
}
