/*
 * XREFs of _dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__ @ 0x180136D90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__()
{
  _BYTE *v0; // rcx
  const struct std::nothrow_t *v1; // rdx

  v0 = xmmword_1801937E8;
  if ( xmmword_1801937E8 )
  {
    v1 = (const struct std::nothrow_t *)((qword_1801937F8 - (_QWORD)xmmword_1801937E8) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v1 >= 0x1000 )
    {
      v0 = (_BYTE *)*((_QWORD *)xmmword_1801937E8 - 1);
      v1 = (const struct std::nothrow_t *)((char *)v1 + 39);
      if ( (unsigned __int64)((_BYTE *)xmmword_1801937E8 - v0 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v0, v1);
        __debugbreak();
      }
    }
    operator delete(v0, v1);
    qword_1801937F8 = 0LL;
    *(_OWORD *)&xmmword_1801937E8 = 0LL;
  }
}
